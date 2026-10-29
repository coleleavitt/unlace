/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5154C
// Address: 0x0005154C

//----- (0005154C) --------------------------------------------------------
int __fastcall sub_5154C(int a1, char *a2)
{
  unsigned int v4; // r10
  int *v5; // r0
  int v6; // r4
  unsigned __int8 *v7; // r3
  int *v8; // r0
  __int64 v9; // kr00_8
  int v10; // r2
  unsigned int v11; // r12
  unsigned int v12; // r3
  bool *v13; // r10
  const char *v14; // r2
  int v15; // r3
  int v16; // r3
  int v17; // r2
  void *v18; // r0
  int v19; // r2
  unsigned int *v21; // r3
  int v22; // r2
  unsigned __int8 *v23; // [sp+10h] [bp-8h] BYREF

  sub_4CBA8(&v23, a2);
  v4 = sub_7FDEC(v23, *((_DWORD *)v23 - 3), -955291385);
  v5 = sub_514E4((_DWORD *)(a1 + 616), v4 % *(_DWORD *)(a1 + 620), (const void **)&v23, v4);
  if ( !v5 )
  {
    v7 = v23;
    v8 = (int *)(v23 - 12);
    goto LABEL_13;
  }
  v6 = *v5;
  v7 = v23;
  v8 = (int *)(v23 - 12);
  if ( !v6 )
  {
LABEL_13:
    if ( v8 == std::string::_Rep::_S_empty_rep_storage )
      return sub_70B98(1509);
    v6 = 0;
LABEL_15:
    if ( &_pthread_key_create )
    {
      v21 = (unsigned int *)(v7 - 4);
      __dmb(0xBu);
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      __dmb(0xBu);
    }
    else
    {
      v22 = *((_DWORD *)v7 - 1);
      *((_DWORD *)v7 - 1) = v22 - 1;
    }
    if ( v22 <= 0 )
    {
      sub_809EC(v8);
      if ( v6 )
        goto LABEL_4;
    }
    else if ( v6 )
    {
      goto LABEL_4;
    }
    return sub_70B98(1509);
  }
  if ( v8 != std::string::_Rep::_S_empty_rep_storage )
    goto LABEL_15;
LABEL_4:
  v9 = *(_QWORD *)(v6 + 8);
  v10 = 16 * (HIDWORD(v9) + 0xFFFFFFF);
  v11 = *(_DWORD *)(v9 + v10 + 4);
  v12 = *(unsigned __int8 *)(v9 + v10 + 12);
  v13 = (bool *)*(unsigned __int8 *)(v9 + v10 + 13);
  if ( v11 > 1 )
    goto LABEL_5;
  if ( !*(_BYTE *)(v9 + v10 + 12) && !*(_BYTE *)(v9 + v10 + 13) )
  {
    sub_4DA40(a1, a2);
    goto LABEL_7;
  }
  if ( v11 )
LABEL_5:
    v14 = *(const char **)(v9 + v10);
  else
    v14 = (const char *)&dword_8DB98;
  v13 = sub_4DE34(a1, a2, v14, v12, (char)v13, nullptr);
LABEL_7:
  v15 = *(_DWORD *)(v6 + 12);
  if ( !v15 )
    goto LABEL_22;
  v16 = v15 - 1;
  v17 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 12) = v16;
  v18 = *(void **)(v17 + 16 * v16);
  v19 = v17 + 16 * v16;
  if ( v18 )
  {
    *(_DWORD *)(v19 + 4) = 0;
    sub_77F70(v18);
  }
  if ( !*(_DWORD *)(v6 + 12) )
LABEL_22:
    sub_4D1CC((int *)(a1 + 616), (int *)v6);
  return (int)v13;
}
// 8DB98: using guessed type int dword_8DB98;
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
