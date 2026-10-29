/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_887D0
// Address: 0x00000000000887D0

//----- (00000000000887D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_887D0(__int64 a1, __int64 a2, char a3, double a4, __m128 a5)
{
  int v5; // eax
  __int64 v6; // rax
  char v8[8]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  sub_88460(a1, a2, a3, a4, a5);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8[0] = 1;
        v9 = 0;
        v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
        if ( v5 != 37 )
          break;
        sub_88460(a1, (__int64)v8, 1, a4, a5);
        if ( !v9 )
          longjmp((struct __jmp_buf_tag *)(a1 + 344), 86);
        if ( *(_BYTE *)a2 | v8[0] )
          *(_QWORD *)(a2 + 8) %= (unsigned __int64)v9;
        else
          *(__int64 *)(a2 + 8) %= v9;
      }
      if ( (unsigned __int16)v5 != 47 )
        break;
      sub_88460(a1, (__int64)v8, 1, a4, a5);
      if ( !v9 )
        longjmp((struct __jmp_buf_tag *)(a1 + 344), 86);
      v6 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)a2 | v8[0] )
        *(_QWORD *)(a2 + 8) = v6 / (unsigned __int64)v9;
      else
        *(_QWORD *)(a2 + 8) = v6 / v9;
    }
    if ( (unsigned __int16)v5 != 42 )
      break;
    sub_88460(a1, (__int64)v8, 1, a4, a5);
    *(_QWORD *)(a2 + 8) *= v9;
  }
  return __readfsqword(0x28u);
}
