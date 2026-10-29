/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4FFF8
// Address: 0x0004FFF8

//----- (0004FFF8) --------------------------------------------------------
int __fastcall sub_4FFF8(__int64 *a1, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // r7
  unsigned __int8 *v3; // r10
  unsigned __int8 *v6; // r3
  int v7; // r2
  unsigned int v8; // r2
  bool v9; // cc
  int v10; // r6
  int v11; // r9
  _BOOL4 v12; // r9
  unsigned int v13; // r3
  _BOOL4 v14; // r2
  unsigned __int8 *v15; // r3
  unsigned __int8 *v16; // r6
  void *v17; // r1
  unsigned __int8 *v19; // r2
  int v20; // r3
  __int64 v21; // kr08_8
  int v22; // r6
  int *v23; // r2
  int v24; // r0
  int v25; // [sp+4h] [bp-14h]
  unsigned __int8 *v26; // [sp+8h] [bp-10h]
  _BOOL4 v27; // [sp+Ch] [bp-Ch]
  unsigned __int8 *v28; // [sp+Ch] [bp-Ch]
  void *src; // [sp+18h] [bp+0h] BYREF
  int v30; // [sp+1Ch] [bp+4h]
  int v31; // [sp+20h] [bp+8h]
  __int16 v32; // [sp+24h] [bp+Ch]
  int v33; // [sp+28h] [bp+10h]
  char v34; // [sp+2Ch] [bp+14h]
  int v35; // [sp+30h] [bp+18h]
  int v36; // [sp+34h] [bp+1Ch]
  int v37; // [sp+38h] [bp+20h]
  int v38; // [sp+3Ch] [bp+24h]

  v27 = 0;
  src = nullptr;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v6 = *((unsigned __int8 **)a1 + 1);
LABEL_2:
  while ( 1 )
  {
    v7 = *v6;
    if ( v7 != 32 )
      break;
LABEL_40:
    *((_DWORD *)a1 + 1) = ++v6;
  }
  while ( 1 )
  {
    if ( (unsigned int)(v7 - 9) <= 1 )
      goto LABEL_40;
    if ( !v7 )
    {
      if ( *((_DWORD *)a1 + 8) <= 1u )
        goto LABEL_47;
      sub_4B8A4(a1);
      v6 = *((unsigned __int8 **)a1 + 1);
      goto LABEL_2;
    }
    if ( v7 != 35 || v6[1] != 35 )
      goto LABEL_47;
    v8 = *((unsigned __int16 *)a2 + 6);
    v9 = v8 > 3;
    if ( v8 != 3 )
      v9 = v8 - 7 > 1;
    if ( v9 )
      v2 = nullptr;
    else
      v8 = *((_DWORD *)a1 + 6);
    v10 = *((_DWORD *)a1 + 2);
    if ( v9 )
      v3 = v2;
    else
      v26 = (unsigned __int8 *)v8;
    if ( !v9 )
    {
      v3 = *((unsigned __int8 **)a1 + 5);
      v2 = *((unsigned __int8 **)a1 + 4);
    }
    *((_DWORD *)a1 + 1) = v6 + 2;
    if ( v9 )
    {
      v26 = v2;
    }
    else
    {
      *((_DWORD *)a1 + 4) = 0;
      *((_DWORD *)a1 + 5) = 0;
      *((_DWORD *)a1 + 6) = 0;
    }
    v25 = v10;
    v11 = sub_4F6D0((unsigned __int8 **)a1, (int)&src, *((unsigned __int8 **)a1 + 8), nullptr);
    if ( v11 )
      goto LABEL_44;
    if ( v32 == 1 )
      goto LABEL_65;
    if ( v32 == 47 )
    {
      if ( *((_WORD *)a2 + 6) == 47 && (a1[81] & 4) != 0 )
      {
LABEL_42:
        while ( *((_DWORD *)a1 + 8) )
          sub_4B8A4(a1);
        *((_WORD *)a2 + 6) = 1;
LABEL_44:
        if ( !v2 )
          goto LABEL_49;
LABEL_45:
        sub_77F70(v2);
        goto LABEL_49;
      }
    }
    else if ( v32 == 59 && (a1[81] & 8) != 0 )
    {
      goto LABEL_42;
    }
    v12 = sub_4BB6C((int)a1, (int)&src, *((void **)a1 + 3));
    if ( !v12 )
      break;
    v13 = *((unsigned __int16 *)a2 + 6);
    v14 = v13 != 2;
    if ( v13 > 0x7F )
      v14 = 0;
    if ( v14 )
    {
      if ( (unsigned int)v3 <= 1 )
      {
        v11 = sub_70B98(29);
        if ( v2 )
          goto LABEL_45;
        goto LABEL_49;
      }
      v15 = *a2;
      *a2 = v2;
      a2[1] = v3;
      v2 = v15;
      a2[2] = v26;
    }
    if ( v30 )
    {
      v3 = (unsigned __int8 *)(v30 - 1);
      if ( v30 != 1 )
      {
        v16 = a2[1];
        if ( v16 )
        {
          v28 = v16 - 1;
          v26 = &v3[(_DWORD)(v16 - 1)];
        }
        else
        {
          v26 = (unsigned __int8 *)(v30 - 1);
          v28 = nullptr;
        }
        v17 = *a2;
        if ( v26 + 1 > a2[2] )
        {
          v17 = sub_78018((int)a2, v17, (unsigned int)(v26 + 1), 1u);
          *a2 = (unsigned __int8 *)v17;
        }
        a2[1] = v26 + 1;
        v26[(_DWORD)v17] = 0;
        memcpy(&v28[(_DWORD)*a2], src, (size_t)v3);
      }
    }
    *((_DWORD *)a1 + 2) = v25;
    if ( !v2 )
    {
      v6 = *((unsigned __int8 **)a1 + 1);
      v27 = v12;
      goto LABEL_2;
    }
    v27 = v12;
    sub_77F70(v2);
    v6 = *((unsigned __int8 **)a1 + 1);
    v7 = *v6;
    if ( v7 == 32 )
      goto LABEL_40;
  }
  *((_DWORD *)a1 + 1) = *((_DWORD *)a1 + 3);
  *((_DWORD *)a1 + 2) = v10;
LABEL_65:
  if ( v2 )
    sub_77F70(v2);
LABEL_47:
  if ( !v27 )
    goto LABEL_48;
  v19 = a2[1];
  if ( v19 )
  {
    v20 = **a2;
    if ( (v20 & 0x80) != 0 )
      goto LABEL_68;
LABEL_60:
    if ( (unsigned int)(v20 - 48) > 9 )
      goto LABEL_68;
LABEL_61:
    v21 = *a1;
    v22 = *((_DWORD *)a1 + 2);
    if ( v19 )
      v23 = (int *)*a2;
    else
      v23 = &dword_8DB98;
    *(_DWORD *)a1 = v23;
    *((_DWORD *)a1 + 1) = v23;
    v11 = sub_4F6D0((unsigned __int8 **)a1, (int)a2, nullptr, nullptr);
    *a1 = v21;
    *((_DWORD *)a1 + 2) = v22;
    goto LABEL_49;
  }
  v20 = (unsigned __int8)byte_D49E4;
  if ( (byte_D49E4 & 0x80) == 0 )
    goto LABEL_60;
LABEL_68:
  if ( v20 == 46 )
    goto LABEL_61;
  v24 = sub_4F5D0((int *)a1, 1, (int)a2);
  if ( v24 == -1 )
  {
    v11 = sub_70B7C();
  }
  else
  {
    if ( v24 != 1 )
    {
LABEL_48:
      v11 = 0;
      goto LABEL_49;
    }
    v11 = sub_5029C((int)a1, a2, nullptr);
  }
LABEL_49:
  if ( src )
  {
    v30 = 0;
    sub_77F70(src);
  }
  return v11;
}
// 5007A: variable 'v2' is possibly undefined
// 500EA: variable 'v3' is possibly undefined
// 500F8: variable 'v26' is possibly undefined
// 8DB98: using guessed type int dword_8DB98;
// D49E4: using guessed type char byte_D49E4;
