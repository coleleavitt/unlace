/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E801
// Address: 0x0046E801

//----- (0046E801) --------------------------------------------------------
int __cdecl sub_46E801(unsigned __int64 a1, int a2, unsigned __int8 a3, char a4, _BYTE *a5)
{
  int v5; // ebx
  unsigned __int64 v6; // rdi
  bool v7; // zf
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // kr08_8
  __int64 v18; // kr10_8
  __int64 v19; // rax
  char v20; // cl
  char v21; // al
  int v22; // eax
  unsigned __int8 v23; // cl
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // kr18_8
  __int64 v27; // rax
  char v28; // cl
  char v29; // al
  int v30; // eax
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  _DWORD *v34; // eax
  int *v35; // eax
  __int64 v37; // [esp+Ch] [ebp-24h]
  int v38; // [esp+18h] [ebp-18h]
  int v39; // [esp+18h] [ebp-18h]
  unsigned __int8 v40; // [esp+1Ch] [ebp-14h]
  int v41; // [esp+24h] [ebp-Ch]
  unsigned __int8 v42; // [esp+24h] [ebp-Ch]
  int v43; // [esp+28h] [ebp-8h]
  bool v44; // [esp+2Dh] [ebp-3h]
  char v45; // [esp+2Dh] [ebp-3h]
  char v46; // [esp+2Eh] [ebp-2h]
  char v47; // [esp+2Eh] [ebp-2h]
  char v48; // [esp+2Fh] [ebp-1h]
  char v49; // [esp+2Fh] [ebp-1h]
  bool v50; // [esp+2Fh] [ebp-1h]

  v5 = 0;
  v6 = a1;
  if ( HIDWORD(a1) )
  {
    v7 = !_BitScanReverse((unsigned int *)&v10, HIDWORD(a1));
    if ( v7 )
      v11 = 0;
    else
      v11 = v10 + 1;
    v9 = v11 + 32;
  }
  else
  {
    v7 = !_BitScanReverse((unsigned int *)&v8, a1);
    if ( v7 )
      v9 = 0;
    else
      v9 = v8 + 1;
  }
  v48 = a5[4];
  v12 = (v48 == 0 ? 24 : 53) - v9;
  v41 = v12;
  v43 = a2 - v12;
  v38 = v48 == 0 ? 127 : 1023;
  if ( a2 - v12 > v38 )
    goto LABEL_60;
  if ( a2 - v12 < (v48 == 0 ? -126 : -1022) )
  {
    v13 = v38 + a2 - 1;
    v14 = -v38;
    v39 = v13;
    v43 = v14;
    if ( v13 < 0 )
    {
      v15 = -v13;
      v40 = v15;
      if ( v15 < 0x40 )
      {
        LODWORD(v16) = sub_4634C0(1, v15 - 1);
        v17 = v16;
        v18 = v16 - 1;
        LODWORD(v19) = sub_4634C0(1, v40);
        v44 = (a1 & v19) != 0;
        if ( (v17 & a1) != 0 )
        {
          v20 = 1;
          v49 = 1;
        }
        else
        {
          v20 = 0;
          v49 = 0;
        }
        if ( !a4 || (a1 & v18) != 0 )
        {
          v21 = 1;
          v46 = 1;
        }
        else
        {
          v21 = 0;
          v46 = 0;
        }
        if ( v20 || v21 )
        {
          v22 = sub_47B587();
          if ( v22 )
          {
            if ( v22 == 256 )
            {
              LOBYTE(v5) = a3;
            }
            else if ( v22 == 512 )
            {
              LOBYTE(v5) = a3 ^ 1;
            }
          }
          else if ( v49 && (v46 || v44) )
          {
            LOBYTE(v5) = 1;
          }
        }
        v6 = sub_463600(a1, v40) + (unsigned __int8)v5;
        if ( v6 )
        {
          if ( v6 > sub_470A99(a5) )
          {
            v5 = a2 - v39 - v41 - 1;
            goto LABEL_66;
          }
          goto LABEL_65;
        }
      }
      sub_46ECEA(v5, v6, a3, a5);
      return 2;
    }
    v23 = v13;
    goto LABEL_64;
  }
  if ( v12 < 0 )
  {
    v24 = v9 - (a5[4] == 0 ? 24 : 53);
    v42 = v9 - (a5[4] == 0 ? 24 : 53);
    if ( v24 < 0x40 )
    {
      LODWORD(v25) = sub_4634C0(1, v24 - 1);
      v37 = v25;
      v26 = v25 - 1;
      LODWORD(v27) = sub_4634C0(1, v42);
      v50 = (a1 & v27) != 0;
      if ( (v37 & a1) != 0 )
      {
        v28 = 1;
        v45 = 1;
      }
      else
      {
        v28 = 0;
        v45 = 0;
      }
      if ( !a4 || (a1 & v26) != 0 )
      {
        v29 = 1;
        v47 = 1;
      }
      else
      {
        v29 = 0;
        v47 = 0;
      }
      if ( v28 || v29 )
      {
        v30 = sub_47B587();
        if ( v30 )
        {
          if ( v30 == 256 )
          {
            LOBYTE(v5) = a3;
          }
          else if ( v30 == 512 )
          {
            LOBYTE(v5) = a3 ^ 1;
          }
        }
        else if ( v45 && (v47 || v50) )
        {
          LOBYTE(v5) = 1;
        }
      }
      v6 = (unsigned __int8)v5 + sub_463600(a1, v42);
    }
    else
    {
      v6 = 0;
    }
    if ( v6 <= sub_471044(a5) )
      goto LABEL_65;
    v6 >>= 1;
    v5 = v43 + 1;
    if ( v43 + 1 <= (a5[4] == 0 ? 127 : 1023) )
      goto LABEL_66;
LABEL_60:
    sub_46E7C1(v5, v6, a3, a5);
    return 3;
  }
  if ( v12 > 0 )
  {
    v23 = v12;
LABEL_64:
    LODWORD(v32) = sub_4634C0(a1, v23);
    v6 = v32;
  }
LABEL_65:
  v5 = v43;
LABEL_66:
  v33 = sub_470A99(a5) & v6;
  if ( a5[4] )
  {
    v34 = (_DWORD *)sub_46E777(a5, v5, v33);
    return sub_46D2C6(a3, v5, v33, SHIDWORD(v33), v34);
  }
  else
  {
    v35 = (int *)sub_46E79C(a5, v5, v33);
    return sub_46D296(a3, v5, v33, SHIDWORD(v33), v35);
  }
}
// 46E8D1: variable 'v16' is possibly undefined
// 46E8EA: variable 'v19' is possibly undefined
// 46E9FE: variable 'v25' is possibly undefined
// 46EA1A: variable 'v27' is possibly undefined
// 46EB11: variable 'v32' is possibly undefined
