/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41CFB0
// Address: 0x000000000041CFB0

//----- (000000000041CFB0) ----------------------------------------------------
__int64 __fastcall sub_41CFB0(
        __int64 a1,
        int a2,
        char a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // r13
  __int64 v12; // rbx
  unsigned int v15; // r15d
  int v16; // edx
  int v17; // eax
  int v18; // eax
  enum __ptrace_request v19; // edi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  int v26; // eax
  char v27; // [rsp+0h] [rbp-38h]

  v11 = a1 + 1216;
  v12 = *(_QWORD *)(a1 + 1232);
  if ( v12 != a1 + 1216 )
  {
    v15 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (*(_DWORD *)(v12 + 32) == a2) == a3 )
          goto LABEL_6;
        v16 = *(_DWORD *)(v12 + 60);
        v17 = *(_DWORD *)(v12 + 44);
        if ( !v16 && !*(_BYTE *)(v12 + 64) && !*(_BYTE *)(v12 + 65) )
        {
          if ( v17 )
          {
            if ( !byte_4C94E1 )
              sub_481AC0(30188);
            goto LABEL_36;
          }
          goto LABEL_6;
        }
        if ( v17 > 0 )
        {
          v18 = v17 - 1;
          *(_DWORD *)(v12 + 44) = v18;
          if ( v18 )
            goto LABEL_6;
        }
        if ( *(int *)(v12 + 48) > 0 || *(_BYTE *)(v12 + 65) )
          goto LABEL_6;
        if ( *(_BYTE *)(a1 + 1412) )
        {
          if ( *(_BYTE *)(a1 + 1349) || (unsigned int)(v16 - 1) > 1 )
            goto LABEL_6;
        }
        else if ( v16 != 2 || *(_BYTE *)(a1 + 1349) )
        {
          goto LABEL_6;
        }
        v19 = PTRACE_CONT;
        if ( *(_BYTE *)(v12 + 56) )
        {
          *(_BYTE *)(a1 + 1351) = 1;
          v19 = PTRACE_SINGLESTEP;
        }
        if ( ptrace(
               v19,
               *(unsigned int *)(v12 + 40),
               0,
               *(int *)(v12 + 52),
               *(double *)a4.m128_u64,
               *(double *)a5.m128_u64,
               *(double *)a6.m128_u64,
               *(double *)a7.m128_u64,
               a8,
               a9,
               *(double *)a10.m128_u64,
               *(double *)a11.m128_u64) )
        {
          break;
        }
LABEL_27:
        v26 = *(_DWORD *)(v12 + 60);
        if ( v26 == 2 )
          goto LABEL_20;
        if ( v26 != 1 )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(30178);
LABEL_36:
          BUG();
        }
        *(_DWORD *)(v12 + 60) = 0;
LABEL_6:
        v12 = std::_Rb_tree_increment(v12);
        if ( v12 == v11 )
          return v15;
      }
      if ( *(_DWORD *)(v12 + 60) != 2 )
      {
        if ( (unsigned __int8)sub_40DEE0(*(_DWORD *)(v12 + 40)) != 90 )
        {
          v15 = 0;
          goto LABEL_6;
        }
        sub_41C480(a1, *(_DWORD *)(v12 + 40), 2, v21, v22, v23, a4, a5, a6, a7, v24, v25, a10, a11, v27);
        goto LABEL_27;
      }
LABEL_20:
      *(_DWORD *)(v12 + 60) = 3;
      v12 = std::_Rb_tree_increment(v12);
      if ( v12 == v11 )
        return v15;
    }
  }
  return 1;
}
// 41D07E: variable 'a8' is possibly undefined
// 41D07E: variable 'a9' is possibly undefined
// 41D0F7: variable 'v21' is possibly undefined
// 41D0F7: variable 'v22' is possibly undefined
// 41D0F7: variable 'v23' is possibly undefined
// 41D0F7: variable 'v24' is possibly undefined
// 41D0F7: variable 'v25' is possibly undefined
// 41D0F7: variable 'v27' is possibly undefined
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 4C94E1: using guessed type char byte_4C94E1;
