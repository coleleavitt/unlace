__int64 __fastcall sub_5AD640(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // dx
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // edx
  unsigned int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // r8
  __int64 v27; // rdi
  unsigned int v28; // edx
  unsigned int v29; // esi
  __int64 result; // rax
  unsigned int v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // ecx
  unsigned int v37; // esi
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r15
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r15
  int v46; // eax
  int j; // r13d
  int v48; // eax
  int i; // r15d
  __int64 v50; // rax
  unsigned int *v51; // rcx
  unsigned int *v52; // rax
  unsigned int v53; // edx
  unsigned int v54; // eax
  unsigned int v55; // ecx
  unsigned int *v56; // rdi
  unsigned int v57; // eax
  unsigned int v58; // edx
  __int64 v59; // [rsp+8h] [rbp-50h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  unsigned int v61; // [rsp+8h] [rbp-50h]
  int v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  unsigned int *v65; // [rsp+10h] [rbp-48h]
  unsigned int v66; // [rsp+18h] [rbp-40h]
  unsigned int v67; // [rsp+18h] [rbp-40h]
  unsigned int v68; // [rsp+18h] [rbp-40h]
  unsigned int v69; // [rsp+1Ch] [rbp-3Ch]

  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(a2 + 8) & 0x7FFFFFFFFFFFFFFFLL;
  if ( (v8 & 0x7FFFFFFFFFFFFFFFuLL) < v9 )
    return 0xFFFFFFFFLL;
  if ( v9 < (v8 & 0x7FFFFFFFFFFFFFFFuLL) )
    return 1;
  if ( !a1 || (v12 = *(_QWORD *)(a1 + 8) & 0x8000LL, (_DWORD)v12) )
  {
    v31 = *(_DWORD *)(a1 + 16);
    v32 = *(_DWORD *)(a2 + 16);
    if ( v31 >= v32 )
    {
      if ( v32 < v31 )
        return 1;
      v33 = *(int *)(a1 + 20);
      if ( (int)v33 >= *(_DWORD *)(a2 + 20) )
      {
        if ( (int)v33 > *(_DWORD *)(a2 + 20) )
          return 1;
        if ( (int)v33 <= 0 )
          return 0;
        v34 = 4 * v33;
        v35 = 0;
        while ( 1 )
        {
          v36 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + v35);
          v37 = *(_DWORD *)(*(_QWORD *)(a2 + 24) + v35);
          if ( v36 < v37 )
            break;
          if ( v37 < v36 )
            return 1;
          v35 += 4;
          if ( v35 == v34 )
            return 0;
        }
      }
    }
    return 0xFFFFFFFFLL;
  }
  v13 = *(_DWORD *)(a1 + 20);
  v14 = *(_DWORD *)(a2 + 20);
  if ( v13 < v14 )
    return 0xFFFFFFFFLL;
  if ( v14 < v13 )
    return 1;
  v15 = *(_WORD *)(a1 + 24);
  v16 = *(_WORD *)(a2 + 24);
  if ( v15 < v16 )
    return 0xFFFFFFFFLL;
  if ( v16 < v15 )
    return 1;
  v17 = *(_DWORD *)(a1 + 28);
  v18 = *(_DWORD *)(a2 + 28);
  if ( v17 < v18 )
    return 0xFFFFFFFFLL;
  if ( v18 < v17 )
    return 1;
  v19 = *(_DWORD *)(a1 + 32);
  v20 = *(_DWORD *)(a2 + 32);
  if ( v19 < v20 )
    return 0xFFFFFFFFLL;
  if ( v20 < v19 )
    return 1;
  v21 = *(_DWORD *)(a1 + 36);
  v22 = *(_DWORD *)(a2 + 36);
  if ( v21 < v22 )
    return 0xFFFFFFFFLL;
  if ( v22 < v21 )
    return 1;
  if ( (a3 & 1) == 0 )
  {
    v24 = *(_DWORD *)(a1 + 40);
    v25 = *(_DWORD *)(a2 + 40);
    if ( v24 < v25 )
      return 0xFFFFFFFFLL;
    if ( v25 < v24 )
      return 1;
    v26 = *(_QWORD *)(a2 + 48);
    v27 = *(_QWORD *)(a1 + 48);
    while ( (int)v24 > (int)v12 )
    {
      v28 = *(_DWORD *)(v27 + 8 * v12);
      v29 = *(_DWORD *)(v26 + 8 * v12);
      if ( v28 < v29 )
        return 0xFFFFFFFFLL;
      ++v12;
      if ( v29 < v28 )
        return 1;
    }
  }
  v38 = *(_DWORD *)(a1 + 56);
  if ( v38 < *(_DWORD *)(a2 + 56) )
    return 0xFFFFFFFFLL;
  if ( v38 > *(_DWORD *)(a2 + 56) )
    return 1;
  v39 = *(_QWORD *)(a2 + 64);
  v40 = *(_QWORD *)(a1 + 64);
  if ( v38 <= 0 )
  {
LABEL_41:
    v42 = *(_DWORD *)(a1 + 72);
    if ( v42 >= *(_DWORD *)(a2 + 72) )
    {
      if ( v42 > *(_DWORD *)(a2 + 72) )
        return 1;
      v43 = *(_QWORD *)(a2 + 80);
      v44 = *(_QWORD *)(a1 + 80);
      if ( v42 > 0 )
      {
        v45 = v44 + 16LL * v42;
        do
        {
          v67 = a6;
          v64 = v43;
          v60 = v44;
          result = sub_622060(v44, v43);
          if ( (_DWORD)result )
            return result;
          a6 = v67;
          v44 = v60 + 16;
          v43 = v64 + 16;
        }
        while ( v60 + 16 != v45 );
      }
      if ( (a3 & 2) == 0 )
      {
        v48 = *(_DWORD *)(a2 + 104);
        if ( *(_DWORD *)(a1 + 104) < v48 )
          return 0xFFFFFFFFLL;
        if ( *(_DWORD *)(a1 + 104) > v48 )
          return 1;
        for ( i = 0; i < *(_DWORD *)(a1 + 104); ++i )
        {
          v50 = 8LL * i;
          v51 = (unsigned int *)(v50 + *(_QWORD *)(a2 + 112));
          v52 = (unsigned int *)(*(_QWORD *)(a1 + 112) + v50);
          v53 = *v52;
          if ( *v52 < *v51 )
            return 0xFFFFFFFFLL;
          if ( *v51 < v53 )
            return 1;
          v54 = v52[1];
          v55 = v51[1];
          if ( v54 < v55 )
            return 0xFFFFFFFFLL;
          if ( v55 < v54 )
            return 1;
          if ( a4 )
          {
            v69 = a6;
            v68 = v53;
            v62 = *(_DWORD *)(a4 + 4LL * (int)a5 + 16);
            v65 = sub_5AD4A0(nullptr, *(_DWORD *)(a4 + 4LL * (int)a6 + 16), v53, 1);
            v56 = sub_5AD4A0(nullptr, v62, v68, 1);
            if ( !v56 || (a6 = v69, !v65) )
            {
              if ( !under_debugger )
                interr(2203);
              BUG();
            }
            if ( v56[4] == *(_DWORD *)a1 || v65[4] == *(_DWORD *)a2 )
            {
              if ( *v56 < *v65 )
                return 0xFFFFFFFFLL;
              if ( *v65 < *v56 )
                return 1;
              v57 = v56[1];
              v58 = v65[1];
              if ( v57 < v58 )
                return 0xFFFFFFFFLL;
              if ( v58 < v57 )
                return 1;
              result = sub_5AD640(v56, v65, a3, a4, a5);
              a6 = v69;
              if ( (_DWORD)result )
                return result;
            }
          }
        }
      }
      v46 = *(_DWORD *)(a2 + 88);
      if ( *(_DWORD *)(a1 + 88) >= v46 )
      {
        if ( *(_DWORD *)(a1 + 88) <= v46 )
        {
          if ( (a3 & 4) == 0 )
          {
            for ( j = 0; j < *(_DWORD *)(a1 + 88); ++j )
            {
              v61 = a6;
              result = sub_655B90(*(_QWORD *)(a1 + 96) + 24LL * j, 24LL * j + *(_QWORD *)(a2 + 96), a4, a5, a6);
              if ( (_DWORD)result )
                return result;
              a6 = v61;
            }
            return 0;
          }
          return 0;
        }
        return 1;
      }
    }
    return 0xFFFFFFFFLL;
  }
  v41 = v40 + 32LL * v38;
  while ( 1 )
  {
    v66 = a6;
    v63 = v39;
    v59 = v40;
    result = sub_656700(v40, v39);
    if ( (_DWORD)result )
      return result;
    a6 = v66;
    v40 = v59 + 32;
    v39 = v63 + 32;
    if ( v59 + 32 == v41 )
      goto LABEL_41;
  }
}

