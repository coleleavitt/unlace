__int64 __fastcall sub_458B20(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  _QWORD *exception; // rbp
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v14; // rbx
  _QWORD *v15; // rbx
  _QWORD *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  unsigned int v20; // eax
  _QWORD *v21; // rbp
  unsigned int v22; // ebx
  _QWORD *v23; // rdx
  __int64 v24; // r12
  unsigned int v25; // r14d
  size_t v26; // rsi
  unsigned int *v27; // rax
  unsigned int v28; // ecx
  _QWORD *v29; // rcx
  _QWORD *v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // r12
  _QWORD *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  _QWORD *v37; // rcx
  _QWORD *v38; // rbx
  __int64 v39; // rax
  _QWORD *v40; // rbp
  void *v41; // rdi
  __int64 *v42; // rbx
  unsigned __int64 v43; // rbp
  __int64 v44; // rsi
  __int64 v45; // rdi
  _QWORD *v46; // rbx
  __int64 v47; // rax
  _QWORD *v48; // rbp
  void *v49; // rdi
  __int64 *v50; // rbx
  unsigned __int64 v51; // rbp
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 *v54; // rbx
  unsigned __int64 v55; // rbp
  __int64 v56; // rsi
  __int64 v57; // rdi
  _QWORD *v59; // rax
  unsigned int v60; // ecx
  size_t v61; // rsi
  unsigned int *v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rdx
  unsigned __int8 v65; // al
  _QWORD *v66; // rax
  _QWORD *v67; // [rsp+18h] [rbp-140h]
  __int64 v68; // [rsp+20h] [rbp-138h]
  unsigned int v69; // [rsp+28h] [rbp-130h]
  unsigned __int8 v70; // [rsp+2Fh] [rbp-129h]
  char v71; // [rsp+3Eh] [rbp-11Ah] BYREF
  _QWORD *v72; // [rsp+40h] [rbp-118h] BYREF
  __int64 v73; // [rsp+48h] [rbp-110h]
  _QWORD v74[2]; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v75[24]; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v76; // [rsp+78h] [rbp-E0h]
  __int64 *v77; // [rsp+80h] [rbp-D8h]
  __int64 v78; // [rsp+90h] [rbp-C8h]
  __int64 v79; // [rsp+A0h] [rbp-B8h] BYREF
  _QWORD *v80; // [rsp+A8h] [rbp-B0h]
  int v81; // [rsp+B0h] [rbp-A8h]
  unsigned int v82; // [rsp+B4h] [rbp-A4h]
  int v83; // [rsp+B8h] [rbp-A0h]
  __int64 v84; // [rsp+C0h] [rbp-98h]
  __int64 v85; // [rsp+C8h] [rbp-90h]
  __int64 *v86; // [rsp+D0h] [rbp-88h]
  __int64 v87; // [rsp+D8h] [rbp-80h]
  __int64 v88; // [rsp+E0h] [rbp-78h]
  _QWORD *v89; // [rsp+E8h] [rbp-70h]
  __int64 v90; // [rsp+F8h] [rbp-60h]
  __int64 *v91; // [rsp+100h] [rbp-58h]
  _QWORD *v92; // [rsp+108h] [rbp-50h]

  v14 = *a1;
  v71 = 0;
  sub_4B0740(v75, v14);
  sub_FA3A80(&v79, v14);
  v15 = (_QWORD *)a3[1];
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v15 >= v16 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = *a3;
          v19 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_8;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_8:
    v15 = (_QWORD *)a3[1];
    if ( v15 )
LABEL_9:
      *((_DWORD *)v15 - 1) = 0;
  }
  v20 = sub_3D4AD0(*a2);
  v21 = (_QWORD *)a1[1];
  v22 = v20;
  if ( v21 )
  {
    v67 = &v21[*((unsigned int *)v21 - 1)];
    if ( v67 != v21 )
    {
      v70 = 0;
      v68 = 3LL * v20;
      while ( 1 )
      {
        sub_FA3BF0(&v79);
        if ( !v81 )
          break;
        if ( v82 < v22 )
        {
          v23 = v80;
          if ( v80 )
            goto LABEL_16;
LABEL_93:
          v59 = (_QWORD *)sub_186B270(0x38u);
          v23 = v59 + 1;
          v24 = 0;
          v80 = v59 + 1;
          *v59 = 2;
LABEL_21:
          while ( 1 )
          {
            v28 = *((_DWORD *)v23 - 2);
            if ( v28 >= v22 )
              break;
            v25 = (3 * v28 + 1) >> 1;
            v26 = 8 * (v25 + ((3 * v28 + 1) & 0xFFFFFFFE)) + 8;
            if ( 24 * v28 + 8 >= (unsigned int)v26 || v28 >= v25 )
            {
              exception = __cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v72, "Overflow encountered when expanding vector");
              v8 = v72;
              exception[1] = exception + 3;
              v9 = v73;
              *exception = off_1C63128;
              if ( v8 == v74 )
              {
                qmemcpy(exception + 3, v74, (unsigned int)(v9 + 1));
              }
              else
              {
                v10 = v74[0];
                exception[1] = v8;
                exception[3] = v10;
              }
              exception[2] = v9;
              v73 = 0;
              v72 = v74;
              LOBYTE(v74[0]) = 0;
              sub_233E40((__int64)&v72);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v27 = (unsigned int *)sub_186B300(v23 - 1, v26);
            v23 = v27 + 2;
            *v27 = v25;
            v80 = v27 + 2;
          }
          *((_DWORD *)v23 - 1) = v22;
          v29 = &v23[3 * v24];
          v30 = &v23[v68];
          if ( 3 * v24 != v68 )
          {
            v31 = v29;
            do
            {
              *v31 = 0;
              v31 += 3;
              *((_DWORD *)v31 - 2) = 0;
            }
            while ( v30 != v31 );
            if ( (((_BYTE)v30 - (_BYTE)v29) & 8) == 0 || (*((_DWORD *)v29 + 2) = 0, v29 += 3, v30 != v29) )
            {
              do
              {
                *((_DWORD *)v29 + 2) = 0;
                v29 += 6;
                *((_DWORD *)v29 - 4) = 0;
              }
              while ( v30 != v29 );
            }
          }
          goto LABEL_28;
        }
LABEL_29:
        if ( ++v83 == -1 )
        {
          v63 = v80;
          if ( v80 )
          {
            v64 = &v80[3 * *((unsigned int *)v80 - 1)];
            if ( v80 != v64 )
            {
              if ( ((24 * (unsigned __int8)*((_DWORD *)v80 - 1)) & 8) == 0
                || (*((_DWORD *)v80 + 4) = 0, v63 += 3, v64 != v63) )
              {
                do
                {
                  *((_DWORD *)v63 + 4) = 0;
                  v63 += 6;
                  *((_DWORD *)v63 - 2) = 0;
                }
                while ( v64 != v63 );
              }
            }
          }
          v83 = 1;
        }
        sub_4B0770(v75);
        if ( (unsigned __int8)sub_4B0A40(v75, *a2, *v21, &v79, &v71) && v71 && (v65 = sub_3D4C80(&v79)) != 0 )
        {
          v70 = v65;
        }
        else
        {
          v32 = *v21;
          if ( *v21 )
            ++*(_DWORD *)(v32 + 8);
          v33 = (_QWORD *)a3[1];
          if ( v33 )
          {
            v34 = *((_DWORD *)v33 - 1);
            if ( v34 == *((_DWORD *)v33 - 2) )
            {
              v60 = (3 * v34 + 1) >> 1;
              v61 = 8 * v60 + 8;
              if ( 8 * v34 + 8 >= (unsigned int)v61 || v34 >= v60 )
              {
                v3 = __cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v72, "Overflow encountered when expanding vector");
                v4 = v72;
                v3[1] = v3 + 3;
                v5 = v73;
                *v3 = off_1C63128;
                if ( v4 == v74 )
                {
                  qmemcpy(v3 + 3, v74, (unsigned int)(v5 + 1));
                }
                else
                {
                  v6 = v74[0];
                  v3[1] = v4;
                  v3[3] = v6;
                }
                v3[2] = v5;
                v72 = v74;
                v73 = 0;
                LOBYTE(v74[0]) = 0;
                sub_233E40((__int64)&v72);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v69 = (3 * v34 + 1) >> 1;
              v62 = (unsigned int *)sub_186B300(v33 - 1, v61);
              v33 = v62 + 2;
              a3[1] = (__int64)(v62 + 2);
              *v62 = v69;
              LODWORD(v62) = v62[1];
              v37 = &v33[(unsigned int)v62];
              v36 = (_DWORD)v62 + 1;
            }
            else
            {
              v35 = v34;
              v36 = v34 + 1;
              v37 = &v33[v35];
            }
          }
          else
          {
            v66 = (_QWORD *)sub_186B270(0x18u);
            v33 = v66 + 1;
            *v66 = 2;
            v36 = 1;
            a3[1] = (__int64)v33;
            v37 = v33;
          }
          *v37 = v32;
          *((_DWORD *)v33 - 1) = v36;
        }
        if ( v67 == ++v21 )
          goto LABEL_39;
      }
      v23 = v80;
      if ( v80 )
      {
LABEL_16:
        v24 = *((unsigned int *)v23 - 1);
        if ( (unsigned int)v24 < v22 )
          goto LABEL_21;
        *((_DWORD *)v23 - 1) = v22;
      }
      else if ( v22 )
      {
        goto LABEL_93;
      }
LABEL_28:
      v82 = v22;
      v81 = 1;
      goto LABEL_29;
    }
  }
  v70 = 0;
