/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_434A30
// Address: 0x00434A30

//----- (00434A30) --------------------------------------------------------
int __userpurge sub_434A30@<eax>(int a1@<ecx>, void **a2@<ebx>, __m128i a3@<xmm0>, char a4, char a5)
{
  int v5; // edi
  char v6; // dl
  _BYTE *v7; // eax
  char *v8; // eax
  unsigned __int8 v9; // dl
  int v10; // esi
  unsigned int v11; // esi
  int v12; // edi
  char *v13; // eax
  char v14; // al
  int v15; // esi
  int v16; // eax
  char *v17; // ecx
  __int8 *v18; // eax
  const CHAR *v19; // eax
  _BYTE *v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // esi
  unsigned int v23; // eax
  int v24; // esi
  const char *v25; // ecx
  const char *v26; // eax
  int v27; // eax
  void **v28; // esi
  unsigned int v29; // ecx
  int v30; // edx
  int v31; // ecx
  LPVOID v32; // eax
  char *v34; // [esp-4h] [ebp-178h]
  void *v35; // [esp+Ch] [ebp-168h] BYREF
  int v36; // [esp+10h] [ebp-164h]
  int v37; // [esp+14h] [ebp-160h]
  __int16 v38; // [esp+18h] [ebp-15Ch]
  int v39; // [esp+1Ch] [ebp-158h]
  char v40; // [esp+20h] [ebp-154h]
  __int128 v41; // [esp+24h] [ebp-150h]
  int v42; // [esp+34h] [ebp-140h]
  _BYTE *v43; // [esp+38h] [ebp-13Ch] BYREF
  unsigned int v44; // [esp+3Ch] [ebp-138h]
  int v45; // [esp+40h] [ebp-134h]
  int v46; // [esp+44h] [ebp-130h]
  int v47; // [esp+48h] [ebp-12Ch]
  char *v48; // [esp+4Ch] [ebp-128h] BYREF
  unsigned int v49; // [esp+50h] [ebp-124h]
  unsigned int v50; // [esp+54h] [ebp-120h]
  LPCCH lpMultiByteStr; // [esp+58h] [ebp-11Ch]
  char v52; // [esp+5Fh] [ebp-115h]
  __int8 v53[260]; // [esp+60h] [ebp-114h] BYREF
  int v54; // [esp+170h] [ebp-4h]

  v5 = a1;
  v42 = a1;
  v6 = *(_BYTE *)(a1 + 280);
  LOBYTE(v47) = a5;
  if ( v6 != 32 && v6 != 9 && v6 != 10 && v6 != 13 && v6 != 11 && v6 != 12 )
  {
    v7 = (_BYTE *)(*(_DWORD *)(a1 + 4) - 1);
    *(_DWORD *)(a1 + 4) = v7;
    *v7 = v6;
  }
  v46 = 0;
  v48 = nullptr;
  v49 = 0;
  v50 = 0;
  v8 = *(char **)(a1 + 4);
  v54 = 0;
  v9 = *v8;
  LOBYTE(lpMultiByteStr) = v9;
  if ( v9 != 34 )
  {
    if ( v9 != 60 )
    {
      v35 = nullptr;
      a3 = 0;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v41 = 0;
      LOBYTE(v54) = 1;
      v10 = sub_431F50(a1, a2, (__m128i)0LL, (int)&v35, nullptr);
      v46 = v10;
      if ( v10 )
      {
LABEL_29:
        LOBYTE(v54) = 2;
      }
      else
      {
        while ( 2 )
        {
          if ( v38 != 1 )
          {
            v52 = 0;
            switch ( v38 )
            {
              case 2:
              case 6:
                goto LABEL_14;
              case 4:
                v52 = 34;
                sub_4042E0((int)&v48, 34);
LABEL_14:
                v11 = v36 != 0 ? v36 - 1 : 0;
                if ( v11 )
                {
                  v12 = v49 != 0 ? v49 - 1 : 0;
                  if ( v11 + v12 + 1 <= v50 )
                  {
                    v13 = v48;
                  }
                  else
                  {
                    v13 = (char *)sub_453B00((int)&v48, v48, v11 + v12 + 1, 1u);
                    v48 = v13;
                  }
                  v49 = v12 + v11 + 1;
                  v13[v12 + v11] = 0;
                  sub_464310((unsigned int)&v48[v12], (unsigned int)v35, v11);
                  v5 = v42;
                }
                v14 = v52;
                goto LABEL_20;
              case 46:
              case 47:
              case 58:
              case 60:
              case 62:
                v14 = v38;
                v52 = v38;
LABEL_20:
                if ( v14 )
                {
                  v15 = v49 != 0 ? v49 - 1 : 0;
                  v16 = v15 + 2;
                  if ( v15 + 2 <= v50 )
                  {
                    v17 = v48;
                  }
                  else
                  {
                    v17 = (char *)sub_453B00((int)&v48, v48, v15 + 2, 1u);
                    v16 = v15 + 2;
                    v48 = v17;
                  }
                  v49 = v16;
                  v17[v15] = v52;
                  v48[v15 + 1] = 0;
                }
                LOBYTE(v54) = 5;
                if ( v35 )
                {
                  v36 = 0;
                  sub_453A20(v35);
                }
                v35 = nullptr;
                a3 = 0;
                v36 = 0;
                v37 = 0;
                v38 = 0;
                v39 = 0;
                v40 = 0;
                v41 = 0;
                LOBYTE(v54) = 1;
                v10 = sub_431F50(v5, a2, (__m128i)0LL, (int)&v35, nullptr);
                v46 = v10;
                if ( v10 )
                  goto LABEL_29;
                continue;
              default:
                LOBYTE(v54) = 4;
                if ( !v35 )
                  goto LABEL_38;
                v36 = 0;
                sub_453A20(v35);
                v10 = 30;
                goto LABEL_69;
            }
          }
          break;
        }
        LOBYTE(v54) = 3;
      }
      if ( v35 )
      {
        v36 = 0;
        sub_453A20(v35);
      }
      LOBYTE(v54) = 0;
      if ( v10 )
        goto LABEL_69;
      v8 = v48;
      *(_DWORD *)(v5 + 4) = v48;
      if ( !v8 )
        goto LABEL_38;
      v9 = *v8;
      LOBYTE(lpMultiByteStr) = v9;
      if ( v9 == 34 )
        goto LABEL_37;
      if ( v9 != 60 )
      {
LABEL_38:
        v10 = 30;
        goto LABEL_69;
      }
    }
    v9 = 62;
    LOBYTE(lpMultiByteStr) = 62;
  }
LABEL_37:
  *(_DWORD *)(v5 + 4) = v8 + 1;
  v18 = sub_464F10(v8 + 1, v9);
  if ( !v18 )
    goto LABEL_38;
  *v18 = 0;
  if ( *(_DWORD *)(v5 + 144) >= 0x80u )
  {
    v10 = 31;
    goto LABEL_69;
  }
  v19 = (const CHAR *)sub_433FC0(v5, a3, v53, 260, *(unsigned __int8 **)(v5 + 4), (char)lpMultiByteStr, v47);
  v20 = nullptr;
  lpMultiByteStr = v19;
  v21 = 0;
  v43 = nullptr;
  v44 = 0;
  v45 = 0;
  LOBYTE(v54) = 6;
  if ( v19 )
  {
    v22 = strlen(v19);
    v23 = v22 + 1;
    if ( v22 != -1 )
    {
      v20 = sub_453B00((int)&v43, nullptr, v22 + 1, 1u);
      v23 = v22 + 1;
      v43 = v20;
    }
    v44 = v23;
    sub_464310((unsigned int)v20, (unsigned int)lpMultiByteStr, v22);
    v43[v22] = 0;
    v20 = v43;
    v21 = v44;
  }
  v24 = *(_DWORD *)(v5 + 128);
  v47 = v24 + 12 * *(_DWORD *)(v5 + 132);
  if ( v24 != v47 )
  {
    do
    {
      v25 = MultiByteStr;
      if ( *(_DWORD *)(v24 + 4) )
        v25 = *(const char **)v24;
      v26 = MultiByteStr;
      if ( v21 )
        v26 = v43;
      v27 = strcmp(v26, v25);
      if ( v27 )
        v27 = v27 < 0 ? -1 : 1;
      if ( !v27 )
        break;
      v21 = v44;
      v24 += 12;
    }
    while ( v24 != v47 );
    v5 = v42;
    v20 = v43;
  }
  LOBYTE(v54) = 7;
  if ( v20 )
  {
    v44 = 0;
    sub_453A20(v20);
  }
  LOBYTE(v54) = 0;
  if ( v24 != v47 )
    goto LABEL_61;
  if ( lpMultiByteStr && (v47 = sub_45CE30((int)a2, v5, a3, lpMultiByteStr)) != 0 )
  {
    v28 = (void **)(v5 + 140);
    v29 = *(_DWORD *)(v5 + 144) + 1;
    if ( v29 > *(_DWORD *)(v5 + 148) )
      *v28 = sub_453B00(v5 + 140, *v28, v29, 0x18u);
    v30 = *(_DWORD *)(v5 + 144);
    v34 = (char *)lpMultiByteStr;
    v31 = (int)*v28 + 24 * v30;
    *(_DWORD *)(v5 + 144) = v30 + 1;
    *(_DWORD *)(v31 + 4) = *(_DWORD *)(v5 + 152);
    *(_DWORD *)(v31 + 16) = *(_DWORD *)(v5 + 160);
    *(_DWORD *)v31 = *(_DWORD *)(v5 + 156);
    *(_BYTE *)(v31 + 20) = *(_BYTE *)(v5 + 80);
    *(_DWORD *)(v31 + 8) = *(_DWORD *)(v5 + 116);
    *(_DWORD *)(v31 + 12) = *(_DWORD *)(v5 + 120);
    *(_DWORD *)(v5 + 152) = v47;
    v32 = sub_453A90(v34);
    v10 = v46;
    *(_DWORD *)(v5 + 156) = v32;
    *(_DWORD *)(v5 + 160) = 0;
    *(_DWORD *)(v5 + 116) = sub_433EF0;
    *(_DWORD *)(v5 + 120) = v5;
    *(_BYTE *)(v5 + 80) = 0;
  }
  else
  {
    if ( a4 )
    {
LABEL_61:
      sub_45CC20(0);
      v10 = v46;
      goto LABEL_69;
    }
    sub_45CB10(0, *(const char **)(v5 + 4));
    v10 = 32;
  }
LABEL_69:
  v54 = 8;
  if ( v48 )
  {
    v49 = 0;
    sub_453A20(v48);
  }
  return v10;
}
