__int64 __fastcall sub_413A90(__int64 a1, __int64 a2, char a3)
{
  char **v3; // rbp
  char **exception; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // edi
  __int64 v13; // rax
  __int64 v15; // rax
  int v16; // eax
  _QWORD *v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rcx
  int v20; // edx
  _QWORD *v21; // rcx
  bool v22; // zf
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // r15
  size_t v26; // rsi
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // rdx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // rdx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  size_t *v42; // rbx
  __int64 v43; // rcx
  size_t v44; // r13
  unsigned int v45; // eax
  unsigned int v46; // edx
  unsigned int j; // r13d
  size_t *v48; // r12
  unsigned __int64 v49; // r13
  __int64 v50; // rax
  unsigned int i; // r13d
  size_t *v52; // r14
  __int64 v53; // rax
  size_t v54; // r15
  unsigned int v55; // r14d
  unsigned int *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // ebp
  unsigned int v60; // ecx
  unsigned int *v61; // rdx
  _QWORD *v62; // rax
  int *v63; // [rsp+0h] [rbp-188h]
  unsigned int v64; // [rsp+14h] [rbp-174h]
  int v65[2]; // [rsp+18h] [rbp-170h]
  int v66[2]; // [rsp+28h] [rbp-160h]
  int v67[2]; // [rsp+30h] [rbp-158h]
  int v68[2]; // [rsp+38h] [rbp-150h]
  int v70[2]; // [rsp+50h] [rbp-138h]
  __int64 v71; // [rsp+58h] [rbp-130h]
  __int64 v72; // [rsp+60h] [rbp-128h]
  __int64 v73; // [rsp+68h] [rbp-120h]
  __int64 v74; // [rsp+78h] [rbp-110h]
  int v75; // [rsp+80h] [rbp-108h] BYREF
  __int64 v76; // [rsp+88h] [rbp-100h] BYREF
  int v77[2]; // [rsp+90h] [rbp-F8h] BYREF
  int v78[2]; // [rsp+98h] [rbp-F0h]
  int v79[2]; // [rsp+A0h] [rbp-E8h] BYREF
  int v80[2]; // [rsp+A8h] [rbp-E0h] BYREF
  int v81[2]; // [rsp+B0h] [rbp-D8h] BYREF
  int v82[2]; // [rsp+B8h] [rbp-D0h]
  int v83[2]; // [rsp+C0h] [rbp-C8h] BYREF
  int v84[2]; // [rsp+C8h] [rbp-C0h]
  __m128i v85; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v86; // [rsp+F0h] [rbp-98h]
  __int64 v87; // [rsp+F8h] [rbp-90h]
  __int64 v88; // [rsp+100h] [rbp-88h] BYREF
  __int64 v89; // [rsp+110h] [rbp-78h] BYREF
  __int64 v90; // [rsp+120h] [rbp-68h] BYREF
  void *ptr; // [rsp+130h] [rbp-58h]
  void (***v92)(void); // [rsp+138h] [rbp-50h]

  v7 = sub_180B150(a1, a2);
  sub_1841000(&v75, 0, "spacer::pred_transformer::add_rf", v7);
  if ( !a2 )
    return sub_18410E0(&v75);
  v8 = *(_QWORD *)(a1 + 216);
  v72 = v8;
  if ( a3 )
  {
    v74 = *(_QWORD *)(a1 + 8);
    if ( !v8 )
      goto LABEL_14;
    v12 = *(_DWORD *)(v8 - 4);
  }
  else
  {
    if ( !v8 )
    {
      v74 = *(_QWORD *)(a1 + 8);
      goto LABEL_14;
    }
    v9 = *(_QWORD *)(a1 + 216);
    v10 = *(unsigned int *)(v8 - 4);
    v11 = v9 + 8 * v10;
    v12 = v10;
    v13 = v9;
    if ( v11 != v9 )
    {
      while ( *(_QWORD *)(a2 + 8) != *(_QWORD *)(*(_QWORD *)v13 + 8LL) )
      {
        v13 += 8;
        if ( v11 == v13 )
          goto LABEL_81;
      }
      return sub_18410E0(&v75);
    }
LABEL_81:
    v74 = *(_QWORD *)(a1 + 8);
  }
  if ( v12 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(v72 + 8LL * (unsigned int)(v12 - 1)) + 48LL);
    v72 = v15;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
  }
  else
  {
    v72 = 0;
  }
