/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_21B40
// Address: 0x00021B40

//----- (00021B40) --------------------------------------------------------
int __cdecl sub_21B40(int a1, int *a2, char a3)
{
  int result; // eax
  FILE *v4; // ecx
  int v5; // edi
  int v6; // esi
  _DWORD *v7; // ecx
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // edx
  const char *v11; // ecx
  const char *v12; // eax
  const char *v13; // edi
  const char *v14; // esi
  char *v15; // eax
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  _BYTE *v19; // ecx
  unsigned int v20; // ecx
  _DWORD *v21; // edx
  unsigned int i; // ebx
  _DWORD *v23; // eax
  int v24; // esi
  unsigned int v25; // ecx
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // ecx
  int v30; // edi
  unsigned int v31; // esi
  size_t v32; // edx
  const void *v33; // ebx
  void *v34; // eax
  char *v35; // eax
  char *v36; // eax
  unsigned int v37; // eax
  int v38; // ecx
  char *v39; // esi
  unsigned int v40; // ecx
  int j; // edi
  void *v42; // eax
  int v43; // [esp+0h] [ebp-9Ch]
  int v44; // [esp+1Ch] [ebp-80h]
  const char *v45; // [esp+1Ch] [ebp-80h]
  _DWORD *v46; // [esp+1Ch] [ebp-80h]
  int v47; // [esp+1Ch] [ebp-80h]
  unsigned int v48; // [esp+1Ch] [ebp-80h]
  _DWORD *v49; // [esp+20h] [ebp-7Ch]
  char **v50; // [esp+20h] [ebp-7Ch]
  unsigned int v51; // [esp+24h] [ebp-78h]
  char *v52; // [esp+24h] [ebp-78h]
  unsigned int v53; // [esp+24h] [ebp-78h]
  int v54; // [esp+28h] [ebp-74h]
  int v55; // [esp+2Ch] [ebp-70h]
  char v56; // [esp+30h] [ebp-6Ch]
  _DWORD *v57; // [esp+40h] [ebp-5Ch] BYREF
  unsigned int v58; // [esp+44h] [ebp-58h]
  int v59; // [esp+48h] [ebp-54h]
  unsigned int v60; // [esp+50h] [ebp-4Ch] BYREF
  unsigned int v61; // [esp+54h] [ebp-48h]
  _BYTE v62[16]; // [esp+64h] [ebp-38h] BYREF
  unsigned __int8 v63; // [esp+74h] [ebp-28h]
  char *v64; // [esp+78h] [ebp-24h] BYREF
  unsigned int v65; // [esp+7Ch] [ebp-20h]
  int v66; // [esp+80h] [ebp-1Ch]
  unsigned int v67; // [esp+88h] [ebp-14h]

  v67 = __readgsdword(0x14u);
  result = -5;
  if ( *(_BYTE *)(a1 + 633) )
    return result;
  v4 = *(FILE **)(a1 + 668);
  if ( !v4 )
    return result;
  if ( a3 )
  {
    sub_1E2C0(a1, 0, 1);
    v4 = *(FILE **)(a1 + 668);
  }
  v5 = (int)a2;
  rewind(v4);
  v64 = nullptr;
  v65 = 0;
  v66 = 0;
  v57 = nullptr;
  v58 = 0;
  v59 = 0;
  v54 = 1;
LABEL_6:
  v6 = a1;
  while ( (unsigned __int8)sub_21760(a1, (int)&v60) )
  {
    if ( v60 < v61 )
    {
      if ( *(_DWORD *)(a1 + 684) <= 1u )
      {
        v51 = v65;
        if ( v65 >= 2 )
        {
          v7 = v57;
          v8 = 12 * v58;
          v9 = v57;
          if ( 12 * v58 )
          {
            v10 = 12 * v58;
            v9 = v57;
            v11 = v64;
            v55 = 12 * v58;
            v49 = v57;
            while ( 1 )
            {
              v44 = v10;
              v12 = v9[1] ? (const char *)*v9 : byte_EF875;
              v13 = v11;
              if ( !strcmp(v11, v12) )
                break;
              v9 += 3;
              v10 = v44 - 12;
              v11 = v13;
              if ( v44 == 12 )
              {
                v5 = (int)a2;
                goto LABEL_22;
              }
            }
            v5 = (int)a2;
            v7 = v49;
            v8 = v55;
          }
          if ( v9 == (_DWORD *)((char *)v7 + v8) )
          {
            v11 = v64;
LABEL_22:
            v14 = byte_EF875;
            v45 = v11;
            if ( v51 )
              v14 = v11;
            v15 = strstr(v14, "ld-");
            if ( v15 )
            {
              v16 = v15 - v14;
              if ( v16 != -1 )
              {
                if ( !v16 )
                  goto LABEL_30;
                v17 = (v51 | (v16 - 1)) == 0;
                v18 = (int)&v45[v16 - 1];
                v19 = (char *)&qword_13ACD8 + 4169;
                if ( !v17 )
                  v19 = (_BYTE *)v18;
                if ( *v19 == 47 )
LABEL_30:
                  sub_2AC80((int)&v57, (int)&v64);
              }
            }
          }
        }
      }
      v20 = *(_DWORD *)(v5 + 4);
      if ( v20 )
      {
        v21 = *(_DWORD **)v5;
        for ( i = 0; i < v20; ++i )
        {
          if ( *v21 == v60 )
            break;
          v21 += 10;
        }
        if ( i != v20 )
          goto LABEL_6;
      }
      else
      {
        i = 0;
      }
      if ( *(_DWORD *)(v5 + 8) >= i + 1 )
      {
        v23 = *(_DWORD **)v5;
      }
      else
      {
        v23 = qvector_reserve(v5, *(void **)v5, i + 1, 0x28u);
        *(_DWORD *)v5 = v23;
        i = *(_DWORD *)(v5 + 4);
      }
      v46 = v23;
      v24 = 5 * i;
      v23[2 * v24 + 1] = 0;
      v23[2 * v24] = 0;
      v23[2 * v24 + 3] = 0;
      v23[2 * v24 + 2] = 0;
      v23[2 * v24 + 5] = 0;
      v23[2 * v24 + 4] = 0;
      v23[2 * v24 + 7] = 0;
      v23[2 * v24 + 6] = 0;
      *(_DWORD *)((char *)&v23[2 * v24 + 8] + 2) = 0;
      *(_DWORD *)((char *)&v23[2 * v24 + 7] + 2) = 0;
      ++*(_DWORD *)(v5 + 4);
      v23[2 * v24] = v60;
      v23[2 * v24 + 1] = v61;
      v52 = (char *)v23[10 * i + 2];
      v25 = v23[10 * i + 3];
      v26 = v23[10 * i + 4];
      v23[2 * v24 + 2] = v64;
      v23[2 * v24 + 3] = v65;
      v23[2 * v24 + 4] = v66;
      v64 = v52;
      v65 = v25;
      v66 = v26;
      sub_1CA30(v43, (int)&v23[10 * i + 2]);
      v27 = v63;
      LOBYTE(v46[2 * v24 + 9]) = v63;
      v28 = v54;
      if ( v54 < v27 )
        v28 = v27;
      v54 = v28;
      if ( __strchr_chk(v62, 114, 8) )
        BYTE1(v46[10 * i + 9]) |= 4u;
      if ( __strchr_chk(v62, 119, 8) )
        BYTE1(v46[10 * i + 9]) |= 2u;
      if ( __strchr_chk(v62, 120, 8) )
        BYTE1(v46[10 * i + 9]) |= 1u;
      goto LABEL_6;
    }
  }
  if ( !v58 )
    goto LABEL_67;
  v50 = (char **)(a1 + 680);
  v29 = 0;
  v30 = -680;
  v56 = 0;
  do
  {
    v47 = v29;
    if ( v6 - (_DWORD)v57 != v30 )
    {
      v31 = v57[v30 / 4u + 171];
      if ( !v31 || (v32 = v31 - 1, v31 == 1) )
      {
        v6 = a1;
        *(_DWORD *)(a1 + 684) = 0;
        v35 = (char *)&qword_13ACD8 - 308323;
        goto LABEL_60;
      }
      v33 = (const void *)v57[v30 / 4u + 170];
      v34 = *(void **)(a1 + 680);
      if ( *(_DWORD *)(a1 + 688) < v31 )
      {
        v34 = qvector_reserve((int)v50, v34, v31, 1u);
        *v50 = (char *)v34;
        v32 = v31 - 1;
      }
      *(_DWORD *)(a1 + 684) = v31;
      memmove(v34, v33, v32);
      *(_BYTE *)(*(_DWORD *)(a1 + 680) + v31 - 1) = 0;
      v6 = a1;
    }
    v35 = (char *)&qword_13ACD8 - 308323;
    if ( *(_DWORD *)(v6 + 684) )
      v35 = *v50;
LABEL_60:
    sub_8A3F0(v6, (char *)&qword_13ACD8 - 383828, v35);
    if ( (unsigned __int8)sub_266B0(a1, (unsigned int **)a2, 1) )
    {
      v36 = (char *)&qword_13ACD8 - 308323;
      if ( *(_DWORD *)(a1 + 684) )
        v36 = *v50;
      sub_1C9D0(a1, (char *)&qword_13ACD8 - 383795, v36);
      v56 = 1;
      sub_22310(a1, a2);
    }
    v29 = v47 + 1;
    v30 += 12;
    v6 = a1;
  }
  while ( v47 + 1 < v58 );
  v5 = (int)a2;
  if ( (v56 & 1) == 0 )
    *(_DWORD *)(a1 + 684) = 0;
LABEL_67:
  if ( *(_DWORD *)(v5 + 4) )
  {
    v37 = 0;
    v38 = 36;
    do
    {
      *(_BYTE *)(*(_DWORD *)v5 + v38) = v54;
      ++v37;
      v38 += 40;
    }
    while ( v37 < *(_DWORD *)(v5 + 4) );
  }
  if ( a3 )
    sub_23D70(v6, 0, 1);
  v39 = (char *)v57;
  if ( v57 )
  {
    v53 = v58;
    if ( v58 )
    {
      v40 = 1;
      for ( j = 0; ; j += 12 )
      {
        v42 = *(void **)&v39[j];
        if ( v42 )
        {
          v48 = v40;
          *(_DWORD *)&v39[j + 4] = 0;
          qfree(v42);
          *(_DWORD *)&v39[j] = 0;
          *(_DWORD *)&v39[j + 8] = 0;
          v40 = v48;
        }
        if ( v40 >= v53 )
          break;
        v39 = (char *)v57;
        ++v40;
      }
      v39 = (char *)v57;
    }
    v58 = 0;
    qfree(v39);
    v57 = nullptr;
    v59 = 0;
  }
  if ( v64 )
  {
    v65 = 0;
    qfree(v64);
    v64 = nullptr;
    v66 = 0;
  }
  return 1;
}
// 21E6D: variable 'v43' is possibly undefined
// 17C00: using guessed type int __cdecl __strchr_chk(_DWORD, _DWORD, _DWORD);
// 13ACD8: using guessed type __int64 qword_13ACD8;
