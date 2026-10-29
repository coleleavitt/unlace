/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59CD0
// Address: 0x0000000000059CD0

//----- (0000000000059CD0) ----------------------------------------------------
unsigned __int64 __fastcall sub_59CD0(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  int v6; // eax
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 i; // r12
  int v10; // eax
  __int64 v11; // rax
  __int64 v13; // [rsp+8h] [rbp-70h]
  __int64 v14; // [rsp+18h] [rbp-60h]
  __int64 v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int64 v17[8]; // [rsp+38h] [rbp-40h] BYREF

  v17[1] = __readfsqword(0x28u);
  if ( !unpack_xleb128(v17, 64, 1, (char **)a1, *(_QWORD *)(a1 + 8)) )
    *(_BYTE *)(a1 + 20) = 0;
  v4 = v17[0];
  sub_5D330(a2, a3);
  if ( !*(_BYTE *)(a1 + 20) )
    return __readfsqword(0x28u);
  v15 = -(__int64)a3;
  v13 = 0;
  v14 = 0;
  v5 = 0;
  while ( 1 )
  {
LABEL_5:
    if ( !unpack_xleb128(v17, 64, 1, (char **)a1, *(_QWORD *)(a1 + 8)) )
      *(_BYTE *)(a1 + 20) = 0;
    v16 = v17[0];
    if ( !unpack_xleb128(v17, 64, 1, (char **)a1, *(_QWORD *)(a1 + 8)) )
      *(_BYTE *)(a1 + 20) = 0;
    LOBYTE(v6) = v17[0];
    *(_DWORD *)(a1 + 16) = v17[0];
    if ( (v6 & 2) == 0 )
    {
      v7 = 0;
      if ( (v6 & 1) == 0 )
        goto LABEL_18;
LABEL_15:
      if ( !unpack_xleb128(v17, 64, 1, (char **)a1, *(_QWORD *)(a1 + 8)) )
        *(_BYTE *)(a1 + 20) = 0;
      v14 = v17[0];
      v6 = *(_DWORD *)(a1 + 16);
      goto LABEL_18;
    }
    if ( !unpack_xleb128(v17, 64, 1, (char **)a1, *(_QWORD *)(a1 + 8)) )
      *(_BYTE *)(a1 + 20) = 0;
    v7 = v17[0];
    v6 = *(_DWORD *)(a1 + 16);
    if ( (v6 & 1) != 0 )
      goto LABEL_15;
LABEL_18:
    if ( (v6 & 0xC) != 0xC )
      break;
    if ( !unpack_xleb128(v17, 64, 1, (char **)a1, *(_QWORD *)(a1 + 8)) )
      *(_BYTE *)(a1 + 20) = 0;
    v5 += v17[0];
    if ( v16 > 0 )
      goto LABEL_27;
LABEL_22:
    if ( !*(_BYTE *)(a1 + 20) )
      return __readfsqword(0x28u);
  }
  if ( (v6 & 8) == 0 )
    v5 = 0;
  if ( v16 <= 0 )
    goto LABEL_22;
LABEL_27:
  v8 = 24 * v13 + 16;
  for ( i = 0; i < v16; ++i )
  {
    v10 = *(_DWORD *)(a1 + 16);
    if ( (v10 & 2) == 0 )
    {
      if ( !unpack_xleb128(v17, 64, 1, (char **)a1, *(_QWORD *)(a1 + 8)) )
        *(_BYTE *)(a1 + 20) = 0;
      v7 = v17[0];
      v10 = *(_DWORD *)(a1 + 16);
    }
    if ( (v10 & 1) == 0 )
    {
      if ( !unpack_xleb128(v17, 64, 1, (char **)a1, *(_QWORD *)(a1 + 8)) )
        *(_BYTE *)(a1 + 20) = 0;
      v14 = v17[0];
      v10 = *(_DWORD *)(a1 + 16);
    }
    if ( (v10 & 0xC) == 8 )
    {
      if ( !unpack_xleb128(v17, 64, 1, (char **)a1, *(_QWORD *)(a1 + 8)) )
        *(_BYTE *)(a1 + 20) = 0;
      v5 += v17[0];
    }
    if ( !*(_BYTE *)(a1 + 20) )
    {
      sub_5D330(a2, i + v13);
      return __readfsqword(0x28u);
    }
    if ( !(i + v15 + v13) )
      return __readfsqword(0x28u);
    v4 += v7;
    v11 = *a2;
    *(_QWORD *)(v11 + v8 - 16) = v4;
    *(_QWORD *)(v11 + v8 - 8) = v14;
    *(_QWORD *)(v11 + v8) = v5;
    v8 += 24;
  }
  v13 += i;
  if ( *(_BYTE *)(a1 + 20) )
    goto LABEL_5;
  return __readfsqword(0x28u);
}
