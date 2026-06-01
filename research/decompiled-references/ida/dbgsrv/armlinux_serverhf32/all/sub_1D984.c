/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1D984
// Address: 0x0001D984

//----- (0001D984) --------------------------------------------------------
int __fastcall sub_1D984(unsigned int *a1, void **a2, int a3, unsigned int a4, unsigned int a5)
{
  int v6; // r7
  unsigned int v7; // r4
  int v8; // r9
  int *v10; // r10
  int v11; // r3
  unsigned int v12; // r3
  unsigned int v13; // r1
  unsigned int *v14; // r4
  unsigned int *v15; // r7
  unsigned int *v16; // r5
  unsigned int v17; // r3
  _BYTE *v18; // r0
  unsigned int v19; // r10
  unsigned int *v20; // r11
  unsigned int *v21; // r3
  unsigned int v22; // r2
  int v23; // r0
  __int64 v24; // r2
  int v25; // r0
  _BOOL4 v26; // r0
  unsigned int *v27; // r5
  unsigned int v28; // r1
  unsigned int v29; // r2
  unsigned int v30; // r3
  unsigned int *v31; // r0
  char *v32; // [sp+Ch] [bp-38h]
  unsigned int *v33; // [sp+10h] [bp-34h]
  unsigned int v34; // [sp+14h] [bp-30h] BYREF
  int v35; // [sp+1Ch] [bp-28h] BYREF
  int v36; // [sp+20h] [bp-24h]
  unsigned int v37; // [sp+24h] [bp-20h]
  _DWORD v38[2]; // [sp+28h] [bp-1Ch] BYREF
  unsigned int v39; // [sp+30h] [bp-14h]
  unsigned int v40; // [sp+34h] [bp-10h]
  char v41; // [sp+38h] [bp-Ch] BYREF
  unsigned __int8 v42; // [sp+39h] [bp-Bh]

  v6 = a3;
  v34 = a4;
  v7 = a5;
  if ( a5 == 130 )
  {
    v8 = 1;
    v7 = 4;
  }
  else
  {
    v8 = 0;
  }
  if ( a3 != 4 )
    return 0;
  if ( !a2 || sub_546B0(a1, a2, v34, v7) >= 0 )
  {
    v10 = (int *)a1[63];
    if ( (v7 & 0x80000000) == 0 )
    {
      if ( v7 != 2 )
      {
        if ( v7 == 4 )
          v11 = v8;
        else
          v11 = 0;
        if ( !v11 )
        {
          if ( v7 && v7 <= a1[64] )
          {
            v13 = v34;
            v40 = 0;
            LOBYTE(v39) = v7;
            v37 = v34;
            if ( (unsigned __int8)v7 <= 7u )
            {
              v6 = v7;
              goto LABEL_25;
            }
            if ( !under_debugger )
              sub_78AFC(1796);
LABEL_16:
            __und(0xFFu);
          }
LABEL_15:
          if ( !under_debugger )
            sub_78AFC(30066);
          goto LABEL_16;
        }
        goto LABEL_54;
      }
LABEL_22:
      v7 = 2;
      v12 = a1[64];
      v6 = 2;
      v10 = &dword_8DDC8;
LABEL_23:
      if ( v7 > v12 )
        goto LABEL_15;
      v13 = v34;
      LOBYTE(v39) = v6;
      v40 = 0;
      v37 = v34;
      goto LABEL_25;
    }
    if ( (*(int (__fastcall **)(unsigned int *, unsigned int, char *, int, _DWORD))(*a1 + 144))(a1, v34, &v41, 2, 0) == 2 )
    {
      if ( v41 == 112 )
      {
        if ( v42 == 71 )
          goto LABEL_22;
      }
      else if ( !v41 && (v42 == 189 || v42 == 181) )
      {
        goto LABEL_22;
      }
      if ( v8 )
      {
LABEL_54:
        v7 = 4;
        v12 = a1[64];
        v10 = &dword_8DDCC;
        goto LABEL_23;
      }
      v12 = a1[64];
    }
    else
    {
      v12 = a1[64];
      if ( v8 )
      {
        v7 = 4;
        v10 = &dword_8DDCC;
        goto LABEL_23;
      }
    }
    if ( v12 <= 3 )
      goto LABEL_15;
    v13 = v34;
    v40 = 0;
    v7 = 4;
    LOBYTE(v39) = 4;
    v37 = v34;
LABEL_25:
    if ( !(*(int (__fastcall **)(unsigned int *, unsigned int, _DWORD *, unsigned int, _DWORD))(*a1 + 144))(
            a1,
            v13,
            v38,
            v7,
            0)
      || (*(int (__fastcall **)(unsigned int *, unsigned int, int *, unsigned int, _DWORD))(*a1 + 148))(
           a1,
           v34,
           v10,
           v7,
           0) != v6 )
    {
      return 0;
    }
    v14 = (unsigned int *)a1[68];
    v15 = a1 + 67;
    if ( !v14 )
      goto LABEL_66;
    v16 = a1 + 67;
    do
    {
      v17 = v14[4];
      if ( v17 < v34 )
        v14 = (unsigned int *)v14[3];
      else
        v16 = v14;
      if ( v17 >= v34 )
        v14 = (unsigned int *)v14[2];
    }
    while ( v14 );
    if ( v15 == v16 )
    {
LABEL_66:
      v31 = (unsigned int *)sub_805CC(0x28u);
      HIDWORD(v24) = v34;
      *((_BYTE *)v31 + 32) = (_BYTE)v14;
      v16 = v31;
      v31[9] = (unsigned int)v14;
      v31[4] = HIDWORD(v24);
      v31[5] = -1;
      if ( a1[71] && (LODWORD(v24) = a1[70], *(_DWORD *)(v24 + 16) < HIDWORD(v24)) )
      {
        v25 = 0;
      }
      else
      {
        LODWORD(v24) = v31 + 4;
        sub_1D920(&v35, (int)(a1 + 66), v24);
        v25 = v35;
        LODWORD(v24) = v36;
      }
      goto LABEL_42;
    }
    if ( v34 >= v16[4] )
    {
LABEL_48:
      v27 = v16 + 5;
      v28 = v38[0];
      v29 = v38[1];
      v30 = v39;
      *v27 = v37;
      v27[1] = v28;
      v27[2] = v29;
      v27[3] = v30;
      v27[4] = v40;
      sub_1A568(a1 + 270, &v34);
      return 1;
    }
    v18 = sub_805CC(0x28u);
    v19 = v34;
    v18[32] = 0;
    *((_DWORD *)v18 + 9) = 0;
    v20 = (unsigned int *)v18;
    *((_DWORD *)v18 + 4) = v19;
    *((_DWORD *)v18 + 5) = -1;
    v21 = (unsigned int *)v18;
    v22 = v16[4];
    v32 = v18 + 16;
    if ( v22 > v19 )
    {
      if ( v16 == (unsigned int *)a1[69] )
      {
LABEL_41:
        LODWORD(v24) = v16;
        v25 = (int)v16;
        v16 = v20;
LABEL_42:
        if ( (_DWORD)v24 )
        {
          if ( v25 )
            v26 = 1;
          else
            v26 = v15 == (unsigned int *)v24;
          if ( v26 )
            goto LABEL_47;
          goto LABEL_72;
        }
        v21 = v16;
        v16 = (unsigned int *)v25;
        goto LABEL_65;
      }
      v23 = sub_812CC(v16);
      HIDWORD(v24) = *(_DWORD *)(v23 + 16);
      LODWORD(v24) = v23;
      if ( HIDWORD(v24) < v19 )
      {
        if ( !*(_DWORD *)(v23 + 12) )
        {
          v16 = v20;
          v25 = 0;
          goto LABEL_42;
        }
        goto LABEL_41;
      }
LABEL_73:
      LODWORD(v24) = v32;
      v16 = v20;
      sub_1D920(&v35, (int)(a1 + 66), v24);
      v25 = v35;
      LODWORD(v24) = v36;
      goto LABEL_42;
    }
    if ( v22 >= v19 )
      goto LABEL_65;
    if ( v16 != (unsigned int *)a1[70] )
    {
      v33 = (unsigned int *)v18;
      v25 = sub_81290((int)v16);
      if ( *(_DWORD *)(v25 + 16) <= v19 )
        goto LABEL_73;
      v21 = v33;
      if ( v16[3] )
      {
        v16 = v20;
        LODWORD(v24) = v25;
        goto LABEL_42;
      }
    }
    if ( v16 )
    {
      LODWORD(v24) = v16;
      v16 = v20;
LABEL_72:
      v26 = v16[4] < *(_DWORD *)(v24 + 16);
LABEL_47:
      sub_8132C((_DWORD *)v26, v16, (_DWORD *)v24, a1 + 67);
      ++a1[71];
      goto LABEL_48;
    }
LABEL_65:
    sub_80648(v21);
    goto LABEL_48;
  }
  return -2;
}
// 1D9E8: masking with 0x1 was optimized away because r9.4 <= 0x1
// 1DC3C: variable 'v24' is possibly undefined
// 812CC: using guessed type int __fastcall sub_812CC(_DWORD);
// 8DDC8: using guessed type int dword_8DDC8;
// 8DDCC: using guessed type int dword_8DDCC;
// D5C00: using guessed type char under_debugger;