LABEL_39:
  v38 = v92;
  if ( v92 )
  {
    v39 = *((unsigned int *)v92 - 1);
    if ( (_DWORD)v39 )
    {
      v40 = &v92[v39];
      do
      {
        while ( *v38 )
        {
          v41 = (void *)(*v38++ - 8LL);
          sub_186B220(v41);
          if ( v40 == v38 )
          {
            v38 = v92;
            goto LABEL_45;
          }
        }
        ++v38;
      }
      while ( v38 != v40 );
      v38 = v92;
    }
LABEL_45:
    sub_186B220(v38 - 1);
  }
  v42 = v91;
  if ( v91 )
  {
    v43 = (unsigned __int64)&v91[*((unsigned int *)v91 - 1)];
    if ( (unsigned __int64)v91 >= v43 )
      goto LABEL_54;
    do
    {
      while ( 1 )
      {
        v44 = *v42;
        if ( *v42 )
        {
          v45 = v90;
          v19 = (*(_DWORD *)(v44 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( (unsigned __int64)++v42 >= v43 )
          goto LABEL_53;
      }
      sub_15D7BC0(v45, v44);
      ++v42;
    }
    while ( (unsigned __int64)v42 < v43 );
LABEL_53:
    v42 = v91;
    if ( v91 )
LABEL_54:
      sub_186B220(v42 - 1);
  }
  v46 = v89;
  if ( v89 )
  {
    v47 = *((unsigned int *)v89 - 1);
    if ( (_DWORD)v47 )
    {
      v48 = &v89[v47];
      do
      {
        while ( *v46 )
        {
          v49 = (void *)(*v46++ - 8LL);
          sub_186B220(v49);
          if ( v48 == v46 )
          {
            v46 = v89;
            goto LABEL_61;
          }
        }
        ++v46;
      }
      while ( v46 != v48 );
      v46 = v89;
    }
LABEL_61:
    sub_186B220(v46 - 1);
  }
  if ( v88 )
    sub_186B220((void *)(v88 - 8));
  if ( v87 )
    sub_186B220((void *)(v87 - 8));
  v50 = v86;
  if ( v86 )
  {
    v51 = (unsigned __int64)&v86[*((unsigned int *)v86 - 1)];
    if ( (unsigned __int64)v86 >= v51 )
      goto LABEL_74;
    do
    {
      while ( 1 )
      {
        v52 = *v50;
        if ( *v50 )
        {
          v53 = v85;
          v19 = (*(_DWORD *)(v52 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( (unsigned __int64)++v50 >= v51 )
          goto LABEL_73;
      }
      sub_15D7BC0(v53, v52);
      ++v50;
    }
    while ( (unsigned __int64)v50 < v51 );
LABEL_73:
    v50 = v86;
    if ( v86 )
LABEL_74:
      sub_186B220(v50 - 1);
  }
  if ( v84 )
    sub_186B220((void *)(v84 - 8));
  if ( v80 )
    sub_186B220(v80 - 1);
  if ( v78 )
    sub_186B220((void *)(v78 - 8));
  v54 = v77;
  if ( v77 )
  {
    v55 = (unsigned __int64)&v77[*((unsigned int *)v77 - 1)];
    if ( (unsigned __int64)v77 >= v55 )
      goto LABEL_89;
    do
    {
      while ( 1 )
      {
        v56 = *v54;
        if ( *v54 )
        {
          v57 = v76;
          v19 = (*(_DWORD *)(v56 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( (unsigned __int64)++v54 >= v55 )
          goto LABEL_88;
      }
      sub_15D7BC0(v57, v56);
      ++v54;
    }
    while ( (unsigned __int64)v54 < v55 );
LABEL_88:
    v54 = v77;
    if ( v77 )
LABEL_89:
      sub_186B220(v54 - 1);
  }
  return v70;
}

