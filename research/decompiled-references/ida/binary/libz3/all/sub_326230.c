bool __fastcall sub_326230(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r14d
  bool result; // al
  int v6; // r10d
  unsigned int v7; // r13d
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // ebp
  unsigned int v12; // r15d
  unsigned int v13; // r8d
  unsigned int v14; // r12d
  int v15; // eax
  int v16; // r8d
  bool v17; // r9
  unsigned __int64 v18; // r11
  unsigned int v19; // ebx
  unsigned __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // r13d
  unsigned int v25; // esi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  char v28; // al
  unsigned int v29; // eax
  unsigned int v30; // edx
  char v31; // al
  unsigned int v32; // edx
  unsigned int v33; // eax
  int v34; // [rsp+4h] [rbp-64h]
  int v35; // [rsp+8h] [rbp-60h]
  int v36; // [rsp+Ch] [rbp-5Ch]
  int v37; // [rsp+10h] [rbp-58h]
  __int64 v38; // [rsp+10h] [rbp-58h]
  int v39; // [rsp+18h] [rbp-50h]
  int v40; // [rsp+18h] [rbp-50h]
  int v41; // [rsp+18h] [rbp-50h]
  int v42; // [rsp+1Ch] [rbp-4Ch]
  int v43; // [rsp+1Ch] [rbp-4Ch]
  int v44; // [rsp+1Ch] [rbp-4Ch]
  unsigned int v45; // [rsp+1Ch] [rbp-4Ch]
  bool v46; // [rsp+20h] [rbp-48h]
  int v47; // [rsp+20h] [rbp-48h]
  int v48; // [rsp+20h] [rbp-48h]
  int v49; // [rsp+24h] [rbp-44h]
  bool v50; // [rsp+2Bh] [rbp-3Dh]
  int v51; // [rsp+2Ch] [rbp-3Ch]

  v4 = a3;
  result = a3 <= 9 && a2 <= 9;
  if ( result )
  {
    v6 = *(_DWORD *)(a1 + 16);
    v7 = a2;
    if ( v6 )
    {
      v36 = 1;
      v35 = 2 * (v6 != 1);
    }
    else
    {
      v36 = 0;
      v35 = 2;
    }
    v9 = a2 >> 1;
    v10 = a3 >> 1;
    v11 = v9 + (v7 & 1);
    v12 = v10 + (v4 & 1);
    v13 = v12 + v11 - 1;
    if ( v13 > (int)v9 + (int)v10 )
      v13 = v9 + v10;
    v14 = (a4 - 1) >> 1;
    v15 = v13 * (3 * (v6 == 2) + 3);
    v16 = 2 * v13;
    v34 = v15;
    v17 = (a4 & 1) == 0;
    if ( (a4 & 1) == 0 )
      v14 = a4 >> 1;
    if ( v14 == 1 )
    {
      while ( 1 )
      {
        if ( (_DWORD)v9 == 1 && (_DWORD)v10 == 1 )
        {
LABEL_51:
          LODWORD(v18) = 2 - ((v6 == 0) - 1);
          if ( v6 == 1 )
            LODWORD(v18) = 1;
          goto LABEL_17;
        }
        if ( !(_DWORD)v9 || !(_DWORD)v10 )
          goto LABEL_16;
        if ( (_DWORD)v9 != 1 )
        {
          if ( (_DWORD)v10 == 1 )
            goto LABEL_51;
          v9 = 1;
        }
        if ( (unsigned int)v10 <= 1 )
          break;
        v10 = 1;
      }
LABEL_74:
      if ( v14 >= (int)v9 + (int)v10 )
      {
        v46 = (a4 & 1) == 0;
        v43 = v16;
        v40 = *(_DWORD *)(a1 + 16);
        v38 = a1;
        v27 = sub_3249B0(a1, v9, v10);
LABEL_76:
        a1 = v38;
        v6 = v40;
        v14 = v27;
        v16 = v43;
        v17 = v46;
        v18 = HIDWORD(v27);
        goto LABEL_17;
      }
      v50 = (a4 & 1) == 0;
      v49 = v16;
      v48 = *(_DWORD *)(a1 + 16);
      v45 = v10;
      v51 = v9 + v10;
      v31 = sub_326230(a1, v9, v10, v14);
      v32 = v45;
      v6 = v48;
      v16 = v49;
      v17 = v50;
      if ( !v31 )
      {
        v46 = v50;
        v43 = v49;
        v40 = v6;
        v38 = a1;
        v27 = sub_3254A0(a1, v9, v32, v14);
        goto LABEL_76;
      }
      v33 = (v45 * (unsigned int)v9) >> 1;
      if ( v48 == 1 )
      {
        LODWORD(v18) = 0;
      }
      else
      {
        LODWORD(v18) = v33 + v51;
        if ( !v48 )
          goto LABEL_17;
      }
      LODWORD(v18) = v33 + v18;
    }
    else
    {
LABEL_9:
      if ( (_DWORD)v9 == 1 && (_DWORD)v10 == 1 )
      {
        v9 = 1;
        goto LABEL_12;
      }
      while ( (_DWORD)v9 && (_DWORD)v10 )
      {
LABEL_12:
        if ( v14 >= (unsigned int)v9 )
        {
          if ( v14 >= (unsigned int)v10 )
            goto LABEL_74;
          v10 = v14;
          goto LABEL_9;
        }
        v9 = v14;
      }
LABEL_16:
      LODWORD(v18) = 0;
      v14 = 0;
    }
LABEL_17:
    if ( v17 )
      v19 = (a4 >> 1) + 1;
    else
      v19 = (a4 + 1) >> 1;
    if ( v19 == 1 )
    {
      while ( v11 != 1 || v12 != 1 )
      {
        if ( !v11 || !v12 )
          goto LABEL_27;
        if ( v11 != 1 )
        {
          if ( v12 == 1 )
            break;
          v11 = 1;
        }
        if ( v12 <= 1 )
        {
LABEL_71:
          if ( v19 >= v11 + v12 )
          {
            v42 = v16;
            v39 = v6;
            v37 = v18;
            v26 = sub_3249B0(a1, v11, v12);
LABEL_73:
            LODWORD(v18) = v37;
            v6 = v39;
            v19 = v26;
            v16 = v42;
            v20 = HIDWORD(v26);
            goto LABEL_28;
          }
          v47 = v16;
          v44 = v6;
          v41 = v18;
          v28 = sub_326230(a1, v11, v12, v19);
          LODWORD(v18) = v41;
          v6 = v44;
          v16 = v47;
          if ( !v28 )
          {
            v42 = v47;
            v39 = v6;
            v37 = v18;
            v26 = sub_3254A0(a1, v11, v12, v19);
            goto LABEL_73;
          }
          v29 = (v12 * v11) >> 1;
          if ( v44 == 1 )
          {
            v30 = 0;
          }
          else
          {
            v30 = v11 + v12 + v29;
            if ( !v44 )
            {
              v21 = v19 + v47 + v14 + 1;
              v22 = v30 + v41 + v34 + v36 + v35;
              v23 = v7 + v4;
              if ( v7 > v7 + v4 )
                v7 += v4;
              if ( v4 > v23 )
                v4 = v23;
              v24 = v23 + ((v4 * v7) >> 1);
              return v24 + 5 * v23 < v22 + 5 * v21;
            }
          }
          LODWORD(v20) = v29 + v30;
          goto LABEL_28;
        }
        v12 = 1;
      }
      if ( v6 == 1 )
      {
        LODWORD(v20) = 1;
        goto LABEL_28;
      }
      LODWORD(v20) = 3;
      if ( v6 )
        goto LABEL_28;
      v21 = v16 + v14 + 2;
      v22 = v18 + v34 + v36 + v35 + 2;
      v23 = v7 + v4;
      if ( v4 > v7 + v4 )
        v4 += v7;
      if ( v7 > v23 )
        v7 = v23;
      v24 = ((v7 * v4) >> 1) + v23;
    }
    else
    {
LABEL_20:
      if ( v11 == 1 && v12 == 1 )
      {
        v11 = 1;
        goto LABEL_23;
      }
      while ( v11 && v12 )
      {
LABEL_23:
        if ( v19 >= v11 )
        {
          if ( v19 >= v12 )
            goto LABEL_71;
          v12 = v19;
          goto LABEL_20;
        }
        v11 = v19;
      }
LABEL_27:
      LODWORD(v20) = 0;
      v19 = 0;
LABEL_28:
      v21 = v19 + v16 + v14 + 1;
      v22 = v20 + v18 + v34 + v36 + v35;
      v23 = v7 + v4;
      if ( v7 + v4 <= v7 )
        v7 += v4;
      if ( v23 <= v4 )
        v4 = v23;
      v24 = (v4 * v7) >> 1;
      if ( v6 != 1 )
      {
        v25 = v23 + v24;
        v24 += v23 + v24;
        if ( !v6 )
          v24 = v25;
      }
    }
    return v24 + 5 * v23 < v22 + 5 * v21;
  }
  return result;
}

