__int64 __fastcall sub_C62F00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r12
  __int64 v13; // r15
  _QWORD *v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rsi
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  int v30; // ecx
  unsigned int v31; // r8d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rsi
  _DWORD *v35; // rcx
  __int64 v36; // r15
  _QWORD *v37; // rax
  _QWORD *v38; // rcx
  _QWORD *v39; // rsi
  int v40; // eax
  _QWORD *v41; // r8
  unsigned int v42; // eax
  __int64 v43; // rsi
  unsigned int v44; // r9d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rsi
  _QWORD *v48; // rax
  int v49; // r12d
  __int64 v50; // rcx
  int v51; // edx
  _QWORD *v52; // rcx
  _QWORD *v53; // rdx
  __int64 v54; // rax
  _DWORD *v55; // rax
  unsigned int v56; // edx
  unsigned int v57; // ebx
  size_t v58; // rsi
  unsigned int *v59; // rdx
  __int64 v60; // rcx
  unsigned int v61; // ebx
  size_t v62; // rsi
  unsigned int *v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  char **exception; // r14
  char **v68; // r13
  char **v69; // r12
  __int64 v70; // [rsp+8h] [rbp-B8h]
  unsigned int v71; // [rsp+14h] [rbp-ACh]
  unsigned int v72; // [rsp+18h] [rbp-A8h]
  int v73; // [rsp+1Ch] [rbp-A4h]
  _QWORD *v74; // [rsp+20h] [rbp-A0h]
  __int64 v75; // [rsp+28h] [rbp-98h]
  _QWORD *v76; // [rsp+28h] [rbp-98h]
  unsigned int v77; // [rsp+30h] [rbp-90h]
  unsigned int v78; // [rsp+30h] [rbp-90h]
  __int64 v79; // [rsp+30h] [rbp-90h]
  __int64 v80; // [rsp+38h] [rbp-88h]
  __int64 v81; // [rsp+38h] [rbp-88h]
  int v82; // [rsp+38h] [rbp-88h]
  __int64 v83[2]; // [rsp+50h] [rbp-70h] BYREF
  __int64 v84[2]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v85[10]; // [rsp+70h] [rbp-50h] BYREF

  v5 = a3;
  v73 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v48 = *(_QWORD **)(a1 + 160);
    if ( v48 )
      v49 = *((_DWORD *)v48 - 1);
    else
      v49 = 0;
    if ( v73 )
    {
      v79 = v5;
      v82 = 0;
      while ( 1 )
      {
        if ( v48 )
        {
          v56 = *((_DWORD *)v48 - 1);
          if ( v56 == *((_DWORD *)v48 - 2) )
          {
            v57 = (3 * v56 + 1) >> 1;
            v58 = 8 * v57 + 8;
            if ( 8 * v56 + 8 >= (unsigned int)v58 || v56 >= v57 )
            {
LABEL_73:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v85, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v85);
              sub_233E40((__int64)v85);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v59 = (unsigned int *)sub_186B300(v48 - 1, v58);
            v48 = v59 + 2;
            v60 = v59[1];
            *v59 = v57;
            *(_QWORD *)(a1 + 160) = v59 + 2;
            LODWORD(v59) = v60;
            v52 = &v48[v60];
            v51 = (_DWORD)v59 + 1;
          }
          else
          {
            v50 = v56;
            v51 = v56 + 1;
            v52 = &v48[v50];
          }
        }
        else
        {
          v66 = (_QWORD *)sub_186B270(0x18u);
          v51 = 1;
          *v66 = 2;
          v48 = v66 + 1;
          *(_QWORD *)(a1 + 160) = v48;
          v52 = v48;
        }
        *v52 = 0;
        *((_DWORD *)v48 - 1) = v51;
        v53 = *(_QWORD **)(a1 + 528);
        if ( v53 )
        {
          v54 = *((unsigned int *)v53 - 1);
          if ( (_DWORD)v54 == *((_DWORD *)v53 - 2) )
          {
            v61 = (unsigned int)(3 * v54 + 1) >> 1;
            v62 = 4 * v61 + 8;
            if ( 4 * (int)v54 + 8 >= (unsigned int)v62 || (unsigned int)v54 >= v61 )
              goto LABEL_73;
            v63 = (unsigned int *)sub_186B300(v53 - 1, v62);
            v53 = v63 + 2;
            *v63 = v61;
            v64 = v63[1];
            *(_QWORD *)(a1 + 528) = v53;
            v55 = (_DWORD *)v53 + v64;
          }
          else
          {
            v55 = (_DWORD *)v53 + v54;
          }
        }
        else
        {
          v65 = (_QWORD *)sub_186B270(0x10u);
          v53 = v65 + 1;
          *v65 = 2;
          *(_QWORD *)(a1 + 528) = v65 + 1;
          v55 = v65 + 1;
        }
        *v55 = v49;
        ++v82;
        ++*((_DWORD *)v53 - 1);
        if ( v82 == v73 )
          break;
        v48 = *(_QWORD **)(a1 + 160);
      }
      v5 = v79;
    }
    *(_DWORD *)(a1 + 128) += v73;
  }
  while ( 1 )
  {
    v9 = *(_DWORD *)(v5 + 8);
    if ( v9 >> 6 )
      break;
    v6 = *(_QWORD *)(a2 + 24);
    v7 = v9 & 0x3F | 0x40;
    *(_DWORD *)(v5 + 8) = v7;
    result = sub_C621C0(a1, v6, ((unsigned __int16)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v71 = *(_DWORD *)(a2 + 72);
  v70 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(v5 + 12));
  v72 = *(_DWORD *)(a2 + 76);
  v80 = *(unsigned int *)(a2 + 20);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = 16 * v80;
  v83[0] = v10;
  if ( v71 )
  {
    v12 = a2 + v11;
    v13 = *(_QWORD *)(v12 + 80);
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    v14 = (_QWORD *)sub_186B270(0x18u);
    v15 = v80;
    v16 = v14 + 1;
    *v14 = 2;
    v81 = (__int64)(v14 + 1);
    v17 = 1;
    v18 = a2 + 8 * (v71 + 2 * v15);
    while ( 1 )
    {
      v12 += 8;
      *v16 = v13;
      *(_DWORD *)(v81 - 4) = v17;
      if ( v18 == v12 )
        break;
      v13 = *(_QWORD *)(v12 + 80);
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      v19 = *(_DWORD *)(v81 - 4);
      if ( v19 == *(_DWORD *)(v81 - 8) )
      {
        v31 = (3 * v19 + 1) >> 1;
        v32 = 8 * v31 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v32 || v19 >= v31 )
        {
          v69 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v85, "Overflow encountered when expanding vector");
          *v69 = (char *)off_1C63128;
          sub_2333C0(v69 + 1, v85);
          sub_233E40((__int64)v85);
          __cxa_throw(v69, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v75 = v18;
        v77 = (3 * v19 + 1) >> 1;
        v33 = (unsigned int *)sub_186B300((void *)(v81 - 8), v32);
        v34 = v33[1];
        v35 = v33 + 2;
        v81 = (__int64)(v33 + 2);
        *v33 = v77;
        LODWORD(v33) = v34;
        v16 = &v35[2 * v34];
        v18 = v75;
        v17 = (_DWORD)v33 + 1;
      }
      else
      {
        v20 = v19;
        v17 = v19 + 1;
        v16 = (_QWORD *)(v81 + 8 * v20);
      }
    }
    v10 = *(_QWORD *)(a1 + 8);
    v11 = 16LL * *(unsigned int *)(a2 + 20);
  }
  else
  {
    v81 = 0;
  }
  v84[0] = v10;
  if ( v72 )
  {
    v36 = *(_QWORD *)(a2 + v11 + 80);
    if ( v36 )
      ++*(_DWORD *)(v36 + 8);
    v37 = (_QWORD *)sub_186B270(0x18u);
    v38 = (_QWORD *)(a2 + v11 + 80);
    *v37 = 2;
    v39 = v37 + 1;
    v40 = 1;
    v41 = (_QWORD *)(v11 + a2 + 8LL * v72 + 80);
    v21 = (__int64)v39;
    while ( 1 )
    {
      ++v38;
      *v39 = v36;
      *(_DWORD *)(v21 - 4) = v40;
      if ( v41 == v38 )
        break;
      v36 = *v38;
      if ( *v38 )
        ++*(_DWORD *)(v36 + 8);
      v42 = *(_DWORD *)(v21 - 4);
      if ( v42 == *(_DWORD *)(v21 - 8) )
      {
        v44 = (3 * v42 + 1) >> 1;
        v45 = 8 * v44 + 8;
        if ( 8 * v42 + 8 >= (unsigned int)v45 || v42 >= v44 )
        {
          v68 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v85, "Overflow encountered when expanding vector");
          *v68 = (char *)off_1C63128;
          sub_2333C0(v68 + 1, v85);
          sub_233E40((__int64)v85);
          __cxa_throw(v68, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v74 = v38;
        v76 = v41;
        v78 = (3 * v42 + 1) >> 1;
        v46 = (unsigned int *)sub_186B300((void *)(v21 - 8), v45);
        v47 = v46[1];
        v21 = (__int64)(v46 + 2);
        v41 = v76;
        v38 = v74;
        *v46 = v78;
        LODWORD(v46) = v47;
        v39 = (_QWORD *)(v21 + 8 * v47);
        v40 = (_DWORD)v46 + 1;
      }
      else
      {
        v43 = v42;
        v40 = v42 + 1;
        v39 = (_QWORD *)(v21 + 8 * v43);
      }
    }
  }
  else
  {
    v21 = 0;
  }
  if ( (*(_BYTE *)(v5 + 8) & 2) != 0 )
  {
    v22 = sub_15DBA30(*(_QWORD *)(a1 + 8), a2, v71, v81, v72, v21, v70);
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    sub_C4E2C0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  }
  else
  {
    ++*(_DWORD *)(a2 + 8);
    sub_C4E2C0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v22 = a2;
  }
  *(_QWORD *)(a1 + 480) = v22;
  sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(v5 + 12));
  v23 = *(_QWORD *)(a1 + 480);
  v85[0] = v23;
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  sub_C516F0((_QWORD *)(a1 + 56), v85);
  v24 = *(_QWORD *)(a1 + 160);
  if ( v24 )
    *(_DWORD *)(v24 - 4) -= v73;
  v25 = *(_QWORD *)(a1 + 528);
  if ( v25 )
    *(_DWORD *)(v25 - 4) -= v73;
  sub_15844D0(a1);
  v26 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v26 = *(_QWORD *)(a1 + 480);
  }
  sub_C4E2C0(v26, *(_QWORD *)(a1 + 488));
  v27 = *(_QWORD *)(a1 + 504);
  v28 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_C4E200(v28, v27);
  *(_QWORD *)(a1 + 496) = 0;
  v29 = *(_QWORD *)(a1 + 40);
  v30 = *(_DWORD *)(v29 - 4);
  *(_DWORD *)(v29 - 4) = v30 - 1;
  if ( *(_QWORD *)(a1 + 480) != a2 && v30 != 1 )
    *(_BYTE *)(v29 + 16LL * (unsigned int)(v30 - 2) + 8) |= 2u;
  v84[1] = v21;
  sub_2334C0(v84);
  v83[1] = v81;
  return sub_2334C0(v83);
}