LABEL_14:
  if ( *(_BYTE *)(a2 + 64) )
  {
    sub_413770(&v85, (_QWORD *)a1);
    v73 = v85.m128i_i64[0];
    if ( v85.m128i_i64[0] )
    {
      v16 = *(_DWORD *)(v85.m128i_i64[0] + 8);
LABEL_17:
      *(_DWORD *)(v73 + 8) = v16 + 1;
      goto LABEL_18;
    }
  }
  else
  {
    v58 = *(_QWORD *)(sub_402E40((_QWORD *)a1) + 32);
    v73 = v58;
    if ( v58 )
    {
      v16 = *(_DWORD *)(v58 + 8) + 1;
      *(_DWORD *)(v58 + 8) = v16;
      goto LABEL_17;
    }
  }
  v73 = 0;
LABEL_18:
  sub_3FCDD0(*(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56));
  ++*(_DWORD *)a2;
  *(_QWORD *)(a2 + 48) = v73;
  v17 = *(_QWORD **)(a1 + 216);
  if ( v17 )
  {
    v18 = *((_DWORD *)v17 - 1);
    if ( v18 == *((_DWORD *)v17 - 2) )
    {
      v59 = (3 * v18 + 1) >> 1;
      v60 = 8 * v59 + 8;
      if ( 8 * v18 + 8 >= v60 || v18 >= v59 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_3FCFD0(v85.m128i_i64, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v85);
        sub_233E40((__int64)&v85);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v61 = (unsigned int *)sub_186B300(v17 - 1, v60);
      v17 = v61 + 2;
      *v61 = v59;
      *(_QWORD *)(a1 + 216) = v61 + 2;
      LODWORD(v61) = v61[1];
      v21 = &v17[(unsigned int)v61];
      v20 = (_DWORD)v61 + 1;
    }
    else
    {
      v19 = v18;
      v20 = v18 + 1;
      v21 = &v17[v19];
    }
  }
  else
  {
    v62 = (_QWORD *)sub_186B270(0x18u);
    *v62 = 2;
    v17 = v62 + 1;
    v20 = 1;
    *(_QWORD *)(a1 + 216) = v17;
    v21 = v17;
  }
  v22 = *(_BYTE *)(a2 + 64) == 0;
  *v21 = a2;
  *((_DWORD *)v17 - 1) = v20;
  if ( !v22 )
    ++*(_DWORD *)(a1 + 224);
  v23 = *(_QWORD *)(a1 + 8);
  if ( v72 )
  {
    sub_15E1A70(*(_QWORD *)(a1 + 8));
    v24 = sub_15E1BF0(v23);
  }
  else
  {
    v24 = sub_15E1B70(v23);
  }
  v71 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  v25 = v24;
  sub_E5EBF0(*(_QWORD *)(a1 + 128), v24);
  v26 = *(_QWORD *)(a1 + 8);
  sub_400BE0((__int64)&v85, v26, v25, 0xFFFFFFFF);
  v29 = *(_QWORD *)(a1 + 56);
  if ( v29 )
  {
    v30 = *(unsigned int *)(v29 - 4);
    v31 = v29 + 8 * v30;
    *(_QWORD *)v70 = v31;
    if ( v31 != v29 )
    {
      *(_QWORD *)v68 = *(_QWORD *)(a1 + 56);
      v63 = v79;
      while ( 1 )
      {
        v32 = **(_QWORD **)v68;
        *(_QWORD *)v77 = *(_QWORD *)(**(_QWORD **)v68 + 8LL);
        sub_407990(&v85, v26, v30, v31, v27, v28);
        *(_QWORD *)v78 = 0;
        v26 = *(_QWORD *)(a1 + 24);
        sub_404A20(v32, v26, v86, (__int64)v77);
        v64 = 0;
        *(_QWORD *)v66 = *(_QWORD *)v78;
        if ( *(_QWORD *)v78 )
        {
          v36 = *(_QWORD *)v78;
          if ( *(_DWORD *)(*(_QWORD *)v78 - 4LL) )
            break;
        }
LABEL_51:
        sub_2334C0((__int64 *)v77);
        *(_QWORD *)v68 += 8LL;
        if ( *(_QWORD *)v70 == *(_QWORD *)v68 )
          goto LABEL_52;
      }
      while ( 1 )
      {
        *(_QWORD *)v65 = *(_QWORD *)(v32 + 8);
        *(_QWORD *)v67 = v36 + 8LL * v64;
        v37 = *(_QWORD *)(**(_QWORD **)v67 + 40LL);
        sub_407990(&v85, v26, v33, *(_QWORD *)(**(_QWORD **)v67 + 32LL), v34, v35);
        v42 = nullptr;
        if ( *(_WORD *)(v86 + 4) == 2 && *(_BYTE *)(*(_QWORD *)(v32 + 16) + 641LL) )
        {
          v50 = *(_QWORD *)(v32 + 8);
          *(_QWORD *)v81 = 0;
          *(_QWORD *)v84 = 0;
          *(_QWORD *)v82 = v50;
          *(_QWORD *)v83 = v50;
          *(_QWORD *)v80 = 0;
          *(_QWORD *)v79 = *(_QWORD *)v65;
          sub_40E1F0(&v85, (__int64)v63, v37, v39, v40, v41);
          sub_3D5800(*(std::ios_base **)(v37 + 24), v81, (__int64 *)v83);
          v76 = *(_QWORD *)v81;
          if ( *(_QWORD *)v81 )
            ++*(_DWORD *)(*(_QWORD *)v81 + 8LL);
          sub_407600((unsigned int **)v80, &v76);
          v42 = *(size_t **)v80;
          *(_QWORD *)v65 = *(_QWORD *)v79;
          sub_2B4F40((__int64 *)v83);
          v26 = *(_QWORD *)v82;
          sub_3FCDF0(*(__int64 *)v81, *(__int64 *)v82);
          if ( v42 )
          {
            for ( i = 0; i < *((_DWORD *)v42 - 1); ++i )
            {
              v52 = &v42[i];
              v53 = sub_15E1B70(*(_QWORD *)(v32 + 8));
              v54 = v53;
              if ( v53 )
                ++*(_DWORD *)(v53 + 8);
              v26 = *v52;
              if ( *v52 )
              {
                v22 = (*(_DWORD *)(v26 + 8))-- == 1;
                if ( v22 )
                  sub_15D7BC0(*(_QWORD *)v65, v26);
              }
              *v52 = v54;
            }
          }
        }
        sub_407990(&v85, v26, v38, v39, v40, v41);
        if ( *(_WORD *)(v86 + 4) != 2 || *(_BYTE *)(*(_QWORD *)(v32 + 16) + 642LL) )
          break;
        if ( v42 )
          goto LABEL_39;
LABEL_50:
        v36 = *(_QWORD *)v66;
        if ( ++v64 >= *(_DWORD *)(*(_QWORD *)v66 - 4LL) )
          goto LABEL_51;
      }
      *(_BYTE *)(v32 + 448) = 1;
      v44 = **(_QWORD **)v67;
      if ( **(_QWORD **)v67 )
        ++*(_DWORD *)(v44 + 8);
      if ( v42 )
      {
        v45 = *((_DWORD *)v42 - 1);
        if ( v45 == *((_DWORD *)v42 - 2) )
        {
          v55 = (3 * v45 + 1) >> 1;
          v26 = 8 * v55 + 8;
          if ( 8 * v45 + 8 >= (unsigned int)v26 || v45 >= v55 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_3FCFD0((__int64 *)v83, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v83);
            sub_233E40((__int64)v83);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v56 = (unsigned int *)sub_186B300(v42 - 1, v26);
          v43 = v56[1];
          v42 = (size_t *)(v56 + 2);
          *v56 = v55;
          *(_QWORD *)&v56[2 * v43 + 2] = v44;
          v46 = v43 + 1;
          v56[1] = v43 + 1;
        }
        else
        {
          v42[v45] = v44;
          *((_DWORD *)v42 - 1) = v45 + 1;
LABEL_39:
          v46 = *((_DWORD *)v42 - 1);
        }
      }
      else
      {
        v57 = (_QWORD *)sub_186B270(0x18u);
        LODWORD(v43) = 2;
        v57[1] = v44;
        v42 = v57 + 1;
        v46 = 1;
        *v57 = 0x100000002LL;
      }
      for ( j = 0; j < v46; ++j )
      {
        v26 = v42[j];
        sub_428900(*(_QWORD *)(v32 + 120), v26, v46, v43, v34, v35, (_DWORD)v63);
        v46 = *((_DWORD *)v42 - 1);
      }
      v48 = v42;
      v49 = (unsigned __int64)&v42[*((unsigned int *)v42 - 1)];
      if ( (unsigned __int64)v42 < v49 )
      {
        do
        {
          while ( 1 )
          {
            v26 = *v48;
            if ( *v48 )
            {
              v22 = (*(_DWORD *)(v26 + 8))-- == 1;
              if ( v22 )
                break;
            }
            if ( (unsigned __int64)++v48 >= v49 )
              goto LABEL_49;
          }
          ++v48;
          sub_15D7BC0(*(_QWORD *)v65, v26);
        }
        while ( (unsigned __int64)v48 < v49 );
      }
LABEL_49:
      sub_186B220(v42 - 1);
      goto LABEL_50;
    }
  }
LABEL_52:
  sub_3FCDA0(v92);
  if ( ptr )
    sub_41CD50(ptr);
  sub_2B4F40(&v90);
  sub_2B4F40(&v89);
  sub_2334C0(&v88);
  sub_3FCDF0(v86, v87);
  sub_3FCDF0(v71, v74);
  sub_3FCDD0(v73, v74);
  sub_3FCDD0(v72, v74);
  return sub_18410E0(&v75);
}

