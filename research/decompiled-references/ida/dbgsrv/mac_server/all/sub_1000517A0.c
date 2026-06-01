/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000517A0
// Address: 0x00000001000517A0

//----- (00000001000517A0) ----------------------------------------------------
__int64 __fastcall sub_1000517A0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  void *v5; // r14
  void *v6; // r13
  int *v7; // rax
  int v8; // eax
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  bool v12; // cf
  unsigned __int64 v13; // rax
  const void *v14; // r12
  size_t v15; // rax
  size_t v16; // r15
  void *v17; // r13
  void *v18; // rdi
  unsigned __int64 v19; // rax
  void *__dst[2]; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+10h] [rbp-40h]

  *(_OWORD *)__dst = 0;
  v22 = 0;
  __dst[0] = qvector_reserve((__int64)__dst, nullptr, 9u, 1u);
  __dst[1] = (void *)9;
  *(_QWORD *)__dst[0] = *a2;
  *((_BYTE *)__dst[0] + 8) = 0;
  v5 = __dst[0];
  v6 = __dst[1];
  v7 = &dword_1000AC1CC;
  if ( __dst[1] )
    v7 = (int *)__dst[0];
  if ( *(_BYTE *)v7 == 47 )
  {
    v8 = atoi((const char *)__dst[0] + 1);
    if ( v8 > 0 )
    {
      v9 = (unsigned int)v8;
      v10 = a3[1];
      v11 = 0;
      v12 = v10 == 0;
      v13 = v10 - 1;
      if ( !v12 )
        v11 = v13;
      if ( v11 > v9 )
      {
        v14 = (const void *)(*a3 + v9);
        if ( v14 && (v15 = strlen((const char *)v14)) != 0 )
        {
          v16 = v15;
          v17 = (void *)(v15 + 1);
          if ( v22 < v15 + 1 )
          {
            v5 = qvector_reserve((__int64)__dst, v5, v15 + 1, 1u);
            __dst[0] = v5;
          }
          __dst[1] = v17;
          memmove(v5, v14, v16);
          *((_BYTE *)__dst[0] + v16) = 0;
          v5 = __dst[0];
          v6 = __dst[1];
        }
        else
        {
          v6 = nullptr;
        }
      }
    }
  }
  v18 = *(void **)a1;
  v19 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = v22;
  __dst[0] = v18;
  v22 = v19;
  if ( v18 )
  {
    __dst[1] = nullptr;
    qfree(v18);
  }
  return __stack_chk_guard;
}
// 1000AC1CC: using guessed type int dword_1000AC1CC;
