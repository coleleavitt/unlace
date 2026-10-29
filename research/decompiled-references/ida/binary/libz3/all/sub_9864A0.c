__int64 __fastcall sub_9864A0(_QWORD *a1, unsigned int a2, __int64 a3)
{
  char **exception; // r13
  char **v4; // r13
  _QWORD *v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned __int64 v11; // r14
  char v12; // dl
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 *v15; // rax
  int v16; // r8d
  __int64 v17; // r9
  char v18; // r12
  unsigned int v19; // ecx
  int v20; // esi
  _QWORD *v21; // rsi
  int v22; // edi
  unsigned __int64 v23; // r15
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // r14
  __int64 v27; // rbx
  _QWORD *v28; // rax
  _QWORD *v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v33; // rbx
  __int64 v34; // r12
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r14
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 *v42; // rcx
  bool v43; // zf
  __int64 v44; // rax
  int v45; // edx
  unsigned __int64 v46; // rax
  __int64 v47; // r10
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  __int64 *v57; // rcx
  unsigned int v58; // r13d
  unsigned int v59; // ecx
  unsigned int *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // r13d
  unsigned int v64; // ecx
  unsigned int *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  _QWORD *v68; // rdx
  _QWORD *v69; // rdx
  unsigned __int64 v70; // [rsp+0h] [rbp-118h]
  _QWORD *v71; // [rsp+8h] [rbp-110h]
  __int64 v72; // [rsp+10h] [rbp-108h]
  __int64 v73[4]; // [rsp+30h] [rbp-E8h] BYREF
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v75; // [rsp+58h] [rbp-C0h]
  _QWORD v76[23]; // [rsp+60h] [rbp-B8h] BYREF

  v8 = (_QWORD *)a1[3];
  v72 = a2 >> 1;
  v9 = v8[1109] + 16 * v72;
  if ( (*(_BYTE *)(v9 + 11) & 1) != 0 && *(_QWORD *)v9 == a3 || (v10 = a3 & 7, v10 == 2) )
  {
    v33 = a1[1];
    if ( a2 == dword_1C7EC94 )
    {
      v34 = *(_QWORD *)(v8[13] + 856LL);
      if ( !v34 )
        goto LABEL_36;
    }
    else if ( a2 == dword_1C7EC90 )
    {
      v34 = *(_QWORD *)(v8[13] + 864LL);
      if ( !v34 )
        goto LABEL_36;
    }
    else
    {
      v34 = *(_QWORD *)(v8[1105] + 8 * v72);
      if ( (a2 & 1) != 0 )
      {
        v67 = sub_15E1A70(v8[13]);
        v34 = v67;
        if ( v67 )
          ++*(_DWORD *)(v67 + 8);
        v35 = a1[1];
        goto LABEL_37;
      }
      if ( !v34 )
      {
LABEL_36:
        v35 = v33;
LABEL_37:
        v36 = sub_15DFBC0(v35, v34);
        v37 = v36;
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        v38 = (_QWORD *)a1[35];
        if ( v38 )
        {
          v39 = *((_DWORD *)v38 - 1);
          if ( v39 == *((_DWORD *)v38 - 2) )
          {
            v58 = (3 * v39 + 1) >> 1;
            v59 = 8 * v58 + 8;
            if ( 8 * v39 + 8 >= v59 || v39 >= v58 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &ptr);
              sub_233E40((__int64)&ptr);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v60 = (unsigned int *)sub_186B300(v38 - 1, v59);
            v61 = v60[1];
            v38 = v60 + 2;
            *v60 = v58;
            a1[35] = v60 + 2;
            LODWORD(v60) = v61;
            v42 = &v38[v61];
            v41 = (_DWORD)v60 + 1;
          }
          else
          {
            v40 = v39;
            v41 = v39 + 1;
            v42 = &v38[v40];
          }
        }
        else
        {
          v68 = (_QWORD *)sub_186B270(0x18u);
          *v68 = 2;
          v41 = 1;
          v38 = v68 + 1;
          a1[35] = v38;
          v42 = v38;
        }
        *v42 = v37;
        *((_DWORD *)v38 - 1) = v41;
        if ( v34 )
        {
          v43 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v43 )
            sub_15D7BC0(v33, v34);
        }
        return v37;
      }
    }
    ++*(_DWORD *)(v34 + 8);
    goto LABEL_36;
  }
  v11 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10 )
    return sub_9833B0((__int64)a1, v11);
  v12 = *(_BYTE *)(v11 + 7);
  v13 = 0;
  if ( (v12 & 0x40) != 0 )
  {
    v14 = v11 + 4LL * (*(_DWORD *)(v11 + 4) & 0xFFFFFF) + 8;
    if ( (v12 & 3u) - 2 < 2 )
      v14 = v11 + 4LL * (*(_DWORD *)(v11 + 4) & 0xFFFFFF) + 12;
    v15 = (__int64 *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_BYTE *)(v11 + 7) & 0x20) != 0 )
      ++v15;
    v13 = *v15;
  }
  v76[0] = sub_9833B0((__int64)a1, v13);
  v18 = v76[0] != 0;
  v71 = v76;
  ptr = v76;
  v75 = 0x1000000001LL;
  v19 = *(_DWORD *)v11;
  if ( dword_1C7EC90 == a2 )
  {
    v21 = v76;
    v22 = 1;
  }
  else
  {
    v20 = *(_DWORD *)(v11 + 8);
    if ( v20 == a2 )
    {
      v21 = v76;
      v22 = 1;
      v10 = 1;
    }
    else
    {
      LODWORD(v70) = *(_DWORD *)v11;
      v44 = sub_9836E0((__int64)a1, v20 ^ 1u);
      v45 = v75;
      v19 = v70;
      v21 = ptr;
      v22 = v75 + 1;
      v10 = 2;
      *((_QWORD *)ptr + (unsigned int)v75) = v44;
      LODWORD(v75) = v45 + 1;
      v18 &= v44 != 0;
    }
  }
  if ( v10 < v19 )
  {
    v23 = v11 + 4LL * v10;
    v70 = v11 + 4 * (v19 - 1 - v10 + (unsigned __int64)v10) + 4;
    do
    {
      v24 = sub_9836E0((__int64)a1, *(_DWORD *)(v23 + 8) ^ 1u);
      v25 = v75;
      v26 = v24;
      if ( (unsigned int)v75 < HIDWORD(v75) )
      {
        v21 = ptr;
      }
      else
      {
        v27 = (unsigned int)(2 * HIDWORD(v75));
        v28 = (_QWORD *)sub_186B270(8 * v27);
        v25 = v75;
        v29 = ptr;
        v21 = v28;
        if ( (_DWORD)v75 )
        {
          if ( (unsigned int)(v75 - 1) <= 2 || v28 == (_QWORD *)((char *)ptr + 8) )
          {
            v46 = 0;
            v47 = 8LL * (unsigned int)v75;
            do
            {
              v17 = v29[v46 / 8];
              v21[v46 / 8] = v17;
              v46 += 8LL;
            }
            while ( v47 != v46 );
          }
          else
          {
            v30 = 0;
            v17 = 16LL * ((unsigned int)v75 >> 1);
            do
            {
              *(__m128i *)&v21[v30 / 8] = _mm_loadu_si128((const __m128i *)&v29[v30 / 8]);
              v30 += 16LL;
            }
            while ( v30 != v17 );
            if ( (v25 & 1) != 0 )
            {
              v31 = v25 & 0xFFFFFFFE;
              v17 = v29[v31];
              v21[v31] = v17;
            }
          }
        }
        if ( v29 != v76 && v29 )
        {
          sub_186B220(v29);
          v25 = v75;
        }
        ptr = v21;
        HIDWORD(v75) = v27;
      }
      v22 = v25 + 1;
      v21[v25] = v26;
      v23 += 4LL;
      LODWORD(v75) = v25 + 1;
      v18 &= v26 != 0;
    }
    while ( v70 != v23 );
  }
  v37 = 0;
  if ( !v18 )
    goto LABEL_50;
  v48 = a1[1];
  v49 = a1[3];
  if ( a2 == dword_1C7EC94 )
  {
    v50 = *(_QWORD *)(*(_QWORD *)(v49 + 104) + 856LL);
    if ( !v50 )
      goto LABEL_62;
    goto LABEL_61;
  }
  if ( a2 == dword_1C7EC90 )
  {
    v50 = *(_QWORD *)(*(_QWORD *)(v49 + 104) + 864LL);
    if ( !v50 )
      goto LABEL_62;
    goto LABEL_61;
  }
  v50 = *(_QWORD *)(*(_QWORD *)(v49 + 8840) + 8 * v72);
  if ( (a2 & 1) != 0 )
  {
    v62 = sub_15E1A70(*(_QWORD *)(v49 + 104));
    v50 = v62;
    if ( v62 )
      ++*(_DWORD *)(v62 + 8);
    v51 = a1[1];
    v22 = v75;
    LODWORD(v21) = (_DWORD)ptr;
    goto LABEL_63;
  }
  if ( v50 )
  {
LABEL_61:
    ++*(_DWORD *)(v50 + 8);
    v22 = v75;
  }
