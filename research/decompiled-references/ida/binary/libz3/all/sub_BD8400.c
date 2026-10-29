__int64 __fastcall sub_BD8400(__int64 a1, __int64 a2, __m128 a3, __m128 a4, __m128 a5)
{
  char **v5; // r12
  char **exception; // r12
  unsigned int v7; // ecx
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // rbp
  __int64 v14; // rax
  _DWORD *v15; // r13
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _BYTE *v21; // rdx
  _BYTE *v22; // rax
  _DWORD *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 result; // rax
  bool v28; // zf
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // r15
  __int64 v32; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // r14
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r12
  unsigned int v39; // eax
  unsigned int v40; // ecx
  size_t v41; // rsi
  _DWORD *v42; // rax
  unsigned int v43; // ecx
  size_t v44; // rsi
  _DWORD *v45; // rax
  __int64 v46; // rax
  _DWORD *v47; // r12
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned __int8 v55; // al
  int v56; // ecx
  __int64 *v57; // rbx
  unsigned __int64 v58; // r12
  __int64 v59; // rsi
  __int64 *v60; // rbx
  unsigned __int8 v61; // al
  unsigned __int64 v62; // r12
  __int64 v63; // rsi
  __int64 v64; // [rsp+0h] [rbp-B8h]
  __int64 v65; // [rsp+0h] [rbp-B8h]
  __int64 v66; // [rsp+0h] [rbp-B8h]
  int v67; // [rsp+8h] [rbp-B0h]
  int v68; // [rsp+8h] [rbp-B0h]
  __int64 v69; // [rsp+8h] [rbp-B0h]
  _QWORD *v70; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v71; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v72; // [rsp+8h] [rbp-B0h]
  int v73; // [rsp+8h] [rbp-B0h]
  _DWORD *v74; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v75; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v76; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v77; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v78; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v79; // [rsp+8h] [rbp-B0h]
  unsigned int v80; // [rsp+10h] [rbp-A8h]
  int v81; // [rsp+10h] [rbp-A8h]
  __int64 v82; // [rsp+10h] [rbp-A8h]
  __int64 v83; // [rsp+10h] [rbp-A8h]
  int v84; // [rsp+10h] [rbp-A8h]
  __int64 v85; // [rsp+10h] [rbp-A8h]
  __int64 v86; // [rsp+18h] [rbp-A0h]
  __int64 v87; // [rsp+18h] [rbp-A0h]
  __int64 v88; // [rsp+18h] [rbp-A0h]
  __int64 v89; // [rsp+18h] [rbp-A0h]
  __int64 v90; // [rsp+20h] [rbp-98h]
  __int64 v91; // [rsp+20h] [rbp-98h]
  __int64 v92; // [rsp+20h] [rbp-98h]
  unsigned __int8 v93; // [rsp+24h] [rbp-94h]
  __int64 v94; // [rsp+28h] [rbp-90h]
  __int64 v95; // [rsp+28h] [rbp-90h]
  __int64 v96; // [rsp+28h] [rbp-90h]
  __int64 v97; // [rsp+28h] [rbp-90h]
  __int64 v98; // [rsp+28h] [rbp-90h]
  __int64 v99; // [rsp+30h] [rbp-88h]
  __int64 v100; // [rsp+30h] [rbp-88h]
  __int64 v101; // [rsp+30h] [rbp-88h]
  __int64 v102[11]; // [rsp+60h] [rbp-58h] BYREF

  v7 = 0;
  v9 = *(_QWORD *)a2;
  v10 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(a2 + 44) & 8) == 0 )
    v7 = *(_DWORD *)(v9 + 24);
  if ( !sub_B70A50((__int64 *)(v10 + 8440), a1, -114, v7, (_QWORD **)(a2 + 112), 0) )
    return 0;
  v11 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 304);
  v86 = v11;
  v80 = *(_DWORD *)(v9 + 24);
  v12 = sub_BDD510(a1, v9);
  v13 = (_DWORD *)v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v14 = sub_BDD510(a1, *(_QWORD *)(v9 + 32));
  v15 = (_DWORD *)v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v16 = sub_15D1F10(v9);
  v17 = sub_BDD570(a1, v16);
  v21 = *(_BYTE **)(*(_QWORD *)(v16 + 24) + 8LL);
  if ( v17 )
  {
    v22 = &v21[16 * v17];
    while ( 1 )
    {
      if ( v21[8] != 1 )
        sub_DBF6E(0);
      v18 = *(_QWORD *)(*(_QWORD *)v21 + 24LL);
      if ( !v18 || (unsigned int)(*(_DWORD *)(v18 + 24) - 1) <= 1 || *(_QWORD *)(v18 + 32) != 1 )
        break;
      v21 += 16;
      if ( v22 == v21 )
        goto LABEL_23;
    }
    v23 = v15;
    if ( !(unsigned __int8)sub_BD4AA0(a1, v9) )
    {
      v29 = *(_QWORD *)(a1 + 24);
      ++*(_DWORD *)(v9 + 8);
      v96 = v29;
      v30 = (_QWORD *)sub_186B270(0x18u);
      v30[1] = v9;
      v31 = v30 + 1;
      v32 = *(_QWORD *)(v9 + 32);
      *v30 = 0x100000002LL;
      if ( v32 )
        ++*(_DWORD *)(v32 + 8);
      v69 = v32;
      v33 = (_QWORD *)sub_186B270(0x18u);
      v34 = v33 + 1;
      v33[1] = v69;
      *v33 = 0x100000002LL;
      if ( v80 > 2 )
      {
        v70 = (_QWORD *)(v9 + 40);
        v82 = v9 + 8LL * (v80 - 3) + 48;
        do
        {
          v36 = sub_15D1F10(*v70);
          v37 = sub_BD6F40(a1, v36);
          v38 = v37;
          if ( v37 )
            ++*(_DWORD *)(v37 + 8);
          v39 = *((_DWORD *)v31 - 1);
          if ( v39 == *((_DWORD *)v31 - 2) )
          {
            v40 = (3 * v39 + 1) >> 1;
            v41 = 8 * v40 + 8;
            if ( 8 * v39 + 8 >= (unsigned int)v41 || v39 >= v40 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v102, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v102);
              sub_233E40((__int64)v102);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            HIDWORD(v90) = (3 * v39 + 1) >> 1;
            v42 = (_DWORD *)sub_186B300(v31 - 1, v41);
            v31 = v42 + 2;
            *v42 = HIDWORD(v90);
            v39 = v42[1];
          }
          v31[v39] = v38;
          *((_DWORD *)v31 - 1) = v39 + 1;
          if ( v38 )
            ++*(_DWORD *)(v38 + 8);
          v35 = *((_DWORD *)v34 - 1);
          if ( v35 == *((_DWORD *)v34 - 2) )
          {
            v43 = (3 * v35 + 1) >> 1;
            v44 = 8 * v43 + 8;
            if ( 8 * v35 + 8 >= (unsigned int)v44 || v35 >= v43 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v102, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v102);
              sub_233E40((__int64)v102);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            HIDWORD(v90) = (3 * v35 + 1) >> 1;
            v45 = (_DWORD *)sub_186B300(v34 - 1, v44);
            v34 = v45 + 2;
            *v45 = HIDWORD(v90);
            v35 = v45[1];
          }
          ++v70;
          v34[v35] = v38;
          *((_DWORD *)v34 - 1) = v35 + 1;
        }
        while ( v70 != (_QWORD *)v82 );
      }
      v83 = *(_QWORD *)(a1 + 24);
      v46 = sub_BDD3C0(a1, *((unsigned int *)v31 - 1), v31);
      v47 = (_DWORD *)v46;
      if ( v46 )
        ++*(_DWORD *)(v46 + 8);
      v48 = sub_BDD3C0(a1, *((unsigned int *)v34 - 1), v34);
      if ( v48 )
        ++*(_DWORD *)(v48 + 8);
      sub_B6F780(*(_QWORD **)(a1 + 16), (__int64)v13, 0, a3, a4, a5, v49, v50, v51, v64, v48, v83, v86, v90, v96, v99);
      sub_B6F780(*(_QWORD **)(a1 + 16), (__int64)v15, 0, a3, a4, a5, v52, v53, v54, v66, v73, v84, v89, v92, v97, v101);
      v55 = sub_BD4E90(a1, v13, v47);
      if ( !v55 )
        v55 = sub_BD4E90(a1, v15, v74);
      if ( v74 )
      {
        v56 = v74[2];
        v74[2] = v56 - 1;
        if ( v56 == 1 )
        {
          v93 = v55;
          sub_15D7BC0(v85, v74);
          v55 = v93;
        }
      }
      if ( v47 )
      {
        v28 = v47[2]-- == 1;
        if ( v28 )
        {
          v79 = v55;
          sub_15D7BC0(v85, v47);
          v55 = v79;
        }
      }
      v57 = v34;
      v58 = (unsigned __int64)&v34[*((unsigned int *)v34 - 1)];
      if ( (unsigned __int64)v34 < v58 )
      {
        do
        {
          v59 = *v57;
          if ( *v57 )
          {
            v28 = (*(_DWORD *)(v59 + 8))-- == 1;
            if ( v28 )
            {
              v75 = v55;
              sub_15D7BC0(v98, v59);
              v55 = v75;
            }
          }
          ++v57;
        }
        while ( (unsigned __int64)v57 < v58 );
      }
      v76 = v55;
      v60 = v31;
      sub_186B220(v34 - 1);
      v61 = v76;
      v62 = (unsigned __int64)&v31[*((unsigned int *)v31 - 1)];
      if ( (unsigned __int64)v31 < v62 )
      {
        do
        {
          v63 = *v60;
          if ( *v60 )
          {
            v28 = (*(_DWORD *)(v63 + 8))-- == 1;
            if ( v28 )
            {
              v77 = v61;
              sub_15D7BC0(v98, v63);
              v61 = v77;
            }
          }
          ++v60;
        }
        while ( (unsigned __int64)v60 < v62 );
      }
      v78 = v61;
      v23 = v15;
      sub_186B220(v31 - 1);
      result = v78;
      goto LABEL_15;
    }
  }
  else
  {
LABEL_23:
    v23 = *(_DWORD **)(v9 + 8LL * (v80 - 1) + 32);
    if ( v23 )
      ++v23[2];
    if ( v15 )
    {
      v28 = v15[2]-- == 1;
      if ( v28 )
        sub_15D7BC0(v86, v15);
    }
  }
  sub_B6F780(*(_QWORD **)(a1 + 16), (__int64)v13, 0, a3, a4, a5, v18, v19, v20, v64, v67, v80, v86, v90, v94, v99);
  sub_B6F780(*(_QWORD **)(a1 + 16), (__int64)v23, 0, a3, a4, a5, v24, v25, v26, v65, v68, v81, v87, v91, v95, v100);
  result = sub_BD4E90(a1, v13, v23);
LABEL_15:
  if ( v23 )
  {
    v28 = v23[2]-- == 1;
    if ( v28 )
    {
      v72 = result;
      sub_15D7BC0(v88, v23);
      result = v72;
    }
  }
  if ( v13 )
  {
    v28 = v13[2]-- == 1;
    if ( v28 )
    {
      v71 = result;
      sub_15D7BC0(v88, v13);
      return v71;
    }
  }
  return result;
}

