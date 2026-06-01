/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003B500
// Address: 0x000000010003B500

//----- (000000010003B500) ----------------------------------------------------
__int64 __fastcall sub_10003B500(__int64 a1, _DWORD *a2, const char **a3, unsigned __int8 **a4)
{
  unsigned __int64 v5; // r12
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  const char *v10; // rcx
  const char *v11; // rdx
  const char *v12; // rsi
  __int64 v13; // rax
  _BYTE *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rcx
  unsigned __int8 *v18; // r14
  unsigned __int8 *v19; // [rsp+8h] [rbp-58h]
  __int128 v20; // [rsp+10h] [rbp-50h] BYREF
  __int64 v21; // [rsp+20h] [rbp-40h]

  v5 = (int)a2[7];
  if ( a2[7] )
  {
    v19 = *a4;
    v7 = a2[7];
    while ( 1 )
    {
      v8 = sub_100033FB0(*(_QWORD *)(a1 + 8), v7);
      if ( *(_DWORD *)(v8 + 56) != -1 )
        break;
      v7 = *(_DWORD *)(v8 + 24);
      if ( !v7 )
        goto LABEL_5;
    }
    *a4 = nullptr;
    return sub_10003CF30(a1, a2, *(_DWORD *)(v8 + 56), (__int64)a3, v19, 1);
  }
  else
  {
LABEL_5:
    v20 = 0;
    v21 = 0;
    v9 = sub_100033FB0(*(_QWORD *)(a1 + 8), v5);
    v10 = _s1;
    v11 = _s1;
    if ( *(_QWORD *)(v9 + 40) )
      v11 = *(const char **)(v9 + 32);
    if ( a3[1] )
      v10 = *a3;
    sub_100002D00((__int64)&v20, "%s.%s", v11, v10);
    if ( *((_QWORD *)&v20 + 1) )
      v12 = (const char *)v20;
    else
      v12 = _s1;
    set_error_string(0, v12);
    set_qerrno();
    v13 = *(_QWORD *)(a1 + 32);
    if ( !v13 )
    {
      v14 = *(_BYTE **)(a1 + 24);
      if ( *(_QWORD *)(a1 + 40) )
      {
        v15 = 0;
      }
      else
      {
        v14 = qvector_reserve(a1 + 24, *(void **)(a1 + 24), 1u, 0x20u);
        *(_QWORD *)(a1 + 24) = v14;
        v15 = *(_QWORD *)(a1 + 32);
      }
      v17 = 32 * v15;
      v14[v17] = 2;
      *(_OWORD *)&v14[v17 + 8] = 0;
      *(_QWORD *)&v14[v17 + 24] = 0;
      v13 = *(_QWORD *)(a1 + 32) + 1LL;
      *(_QWORD *)(a1 + 32) = v13;
    }
    v18 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v13 - 32);
    sub_10003BC00(v18);
    sub_10003B860(a1, (__int64)v18);
    if ( (_QWORD)v20 )
    {
      *((_QWORD *)&v20 + 1) = 0;
      qfree((void *)v20);
    }
    return 0;
  }
}
