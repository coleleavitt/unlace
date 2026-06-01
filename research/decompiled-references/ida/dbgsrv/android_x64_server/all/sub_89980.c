/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89980
// Address: 0x0000000000089980

//----- (0000000000089980) ----------------------------------------------------
unsigned __int64 __fastcall sub_89980(__int64 a1, __int64 a2, char a3, double a4, __m128 a5)
{
  int v5; // eax
  _BOOL8 v6; // rcx
  char v8[8]; // [rsp+8h] [rbp-30h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  sub_88D20(a1, a2, a3, a4, a5);
  while ( 1 )
  {
    v8[0] = 1;
    v9 = 0;
    v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
    if ( v5 != 8509 )
      break;
    sub_88D20(a1, (__int64)v8, 1, a4, a5);
    v6 = *(_QWORD *)(a2 + 8) != v9;
LABEL_2:
    *(_QWORD *)(a2 + 8) = v6;
    *(_BYTE *)a2 = 0;
  }
  if ( (unsigned __int16)v5 == 15677 )
  {
    sub_88D20(a1, (__int64)v8, 1, a4, a5);
    v6 = *(_QWORD *)(a2 + 8) == v9;
    goto LABEL_2;
  }
  return __readfsqword(0x28u);
}
