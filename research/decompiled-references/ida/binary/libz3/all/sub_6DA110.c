__int64 __fastcall sub_6DA110(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // r15
  __int64 v8; // r13
  unsigned int *v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  bool v17; // zf
  unsigned int v18; // ecx
  unsigned int *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // r13d
  _QWORD *v23; // r15
  unsigned int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r14
  int v30; // ecx
  __int64 v31; // rdi
  __int64 v32; // rax
  unsigned int v33; // ecx
  size_t v34; // rsi
  unsigned int *v35; // rax
  unsigned int v36; // r13d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // rbx
  __int64 v45; // rax
  _QWORD *v46; // rbx
  _QWORD *v47; // r15
  void *v48; // rdi
  char **v50; // r12
  char **exception; // r12
  int v52; // [rsp-8h] [rbp-D8h]
  int v53; // [rsp+0h] [rbp-D0h]
  int v54; // [rsp+0h] [rbp-D0h]
  unsigned __int64 *v55; // [rsp+8h] [rbp-C8h]
  int v56; // [rsp+8h] [rbp-C8h]
  __int64 v57; // [rsp+10h] [rbp-C0h]
  int v58; // [rsp+10h] [rbp-C0h]
  int v59; // [rsp+18h] [rbp-B8h]
  int v60; // [rsp+18h] [rbp-B8h]
  unsigned __int8 v61; // [rsp+1Fh] [rbp-B1h]
  int v62; // [rsp+20h] [rbp-B0h]
  __int64 *v63; // [rsp+20h] [rbp-B0h]
  int v64[2]; // [rsp+28h] [rbp-A8h]
  char v65; // [rsp+28h] [rbp-A8h]
  unsigned __int64 v66; // [rsp+30h] [rbp-A0h]
  int v67; // [rsp+30h] [rbp-A0h]
  int v68; // [rsp+38h] [rbp-98h]
  int v69; // [rsp+38h] [rbp-98h]
  __int64 v70; // [rsp+38h] [rbp-98h]
  int v72; // [rsp+40h] [rbp-90h]
  unsigned int v73; // [rsp+48h] [rbp-88h]
  void *v74; // [rsp+48h] [rbp-88h]
  unsigned int v75; // [rsp+4Ch] [rbp-84h]
  int v76; // [rsp+4Ch] [rbp-84h]
  int v77; // [rsp+50h] [rbp-80h]
  __int64 v78; // [rsp+50h] [rbp-80h]
  int v79; // [rsp+58h] [rbp-78h]
  int v80[2]; // [rsp+58h] [rbp-78h]
  __int64 *v81; // [rsp+60h] [rbp-70h]
  int v82; // [rsp+60h] [rbp-70h]
  __int64 v83; // [rsp+68h] [rbp-68h]
  __int64 v84; // [rsp+68h] [rbp-68h]
  int v85; // [rsp+68h] [rbp-68h]
  int v86; // [rsp+70h] [rbp-60h]
  unsigned int v87; // [rsp+74h] [rbp-5Ch] BYREF
  unsigned __int64 v88; // [rsp+78h] [rbp-58h] BYREF
  __int64 v89; // [rsp+80h] [rbp-50h] BYREF
  __int64 v90; // [rsp+88h] [rbp-48h]
  int v91; // [rsp+90h] [rbp-40h]
  int v92; // [rsp+98h] [rbp-38h]
  int v93; // [rsp+A0h] [rbp-30h]
  void *v94; // [rsp+A8h] [rbp-28h]
  int v95; // [rsp+B0h] [rbp-20h]
  __int64 v96; // [rsp+B8h] [rbp-18h]

  v83 = a3;
  v87 = 0;
  v88 = 0;
  v55 = &v88;
  v61 = sub_6D9B60(a1, a2, &v87, a3, 0, &v88);
  v66 = v88;
  if ( !v61 )
    goto LABEL_63;
  v57 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 72LL))(
                     *(_QWORD *)(a1 + 24),
                     v87);
  *(_QWORD *)v64 = *(_QWORD *)(a1 + 8);
  if ( a3 )
    *(_DWORD *)(a3 + 8) += 2;
  if ( v66 )
  {
    v6 = *(_DWORD *)(v66 - 4);
    if ( v6 )
    {
      LODWORD(v7) = v64[0];
      v8 = 0;
      v9 = nullptr;
      v75 = v6 - 1;
      v68 = 0;
      v77 = v83;
      v81 = &v89;
      while ( 1 )
      {
        v10 = (__int64 *)(v66 + 8LL * v75);
        v11 = 0x7FFFFFFF8LL;
        v12 = *v10;
        if ( *v10 )
          v11 = 8LL * (unsigned int)(*(_DWORD *)(v12 - 4) - 1);
        v79 = sub_15D1F10(*(_QWORD *)(v12 + v11));
        sub_180C5A0(v81, "w");
        v13 = sub_15E3D10(
                v7,
                (int)v81,
                (int)&qword_18D6CD0,
                0,
                0,
                v79,
                1,
                v52,
                v53,
                (int)v55,
                v57,
                v59,
                (int)v81,
                v64[0],
                v66,
                v68,
                a4,
                v73,
                v77,
                v79,
                (int)v81,
                v83,
                v86,
                v88,
                v89,
                v90,
                v91,
                v92,
                v93,
                v94,
                v95,
                v96);
        v16 = sub_15DC610(v7, v13, 0, 0, v14, v15, v54, v56, v58, v60, v62, v65, v67, v69, v72, v74);
        *(_QWORD *)v80 = v16;
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
        if ( v8 && (v17 = *(_DWORD *)(v8 + 8) == 1, --*(_DWORD *)(v8 + 8), v17) )
        {
          sub_15D7BC0(*(_QWORD *)v64, v8);
          if ( !v9 )
          {
LABEL_45:
            v40 = (_QWORD *)sub_186B270(0x18u);
            v9 = (unsigned int *)(v40 + 1);
            *v40 = 2;
            v20 = 1;
            v19 = v9;
            goto LABEL_16;
          }
        }
        else if ( !v9 )
        {
          goto LABEL_45;
        }
        v18 = *(v9 - 1);
        if ( v18 == *(v9 - 2) )
        {
          v36 = (3 * v18 + 1) >> 1;
          v37 = 8 * v36 + 8;
          if ( 8 * v18 + 8 >= (unsigned int)v37 || v18 >= v36 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v81, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v81);
            sub_233E40((__int64)v81);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v38 = (unsigned int *)sub_186B300(v9 - 2, v37);
          v9 = v38 + 2;
          *v38 = v36;
          v39 = v38[1];
          v19 = &v38[2 * v39 + 2];
          v20 = v39 + 1;
        }
        else
        {
          v19 = &v9[2 * v18];
          v20 = v18 + 1;
        }
LABEL_16:
        *(_QWORD *)v19 = v84;
        v21 = *v10;
        *(v9 - 1) = v20;
        if ( v21 )
        {
          v22 = 0;
          do
          {
            if ( v22 >= *(_DWORD *)(v21 - 4) )
              break;
            v23 = (_QWORD *)(v21 + 8LL * v22);
            v24 = v20;
            if ( *(v9 - 2) == v20 )
            {
              v33 = (3 * v20 + 1) >> 1;
              v34 = 8 * v33 + 8;
              if ( 8 * v20 + 8 >= (unsigned int)v34 || v20 >= v33 )
              {
                v50 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v81, "Overflow encountered when expanding vector");
                *v50 = (char *)off_1C63128;
                sub_2333C0(v50 + 1, v81);
                sub_233E40((__int64)v81);
                __cxa_throw(v50, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v73 = (3 * v20 + 1) >> 1;
              v35 = (unsigned int *)sub_186B300(v9 - 2, v34);
              v21 = *v10;
              v9 = v35 + 2;
              *v35 = v73;
              v24 = v35[1];
            }
            ++v22;
            *(_QWORD *)&v9[2 * v24] = *v23;
            v20 = v24 + 1;
            *(v9 - 1) = v24 + 1;
          }
          while ( v21 );
        }
        v25 = sub_15E1AF0(*(_QWORD *)(a1 + 8));
        v26 = v25;
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
        if ( v70 )
        {
          v73 = *(_DWORD *)(v70 + 8);
          *(_DWORD *)(v70 + 8) = v73 - 1;
          if ( v73 == 1 )
            sub_15D7BC0(*(_QWORD *)v64, v70);
        }
        v27 = *(_QWORD *)(a1 + 8);
        sub_15E1B70(v27);
        a4 = sub_15E1B70(v27);
        v28 = sub_15E1AF0(*(_QWORD *)(a1 + 8));
        v29 = v28;
        if ( v28 )
          ++*(_DWORD *)(v28 + 8);
        if ( v84 )
        {
          v73 = *(_DWORD *)(v84 + 8);
          *(_DWORD *)(v84 + 8) = v73 - 1;
          if ( v73 == 1 )
            sub_15D7BC0(*(_QWORD *)v64, v84);
        }
        v30 = *(v9 - 1);
        *(_QWORD *)v9 = v78;
        v31 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)&v9[2 * (v30 - 1)] = *(_QWORD *)v80;
        v32 = sub_15E1AF0(v31);
        v83 = v32;
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        if ( v78 )
        {
          v73 = *(_DWORD *)(v78 + 8);
          *(_DWORD *)(v78 + 8) = v73 - 1;
          if ( v73 == 1 )
            sub_15D7BC0(*(_QWORD *)v64, v78);
        }
        (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 24) + 88LL))(*(_QWORD *)(a1 + 24), *(int **)v80);
        v7 = *(_QWORD *)(a1 + 8);
        if ( !v76 )
          goto LABEL_48;
        v68 = v26;
        v8 = *(_QWORD *)v80;
        v75 = v76 - 1;
        *(v9 - 1) = 0;
        v77 = v83;
        LODWORD(v83) = v29;
      }
    }
  }
  v29 = v83;
  v26 = 0;
  v9 = nullptr;
  *(_QWORD *)v80 = 0;
  v7 = *(_QWORD *)v64;
  v63 = &v89;
