/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003E040
// Address: 0x000000010003E040

//----- (000000010003E040) ----------------------------------------------------
__int64 __fastcall sub_10003E040(__int64 a1, _DWORD *a2, unsigned __int8 **a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // r15
  size_t v11; // r14
  void *v12; // rbx
  size_t v13; // r12
  char *v14; // rbx
  __int64 v15; // r14
  void *v16; // rax
  const char *v17; // rsi
  __int128 v19; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int64 v20; // [rsp+10h] [rbp-50h]
  void *__src[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v22; // [rsp+30h] [rbp-30h]

  *a2 = -1;
  *(_OWORD *)__src = 0;
  v22 = 0;
  v4 = sub_10003CD00(a1, (__int64 *)__src);
  v5 = v4;
  if ( !v4 )
  {
LABEL_25:
    LODWORD(a3) = 0;
    goto LABEL_26;
  }
  v6 = sub_100033F10(*(int *)(v4 + 28));
  v7 = sub_10003B410(v6, (__int64)__src);
  if ( v7 != -1 )
  {
    *a2 = v7;
    LOBYTE(a3) = 1;
    goto LABEL_26;
  }
  v8 = sub_10003DD00(a1, v5, (__int64)__src, a3);
  LOBYTE(a3) = 1;
  if ( !v8 )
  {
    set_qerrno();
    v9 = sub_100033F10(*(int *)(v5 + 28));
    v10 = v9;
    v19 = 0;
    v20 = 0;
    v11 = *(_QWORD *)(v9 + 40);
    if ( v11 )
    {
      v12 = qalloc_or_throw(*(_QWORD *)(v9 + 40));
      *(_QWORD *)&v19 = v12;
      v20 = v11;
      memcpy(v12, *(const void **)(v10 + 32), v11);
      *((_QWORD *)&v19 + 1) = v11;
    }
    else
    {
      v12 = nullptr;
    }
    v13 = 0;
    if ( v11 )
      v13 = v11 - 1;
    if ( v11 < v13 + 2 )
    {
      v12 = qvector_reserve((__int64)&v19, v12, v13 + 2, 1u);
      *(_QWORD *)&v19 = v12;
    }
    *((_QWORD *)&v19 + 1) = v13 + 2;
    *((_BYTE *)v12 + v13) = 46;
    *(_BYTE *)(v19 + v13 + 1) = 0;
    v14 = nullptr;
    if ( __src[1] )
      v14 = (char *)__src[1] - 1;
    if ( __src[1] > (void *)1 )
    {
      v15 = 0;
      if ( *((_QWORD *)&v19 + 1) )
        v15 = *((_QWORD *)&v19 + 1) - 1LL;
      v16 = (void *)v19;
      if ( v20 < (unsigned __int64)&v14[v15 + 1] )
      {
        v16 = qvector_reserve((__int64)&v19, (void *)v19, (unsigned __int64)&v14[v15 + 1], 1u);
        *(_QWORD *)&v19 = v16;
      }
      *((_QWORD *)&v19 + 1) = &v14[v15 + 1];
      v14[v15 + (_QWORD)v16] = 0;
      memcpy((void *)(v19 + v15), __src[0], (size_t)v14);
    }
    if ( *((_QWORD *)&v19 + 1) )
      v17 = (const char *)v19;
    else
      v17 = _s1;
    set_error_string(0, v17);
    if ( (_QWORD)v19 )
    {
      *((_QWORD *)&v19 + 1) = 0;
      qfree((void *)v19);
    }
    goto LABEL_25;
  }
LABEL_26:
  if ( __src[0] )
  {
    __src[1] = nullptr;
    qfree(__src[0]);
  }
  return (unsigned int)a3;
}
