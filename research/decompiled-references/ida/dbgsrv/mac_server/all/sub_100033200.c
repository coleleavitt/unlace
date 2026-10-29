/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100033200
// Address: 0x0000000100033200

//----- (0000000100033200) ----------------------------------------------------
__int64 __fastcall sub_100033200(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 *v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r15
  const char *v8; // rsi
  const char *v9; // rdi
  size_t v10; // r13
  __int64 v11; // r12
  size_t v12; // rbx
  bool v13; // cf
  size_t v14; // r13
  void *v16; // rax
  void *__src; // [rsp+8h] [rbp-68h]
  _QWORD *v18; // [rsp+10h] [rbp-60h]
  int v19; // [rsp+1Ch] [rbp-54h]
  int v20; // [rsp+20h] [rbp-50h] BYREF
  __int128 v21; // [rsp+28h] [rbp-48h]
  size_t v22; // [rsp+38h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 96);
  v5 = (__int64 *)(a1 + 88);
  if ( !v4 )
  {
    v10 = *(_QWORD *)(a3 + 8);
LABEL_14:
    v20 = a2;
    v21 = 0;
    v22 = 0;
    if ( v10 )
    {
      *(_QWORD *)&v21 = qalloc_or_throw(v10);
      v22 = v10;
      memcpy((void *)v21, *(const void **)a3, v10);
      *((_QWORD *)&v21 + 1) = v10;
    }
    sub_1000333A0((__int64)v5, (unsigned __int64)&v20);
    if ( (_QWORD)v21 )
    {
      *((_QWORD *)&v21 + 1) = 0;
      qfree((void *)v21);
    }
    return __stack_chk_guard;
  }
  v19 = a2;
  v6 = *v5;
  v7 = 32 * v4;
  v8 = _s1;
  v9 = _s1;
  if ( *(_QWORD *)(*v5 + v7 - 16) )
    v9 = *(const char **)(*v5 + v7 - 24);
  v18 = (_QWORD *)(*v5 + v7 - 24);
  v10 = *(_QWORD *)(a3 + 8);
  __src = *(void **)a3;
  if ( v10 )
    v8 = *(const char **)a3;
  if ( strcmp(v9, v8) )
  {
    v11 = v7 + v6;
    a2 = v19;
    if ( *(_DWORD *)(v11 - 32) == v19 )
    {
      if ( v18 != (_QWORD *)a3 )
      {
        v12 = 0;
        v13 = v10 == 0;
        v14 = v10 - 1;
        if ( !v13 )
          v12 = v14;
        if ( v13 || v14 == 0 )
        {
          *(_QWORD *)(v11 - 16) = 0;
        }
        else
        {
          v16 = *(void **)(v11 - 24);
          if ( *(_QWORD *)(v11 - 8) <= v12 )
          {
            v16 = qvector_reserve((__int64)v18, *(void **)(v11 - 24), v12 + 1, 1u);
            *v18 = v16;
          }
          *(_QWORD *)(v11 - 16) = v12 + 1;
          memmove(v16, __src, v12);
          *(_BYTE *)(*(_QWORD *)(v11 - 24) + v12) = 0;
        }
      }
      return __stack_chk_guard;
    }
    goto LABEL_14;
  }
  return __stack_chk_guard;
}
