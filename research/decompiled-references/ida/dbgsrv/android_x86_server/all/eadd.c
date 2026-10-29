/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eadd
// Address: 0x000A4A50

//----- (000A4A50) --------------------------------------------------------
int __cdecl eadd(_WORD *a1, _WORD *a2, _WORD *a3, char a4)
{
  __int16 v4; // cx
  int v5; // ecx
  __int16 v6; // ax
  __int16 v7; // si
  int v8; // eax
  bool v9; // cc
  int v10; // ecx
  unsigned int v11; // edi
  char v12; // al
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // dx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edi
  unsigned int v19; // edx
  unsigned int v20; // edi
  unsigned int v21; // edx
  unsigned int v22; // edi
  int v23; // ecx
  unsigned int v24; // ecx
  char v25; // dl
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // ecx
  unsigned int v31; // edx
  int v32; // edx
  __int16 v33; // cx
  int v35; // [esp+Ch] [ebp-60h]
  __int64 v36; // [esp+10h] [ebp-5Ch]
  __int64 v37; // [esp+10h] [ebp-5Ch]
  __int64 v38; // [esp+18h] [ebp-54h]
  __int64 v39; // [esp+18h] [ebp-54h]
  int v40; // [esp+20h] [ebp-4Ch]
  int v41; // [esp+20h] [ebp-4Ch]
  __int64 v42; // [esp+28h] [ebp-44h] BYREF
  __int64 v43; // [esp+30h] [ebp-3Ch]
  int v44; // [esp+38h] [ebp-34h]
  unsigned __int16 v45; // [esp+3Ch] [ebp-30h]
  __int64 v46; // [esp+40h] [ebp-2Ch] BYREF
  __int64 v47; // [esp+48h] [ebp-24h]
  int v48; // [esp+50h] [ebp-1Ch]
  unsigned __int16 v49; // [esp+54h] [ebp-18h]
  unsigned int v50; // [esp+58h] [ebp-14h]

  v50 = __readgsdword(0x14u);
  v4 = a1[7];
  LOWORD(v46) = v4 >> 15;
  v5 = v4 & 0x7FFF;
  *(_DWORD *)((char *)&v46 + 2) = (unsigned __int16)v5;
  HIWORD(v46) = a1[6];
  LOWORD(v47) = a1[5];
  WORD1(v47) = a1[4];
  WORD2(v47) = a1[3];
  HIWORD(v47) = a1[2];
  LOWORD(v48) = a1[1];
  HIWORD(v48) = *a1;
  v49 = 0;
  v6 = a2[7];
  v7 = v6 >> 15;
  LOWORD(v42) = v6 >> 15;
  v8 = v6 & 0x7FFF;
  *(_DWORD *)((char *)&v42 + 2) = (unsigned __int16)v8;
  HIWORD(v42) = a2[6];
  LOWORD(v43) = a2[5];
  WORD1(v43) = a2[4];
  WORD2(v43) = a2[3];
  HIWORD(v43) = a2[2];
  LOWORD(v44) = a2[1];
  HIWORD(v44) = *a2;
  v45 = 0;
  if ( a4 )
    LOWORD(v42) = ~v7;
  v9 = v5 <= v8;
  v10 = v5 - v8;
  if ( v9 )
  {
    v11 = v8;
  }
  else
  {
    v40 = v44;
    v38 = v43;
    v36 = v42;
    v42 = v46;
    v43 = v47;
    v44 = v48;
    v45 = 0;
    v46 = v36;
    v47 = v38;
    v48 = v40;
    v49 = 0;
    LOWORD(v8) = WORD1(v42);
    v11 = WORD1(v42);
    v10 = -v10;
  }
  if ( v10 )
  {
    if ( v10 >= -113 )
    {
      v12 = eshift((int)&v46, v10) != 1;
      goto LABEL_24;
    }
LABEL_29:
    v33 = v8 | 0x8000;
    if ( !(_WORD)v42 )
      v33 = v8;
    a3[7] = v33;
    a3[6] = HIWORD(v42);
    a3[5] = v43;
    a3[4] = WORD1(v43);
    a3[3] = WORD2(v43);
    a3[2] = HIWORD(v43);
    a3[1] = v44;
    *a3 = HIWORD(v44);
    return 1;
  }
  v13 = WORD2(v46);
  v14 = WORD2(v42);
  if ( WORD2(v46) == WORD2(v42) )
  {
    v13 = HIWORD(v46);
    v14 = HIWORD(v42);
    if ( HIWORD(v46) == HIWORD(v42) )
    {
      v13 = v47;
      v14 = v43;
      if ( (_WORD)v47 == (_WORD)v43 )
      {
        v13 = WORD1(v47);
        v14 = WORD1(v43);
        if ( WORD1(v47) == WORD1(v43) )
        {
          v13 = WORD2(v47);
          v14 = WORD2(v43);
          if ( WORD2(v47) == WORD2(v43) )
          {
            v13 = HIWORD(v47);
            v14 = HIWORD(v43);
            if ( HIWORD(v47) == HIWORD(v43) )
            {
              v13 = v48;
              v14 = v44;
              if ( (_WORD)v48 == (_WORD)v44 )
              {
                v13 = HIWORD(v48);
                v14 = HIWORD(v44);
                if ( HIWORD(v48) == HIWORD(v44) )
                {
                  if ( (_WORD)v46 != (_WORD)v42 || !(_WORD)v8 )
                  {
                    *((_DWORD *)a3 + 1) = 0;
                    *(_DWORD *)a3 = 0;
                    *((_DWORD *)a3 + 3) = 0;
                    *((_DWORD *)a3 + 2) = 0;
                    return 1;
                  }
                  if ( v11 >= 0x7FFE )
                    goto LABEL_33;
                  LOWORD(v8) = v11 + 1;
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v13 > v14 )
  {
    v41 = v44;
    v39 = v43;
    v37 = v42;
    v42 = v46;
    v43 = v47;
    v44 = v48;
    v45 = 0;
    v46 = v37;
    v47 = v39;
    v48 = v41;
    v49 = 0;
  }
  v12 = 0;
LABEL_24:
  v35 = v11;
  if ( (_WORD)v46 == (_WORD)v42 )
  {
    v15 = v49 + v45;
    v45 += v49;
    v16 = HIWORD(v15) + HIWORD(v48) + HIWORD(v44);
    HIWORD(v44) = v16;
    v17 = (HIWORD(v16) & 1) + (unsigned __int16)v48 + (unsigned __int16)v44;
    LOWORD(v44) = v17;
    v18 = (HIWORD(v17) & 1) + HIWORD(v47) + HIWORD(v43);
    HIWORD(v43) += (BYTE2(v17) & 1) + HIWORD(v47);
    v19 = (HIWORD(v18) & 1) + WORD2(v47) + WORD2(v43);
    WORD2(v43) += (BYTE2(v18) & 1) + WORD2(v47);
    v20 = (HIWORD(v19) & 1) + WORD1(v47) + WORD1(v43);
    WORD1(v43) += (BYTE2(v19) & 1) + WORD1(v47);
    v21 = (HIWORD(v20) & 1) + (unsigned __int16)v47 + (unsigned __int16)v43;
    LOWORD(v43) = (BYTE2(v20) & 1) + v47 + v43;
    v22 = (HIWORD(v21) & 1) + HIWORD(v46) + HIWORD(v42);
    HIWORD(v42) += (BYTE2(v21) & 1) + HIWORD(v46);
    v23 = WORD2(v42);
    LOWORD(v23) = WORD2(v46) + WORD2(v42);
    v24 = (HIWORD(v22) & 1) + v23;
    v25 = 0;
  }
  else
  {
    v26 = v45 - v49;
    v45 -= v49;
    v27 = HIWORD(v44) - HIWORD(v48) - (HIWORD(v26) & 1);
    HIWORD(v44) = HIWORD(v44) - HIWORD(v48) - (BYTE2(v26) & 1);
    v28 = (unsigned __int16)v44 - (unsigned __int16)v48 - (HIWORD(v27) & 1);
    LOWORD(v44) = v44 - v48 - (BYTE2(v27) & 1);
    v29 = HIWORD(v43) - HIWORD(v47) - (HIWORD(v28) & 1);
    HIWORD(v43) = HIWORD(v43) - HIWORD(v47) - (BYTE2(v28) & 1);
    v30 = WORD2(v43) - WORD2(v47) - (HIWORD(v29) & 1);
    WORD2(v43) = WORD2(v43) - WORD2(v47) - (BYTE2(v29) & 1);
    v31 = WORD1(v43) - WORD1(v47) - (HIWORD(v30) & 1);
    WORD1(v43) = WORD1(v43) - WORD1(v47) - (BYTE2(v30) & 1);
    v24 = (unsigned __int16)v43 - (unsigned __int16)v47 - (HIWORD(v31) & 1);
    LOWORD(v43) = v43 - v47 - (BYTE2(v31) & 1);
    v32 = HIWORD(v42) - HIWORD(v46) - (HIWORD(v24) & 1);
    HIWORD(v42) = HIWORD(v42) - HIWORD(v46) - (BYTE2(v24) & 1);
    LOWORD(v24) = WORD2(v42) - WORD2(v46) - (BYTE2(v32) & 1);
    v25 = 1;
  }
  WORD2(v42) = v24;
  if ( emdnorm((int)&v42, v12, v25, v35, 112) )
  {
    LOWORD(v8) = WORD1(v42);
    goto LABEL_29;
  }
LABEL_33:
  *((_DWORD *)a3 + 1) = 0;
  *(_DWORD *)a3 = 0;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 2) = 0;
  return 2;
}