LABEL_48:
  v90 = v7;
  v89 = a4;
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  sub_14EC390(a1 + 32, v57, v83, v63);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 24) + 80LL))(
    *(_QWORD *)(a1 + 24),
    v87,
    v89,
    v83);
  v41 = v89;
  if ( v89 )
  {
    v42 = v90;
    v17 = (*(_DWORD *)(v89 + 8))-- == 1;
    if ( v17 )
    {
      sub_15D7BC0(v42, v41);
      if ( !v9 )
        goto LABEL_54;
      goto LABEL_53;
    }
  }
  if ( v9 )
LABEL_53:
    sub_186B220(v9 - 2);
LABEL_54:
  if ( v26 && (v17 = *(_DWORD *)(v26 + 8) == 1, --*(_DWORD *)(v26 + 8), v17) )
  {
    sub_15D7BC0(*(_QWORD *)v64, v26);
    if ( !v29 )
      goto LABEL_58;
  }
  else if ( !v29 )
  {
    goto LABEL_58;
  }
  v17 = (*(_DWORD *)(v29 + 8))-- == 1;
  if ( v17 )
  {
    sub_15D7BC0(*(_QWORD *)v64, v29);
    v43 = v83;
    if ( !v83 )
      goto LABEL_60;
    goto LABEL_59;
  }
