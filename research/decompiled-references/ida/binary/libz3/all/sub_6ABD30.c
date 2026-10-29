__int64 __fastcall sub_6ABD30(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  char **v5; // r13
  char **exception; // r12
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 *v14; // r14
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r15
  _QWORD *v19; // rax
  __int64 v20; // r8
  int v21; // edx
  _DWORD *v22; // rbx
  unsigned int v23; // edx
  __int64 v24; // rax
  int v25; // edx
  _QWORD *v26; // rax
  unsigned int v27; // edx
  __int64 v28; // rax
  unsigned int v29; // r9d
  size_t v30; // rsi
  unsigned int v31; // r15d
  unsigned int *v32; // rax
  __int64 v33; // rax
  int v34; // edx
  unsigned int v35; // r8d
  size_t v36; // rsi
  unsigned int *v37; // rax
  _DWORD *v38; // rcx
  __int64 v39; // rax
  int v40; // edx
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdi
  _DWORD *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // [rsp+0h] [rbp-150h]
  __int64 *v51; // [rsp+8h] [rbp-148h]
  __int64 *v53; // [rsp+10h] [rbp-140h]
  __int64 v54; // [rsp+18h] [rbp-138h]
  __int64 *v55; // [rsp+20h] [rbp-130h]
  unsigned int v58; // [rsp+3Ch] [rbp-114h]
  __int64 v59; // [rsp+40h] [rbp-110h]
  __int64 v60; // [rsp+40h] [rbp-110h]
  __int64 v61; // [rsp+40h] [rbp-110h]
  _DWORD *v62; // [rsp+48h] [rbp-108h]
  __int64 v63; // [rsp+50h] [rbp-100h] BYREF
  int v64[2]; // [rsp+58h] [rbp-F8h]
  int v65[2]; // [rsp+60h] [rbp-F0h] BYREF
  __int64 v66; // [rsp+68h] [rbp-E8h]
  _QWORD v67[19]; // [rsp+80h] [rbp-D0h] BYREF
  int v68; // [rsp+118h] [rbp-38h]

  if ( *(_WORD *)(a2 + 4) != 2 || *(_DWORD *)(a2 + 16) != 2 )
  {
    *(_QWORD *)v64 = 0;
    v63 = *a1;
    if ( a3 )
      ++*(_DWORD *)(a3 + 8);
    sub_6A99C0(*a4, a4[1]);
    *a4 = a3;
    sub_6AB960(a2, a4, (__int64)&v63);
    if ( *(_WORD *)(a2 + 4) == 2 && !*(_DWORD *)(a2 + 16) )
    {
      v44 = sub_15EC2C0(*a1, *a4);
      v45 = v44;
      if ( v44 )
        ++*(_DWORD *)(v44 + 8);
      sub_6A99C0(*a4, a4[1]);
      *a4 = v45;
    }
    sub_6B2120(a1 + 1, a4, &v63);
    if ( *(_WORD *)(a2 + 4) == 2 && !*(_DWORD *)(a2 + 16) )
    {
      v46 = *a4;
      if ( !*(_WORD *)(*a4 + 4)
        && (v47 = *(_DWORD **)(*(_QWORD *)(v46 + 16) + 24LL)) != nullptr
        && !*v47
        && v47[1] == 8
        && *(_DWORD *)(v46 + 24) == 1 )
      {
        v49 = *(_QWORD *)(v46 + 32);
      }
      else
      {
        v48 = sub_15EC2C0(*a1, *a4);
        v46 = *a4;
        v49 = v48;
      }
      if ( v49 )
        ++*(_DWORD *)(v49 + 8);
      sub_6A99C0(v46, a4[1]);
      *a4 = v49;
    }
    sub_1584DD0(v67, *a1, 0);
    v67[18] = 0;
    v68 = 0;
    v67[0] = &off_1C61DB8;
    if ( *(_QWORD *)v64 )
      v9 = *(unsigned int *)(*(_QWORD *)v64 - 4LL);
    else
      v9 = 0;
    sub_1585D20(v67, *a4, 0, v9, 0, a4);
    v10 = *a4;
    if ( *(_QWORD *)v64 )
      v11 = *(_DWORD *)(*(_QWORD *)v64 - 4LL);
    else
      v11 = 0;
    *(_QWORD *)v65 = 0;
    v66 = v63;
    sub_1697FC0(v63, 0, v11, v64[0], v10, (int)v65, v50, (__int64)v65, a5, (__int64)v67, &v63);
    v12 = *a4;
    v13 = v66;
    *a4 = *(_QWORD *)v65;
    *(_QWORD *)v65 = v12;
    sub_6A99C0(v12, v13);
    v14 = *(__int64 **)v64;
    if ( !*(_QWORD *)v64 )
    {
      sub_6A99A0(*v53, v53[1]);
      *v53 = 0;
LABEL_35:
      v67[0] = &qword_1C637E8;
      sub_15841B0(v54);
      sub_2B4F40(v55);
      return 1;
    }
    v15 = *(_QWORD *)v64 + 8LL * *(unsigned int *)(*(_QWORD *)v64 - 4LL);
    v16 = *(unsigned int *)(*(_QWORD *)v64 - 4LL);
    if ( *(_QWORD *)v64 == v15 )
    {
      v62 = nullptr;
      v22 = nullptr;
    }
    else
    {
      v17 = **(_QWORD **)v64;
      v18 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v64 + 16LL) + 40LL);
      v19 = (_QWORD *)(sub_186B270(0x18u) + 8);
      v20 = *(_QWORD *)(v17 + 16);
      v21 = 1;
      v22 = nullptr;
      *(v19 - 1) = 2;
      v62 = v19;
      while ( 1 )
      {
        *v19 = v18;
        *(v62 - 1) = v21;
        if ( v22 )
        {
          v23 = *(v22 - 1);
          if ( v23 == *(v22 - 2) )
          {
            v29 = (3 * v23 + 1) >> 1;
            v30 = 8 * v29 + 8;
            v31 = v29;
            if ( 8 * v23 + 8 >= (unsigned int)v30 || v23 >= v29 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_6A99E0(v51, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v51);
              sub_233E40((__int64)v51);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v59 = v20;
            v32 = (unsigned int *)sub_186B300(v22 - 2, v30);
            v22 = v32 + 2;
            *v32 = v31;
            v33 = v32[1];
            v20 = v59;
            v34 = v33;
            v26 = &v22[2 * v33];
            v25 = v34 + 1;
          }
          else
          {
            v24 = v23;
            v25 = v23 + 1;
            v26 = &v22[2 * v24];
          }
        }
        else
        {
          v61 = v20;
          v26 = (_QWORD *)(sub_186B270(0x18u) + 8);
          v25 = 1;
          v20 = v61;
          *(v26 - 1) = 2;
          v22 = v26;
        }
        ++v14;
        *v26 = *(_QWORD *)(v20 + 16);
        *(v22 - 1) = v25;
        if ( (__int64 *)v15 == v14 )
          break;
        v20 = *(_QWORD *)(*v14 + 16);
        v27 = *(v62 - 1);
        v18 = *(_QWORD *)(v20 + 40);
        if ( v27 == *(v62 - 2) )
        {
          v35 = (3 * v27 + 1) >> 1;
          v36 = 8 * v35 + 8;
          if ( 8 * v27 + 8 >= (unsigned int)v36 || v27 >= v35 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_6A99E0(v51, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v51);
            sub_233E40((__int64)v51);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v58 = (3 * v27 + 1) >> 1;
          v60 = *v14;
          v37 = (unsigned int *)sub_186B300(v62 - 2, v36);
          v38 = v37 + 2;
          v62 = v37 + 2;
          *v37 = v58;
          v39 = v37[1];
          v20 = *(_QWORD *)(v60 + 16);
          v40 = v39;
          v19 = &v38[2 * v39];
          v21 = v40 + 1;
        }
        else
        {
          v28 = v27;
          v21 = v27 + 1;
          v19 = &v62[2 * v28];
        }
      }
      if ( !*(_QWORD *)v64 )
      {
        sub_6A99A0(*v53, v53[1]);
        *v53 = 0;
        sub_186B220(v22 - 2);
LABEL_33:
        if ( v62 )
          sub_186B220(v62 - 2);
        goto LABEL_35;
      }
      v16 = *(unsigned int *)(*(_QWORD *)v64 - 4LL);
    }
    if ( (_DWORD)v16 )
    {
      v41 = sub_15DB6A0(
              *a1,
              *(unsigned int *)(a2 + 16),
              v16,
              v62,
              v22,
              *a4,
              1,
              &qword_18D6CD0,
              &qword_18D6CD0,
              0,
              0,
              0,
              0);
      v42 = v41;
      if ( v41 )
        ++*(_DWORD *)(v41 + 8);
      sub_6A99C0(*a4, a4[1]);
      *a4 = v42;
    }
    sub_6A99A0(*v53, v53[1]);
    *v53 = 0;
    if ( v22 )
      sub_186B220(v22 - 2);
    goto LABEL_33;
  }
  return 0;
}

