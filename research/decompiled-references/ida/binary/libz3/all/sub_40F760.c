__int64 __fastcall sub_40F760(_QWORD **a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  _QWORD **v9; // rbp
  _QWORD **i; // r14
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 *v18; // rbp
  unsigned int v19; // r15d
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 *v26; // rsi
  __int64 v27; // rdi
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rax
  int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // edx
  __int64 v37; // rdx
  unsigned __int16 v38; // ax
  __int64 v39; // rbx
  __int64 v40; // r12
  __int64 v41; // rdx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  char **exception; // rbx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // rdi
  __int64 v50; // rcx
  unsigned int v51; // eax
  int v52; // r8d
  int v53; // r9d
  _QWORD *v54; // rcx
  unsigned int v55; // edx
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rbp
  __int64 v59; // r14
  __int64 v60; // rsi
  _QWORD *v61; // rax
  _QWORD *v62; // rdx
  __int64 v63; // rbx
  unsigned int v64; // eax
  __int64 v65; // r13
  _DWORD *v66; // r14
  __int64 v67; // rdx
  int v68; // ecx
  int v69; // r8d
  int v70; // r9d
  __int64 v71; // rbx
  __int64 v72; // r12
  __int64 v73; // rdx
  int v74; // ecx
  int v75; // r8d
  int v76; // r9d
  __int64 *v77; // [rsp+8h] [rbp-70h]
  __int64 v78[2]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v79[88]; // [rsp+20h] [rbp-58h] BYREF

  if ( (*(_BYTE *)(a2 + 108) & 4) == 0 )
  {
    v18 = a1[2];
    if ( !v18 || (v77 = &v18[*((unsigned int *)v18 - 1)], v18 == v77) )
    {
LABEL_31:
      ++*(_DWORD *)a2;
      v78[0] = a2;
      sub_4029E0(a1 + 2, v78);
      ++*(_DWORD *)a2;
      v78[0] = a2;
      sub_4029E0(a1 + 1, v78);
      *((_BYTE *)a1 + 36) = 0;
      sub_40F630((__int64)*a1, a2, 0, v46, v47, v48);
      v49 = *(_QWORD *)(a2 + 80);
      if ( v49 )
      {
        v78[0] = a2;
        sub_4029E0((_QWORD *)(v49 + 104), v78);
      }
      if ( (*(_BYTE *)(a2 + 108) & 1) == 0 )
        sub_409310((*a1)[2], *a1, a2);
    }
    else
    {
      v19 = 0;
      while ( 1 )
      {
        v20 = *v18;
        sub_407990((_QWORD *)*v18, a2, a3, a4, a5, a6);
        v21 = *(_QWORD *)(v20 + 16);
        sub_407990((_QWORD *)a2, a2, v22, v23, v24, v25);
        if ( *(_QWORD *)(a2 + 16) == v21 )
          break;
        ++v19;
        if ( v77 == ++v18 )
          goto LABEL_31;
      }
      v26 = *a1;
      v27 = (*a1)[2];
      sub_409310(v27, *a1, a2);
      v30 = *(_QWORD *)(a2 + 80);
      if ( v30 )
      {
        v31 = *(_QWORD **)(v30 + 104);
        if ( v31 && (v32 = &v31[*((unsigned int *)v31 - 1)], v32 != v31) )
        {
          while ( v20 != *v31 )
          {
            if ( ++v31 == v32 )
              goto LABEL_52;
          }
        }
        else
        {
LABEL_52:
          v27 = v30 + 104;
          v78[0] = v20;
          v26 = v78;
          sub_4029E0((_QWORD *)(v30 + 104), v78);
        }
      }
      v33 = *(_QWORD *)(a2 + 72);
      if ( v33 && *(_DWORD *)(v33 - 4) )
      {
        v26 = (__int64 *)(a2 + 64);
        v27 = v20;
        sub_403DB0(v20, a2 + 64);
        v35 = *(_DWORD *)(v20 + 96);
        v36 = *(_DWORD *)(a2 + 96);
        if ( v35 >= v36 )
        {
          v37 = *(_QWORD *)(a2 + 72);
          if ( v37 && *(_DWORD *)(v37 - 4) )
          {
            v27 = (__int64)*a1;
            v26 = (__int64 *)v20;
            sub_40F630((__int64)*a1, v20, 1, v34, v28, v29);
            v35 = *(_DWORD *)(v20 + 96);
          }
          goto LABEL_25;
        }
      }
      else
      {
        v35 = *(_DWORD *)(v20 + 96);
        v36 = *(_DWORD *)(a2 + 96);
        if ( v35 >= v36 )
        {
LABEL_25:
          if ( v35 > 0xFFFE )
          {
            v38 = *(_WORD *)(v20 + 104) + 1;
            *(_WORD *)(v20 + 104) = v38;
            if ( v38 > 0x63u )
            {
              if ( (unsigned int)sub_180B130(v27) )
              {
                if ( (unsigned __int8)sub_186A530(a7) )
                {
                  sub_186A4C0(a7);
                  sub_180B150(v27, v26);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v71 = std::ostream::_M_insert<unsigned long>();
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v72 = (*a1)[1];
                  sub_407990((_QWORD *)v20, (__int64)" ", v73, v74, v75, v76);
                  sub_1606360(v78, *(_QWORD *)(v20 + 16), v72, 0, 0, 0);
                  sub_160E8B0(v71, v78);
                  std::operator<<<std::char_traits<char>>();
                  sub_18572D0(v79);
                  sub_186A500(v79, "\n");
                }
                else
                {
                  sub_180B150(v27, v26);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v39 = std::ostream::_M_insert<unsigned long>();
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v40 = (*a1)[1];
                  sub_407990((_QWORD *)v20, (__int64)" ", v41, v42, v43, v44);
                  sub_1606360(v78, *(_QWORD *)(v20 + 16), v40, 0, 0, 0);
                  sub_160E8B0(v39, v78);
                  std::operator<<<std::char_traits<char>>();
                  sub_18572D0(v79);
                }
              }
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_3FCFD0(v78, "Stuck on a lemma");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v78);
              sub_233E40((__int64)v78);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
          }
          return 0;
        }
      }
      v50 = *(_QWORD *)(v20 + 80);
      if ( v50 )
      {
        v51 = *(_DWORD *)(v50 + 112);
        if ( v51 < v36 )
          v51 = v36;
        *(_DWORD *)(v50 + 112) = v51;
      }
      *(_DWORD *)(v20 + 96) = v36;
      sub_40F630((__int64)*a1, v20, 0, v50, v28, v29);
      v54 = a1[2];
      if ( v54 )
      {
        v55 = *((_DWORD *)v54 - 1);
        v56 = v19 + 1;
        if ( (unsigned int)v56 < v55 )
        {
          v57 = v19;
          v58 = 8 * v56;
          v59 = v54[v19];
          v60 = 8 * (v56 + v55 - 2 - v19 + 1);
          while ( 1 )
          {
            v62 = &v54[(unsigned __int64)v58 / 8];
            v63 = v57;
            v64 = *(_DWORD *)(v59 + 96);
            v65 = v54[(unsigned __int64)v58 / 8];
            if ( *(_DWORD *)(v65 + 96) < v64 )
            {
              v61 = &v54[v63];
            }
            else
            {
              if ( *(_DWORD *)(v65 + 96) != v64 )
                return 1;
              sub_407990((_QWORD *)v59, v60, (__int64)v62, (int)v54, v52, v53);
              v66 = *(_DWORD **)(v59 + 16);
              sub_407990((_QWORD *)v65, v60, v67, v68, v69, v70);
              if ( **(_DWORD **)(v65 + 16) >= *v66 )
                return 1;
              v54 = a1[2];
              v62 = &v54[(unsigned __int64)v58 / 8];
              v61 = &v54[v63];
              v59 = v54[v63];
              v65 = v54[(unsigned __int64)v58 / 8];
            }
            v58 += 8;
            *v61 = v65;
            ++v19;
            *v62 = v59;
            if ( v60 == v58 )
              return 1;
            v57 = v19;
          }
        }
      }
    }
    return 1;
  }
  v9 = (_QWORD **)a1[3];
  if ( v9 )
  {
    for ( i = &v9[*((unsigned int *)v9 - 1)]; i != v9; ++v9 )
    {
      v11 = (__int64)*v9;
      sub_407990(*v9, a2, a3, a4, a5, a6);
      v12 = *(_QWORD *)(v11 + 16);
      sub_407990((_QWORD *)a2, a2, v13, v14, v15, v16);
      if ( v12 == *(_QWORD *)(a2 + 16) )
        return 0;
    }
  }
  ++*(_DWORD *)a2;
  v78[0] = a2;
  sub_4029E0(a1 + 3, v78);
  return 1;
}

