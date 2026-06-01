__int64 __fastcall ClpPlusMinusOneMatrix::deleteCols(ClpPlusMinusOneMatrix *this, int a2, const int *a3)
{
  ClpPlusMinusOneMatrix *v3; // r15
  unsigned __int64 v5; // rax
  int v6; // ebx
  __int64 v8; // r12
  const int *v9; // rdx
  int v10; // r10d
  int v11; // ecx
  const int *v12; // rsi
  __int64 v13; // rdi
  char *v14; // rax
  __int64 v15; // rax
  void *v16; // rdi
  int v17; // r12d
  __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  __int64 v20; // rbp
  int v21; // eax
  __int64 v22; // r14
  int v23; // r15d
  __int64 v24; // r9
  __int64 v25; // r8
  _DWORD *v26; // r10
  int v27; // eax
  int v28; // esi
  __int64 v29; // r10
  __int64 v30; // r12
  __int64 v31; // rcx
  unsigned __int64 v32; // r11
  __int64 v33; // rdx
  int v34; // ebx
  unsigned int v35; // r13d
  unsigned int v36; // r11d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rdx
  int v41; // ebx
  int v42; // edi
  int v43; // edx
  int v44; // eax
  int v45; // ebx
  int v46; // edx
  int v47; // esi
  __int64 v48; // r11
  __int64 v49; // rcx
  __int64 v50; // rdi
  unsigned __int64 v51; // r8
  __int64 v52; // rbx
  __int64 v53; // rax
  int v54; // r9d
  int v55; // r8d
  unsigned int v56; // r12d
  unsigned int v57; // r11d
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rax
  int v62; // r9d
  int v63; // r8d
  int v64; // eax
  int v65; // edx
  int v66; // r9d
  int v67; // eax
  void *v68; // rdi
  void *v69; // rdi
  void *v70; // rdi
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  void *exception; // r13
  __int64 v77; // [rsp+0h] [rbp-B8h]
  char *v78; // [rsp+8h] [rbp-B0h]
  __int64 v79; // [rsp+10h] [rbp-A8h]
  unsigned int v80; // [rsp+18h] [rbp-A0h]
  int v81; // [rsp+1Ch] [rbp-9Ch]
  unsigned int v82; // [rsp+1Ch] [rbp-9Ch]
  ClpPlusMinusOneMatrix *v83; // [rsp+20h] [rbp-98h]
  __int64 v84; // [rsp+28h] [rbp-90h]
  __int64 v85; // [rsp+30h] [rbp-88h]
  int *v86; // [rsp+38h] [rbp-80h]
  unsigned int v87; // [rsp+40h] [rbp-78h]
  __int64 v88; // [rsp+48h] [rbp-70h]
  __int64 v89; // [rsp+60h] [rbp-58h]
  __int64 v90; // [rsp+68h] [rbp-50h]
  __int64 v91; // [rsp+70h] [rbp-48h]

  v3 = this;
  v5 = *((int *)this + 33);
  v6 = *(_DWORD *)(*((_QWORD *)this + 13) + 4 * v5);
  if ( v5 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_81;
  v78 = (char *)operator new[](4 * v5);
  v8 = *((int *)this + 33);
  memset(v78, 0, 4 * v8);
  if ( a2 <= 0 )
  {
    v10 = 0;
  }
  else
  {
    v9 = a3;
    v10 = 0;
    v11 = 0;
    v12 = &a3[a2 - 1 + 1];
    do
    {
      while ( 1 )
      {
        v15 = *v9;
        if ( (int)v8 > (int)v15 && (int)v15 >= 0 )
          break;
        ++v9;
        ++v11;
        if ( v9 == v12 )
          goto LABEL_10;
      }
      v13 = 4 * (v15 + 1);
      v14 = &v78[v13 - 4];
      v6 = *(_DWORD *)(*((_QWORD *)v3 + 13) + v13 - 4) + v6 - *(_DWORD *)(*((_QWORD *)v3 + 13) + v13);
      if ( *(_DWORD *)v14 )
        ++v10;
      else
        *(_DWORD *)v14 = 1;
      ++v9;
    }
    while ( v9 != v12 );
LABEL_10:
    if ( v11 )
    {
      exception = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v89 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v89 - 24);
      if ( (_UNKNOWN *)(v90 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v90 - 24);
      if ( (_UNKNOWN *)(v91 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v91 - 24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
  }
  v16 = *((void **)v3 + 12);
  v17 = v10 + v8 - a2;
  if ( v16 )
    operator delete[](v16);
  v18 = *((_QWORD *)v3 + 11);
  *((_QWORD *)v3 + 12) = 0;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  *((_QWORD *)v3 + 11) = 0;
  v19 = v17 + 1;
  if ( v19 > 0x1FFFFFFFFFFFFFFELL
    || (v77 = operator new[](4 * v19), (unsigned __int64)v17 > 0x1FFFFFFFFFFFFFFELL)
    || (v84 = operator new[](4LL * v17), (unsigned __int64)v6 > 0x1FFFFFFFFFFFFFFELL) )
  {
LABEL_81:
    __cxa_throw_bad_array_new_length();
  }
  v20 = operator new[](4LL * v6);
  v21 = *((_DWORD *)v3 + 33);
  if ( v21 > 0 )
  {
    v83 = v3;
    v22 = 0;
    v80 = 0;
    v79 = 4LL * (unsigned int)(v21 - 1) + 4;
    v23 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = (int)v80;
        v25 = 4LL * (int)v80;
        v26 = (_DWORD *)(v77 + v25);
        if ( !*(_DWORD *)&v78[v22] )
          break;
LABEL_20:
        v22 += 4;
        if ( v22 == v79 )
          goto LABEL_60;
      }
      v85 = *((_QWORD *)v83 + 13);
      v27 = *(_DWORD *)(v85 + v22);
      v86 = (int *)(v22 + *((_QWORD *)v83 + 14));
      v28 = *v86;
      *v26 = v23;
      if ( v27 < v28 )
        break;
LABEL_40:
      ++v80;
      v46 = *v86;
      v47 = *(_DWORD *)(v85 + v22 + 4);
      *(_DWORD *)(v84 + 4 * v24) = v23;
      v26 = (_DWORD *)(v77 + v25 + 4);
      if ( v46 >= v47 )
        goto LABEL_20;
      v48 = v46;
      v49 = 4LL * v46;
      v50 = *((_QWORD *)v83 + 15);
      v82 = v47 - v46;
      v51 = v50 + v49;
      v52 = 4LL * v23;
      if ( v50 + v49 < (unsigned __int64)(v20 + v52 + 16) && v20 + v52 < (unsigned __int64)(v50 + v49 + 16)
        || v82 <= 0xC )
      {
        v72 = 0;
        do
        {
          *(_DWORD *)(v20 + v52 + v72) = *(_DWORD *)(v51 + v72);
          v72 += 4;
        }
        while ( v72 != 4LL * (unsigned int)(v47 - 1 - v46) + 4 );
        v23 += v82;
        goto LABEL_59;
      }
      v53 = -(int)(v51 >> 2) & 3;
      if ( (int)v53 + 3 > (unsigned int)(v47 - 1 - v46) )
      {
        v62 = v23;
      }
      else
      {
        if ( (_DWORD)v53 )
        {
          v54 = v23 + 1;
          *(_DWORD *)(v20 + 4LL * v23) = *(_DWORD *)v51;
          v55 = v46 + 1;
          if ( (_DWORD)v53 != 1 )
          {
            *(_DWORD *)(v20 + 4LL * v54) = *(_DWORD *)(v50 + 4LL * v55);
            v55 = v46 + 2;
            v54 = v23 + 2;
            if ( (_DWORD)v53 != 2 )
            {
              v54 = v23 + 3;
              *(_DWORD *)(v20 + 4LL * (v23 + 2)) = *(_DWORD *)(v50 + 4LL * v55);
              v55 = v46 + 3;
            }
          }
        }
        else
        {
          v55 = v46;
          v54 = v23;
        }
        v56 = 0;
        v57 = v82 - v53;
        v58 = 4 * v53;
        v59 = v50 + v58 + v49;
        v60 = v20 + v58 + v52;
        v61 = 0;
        do
        {
          ++v56;
          *(__m128i *)(v60 + v61) = _mm_load_si128((const __m128i *)(v59 + v61));
          v61 += 16;
        }
        while ( v57 >> 2 > v56 );
        v62 = (v57 & 0xFFFFFFFC) + v54;
        v46 = v55 + (v57 & 0xFFFFFFFC);
        if ( v57 == (v57 & 0xFFFFFFFC) )
          goto LABEL_58;
        v48 = v46;
      }
      *(_DWORD *)(v20 + 4LL * v62) = *(_DWORD *)(v50 + 4 * v48);
      if ( v46 + 1 < v47 )
      {
        *(_DWORD *)(v20 + 4LL * (v62 + 1)) = *(_DWORD *)(v50 + 4LL * (v46 + 1));
        if ( v47 > v46 + 2 )
        {
          *(_DWORD *)(v20 + 4LL * (v62 + 2)) = *(_DWORD *)(v50 + 4LL * (v46 + 2));
          if ( v47 > v46 + 3 )
          {
            v63 = v62 + 4;
            *(_DWORD *)(v20 + 4LL * (v62 + 3)) = *(_DWORD *)(v50 + 4LL * (v46 + 3));
            v64 = v46 + 4;
            if ( v47 > v46 + 4 )
            {
              v65 = v46 + 5;
              v66 = v62 + 5;
              *(_DWORD *)(v20 + 4LL * v63) = *(_DWORD *)(v50 + 4LL * v64);
              if ( v47 > v65 )
                *(_DWORD *)(v20 + 4LL * v66) = *(_DWORD *)(v50 + 4LL * v65);
            }
          }
        }
      }
LABEL_58:
      v23 += v82;
LABEL_59:
      v22 += 4;
      if ( v22 == v79 )
      {
LABEL_60:
        v67 = v23;
        v3 = v83;
        goto LABEL_61;
      }
    }
    v29 = *((_QWORD *)v83 + 15);
    v30 = v27;
    v81 = v27;
    v87 = v28 - v27;
    v31 = 4LL * v27;
    v32 = v29 + v31;
    v88 = 4LL * v23;
    if ( (v29 + v31 >= (unsigned __int64)(v20 + v88 + 16) || v20 + v88 >= (unsigned __int64)(v29 + v31 + 16))
      && v87 > 0xC )
    {
      v33 = -(int)(v32 >> 2) & 3;
      if ( v28 - 1 - v27 < (unsigned int)(v33 + 3) )
      {
        v41 = v23;
      }
      else
      {
        if ( (_DWORD)v33 )
        {
          v34 = v23 + 1;
          *(_DWORD *)(v20 + 4LL * v23) = *(_DWORD *)v32;
          ++v27;
          if ( (_DWORD)v33 != 1 )
          {
            *(_DWORD *)(v20 + 4LL * v34) = *(_DWORD *)(v29 + 4LL * v27);
            v27 = v81 + 2;
            v34 = v23 + 2;
            if ( (_DWORD)v33 != 2 )
            {
              v34 = v23 + 3;
              *(_DWORD *)(v20 + 4LL * (v23 + 2)) = *(_DWORD *)(v29 + 4LL * v27);
              v27 = v81 + 3;
            }
          }
        }
        else
        {
          v34 = v23;
        }
        v35 = 0;
        v36 = v87 - v33;
        v37 = 4 * v33;
        v38 = v29 + v37 + v31;
        v39 = v20 + v37 + v88;
        v40 = 0;
        do
        {
          ++v35;
          *(__m128i *)(v39 + v40) = _mm_load_si128((const __m128i *)(v38 + v40));
          v40 += 16;
        }
        while ( v36 >> 2 > v35 );
        v27 += v36 & 0xFFFFFFFC;
        v41 = (v36 & 0xFFFFFFFC) + v34;
        v30 = v27;
        if ( v36 == (v36 & 0xFFFFFFFC) )
          goto LABEL_39;
      }
      *(_DWORD *)(v20 + 4LL * v41) = *(_DWORD *)(v29 + 4 * v30);
      if ( v28 > v27 + 1 )
      {
        *(_DWORD *)(v20 + 4LL * (v41 + 1)) = *(_DWORD *)(v29 + 4LL * (v27 + 1));
        if ( v28 > v27 + 2 )
        {
          *(_DWORD *)(v20 + 4LL * (v41 + 2)) = *(_DWORD *)(v29 + 4LL * (v27 + 2));
          if ( v28 > v27 + 3 )
          {
            v42 = v41 + 4;
            *(_DWORD *)(v20 + 4LL * (v41 + 3)) = *(_DWORD *)(v29 + 4LL * (v27 + 3));
            v43 = v27 + 4;
            if ( v28 > v27 + 4 )
            {
              v44 = v27 + 5;
              v45 = v41 + 5;
              *(_DWORD *)(v20 + 4LL * v42) = *(_DWORD *)(v29 + 4LL * v43);
              if ( v28 > v44 )
                *(_DWORD *)(v20 + 4LL * v45) = *(_DWORD *)(v29 + 4LL * v44);
            }
          }
        }
      }
    }
    else
    {
      v73 = (unsigned int)(v28 - 1 - v27);
      v74 = 0;
      v75 = 4 * v73 + 4;
      do
      {
        *(_DWORD *)(v20 + v88 + v74) = *(_DWORD *)(v32 + v74);
        v74 += 4;
      }
      while ( v74 != v75 );
    }
LABEL_39:
    v23 = v23 + v28 - v81;
    goto LABEL_40;
  }
  v26 = (_DWORD *)v77;
  v80 = 0;
  v67 = 0;
LABEL_61:
  *v26 = v67;
  operator delete[](v78);
  v68 = *((void **)v3 + 13);
  if ( v68 )
    operator delete[](v68);
  v69 = *((void **)v3 + 14);
  *((_QWORD *)v3 + 13) = v77;
  if ( v69 )
    operator delete[](v69);
  v70 = *((void **)v3 + 15);
  *((_QWORD *)v3 + 14) = v84;
  if ( v70 )
    operator delete[](v70);
  *((_QWORD *)v3 + 15) = v20;
  *((_DWORD *)v3 + 33) = v80;
  return v80;
}

