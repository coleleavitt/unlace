/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140039610
// Address: 0x0000000140039610

//----- (0000000140039610) ----------------------------------------------------
__int64 __fastcall sub_140039610(_JBTYPE *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 result; // rax
  char v7; // cl
  __int64 v8; // r8
  char *v9; // rcx
  char v10[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  char v12[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  char v14[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]
  char v16[8]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v17; // [rsp+58h] [rbp-10h]

  v10[0] = 1;
  v11 = 0;
  sub_140038580(a1, (__int64)v10, a3);
  v5 = a1[39].Part[0];
  if ( *(_WORD *)(v5 + 24) == 31868 )
  {
    do
    {
      LOBYTE(v5) = 1;
      v12[0] = 1;
      v13 = 0;
      sub_140038580(a1, (__int64)v12, v5);
      if ( v11 || (result = 0, v13) )
        result = 1;
      v5 = a1[39].Part[0];
      v7 = 0;
      v11 = result;
      v10[0] = 0;
    }
    while ( *(_WORD *)(v5 + 24) == 31868 );
  }
  else
  {
    result = v11;
    v7 = v10[0];
  }
  if ( *(_WORD *)(v5 + 24) == 63 )
  {
    LOBYTE(v5) = 1;
    v14[0] = 1;
    v15 = 0;
    sub_140039610(a1, v14, v5);
    if ( *(_WORD *)(a1[39].Part[0] + 24) != 58 )
      sub_1400395F0(a1);
    LOBYTE(v8) = 1;
    v16[0] = 1;
    v17 = 0;
    sub_140039610(a1, v16, v8);
    v9 = v14;
    if ( !v11 )
      v9 = v16;
    *(_BYTE *)a2 = *v9;
    result = *((_QWORD *)v9 + 1);
  }
  else
  {
    *(_BYTE *)a2 = v7;
  }
  *(_QWORD *)(a2 + 8) = result;
  return result;
}
// 1400396F1: variable 'v8' is possibly undefined
