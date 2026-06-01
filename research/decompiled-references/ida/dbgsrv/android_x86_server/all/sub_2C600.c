/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2C600
// Address: 0x0002C600

//----- (0002C600) --------------------------------------------------------
unsigned int __cdecl sub_2C600(_DWORD *a1)
{
  _DWORD *v1; // edx
  unsigned int v2; // eax
  _DWORD *v3; // esi
  char *v4; // edi
  int v5; // ecx
  char *v6; // esi
  char *v7; // eax
  int v8; // ecx
  char *v9; // ebx
  signed int v10; // edi
  int v11; // eax
  int v12; // esi
  unsigned int v13; // esi
  int v14; // edx
  _DWORD *v15; // edx
  _DWORD *v16; // esi
  char *v17; // edi
  int v18; // ecx
  char *v19; // esi
  char *v20; // eax
  int v21; // ecx
  char *v22; // ebx
  signed int v23; // edi
  int v24; // eax
  int v25; // esi
  unsigned int v26; // edi
  char *v27; // eax
  int v28; // eax
  int v29; // ecx
  bool v30; // zf
  unsigned int v31; // eax
  char *v32; // eax
  unsigned int v33; // ecx
  _DWORD *v34; // edx
  int *v35; // esi
  int *v36; // ecx
  void *v37; // eax
  __int128 v38; // xmm0
  int *v39; // ecx
  _OWORD *v40; // edi
  int v41; // edx
  char *v42; // edx
  char *v43; // ebx
  char *v44; // ecx
  int v45; // esi
  int v46; // edi
  int v47; // esi
  void *v48; // eax
  int v49; // eax
  int v50; // ecx
  unsigned int v51; // eax
  char *v52; // eax
  unsigned int v53; // ecx
  char *v54; // ecx
  int v55; // esi
  int v56; // edi
  int v57; // esi
  std::logic_error *exception; // esi
  char *v60; // [esp+4h] [ebp-58h]
  char *v61; // [esp+4h] [ebp-58h]
  int v62; // [esp+1Ch] [ebp-40h]
  void *v63; // [esp+1Ch] [ebp-40h]
  void *v64; // [esp+1Ch] [ebp-40h]
  int v65; // [esp+20h] [ebp-3Ch]
  _BYTE *v66; // [esp+20h] [ebp-3Ch]
  unsigned int v67; // [esp+24h] [ebp-38h]
  char *v68; // [esp+24h] [ebp-38h]
  char *v69; // [esp+24h] [ebp-38h]
  unsigned int v70; // [esp+28h] [ebp-34h]
  char *v71; // [esp+28h] [ebp-34h]
  void *v72; // [esp+2Ch] [ebp-30h] BYREF
  __int128 v73; // [esp+30h] [ebp-2Ch] BYREF
  _DWORD *v74; // [esp+40h] [ebp-1Ch]
  unsigned int v75; // [esp+48h] [ebp-14h]

  v1 = a1;
  v75 = __readgsdword(0x14u);
  v2 = a1[4];
  if ( v2 >= 0x5D )
  {
    a1[4] = v2 - 93;
    v3 = (_DWORD *)a1[1];
    v4 = (char *)a1[2];
    v5 = *v3;
    v6 = (char *)(v3 + 1);
    a1[1] = v6;
    v7 = (char *)a1[3];
    if ( v4 != v7 )
    {
LABEL_46:
      *(_DWORD *)v4 = v5;
      v1[2] += 4;
      return __readgsdword(0x14u);
    }
    v65 = v5;
    if ( (unsigned int)v6 > *a1 )
    {
      v8 = (int)(((int)&v6[-*a1] >> 2) + ((unsigned int)(((int)&v6[-*a1] >> 2) + 1) >> 31) + 1) >> 1;
      v9 = &v6[-4 * v8];
      v10 = v4 - v6;
      v11 = (int)v9;
      if ( v10 )
      {
        v60 = v6;
        v12 = -v8;
        memmove(v9, v60, v10);
        v1 = a1;
        v11 = a1[1] + 4 * v12;
      }
      v4 = &v9[4 * (v10 >> 2)];
      v1[2] = v4;
      v1[1] = v11;
      v5 = v65;
      goto LABEL_46;
    }
    v63 = (void *)*a1;
    v28 = (int)&v7[-*a1];
    v29 = v28 >> 1;
    v30 = v28 == 0;
    v31 = 1;
    if ( !v30 )
      v31 = v29;
    if ( !v31 )
    {
      v33 = 0;
      v32 = nullptr;
      goto LABEL_36;
    }
    if ( v31 < 0x40000000 )
    {
      v67 = v31;
      v32 = (char *)operator new(4 * v31);
      v33 = v67;
      v1 = a1;
LABEL_36:
      v43 = &v32[4 * v33];
      v44 = &v32[4 * (v33 >> 2)];
      if ( v6 == v4 )
      {
        *v1 = v32;
        v1[1] = v44;
        v1[2] = v44;
        v1[3] = v43;
        v4 = v44;
        v48 = v63;
      }
      else
      {
        v68 = v44;
        do
        {
          *(_DWORD *)v44 = *(_DWORD *)v6;
          v44 += 4;
          v6 += 4;
        }
        while ( v4 != v6 );
        v1 = a1;
        v64 = (void *)*a1;
        v45 = a1[1];
        v46 = a1[2];
        *a1 = v32;
        a1[1] = v68;
        a1[2] = v44;
        a1[3] = v43;
        if ( v46 != v45 )
        {
          v47 = v45 - v46;
          do
            v47 += 4;
          while ( v47 );
        }
        v4 = v44;
        v48 = v64;
      }
      v5 = v65;
      if ( v48 )
      {
        operator delete(v48);
        v5 = v65;
        v1 = a1;
        v4 = (char *)a1[2];
      }
      goto LABEL_46;
    }
    goto LABEL_65;
  }
  v13 = (a1[2] - a1[1]) >> 2;
  v14 = a1[3] - *a1;
  if ( v13 >= v14 >> 2 )
  {
    v26 = 1;
    if ( v14 )
      v26 = v14 >> 1;
    HIDWORD(v73) = 0;
    v74 = a1 + 3;
    if ( v26 )
    {
      if ( v26 >= 0x40000000 )
      {
LABEL_65:
        exception = (std::logic_error *)_cxa_allocate_exception(8u);
        std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
        goto LABEL_66;
      }
      v27 = (char *)operator new(4 * v26);
    }
    else
    {
      v27 = nullptr;
    }
    LODWORD(v73) = v27;
    DWORD2(v73) = &v27[4 * v13];
    DWORD1(v73) = DWORD2(v73);
    HIDWORD(v73) = &v27[4 * v26];
    v72 = operator new(0xFFCu);
    sub_2C410(&v73, (int *)&v72);
    v34 = a1;
    v35 = (int *)a1[2];
    while ( 1 )
    {
      v36 = (int *)v34[1];
      if ( v35 == v36 )
        break;
      sub_2CBE0((int)&v73, --v35);
      v34 = a1;
    }
    v37 = (void *)*v34;
    v38 = v73;
    LODWORD(v73) = *v34;
    DWORD1(v73) = v36;
    DWORD2(v73) = v34[2];
    v39 = (int *)DWORD2(v73);
    v40 = v34;
    v41 = v34[3];
    *v40 = v38;
    HIDWORD(v73) = v41;
    if ( v39 != v35 )
    {
      v42 = (char *)((char *)v35 - (char *)v39);
      do
        v42 += 4;
      while ( v42 );
      DWORD2(v73) = v35;
    }
    if ( v37 )
      operator delete(v37);
  }
  else
  {
    if ( a1[3] == a1[2] )
    {
      LODWORD(v73) = operator new(0xFFCu);
      sub_2C050((int)a1, (int *)&v73);
      v15 = a1;
      v16 = (_DWORD *)a1[1];
      v17 = (char *)a1[2];
      v18 = *v16;
      v19 = (char *)(v16 + 1);
      a1[1] = v19;
      v20 = (char *)a1[3];
      if ( v17 == v20 )
      {
        v62 = v18;
        v66 = (_BYTE *)*a1;
        if ( (unsigned int)v19 <= *a1 )
        {
          v49 = v20 - v66;
          v50 = v49 >> 1;
          v30 = v49 == 0;
          v51 = 1;
          if ( !v30 )
            v51 = v50;
          if ( v51 )
          {
            if ( v51 >= 0x40000000 )
            {
              exception = (std::logic_error *)_cxa_allocate_exception(8u);
              std::logic_error::logic_error(
                exception,
                "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
LABEL_66:
              *(_DWORD *)exception = off_139B64;
              _cxa_throw(
                exception,
                (struct type_info *)&`typeinfo for'std::length_error,
                (void (*)(void *))std::length_error::~length_error);
            }
            v70 = v51;
            v52 = (char *)operator new(4 * v51);
            v53 = v70;
            v15 = a1;
          }
          else
          {
            v53 = 0;
            v52 = nullptr;
          }
          v69 = &v52[4 * v53];
          v54 = &v52[4 * (v53 >> 2)];
          if ( v19 == v17 )
          {
            *v15 = v52;
            v15[1] = v54;
            v15[2] = v54;
            v15[3] = v69;
          }
          else
          {
            v71 = v54;
            do
            {
              *(_DWORD *)v54 = *(_DWORD *)v19;
              v54 += 4;
              v19 += 4;
            }
            while ( v17 != v19 );
            v15 = a1;
            v66 = (_BYTE *)*a1;
            v55 = a1[1];
            v56 = a1[2];
            *a1 = v52;
            a1[1] = v71;
            a1[2] = v54;
            a1[3] = v69;
            if ( v56 != v55 )
            {
              v57 = v55 - v56;
              do
                v57 += 4;
              while ( v57 );
            }
          }
          v17 = v54;
          v18 = v62;
          if ( v66 )
          {
            operator delete(v66);
            v18 = v62;
            v15 = a1;
            v17 = (char *)a1[2];
          }
        }
        else
        {
          v21 = (int)(((int)&v19[-*a1] >> 2) + ((unsigned int)(((int)&v19[-*a1] >> 2) + 1) >> 31) + 1) >> 1;
          v22 = &v19[-4 * v21];
          v23 = v17 - v19;
          v24 = (int)v22;
          if ( v23 )
          {
            v61 = v19;
            v25 = -v21;
            memmove(v22, v61, v23);
            v15 = a1;
            v24 = a1[1] + 4 * v25;
          }
          v17 = &v22[4 * (v23 >> 2)];
          v15[2] = v17;
          v15[1] = v24;
          v18 = v62;
        }
      }
      *(_DWORD *)v17 = v18;
      v15[2] += 4;
      return __readgsdword(0x14u);
    }
    LODWORD(v73) = operator new(0xFFCu);
    sub_2C220(a1, (int *)&v73);
  }
  return __readgsdword(0x14u);
}
// 139B64: using guessed type void (__cdecl *off_139B64[2])(std::length_error *__hidden this);
// 139B70: using guessed type int (__cdecl *`typeinfo for'std::length_error)(std::type_info *);
