/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B960
// Address: 0x0002B960

//----- (0002B960) --------------------------------------------------------
unsigned int __cdecl sub_2B960(_DWORD *a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // edi
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // esi
  char *v8; // eax
  int v9; // eax
  char **v10; // edi
  char *v11; // ebx
  char *v12; // ecx
  char *v13; // esi
  char *v14; // edi
  int v15; // esi
  char *v16; // edx
  char *v17; // ecx
  char *v18; // edi
  unsigned int v19; // ecx
  char *v20; // eax
  char *v21; // edx
  char *v22; // ecx
  char *v23; // esi
  char *v24; // edi
  char *v25; // esi
  char *v26; // eax
  char *v27; // edx
  char *v28; // edi
  int v29; // esi
  int v30; // edx
  char *v31; // edx
  std::logic_error *v33; // edi
  std::logic_error *exception; // edi
  int v35; // [esp+10h] [ebp-3Ch]
  char *v36; // [esp+10h] [ebp-3Ch]
  unsigned int v37; // [esp+18h] [ebp-34h]
  char *v38; // [esp+18h] [ebp-34h]
  void *v39; // [esp+1Ch] [ebp-30h] BYREF
  char *v40; // [esp+20h] [ebp-2Ch] BYREF
  char *v41; // [esp+24h] [ebp-28h]
  char *v42; // [esp+28h] [ebp-24h]
  char *v43; // [esp+2Ch] [ebp-20h]
  _DWORD *v44; // [esp+30h] [ebp-1Ch]
  unsigned int v45; // [esp+38h] [ebp-14h]

  v45 = __readgsdword(0x14u);
  v1 = a1[1];
  v2 = a1[2];
  v3 = 93 * ((v2 - v1) >> 2) - 1;
  if ( v2 == v1 )
    v3 = a1[2] - v1;
  v4 = a1[4];
  if ( (unsigned int)(v3 - (v4 + a1[5])) >= 0x5D )
  {
    a1[4] = v4 + 93;
    v40 = *(char **)(v2 - 4);
    a1[2] = v2 - 4;
    sub_2BE80((int)a1, (int *)&v40);
    return __readgsdword(0x14u);
  }
  v5 = a1[3] - *a1;
  if ( a1[2] - v1 < (unsigned int)v5 )
  {
    if ( v1 == *a1 )
    {
      v40 = (char *)operator new(0xFFCu);
      sub_2C220(a1, (int *)&v40);
      v6 = a1[2];
      v40 = *(char **)(v6 - 4);
      a1[2] = v6 - 4;
      sub_2BE80((int)a1, (int *)&v40);
    }
    else
    {
      v40 = (char *)operator new(0xFFCu);
      sub_2C050((int)a1, (int *)&v40);
    }
    v9 = 46;
    if ( a1[2] - a1[1] != 4 )
      v9 = a1[4] + 93;
    a1[4] = v9;
    return __readgsdword(0x14u);
  }
  v7 = 1;
  if ( v5 )
    v7 = v5 >> 1;
  v43 = nullptr;
  v44 = a1 + 3;
  if ( v7 )
  {
    if ( v7 >= 0x40000000 )
    {
      exception = (std::logic_error *)_cxa_allocate_exception(8u);
      std::logic_error::logic_error(exception, (char *)&qword_13ACD8 - 382498);
      *(_DWORD *)exception = (char *)&qword_13ACD8 - 4468;
      _cxa_throw(exception, (struct type_info *)(&qword_13ACD8 - 557), (void (*)(void *))(&qword_13ACD8 - 62525));
    }
    v8 = (char *)operator new(4 * v7);
  }
  else
  {
    v8 = nullptr;
  }
  v40 = v8;
  v42 = v8;
  v41 = v8;
  v43 = &v8[4 * v7];
  v39 = operator new(0xFFCu);
  sub_2C410(&v40, (int *)&v39);
  v10 = (char **)a1;
  v11 = (char *)a1[1];
  v12 = (char *)a1[2];
  if ( v11 != v12 )
  {
    v13 = v42;
    while ( 1 )
    {
      if ( v13 == v43 )
      {
        v14 = v41;
        if ( v41 <= v40 )
        {
          v19 = (v43 - v40) >> 1;
          if ( v43 == v40 )
            v19 = 1;
          v36 = v40;
          if ( v19 )
          {
            if ( v19 >= 0x40000000 )
            {
              v33 = (std::logic_error *)_cxa_allocate_exception(8u);
              std::logic_error::logic_error(v33, (char *)&qword_13ACD8 - 382498);
              *(_DWORD *)v33 = (char *)&qword_13ACD8 - 4468;
              _cxa_throw(v33, (struct type_info *)(&qword_13ACD8 - 557), (void (*)(void *))(&qword_13ACD8 - 62525));
            }
            v37 = v19;
            v20 = (char *)operator new(4 * v19);
            v19 = v37;
          }
          else
          {
            v20 = nullptr;
          }
          v38 = &v20[4 * v19];
          v21 = &v20[4 * (v19 >> 2)];
          v22 = v21;
          if ( v14 == v13 )
          {
            v40 = v20;
            v41 = v21;
            v42 = v21;
            v43 = v38;
            v13 = v21;
          }
          else
          {
            do
            {
              *(_DWORD *)v22 = *(_DWORD *)v14;
              v22 += 4;
              v14 += 4;
            }
            while ( v13 != v14 );
            v36 = v40;
            v23 = v41;
            v24 = v42;
            v40 = v20;
            v41 = v21;
            v42 = v22;
            v43 = v38;
            if ( v24 != v23 )
            {
              v25 = (char *)(v23 - v24);
              do
                v25 += 4;
              while ( v25 );
              v13 = v22;
              v10 = (char **)a1;
LABEL_40:
              if ( v36 )
              {
                operator delete(v36);
                v13 = v42;
              }
              goto LABEL_42;
            }
            v13 = v22;
          }
          v10 = (char **)a1;
          goto LABEL_40;
        }
        v15 = (int)(((v41 - v40) >> 2) + ((unsigned int)(((v41 - v40) >> 2) + 1) >> 31) + 1) >> 1;
        v16 = &v41[-4 * v15];
        v35 = (v43 - v41) >> 2;
        v17 = v16;
        if ( v43 != v41 )
        {
          v18 = &v41[-4 * v15];
          memmove(v16, v41, v43 - v41);
          v16 = v18;
          v17 = &v41[-4 * v15];
        }
        v13 = &v16[4 * v35];
        v42 = v13;
        v41 = v17;
        v10 = (char **)a1;
      }
LABEL_42:
      *(_DWORD *)v13 = *(_DWORD *)v11;
      v13 = v42 + 4;
      v42 += 4;
      v11 += 4;
      v12 = v10[2];
      if ( v11 == v12 )
      {
        v11 = v10[1];
        goto LABEL_45;
      }
    }
  }
  v13 = v42;
LABEL_45:
  v26 = *v10;
  *v10 = v40;
  v40 = v26;
  v27 = v41;
  v10[1] = v41;
  v41 = v11;
  v10[2] = v13;
  v42 = v12;
  v28 = (char *)a1[3];
  a1[3] = v43;
  v43 = v28;
  v29 = v13 - v27;
  v30 = 46;
  if ( v29 != 4 )
    v30 = a1[4] + 93;
  a1[4] = v30;
  if ( v12 != v11 )
  {
    v31 = (char *)(v11 - v12);
    do
      v31 += 4;
    while ( v31 );
    v42 = v11;
  }
  if ( v26 )
    operator delete(v26);
  return __readgsdword(0x14u);
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
