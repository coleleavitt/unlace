__int64 __fastcall sub_3D2520(__int64 a1, __int64 *a2, __int64 *a3, _QWORD *a4, void *a5, int a6)
{
  _QWORD *exception; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r14
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  _QWORD *v26; // r14
  unsigned int v27; // r12d
  char v28; // dl
  __int64 v29; // r15
  _QWORD *v30; // rdx
  unsigned int v31; // ecx
  __int64 v32; // rsi
  int v33; // ecx
  _QWORD *v34; // rsi
  _QWORD *v35; // r12
  _QWORD *v36; // r15
  __int64 v37; // rsi
  __int64 v38; // rdi
  bool v39; // zf
  _QWORD *v40; // rcx
  unsigned int i; // r15d
  __int64 v42; // r12
  _QWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rsi
  int v46; // eax
  _QWORD *v47; // rsi
  __int64 *v48; // rbx
  unsigned __int64 v49; // rbp
  __int64 v50; // rsi
  _QWORD *v52; // r15
  __int64 v53; // rdi
  unsigned int v54; // ecx
  size_t v55; // rsi
  unsigned int *v56; // rax
  unsigned int v57; // r8d
  size_t v58; // rsi
  unsigned int *v59; // rax
  __int64 v60; // rax
  int v61; // ecx
  int v62; // r12d
  void *v63; // r12
  int v64; // ecx
  int v65; // r8d
  int v66; // r9d
  __int64 v67; // r13
  __int64 v68; // r15
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  void *v71; // [rsp+0h] [rbp-138h]
  int *v72; // [rsp+8h] [rbp-130h]
  int *v73; // [rsp+10h] [rbp-128h]
  _QWORD *v74; // [rsp+18h] [rbp-120h]
  int v75; // [rsp+18h] [rbp-120h]
  unsigned int v76; // [rsp+18h] [rbp-120h]
  int *v77; // [rsp+20h] [rbp-118h]
  int v79[2]; // [rsp+30h] [rbp-108h]
  int v81[2]; // [rsp+40h] [rbp-F8h]
  int v82[2]; // [rsp+48h] [rbp-F0h]
  int *v83; // [rsp+50h] [rbp-E8h]
  char v84; // [rsp+58h] [rbp-E0h]
  unsigned int v85; // [rsp+5Ch] [rbp-DCh]
  int v86[2]; // [rsp+70h] [rbp-C8h] BYREF
  int v87; // [rsp+78h] [rbp-C0h] BYREF
  int v88[4]; // [rsp+80h] [rbp-B8h] BYREF
  int v89[2]; // [rsp+90h] [rbp-A8h] BYREF
  _QWORD *v90; // [rsp+98h] [rbp-A0h]
  int v91[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v92; // [rsp+A8h] [rbp-90h]
  _QWORD v93[2]; // [rsp+B0h] [rbp-88h] BYREF
  int v94[5]; // [rsp+C0h] [rbp-78h] BYREF
  int v95; // [rsp+D4h] [rbp-64h]

  v74 = a4;
  *(_QWORD *)v94 = 0;
  v77 = v94;
  sub_14B7810((int)v88, a1, (int)v94, (int)a4, (int)a5, a6, v88);
  sub_18572D0(v94);
  v72 = v86;
  *(_QWORD *)v86 = 0;
  v73 = &v87;
  sub_E66730(&v87, a1, v86, 1);
  sub_E67510(&v87, a2, a3);
  sub_14B9B80(v88, a3);
  v17 = a2[1];
  if ( v17 && *(_DWORD *)(v17 - 4) )
  {
    *(_QWORD *)v89 = a1;
    v90 = nullptr;
    sub_1694970(v94, a1);
    v21 = sub_15DE060(a1, *(_QWORD *)(a1 + 856), v18, v19, v20);
    *(_QWORD *)v79 = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    v22 = *v74 + 128LL;
    *(_QWORD *)v81 = *v74;
    *(_QWORD *)v82 = v22;
    LOBYTE(v81[0]) = sub_13608A0(v22);
    sub_1360B80(v22, 1);
    v25 = a2[1];
    v26 = nullptr;
    if ( v25 )
    {
      v27 = 0;
      v83 = v91;
      do
      {
        if ( v27 >= *(_DWORD *)(v25 - 4) )
          break;
        v28 = sub_15D2CB0(a1, *(_QWORD *)(v25 + 8LL * v27));
        v25 = a2[1];
        v29 = *(_QWORD *)(v25 + 8LL * v27);
        if ( v28 )
        {
          sub_1374250(v91, *v74, v29);
          v52 = *(_QWORD **)v91;
          *(_QWORD *)v91 = v26;
          if ( v26 )
          {
            v53 = v92;
            v39 = (*((_DWORD *)v26 + 2))-- == 1;
            if ( v39 )
              sub_15D7BC0(v53, v26);
          }
          sub_1692DB0(v94, *(_QWORD *)(a2[1] + 8LL * v27), v52, *(_QWORD *)v79, 0);
          v25 = a2[1];
          v26 = v52;
        }
        else
        {
          if ( v29 )
            ++*(_DWORD *)(v29 + 8);
          v30 = v90;
          if ( v90 )
          {
            v31 = *((_DWORD *)v90 - 1);
            if ( v31 == *((_DWORD *)v90 - 2) )
            {
              v57 = (3 * v31 + 1) >> 1;
              v58 = 8 * v57 + 8;
              if ( 8 * v31 + 8 >= (unsigned int)v58 || v31 >= v57 )
              {
                exception = __cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v91, "Overflow encountered when expanding vector");
                v7 = *(_QWORD **)v91;
                exception[1] = exception + 3;
                v8 = v92;
                *exception = off_1C63128;
                if ( v7 == v93 )
                {
                  qmemcpy(exception + 3, v93, (unsigned int)(v8 + 1));
                }
                else
                {
                  v12 = v93[0];
                  exception[1] = v7;
                  exception[3] = v12;
                }
                exception[2] = v8;
                v92 = 0;
                *(_QWORD *)v91 = v93;
                LOBYTE(v93[0]) = 0;
                sub_233E40((__int64)v91);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v85 = (3 * v31 + 1) >> 1;
              v59 = (unsigned int *)sub_186B300(v90 - 1, v58);
              v23 = v85;
              v30 = v59 + 2;
              v90 = v59 + 2;
              *v59 = v85;
              v60 = v59[1];
              v61 = v60;
              v34 = &v30[v60];
              v25 = a2[1];
              v33 = v61 + 1;
            }
            else
            {
              v32 = v31;
              v33 = v31 + 1;
              v34 = &v90[v32];
            }
          }
          else
          {
            v70 = (_QWORD *)sub_186B270(0x18u);
            v30 = v70 + 1;
            *v70 = 2;
            v33 = 1;
            v25 = a2[1];
            v90 = v30;
            v34 = v30;
          }
          *v34 = v29;
          *((_DWORD *)v30 - 1) = v33;
        }
        ++v27;
      }
      while ( v25 );
    }
    if ( v95 )
    {
      *(_QWORD *)v91 = 0;
      v63 = (void *)sub_1434DA0(a1, (unsigned int)v91);
      sub_18572D0(v91);
      (*(void (__fastcall **)(void *, int *))(*(_QWORD *)v63 + 24LL))(v63, v94);
      v67 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v63 + 16LL))(v63);
      v68 = *a3;
      if ( *a3 )
      {
        ++*(_DWORD *)(v68 + 8);
        sub_1435270(
          (_DWORD)v63,
          v68,
          (_DWORD)a3,
          v64,
          v65,
          v66,
          (_DWORD)v71,
          (__int64)v86,
          (__int64)&v87,
          (__int64)v74,
          (__int64)v94);
        v39 = (*(_DWORD *)(v68 + 8))-- == 1;
        if ( v39 )
          sub_15D7BC0(v67, v68);
      }
      else
      {
        sub_1435270(
          (_DWORD)v63,
          0,
          (_DWORD)a3,
          v64,
          v65,
          v66,
          (_DWORD)v71,
          (__int64)v86,
          (__int64)&v87,
          (__int64)v74,
          (__int64)v94);
      }
      sub_14B9B80(v71, a3);
      (**(void (__fastcall ***)(void *))v63)(v63);
      sub_186B220(v63);
    }
    if ( v90 && *((_DWORD *)v90 - 1) )
    {
      v62 = *(_DWORD *)(a1 + 712);
      *(_DWORD *)(a1 + 712) = 0;
      sub_3E8B00(
        *v74,
        (int)v89,
        (int)a3,
        (int)a5,
        v23,
        v24,
        (int)v71,
        (int)v72,
        (int)v73,
        v74,
        (int)v77,
        (int)a3,
        v79[0],
        a5,
        v81[0],
        v82[0],
        (int)v83,
        v84);
      *(_DWORD *)(a1 + 712) = v62;
    }
    v35 = (_QWORD *)a2[1];
    if ( v35 )
    {
      v36 = &v35[*((unsigned int *)v35 - 1)];
      if ( v35 >= v36 )
        goto LABEL_28;
      do
      {
        while ( 1 )
        {
          v37 = *v35;
          if ( *v35 )
          {
            v38 = *a2;
            v39 = (*(_DWORD *)(v37 + 8))-- == 1;
            if ( v39 )
              break;
          }
          if ( ++v35 >= v36 )
            goto LABEL_27;
        }
        sub_15D7BC0(v38, v37);
        ++v35;
      }
      while ( v35 < v36 );
LABEL_27:
      v35 = (_QWORD *)a2[1];
      if ( v35 )
LABEL_28:
        *((_DWORD *)v35 - 1) = 0;
    }
    v40 = v90;
    for ( i = 0; v40; *((_DWORD *)v43 - 1) = v46 )
    {
      if ( i >= *((_DWORD *)v40 - 1) )
        break;
      v42 = v40[i];
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      v43 = (_QWORD *)a2[1];
      if ( v43 )
      {
        v44 = *((_DWORD *)v43 - 1);
        if ( v44 == *((_DWORD *)v43 - 2) )
        {
          v54 = (3 * v44 + 1) >> 1;
          v55 = 8 * v54 + 8;
          if ( 8 * v44 + 8 >= (unsigned int)v55 || v44 >= v54 )
          {
            v9 = __cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v91, "Overflow encountered when expanding vector");
            v10 = *(_QWORD **)v91;
            v9[1] = v9 + 3;
            v11 = v92;
            *v9 = off_1C63128;
            if ( v10 == v93 )
            {
              qmemcpy(v9 + 3, v93, (unsigned int)(v11 + 1));
            }
            else
            {
              v13 = v93[0];
              v9[1] = v10;
              v9[3] = v13;
            }
            v9[2] = v11;
            *(_QWORD *)v91 = v93;
            v92 = 0;
            LOBYTE(v93[0]) = 0;
            sub_233E40((__int64)v91);
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v76 = (3 * v44 + 1) >> 1;
          v56 = (unsigned int *)sub_186B300(v43 - 1, v55);
          v43 = v56 + 2;
          a2[1] = (__int64)(v56 + 2);
          *v56 = v76;
          LODWORD(v56) = v56[1];
          v47 = &v43[(unsigned int)v56];
          v40 = v90;
          v46 = (_DWORD)v56 + 1;
        }
        else
        {
          v45 = v44;
          v46 = v44 + 1;
          v47 = &v43[v45];
        }
      }
      else
      {
        v69 = (_QWORD *)sub_186B270(0x18u);
        v43 = v69 + 1;
        *v69 = 2;
        v40 = v90;
        v46 = 1;
        a2[1] = (__int64)v43;
        v47 = v43;
      }
      *v47 = v42;
      ++i;
    }
    sub_1360B80(*(_QWORD *)v82, LOBYTE(v81[0]));
    if ( v26 )
    {
      v39 = (*((_DWORD *)v26 + 2))-- == 1;
      if ( v39 )
        sub_15D7BC0(a1, v26);
    }
    if ( *(_QWORD *)v79 )
    {
      v75 = *(_DWORD *)(*(_QWORD *)v79 + 8LL);
      *(_DWORD *)(*(_QWORD *)v79 + 8LL) = v75 - 1;
      if ( v75 == 1 )
        sub_15D7BC0(a1, *(_QWORD *)v79);
    }
    sub_1695230(v77);
    v48 = v90;
    if ( v90 )
    {
      v49 = (unsigned __int64)&v90[*((unsigned int *)v90 - 1)];
      if ( (unsigned __int64)v90 >= v49 )
        goto LABEL_51;
      do
      {
        while ( 1 )
        {
          v50 = *v48;
          if ( *v48 )
          {
            v39 = (*(_DWORD *)(v50 + 8))-- == 1;
            if ( v39 )
              break;
          }
          if ( (unsigned __int64)++v48 >= v49 )
            goto LABEL_50;
        }
        sub_15D7BC0(*(_QWORD *)v89, v50);
        ++v48;
      }
      while ( (unsigned __int64)v48 < v49 );
LABEL_50:
      v48 = v90;
      if ( v90 )
LABEL_51:
        sub_186B220(v48 - 1);
    }
  }
  sub_E66770(v73);
  sub_18572D0(v72);
  return sub_14B63F0(v71);
}

