/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65E3C
// Address: 0x00065E3C

//----- (00065E3C) --------------------------------------------------------
int __fastcall sub_65E3C(int a1, unsigned int a2, int a3)
{
  _DWORD *v6; // r7
  char *v7; // r4
  char *v8; // r9
  char *v9; // r5
  unsigned int v10; // r3
  char *v11; // r0
  char *v12; // r1
  __int64 v13; // r2
  char *v14; // r0
  unsigned int v15; // r4
  char *v17; // r0
  __int64 v18; // r2
  char *v19; // [sp+8h] [bp-24h]
  char *v20; // [sp+Ch] [bp-20h]
  char *v21; // [sp+Ch] [bp-20h]
  int v22; // [sp+10h] [bp-1Ch]
  char *v23; // [sp+14h] [bp-18h]
  char *v24; // [sp+1Ch] [bp-10h] BYREF
  char *v25; // [sp+20h] [bp-Ch]

  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 44) + 8))(*(_DWORD *)(a1 + 44));
  v6 = *(_DWORD **)(a1 + 44);
  v7 = (char *)v6[3];
  v8 = (char *)(v6 + 2);
  v9 = (char *)(v6 + 2);
  if ( !v7 )
    goto LABEL_28;
  do
  {
    v10 = *((_DWORD *)v7 + 4);
    if ( v10 < a2 )
      v7 = *((char **)v7 + 3);
    else
      v9 = v7;
    if ( v10 >= a2 )
      v7 = *((char **)v7 + 2);
  }
  while ( v7 );
  if ( v8 == v9 )
  {
LABEL_28:
    v7 = nullptr;
    v17 = (char *)sub_805CC(0x18u);
    *((_DWORD *)v17 + 4) = a2;
    *((_DWORD *)v17 + 5) = 0;
    v9 = v17;
    HIDWORD(v18) = v6[6];
    if ( !HIDWORD(v18) || (v14 = (char *)v6[5], HIDWORD(v18) = *((_DWORD *)v14 + 4), a2 <= HIDWORD(v18)) )
    {
      LODWORD(v18) = v9 + 16;
      sub_65DD8(&v24, (int)(v6 + 1), v18);
      v7 = v24;
      v14 = v25;
    }
    goto LABEL_15;
  }
  if ( *((_DWORD *)v9 + 4) > a2 )
  {
    v11 = (char *)sub_805CC(0x18u);
    *((_DWORD *)v11 + 4) = a2;
    *((_DWORD *)v11 + 5) = 0;
    HIDWORD(v13) = v11;
    v19 = v11 + 16;
    v12 = v11;
    LODWORD(v13) = *((_DWORD *)v9 + 4);
    if ( a2 < (unsigned int)v13 )
    {
      if ( (char *)v6[4] == v9 )
      {
LABEL_14:
        v14 = v9;
        v7 = v9;
        v9 = (char *)HIDWORD(v13);
LABEL_15:
        if ( v14 )
        {
          v15 = v7 != nullptr;
          if ( v8 == v14 )
            v15 |= 1u;
          if ( v15 )
            goto LABEL_19;
          a2 = *((_DWORD *)v9 + 4);
          LODWORD(v13) = *((_DWORD *)v14 + 4);
LABEL_33:
          v15 = a2 < (unsigned int)v13;
LABEL_19:
          sub_8132C((_DWORD *)v15, v9, v14, v6 + 2);
          ++v6[6];
          goto LABEL_20;
        }
        v12 = v9;
        v9 = v7;
        goto LABEL_27;
      }
      v20 = v11;
      v14 = (char *)sub_812CC(v9);
      HIDWORD(v13) = v20;
      if ( a2 > *((_DWORD *)v14 + 4) )
      {
        if ( !*((_DWORD *)v14 + 3) )
        {
          v9 = v20;
          goto LABEL_15;
        }
        goto LABEL_14;
      }
LABEL_31:
      LODWORD(v13) = v19;
      v9 = (char *)HIDWORD(v13);
      sub_65DD8(&v24, (int)(v6 + 1), v13);
      v7 = v24;
      v14 = v25;
      goto LABEL_15;
    }
    if ( a2 <= (unsigned int)v13 )
      goto LABEL_27;
    if ( (char *)v6[5] != v9 )
    {
      v21 = v11;
      v22 = *((_DWORD *)v9 + 4);
      v23 = v11;
      v7 = (char *)sub_81290((int)v9);
      HIDWORD(v13) = v21;
      if ( a2 >= *((_DWORD *)v7 + 4) )
        goto LABEL_31;
      LODWORD(v13) = v22;
      v12 = v23;
      if ( *((_DWORD *)v9 + 3) )
      {
        v9 = v21;
        v14 = v7;
        goto LABEL_15;
      }
    }
    if ( v9 )
    {
      v14 = v9;
      v9 = (char *)HIDWORD(v13);
      goto LABEL_33;
    }
LABEL_27:
    sub_80648(v12);
  }
LABEL_20:
  *((_DWORD *)v9 + 5) = a3;
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 44) + 12))(*(_DWORD *)(a1 + 44));
}
// 812CC: using guessed type int __fastcall sub_812CC(_DWORD);
