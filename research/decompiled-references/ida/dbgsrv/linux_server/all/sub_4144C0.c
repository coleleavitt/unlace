/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4144C0
// Address: 0x00000000004144C0

//----- (00000000004144C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_4144C0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // r12
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  char v19; // [rsp+0h] [rbp-38h]
  int v20; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-30h]

  v9 = a1 + 1216;
  v21 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 1232);
  if ( v10 != a1 + 1216 )
  {
    do
    {
      while ( !*(_BYTE *)(v10 + 64) )
      {
LABEL_6:
        v10 = std::_Rb_tree_increment(v10);
        if ( v10 == v9 )
          return v21 - __readfsqword(0x28u);
      }
      if ( !*(_BYTE *)(a1 + 1350) )
      {
        if ( *(_DWORD *)(v10 + 60) != 1 )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(30181);
          BUG();
        }
        ptrace(PTRACE_CONT, *(unsigned int *)(v10 + 40), 0, 0);
        v11 = sub_4235B0(a1, &v20, *(_DWORD *)(v10 + 40), -1);
        if ( *(_DWORD *)(v10 + 40) != v11 )
          *(double *)a2.m128_u64 = sub_410EA0(
                                     (int)"%d: failed to clean up pending SIGSTOP\n",
                                     v11,
                                     v12,
                                     v13,
                                     v14,
                                     v15,
                                     a2,
                                     a3,
                                     a4,
                                     a5,
                                     v16,
                                     v17,
                                     a8,
                                     a9,
                                     v19);
        goto LABEL_6;
      }
      *(_BYTE *)(v10 + 64) = 0;
      v10 = std::_Rb_tree_increment(v10);
    }
    while ( v10 != v9 );
  }
  return v21 - __readfsqword(0x28u);
}
// 41453E: variable 'v12' is possibly undefined
// 41453E: variable 'v13' is possibly undefined
// 41453E: variable 'v14' is possibly undefined
// 41453E: variable 'v15' is possibly undefined
// 41453E: variable 'v16' is possibly undefined
// 41453E: variable 'v17' is possibly undefined
// 41453E: variable 'v19' is possibly undefined
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 4C94E1: using guessed type char byte_4C94E1;
