/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88330
// Address: 0x0000000000088330

//----- (0000000000088330) ----------------------------------------------------
unsigned __int64 __fastcall sub_88330(__int64 a1, __int64 a2, char a3, double a4, __m128 a5)
{
  int v5; // eax
  char *v6; // r15
  __int64 v7; // rax
  char v8; // cl
  char v10[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+8h] [rbp-50h]
  char v12[8]; // [rsp+10h] [rbp-48h] BYREF
  _BOOL8 v13; // [rsp+18h] [rbp-40h]
  char v14[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]
  unsigned __int64 v16; // [rsp+30h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  v12[0] = 1;
  v13 = 0;
  sub_8A150(a1, (__int64)v12, a3, a4, a5);
  while ( 1 )
  {
    v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
    if ( v5 != 31868 )
      break;
    v14[0] = 1;
    v15 = 0;
    sub_8A150(a1, (__int64)v14, 1, a4, a5);
    v13 = (v13 | v15) != 0;
    v12[0] = 0;
  }
  if ( (unsigned __int16)v5 == 63 )
  {
    v14[0] = 1;
    v15 = 0;
    v6 = v14;
    sub_88330(a1, v14, 1);
    if ( *(_WORD *)(*(_QWORD *)(a1 + 432) + 24LL) != 58 )
      sub_881D0(a1);
    v10[0] = 1;
    v11 = 0;
    sub_88330(a1, v10, 1);
    if ( !v13 )
      v6 = v10;
    v7 = *((_QWORD *)v6 + 1);
    v8 = *v6;
  }
  else
  {
    v7 = v13;
    v8 = v12[0];
  }
  *(_BYTE *)a2 = v8;
  *(_QWORD *)(a2 + 8) = v7;
  return __readfsqword(0x28u);
}
