/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4605B0
// Address: 0x004605B0

//----- (004605B0) --------------------------------------------------------
char *__usercall sub_4605B0@<eax>(int *a1@<ebx>, char **a2, int a3, char *a4, _DWORD *a5)
{
  char *v5; // esi
  char *v6; // edx
  int v7; // ecx
  char v8; // al
  char *v9; // eax
  char v10; // al
  char *v11; // eax
  char *v12; // eax
  char *v13; // eax
  char *v14; // edi
  char v15; // al
  char v16; // bh
  int v17; // edi
  void *v18; // eax
  bool v19; // sf
  bool v20; // zf
  unsigned int v21; // ebx
  _BYTE *v22; // edi
  unsigned int v23; // eax
  unsigned int v24; // ebx
  void *v25; // eax
  _DWORD *v26; // edx
  _DWORD *v27; // edi
  unsigned int v28; // eax
  unsigned int v29; // ebx
  void **v30; // eax
  _DWORD *v31; // edx
  int v32; // ecx
  _DWORD *v33; // esi
  _DWORD *v34; // ebx
  int *v35; // edi
  int v36; // eax
  int v37; // eax
  void *v38; // eax
  void *v39; // ecx
  unsigned int v40; // edx
  unsigned int v41; // edi
  char *result; // eax
  _BYTE *v43; // [esp+10h] [ebp-3Ch] BYREF
  unsigned int v44; // [esp+14h] [ebp-38h]
  unsigned int v45; // [esp+18h] [ebp-34h]
  void *v46; // [esp+1Ch] [ebp-30h] BYREF
  unsigned int v47; // [esp+20h] [ebp-2Ch]
  unsigned int v48; // [esp+24h] [ebp-28h]
  char *v49; // [esp+28h] [ebp-24h]
  char *v50; // [esp+2Ch] [ebp-20h]
  int v51; // [esp+30h] [ebp-1Ch]
  char *v52; // [esp+34h] [ebp-18h]
  int v53; // [esp+38h] [ebp-14h]
  int v54; // [esp+3Ch] [ebp-10h]
  int v55; // [esp+48h] [ebp-4h]
  int v56; // [esp+54h] [ebp+8h]
  unsigned int v57; // [esp+58h] [ebp+Ch]
  char *v58; // [esp+58h] [ebp+Ch]
  char *v59; // [esp+5Ch] [ebp+10h]

  v5 = a4;
  v53 = -1;
  v54 = 0;
  v6 = a2[1];
  v7 = v6 != nullptr ? (unsigned int)(v6 - 1) : 0;
  v49 = &a4[-v7];
  v50 = &a4[-v7 - a3];
  if ( !v7 )
  {
    BYTE1(a1) = 0;
    goto LABEL_63;
  }
  v8 = (*a2)[v7 - 1];
  if ( v8 == 62 )
  {
    if ( v7 == 1 )
    {
      v53 = 1;
    }
    else if ( v7 == 2 )
    {
      v9 = &byte_48BE67;
      if ( v6 )
        v9 = *a2;
      v10 = *v9;
      if ( v10 >= 0 && sub_46B760((unsigned __int16)a1, (unsigned __int8)v10) )
      {
        v11 = &byte_48BE67;
        if ( a2[1] )
          v11 = *a2;
        v53 = *v11 - 48;
      }
    }
    v12 = a4 + 1;
    if ( *a4 != 62 )
      v12 = a4;
    v5 = v12;
    LOBYTE(a1) = 4 * (*a4 == 62) + 2;
    v54 = 4 * (*a4 == 62) + 2;
LABEL_17:
    BYTE1(a1) = 0;
    if ( v53 == -1 )
      goto LABEL_63;
    goto LABEL_18;
  }
  if ( v8 != 60 || v7 != 1 )
    goto LABEL_17;
  v53 = 0;
  v54 = 1;
LABEL_18:
  v46 = nullptr;
  v47 = 0;
  v48 = 0;
  v55 = 0;
  v13 = sub_462220((unsigned __int16)a1, v5);
  v5 = v13;
  v14 = v13;
  v59 = v13;
  v52 = v13;
  LOBYTE(a1) = *v13;
  if ( *v13 == 34 )
  {
    v15 = v13[1];
    v59 = ++v5;
    if ( !v15 )
    {
LABEL_22:
      v54 |= 8u;
      v47 = 0;
      goto LABEL_50;
    }
    while ( 1 )
    {
      if ( v15 == 92 )
      {
        v16 = *++v5;
        v59 = v5;
        if ( !v16 )
          goto LABEL_22;
      }
      else
      {
        v16 = *v5;
        if ( *v5 == 34 )
        {
          ++v5;
          v54 |= 8u;
          v59 = v5;
          goto LABEL_50;
        }
      }
      v59 = ++v5;
      v17 = v47 != 0 ? v47 - 1 : 0;
      if ( v17 + 2 <= v48 )
      {
        v18 = v46;
      }
      else
      {
        v18 = sub_453B00((int)&v46, v46, v17 + 2, 1u);
        v46 = v18;
      }
      v47 = v17 + 2;
      *((_BYTE *)v18 + v17) = v16;
      *((_BYTE *)v46 + v17 + 1) = 0;
      v15 = *v5;
      if ( !*v5 )
      {
        v54 |= 8u;
        v47 = 0;
        goto LABEL_50;
      }
    }
  }
  v19 = (char)a1 < 0;
  if ( (_BYTE)a1 )
  {
    do
    {
      if ( !v19 && sub_46B7F0((unsigned __int16)a1, (unsigned __int8)a1) )
        break;
      if ( *v5 == 62 )
        break;
      if ( *v5 == 60 )
        break;
      LOBYTE(a1) = *++v5;
      v19 = (char)a1 < 0;
    }
    while ( (_BYTE)a1 );
    v59 = v5;
    if ( v5 > v14 )
    {
      v21 = v5 - v14;
      v20 = v5 == v14;
      v22 = nullptr;
      v43 = nullptr;
      v44 = 0;
      v57 = 0;
      v45 = 0;
      LOBYTE(v55) = 1;
      if ( v20 )
      {
        v24 = 0;
      }
      else
      {
        v23 = v21 + 1;
        if ( v21 != -1 )
        {
          v22 = sub_453B00((int)&v43, nullptr, v21 + 1, 1u);
          v23 = v21 + 1;
          v43 = v22;
        }
        v44 = v23;
        sub_464310((unsigned int)v22, (unsigned int)v52, v21);
        v43[v21] = 0;
        v24 = v44;
        v22 = v43;
        v57 = v45;
      }
      v25 = nullptr;
      LOBYTE(v55) = 2;
      v43 = nullptr;
      v44 = 0;
      v45 = 0;
      if ( v46 )
      {
        v47 = 0;
        sub_453A20(v46);
        v25 = v43;
      }
      v46 = v22;
      v47 = v24;
      v48 = v57;
      LOBYTE(v55) = 4;
      if ( v25 )
      {
        v44 = 0;
        sub_453A20(v25);
      }
      LOBYTE(v55) = 0;
    }
  }
LABEL_50:
  if ( v47 <= 1 )
  {
    BYTE1(a1) = 0;
  }
  else
  {
    v26 = a5;
    v27 = a5 + 1;
    v28 = a5[1] + 1;
    v29 = a5[2];
    if ( v28 > v29 )
    {
      v58 = (char *)sub_453B00((int)a5, nullptr, v28, 0x1Cu);
      v30 = (void **)a5;
      v31 = (_DWORD *)*a5;
      v51 = a5[2];
      v19 = *v27 - 1 < 0;
      v32 = *v27 - 1;
      a5[2] = v29;
      v56 = v32;
      if ( !v19 )
      {
        v33 = v31;
        v34 = v58 + 12;
        v35 = v31 + 3;
        do
        {
          *(v34 - 3) = *v33;
          *(v34 - 2) = *(v35 - 2);
          v36 = *(v35 - 1);
          *(v35 - 2) = 0;
          *(v34 - 1) = v36;
          v37 = *v35;
          *(v35 - 1) = 0;
          *v34 = v37;
          *v35 = 0;
          v34[1] = v35[1];
          v34[2] = v35[2];
          v34[3] = v35[3];
          v38 = (void *)*(v35 - 2);
          LOBYTE(v55) = 5;
          if ( v38 )
          {
            *(v35 - 1) = 0;
            sub_453A20(v38);
            v32 = v56;
            *(v35 - 2) = 0;
            *v35 = 0;
          }
          v33 += 7;
          LOBYTE(v55) = 0;
          v35 += 7;
          v34 += 7;
          v56 = --v32;
        }
        while ( v32 >= 0 );
        v30 = (void **)a5;
        v5 = v59;
        v27 = a5 + 1;
      }
      sub_453A20(*v30);
      v26 = a5;
      *a5 = v58;
      a5[2] = v51;
    }
    a1 = (int *)(*v26 + 28 * *v27);
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    ++*v27;
    v39 = (void *)a1[1];
    v40 = a1[2];
    v41 = a1[3];
    a1[1] = (int)v46;
    a1[2] = v47;
    a1[3] = v48;
    v46 = v39;
    v47 = v40;
    v48 = v41;
    a1[4] = v54;
    *a1 = v53;
    v5 = sub_462220((unsigned __int16)a1, v5);
    a1[5] = (int)v50;
    a1[6] = v5 - v49;
    BYTE1(a1) = 1;
  }
  v55 = 6;
  if ( v46 )
  {
    v47 = 0;
    sub_453A20(v46);
  }
LABEL_63:
  result = nullptr;
  if ( BYTE1(a1) )
    return v5;
  return result;
}
// 48BE67: using guessed type char byte_48BE67;