LABEL_58:
  v43 = v83;
  if ( !v83 )
    goto LABEL_60;
LABEL_59:
  v82 = *(_DWORD *)(v43 + 8);
  *(_DWORD *)(v43 + 8) = v82 - 1;
  if ( v82 == 1 )
  {
    sub_15D7BC0(*(_QWORD *)v64, v43);
    v44 = *(_QWORD *)v80;
    if ( !*(_QWORD *)v80 )
      goto LABEL_63;
    goto LABEL_61;
  }
LABEL_60:
  v44 = *(_QWORD *)v80;
  if ( !*(_QWORD *)v80 )
    goto LABEL_63;
LABEL_61:
  v85 = *(_DWORD *)(v44 + 8);
  *(_DWORD *)(v44 + 8) = v85 - 1;
  if ( v85 == 1 )
    sub_15D7BC0(*(_QWORD *)v64, v44);
LABEL_63:
  if ( v66 )
  {
    v45 = *(unsigned int *)(v66 - 4);
    if ( (_DWORD)v45 )
    {
      v46 = (_QWORD *)v66;
      v47 = (_QWORD *)(v66 + 8 * v45);
      do
      {
        while ( *v46 )
        {
          v48 = (void *)(*v46++ - 8LL);
          sub_186B220(v48);
          if ( v46 == v47 )
            goto LABEL_68;
        }
        ++v46;
      }
      while ( v46 != v47 );
    }
LABEL_68:
    sub_186B220((void *)(v66 - 8));
  }
  return v61;
}