LABEL_62:
  LODWORD(v51) = v48;
LABEL_63:
  v52 = sub_15DF930(v51, v22, (int)v21, v50, v16, v17, v70, v76);
  v37 = v52;
  if ( v52 )
    ++*(_DWORD *)(v52 + 8);
  v53 = (_QWORD *)a1[35];
  if ( v53 )
  {
    v54 = *((_DWORD *)v53 - 1);
    if ( v54 == *((_DWORD *)v53 - 2) )
    {
      v63 = (3 * v54 + 1) >> 1;
      v64 = 8 * v63 + 8;
      if ( 8 * v54 + 8 >= v64 || v54 >= v63 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v73, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v73);
        sub_233E40((__int64)v73);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v65 = (unsigned int *)sub_186B300(v53 - 1, v64);
      v66 = v65[1];
      v53 = v65 + 2;
      *v65 = v63;
      a1[35] = v65 + 2;
      LODWORD(v65) = v66;
      v57 = &v53[v66];
      v56 = (_DWORD)v65 + 1;
    }
    else
    {
      v55 = v54;
      v56 = v54 + 1;
      v57 = &v53[v55];
    }
  }
  else
  {
    v69 = (_QWORD *)sub_186B270(0x18u);
    *v69 = 2;
    v56 = 1;
    v53 = v69 + 1;
    a1[35] = v53;
    v57 = v53;
  }
  *v57 = v37;
  *((_DWORD *)v53 - 1) = v56;
  if ( v50 )
  {
    v43 = (*(_DWORD *)(v50 + 8))-- == 1;
    if ( v43 )
      sub_15D7BC0(v48, v50);
  }
  v21 = ptr;
LABEL_50:
  if ( v21 != v71 )
  {
    if ( v21 )
      sub_186B220(v21);
  }
  return v37;
}

