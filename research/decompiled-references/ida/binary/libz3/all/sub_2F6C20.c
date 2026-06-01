void __fastcall sub_2F6C20(__int64 a1, __int64 a2)
{
  struct _Unwind_Exception *v3; // rax
  __int64 exception_class; // rbx
  __int64 v5; // rax
  char v6; // al
  __int64 v7; // r12
  unsigned int v8; // edx
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  _QWORD *v15; // r15
  _QWORD *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r14
  void *v22; // rbx
  __int64 v23; // rsi
  int *v24; // rsi
  unsigned int j; // r14d
  __int64 v26; // rbx
  void *v27; // r14
  int *v28; // r15
  __int64 v29; // r14
  int *v30; // r14
  void *v31; // rbx
  int *v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // r14
  __int64 v35; // r12
  _DWORD *v36; // rax
  _DWORD *v37; // rax
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r12
  _QWORD *v44; // rax
  __int64 v45; // rdx
  _QWORD *v46; // r10
  unsigned int v47; // r11d
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r15
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // r15
  __int64 v55; // rdi
  __int64 v56; // r14
  __int64 v57; // rdi
  __int64 v58; // r14
  __int64 v59; // [rsp+8h] [rbp-F8h]
  struct _Unwind_Exception *v60; // [rsp+18h] [rbp-E8h]
  __int64 v61; // [rsp+28h] [rbp-D8h]
  __int64 v62; // [rsp+38h] [rbp-C8h]
  int **v63; // [rsp+48h] [rbp-B8h]
  __int64 v64; // [rsp+48h] [rbp-B8h]
  __int64 v65; // [rsp+48h] [rbp-B8h]
  struct _Unwind_Exception *i; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v67; // [rsp+63h] [rbp-9Dh] BYREF
  unsigned int v68; // [rsp+64h] [rbp-9Ch] BYREF
  int *v69; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v70; // [rsp+70h] [rbp-90h] BYREF
  __int64 v71; // [rsp+78h] [rbp-88h] BYREF
  __int64 v72; // [rsp+80h] [rbp-80h] BYREF
  __int64 v73; // [rsp+88h] [rbp-78h]
  __int64 v74; // [rsp+90h] [rbp-70h] BYREF
  __int64 v75; // [rsp+98h] [rbp-68h]
  __int64 v76[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v77; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-48h]
  __int64 v79; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v80; // [rsp+C8h] [rbp-38h]

  sub_2FCDE0(a1 + 208);
  v3 = *(struct _Unwind_Exception **)(a2 + 8);
  if ( v3 )
  {
    v60 = (struct _Unwind_Exception *)((char *)v3 + 8 * HIDWORD(v3[-1].private_2));
    if ( v60 != v3 )
    {
      for ( i = *(struct _Unwind_Exception **)(a2 + 8); v60 != i; i = (struct _Unwind_Exception *)((char *)i + 8) )
      {
        exception_class = i->exception_class;
        v5 = *(_QWORD *)(a1 + 8);
        v76[1] = 0;
        v69 = nullptr;
        v62 = v5;
        v76[0] = v5;
        v77 = 0;
        v78 = 0;
        v79 = 1;
        v80 = 0;
        sub_182CBA0(qword_1C7F2C0, &v79);
        BYTE4(v79) &= ~1u;
        v68 = 0;
        LODWORD(v79) = 1;
        v75 = v62;
        v74 = 0;
        v70 = 0;
        v6 = sub_2F1460(a1, exception_class, (__int64)v76, &v69, (__int64)&v77, &v67, &v70, &v74, &v68);
        v7 = v74;
        v61 = v75;
        if ( v6 )
        {
          v8 = v68;
          v9 = *(_QWORD *)(a1 + 608) + 104LL * v68;
          if ( *(_DWORD *)v9 != 2 )
          {
            v10 = v70;
            *(_DWORD *)v9 = 2;
            *(_QWORD *)(v9 + 88) = v10;
            sub_2EBE70(a1, &v70, v8);
          }
          sub_2F5E10((_QWORD *)a1, v76);
          v11 = (__int64 *)(v9 + 8);
          if ( v7 )
            ++*(_DWORD *)(v7 + 8);
          v12 = *v11;
          if ( *v11 )
          {
            v13 = *(_QWORD *)(v9 + 16);
            v14 = (*(_DWORD *)(v12 + 8))-- == 1;
            if ( v14 )
              sub_15D7BC0(v13, v12);
          }
          v15 = *(_QWORD **)(v9 + 32);
          *(_QWORD *)(v9 + 8) = v7;
          if ( v15 )
          {
            v16 = &v15[*((unsigned int *)v15 - 1)];
            if ( v15 >= v16 )
              goto LABEL_20;
            do
            {
              while ( 1 )
              {
                v17 = *v15;
                if ( *v15 )
                {
                  v18 = *(_QWORD *)(v9 + 24);
                  v14 = (*(_DWORD *)(v17 + 8))-- == 1;
                  if ( v14 )
                    break;
                }
                if ( ++v15 >= v16 )
                  goto LABEL_19;
              }
              sub_15D7BC0(v18, v17);
              ++v15;
            }
            while ( v15 < v16 );
LABEL_19:
            v15 = *(_QWORD **)(v9 + 32);
            if ( v15 )
LABEL_20:
              *((_DWORD *)v15 - 1) = 0;
          }
          sub_2FD290(v9 + 24, v76);
          v19 = *(_QWORD *)(v9 + 40);
          v63 = (int **)(v9 + 40);
          if ( v19 )
          {
            v20 = *(unsigned int *)(v19 - 4);
            if ( (_DWORD)v20 )
            {
              v59 = v9;
              v21 = v19 + 32 * v20;
              do
              {
                v22 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v19);
                v23 = v19 + 16;
                v19 += 32;
                sub_182CBA0(v22, v23);
              }
              while ( v19 != v21 );
              v9 = v59;
              v19 = *(_QWORD *)(v59 + 40);
            }
            *(_DWORD *)(v19 - 4) = 0;
          }
          v24 = v69;
          for ( j = 0; v69; ++j )
          {
            if ( j >= *(v24 - 1) )
              break;
            sub_2F0130(v63, &v24[8 * j]);
            v24 = v69;
          }
          sub_27B950((__int64)qword_1C7F2C0, v9 + 48, (int *)&v77);
          *(_BYTE *)(v9 + 80) = v67;
        }
        else
        {
          if ( !*(_WORD *)(exception_class + 4) )
          {
            v44 = sub_2EB300(*(_QWORD **)(a1 + 656), *(_DWORD *)(a1 + 664), *(_QWORD *)(exception_class + 16));
            if ( v44 )
            {
              v48 = *((unsigned int *)v44 + 2);
              v49 = *(_QWORD *)(a1 + 608);
              v68 = v48;
              v65 = v49;
              v50 = 104 * v48;
              if ( !*(_DWORD *)(v49 + 104 * v48) )
              {
                v72 = 0;
                v73 = v62;
                sub_2EB940(a1, exception_class, &v72, &v74);
                v7 = v74;
                v61 = v75;
                sub_2F5340((_QWORD *)a1, &v72);
                v54 = *(_QWORD *)(a1 + 608) + v50;
                v26 = v72;
                v55 = *(_QWORD *)(v54 + 8);
                v62 = v73;
                if ( v55 != v72 )
                {
                  sub_2EB410(v55, *(_QWORD *)(v54 + 16));
                  *(_QWORD *)(v54 + 8) = v26;
                  if ( v26 )
                    ++*(_DWORD *)(v26 + 8);
                }
                goto LABEL_32;
              }
              v51 = sub_2EB300(v46, v47, v45);
              if ( v51 )
              {
                v52 = *((unsigned int *)v51 + 2);
                v68 = v52;
                v53 = 104 * v52;
                if ( *(_DWORD *)(v65 + 104 * v52) == 1 )
                {
                  v72 = 0;
                  v73 = v62;
                  sub_2EB940(a1, exception_class, &v72, &v74);
                  v7 = v74;
                  v61 = v75;
                  sub_2F5340((_QWORD *)a1, &v72);
                  v26 = v72;
                  v56 = v53 + *(_QWORD *)(a1 + 608);
                  v62 = v73;
                  v57 = *(_QWORD *)(v56 + 8);
                  if ( v72 != v57 )
                  {
                    sub_2EB410(v57, *(_QWORD *)(v56 + 16));
                    *(_QWORD *)(v56 + 8) = v26;
                    v58 = *(_QWORD *)(a1 + 608);
                    if ( v26 )
                      ++*(_DWORD *)(v26 + 8);
                    v56 = v53 + v58;
                  }
                  *(_BYTE *)(v56 + 80) = 1;
                  goto LABEL_32;
                }
              }
            }
          }
          ++*(_DWORD *)(exception_class + 8);
          v71 = exception_class;
          sub_2F13A0((_QWORD *)(a1 + 216), &v71);
        }
        v26 = 0;
LABEL_32:
        v27 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v77);
        sub_182CBA0(v27, &v79);
        v28 = v69;
        if ( v69 )
        {
          v29 = (unsigned int)*(v69 - 1);
          if ( (_DWORD)v29 )
          {
            v64 = v26;
            v30 = &v69[8 * v29];
            do
            {
              v31 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v28);
              v32 = v28 + 4;
              v28 += 8;
              sub_182CBA0(v31, v32);
            }
            while ( v28 != v30 );
            v26 = v64;
            v28 = v69;
          }
          sub_186B220(v28 - 2);
        }
        sub_2334C0(v76);
        if ( v7 )
        {
          v14 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(v61, v7);
        }
        if ( v26 )
        {
          v14 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(v62, v26);
        }
      }
    }
  }
  v33 = *(_QWORD *)(a1 + 608);
  if ( v33 )
  {
    v34 = v33 + 104LL * *(unsigned int *)(v33 - 4);
    while ( v34 != v33 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)v33 <= 1u )
        {
          v35 = *(_QWORD *)(v33 + 8);
          v36 = *(_DWORD **)(sub_15D1F10(v35) + 24);
          if ( !v36 || *v36 != 5 || v36[1] != 1 )
          {
            v37 = *(_DWORD **)(sub_15D1F10(v35) + 24);
            if ( !v37 || *v37 != 5 || v37[1] )
              break;
          }
        }
        v33 += 104;
        if ( v34 == v33 )
          return;
      }
      v77 = 0;
      v78 = 0;
      v79 = 1;
      v80 = 0;
      sub_182CBA0(qword_1C7F2C0, &v79);
      v41 = *(_QWORD *)(a1 + 176);
      BYTE4(v79) &= ~1u;
      LODWORD(v79) = 1;
      if ( !v41 )
      {
        sub_16669E0(a1 + 168);
        v41 = *(_QWORD *)(a1 + 176);
      }
      v42 = sub_166A700(v41, (unsigned int)&v77, 1, v38, v39, v40);
      v43 = v42;
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      sub_2EB410(*(_QWORD *)(v33 + 8), *(_QWORD *)(v33 + 16));
      *(_QWORD *)(v33 + 8) = v43;
      v33 += 104;
      sub_25A130((char *)&v77);
    }
  }
}

