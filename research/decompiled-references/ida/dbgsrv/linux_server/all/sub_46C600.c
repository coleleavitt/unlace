/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C600
// Address: 0x000000000046C600

//----- (000000000046C600) ----------------------------------------------------
unsigned __int64 __fastcall sub_46C600(char **a1, _QWORD *a2)
{
  __int64 v2; // rbp
  size_t v3; // rax
  __int64 v4; // r12
  __int64 v5; // rbp
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  __int64 v11; // [rsp+8h] [rbp-60h]
  _BYTE v12[5]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _BYTE v13[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v14[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = a2[1];
  v14[0] = __readfsqword(0x28u);
  v3 = sub_47FB50(v12, (unsigned __int64)v13, (unsigned int)v2) - v12;
  if ( v3 )
    sub_46B720(a1, v12, v3);
  if ( (int)v2 > 0 )
  {
    v4 = 0;
    v11 = 32LL * (unsigned int)v2;
    do
    {
      v5 = v4 + *a2;
      v6 = sub_47FC90(v12, (unsigned __int64)v14, *(_QWORD *)v5 + 1LL) - v12;
      if ( v6 )
        sub_46B720(a1, v12, v6);
      v7 = sub_47FC90(v12, (unsigned __int64)v14, *(_QWORD *)(v5 + 8) + 1LL) - v12;
      if ( v7 )
        sub_46B720(a1, v12, v7);
      v8 = sub_47FC90(v12, (unsigned __int64)v14, *(_QWORD *)(v5 + 16) + 1LL) - v12;
      if ( v8 )
        sub_46B720(a1, v12, v8);
      v9 = sub_47FB50(v12, (unsigned __int64)v13, *(unsigned __int8 *)(v5 + 24)) - v12;
      if ( v9 )
        sub_46B720(a1, v12, v9);
      v4 += 32;
    }
    while ( v11 != v4 );
  }
  return v14[0] - __readfsqword(0x28u);
}
