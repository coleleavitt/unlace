__int64 __fastcall sub_DE8000(__int64 a1, _QWORD *a2, unsigned int a3, __int64 *a4)
{
  char **v4; // rbp
  char **exception; // rbp
  __int64 v8; // r15
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // r15
  _QWORD *v14; // rdx
  int i; // eax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 *j; // r15
  __int64 v20; // r13
  __int64 v21; // rbp
  int v22; // eax
  _DWORD *v23; // rdx
  __int64 *v24; // rax
  __int64 *v25; // rdx
  __int64 v26; // r14
  __int64 *v27; // r13
  __int64 v28; // rcx
  int v29; // eax
  __int64 *v30; // rcx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // eax
  unsigned int v37; // ecx
  size_t v38; // rsi
  unsigned int *v39; // rax
  unsigned int v40; // ecx
  size_t v41; // rsi
  unsigned int v42; // r13d
  unsigned int *v43; // rax
  __int64 v44; // rcx
  unsigned int v45; // ecx
  __int64 v46; // rsi
  __int64 v47; // rdi
  _QWORD *v49; // rax
  int v50; // [rsp+0h] [rbp-148h]
  _QWORD *v51; // [rsp+8h] [rbp-140h]
  __int64 v52; // [rsp+10h] [rbp-138h]
  __int64 v54; // [rsp+28h] [rbp-120h]
  __int64 v56; // [rsp+38h] [rbp-110h]
  __int64 v57; // [rsp+40h] [rbp-108h]
  __int64 v58; // [rsp+40h] [rbp-108h]
  unsigned int v59; // [rsp+4Ch] [rbp-FCh]
  __int64 v60; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD *v61; // [rsp+78h] [rbp-D0h]
  _QWORD v62[2]; // [rsp+80h] [rbp-C8h] BYREF
  int v63[8]; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v64[4]; // [rsp+B0h] [rbp-98h] BYREF
  _QWORD v65[3]; // [rsp+D0h] [rbp-78h] BYREF
  void *v66; // [rsp+E8h] [rbp-60h]
  __int64 v67; // [rsp+F8h] [rbp-50h]
  void *v68; // [rsp+100h] [rbp-48h]

  v8 = sub_DE7AF0(a2, a1, (__int64 *)(a1 + 24), a3, a4);
  v54 = v8;
  sub_15F01E0(v63, *a2);
  if ( v8 && a3 && (unsigned __int8)sub_15F0480(v63, v8) )
  {
    v65[2] = 0;
    v66 = nullptr;
    v67 = 0;
    v65[0] = &off_1C62200;
    v68 = nullptr;
    v51 = (_QWORD *)sub_15F0510(v63, v8);
    sub_15D0A90(v65, v8, 1);
    v10 = *a4;
    v61 = nullptr;
    v60 = *a2;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v11 = (_QWORD *)sub_186B270(0x18u);
    v12 = v11 + 1;
    v13 = 0;
    v61 = v11 + 1;
    v14 = v11 + 1;
    *v11 = 2;
    for ( i = 1; ; i = (_DWORD)v43 + 1 )
    {
      ++v13;
      *v12 = v10;
      *((_DWORD *)v14 - 1) = i;
      if ( (unsigned int)v13 >= a3 )
        break;
      while ( 1 )
      {
        v10 = a4[v13];
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        v16 = *((_DWORD *)v14 - 1);
        if ( v16 == *((_DWORD *)v14 - 2) )
          break;
        ++v13;
        v14[v16] = v10;
        *((_DWORD *)v14 - 1) = v16 + 1;
        if ( (unsigned int)v13 >= a3 )
          goto LABEL_13;
      }
      v40 = (3 * v16 + 1) >> 1;
      v41 = 8 * v40 + 8;
      v42 = v40;
      if ( 8 * v16 + 8 >= (unsigned int)v41 || v16 >= v40 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v64, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v64);
        sub_233E40((__int64)v64);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v43 = (unsigned int *)sub_186B300(v14 - 1, v41);
      v44 = v43[1];
      v14 = v43 + 2;
      *v43 = v42;
      v61 = v14;
      LODWORD(v43) = v44;
      v12 = &v14[v44];
    }
LABEL_13:
    v17 = v51[9];
    if ( v17 )
    {
      v56 = v17 + 8LL * *(unsigned int *)(v17 - 4);
      if ( v17 != v56 )
      {
        v52 = v51[9];
        do
        {
          v18 = *(__int64 **)(*(_QWORD *)v52 + 16LL);
          if ( v18 )
          {
            for ( j = &v18[*((unsigned int *)v18 - 1)]; j != v18; ++v18 )
            {
              v20 = *v18;
              v21 = *(_QWORD *)(*v18 + 8);
              v22 = sub_15F0200(v63);
              v23 = *(_DWORD **)(v21 + 24);
              if ( v23 )
              {
                if ( v22 == *v23 && !v23[1] && !(unsigned __int8)sub_15D37A0(v65, v21) )
                {
                  if ( *(_QWORD *)(a1 + 56) )
                  {
                    sub_15D0A90(v65, v21, 1);
                    v24 = *(__int64 **)(*(_QWORD *)(a1 + 56) + 24LL);
                    if ( v24 )
                    {
                      v25 = &v24[*((unsigned int *)v24 - 1)];
                      if ( v25 != v24 )
                      {
                        while ( 1 )
                        {
                          v26 = *v24;
                          if ( *(_QWORD *)(*v24 + 24) == *(_QWORD *)(v21 + 16) )
                            break;
                          if ( v25 == ++v24 )
                            goto LABEL_19;
                        }
                        sub_15F4F10(v62, v20, &v60);
                        LODWORD(v51) = 0;
                        v27 = nullptr;
                        while ( (unsigned int)v51 < (unsigned int)sub_15F01A0(v63, v21) )
                        {
                          v34 = sub_15F01C0((int)v63, *(_QWORD *)(v62[0] + 40LL), (int)v51, v31, v32, v33, v50, v51);
                          v35 = v34;
                          if ( v27 )
                          {
                            v36 = *((_DWORD *)v27 - 1);
                            if ( v36 == *((_DWORD *)v27 - 2) )
                            {
                              v37 = (3 * v36 + 1) >> 1;
                              v38 = 8 * v37 + 8;
                              if ( 8 * v36 + 8 >= (unsigned int)v38 || v36 >= v37 )
                              {
                                v4 = (char **)__cxa_allocate_exception(0x28u);
                                sub_24ABB0(v64, "Overflow encountered when expanding vector");
                                *v4 = (char *)off_1C63128;
                                sub_2333C0(v4 + 1, v64);
                                sub_233E40((__int64)v64);
                                __cxa_throw(
                                  v4,
                                  (struct type_info *)&`typeinfo for'default_exception,
                                  (void (*)(void *))sub_230E50);
                              }
                              v59 = (3 * v36 + 1) >> 1;
                              v57 = v35;
                              v39 = (unsigned int *)sub_186B300(v27 - 1, v38);
                              v27 = (__int64 *)(v39 + 2);
                              v35 = v57;
                              *v39 = v59;
                              LODWORD(v39) = v39[1];
                              v30 = &v27[(unsigned int)v39];
                              v29 = (_DWORD)v39 + 1;
                            }
                            else
                            {
                              v28 = v36;
                              v29 = v36 + 1;
                              v30 = &v27[v28];
                            }
                          }
                          else
                          {
                            v58 = v34;
                            v49 = (_QWORD *)sub_186B270(0x18u);
                            v27 = v49 + 1;
                            v35 = v58;
                            v30 = v49 + 1;
                            *v49 = 2;
                            v29 = 1;
                          }
                          LODWORD(v51) = (_DWORD)v51 + 1;
                          *v30 = v35;
                          *((_DWORD *)v27 - 1) = v29;
                        }
                        if ( v27 )
                          v45 = *((_DWORD *)v27 - 1);
                        else
                          v45 = 0;
                        sub_DE7AF0(a2, v26, (__int64 *)(v26 + 24), v45, v27);
                        v46 = v62[0];
                        if ( v62[0] )
                        {
                          v47 = v62[1];
                          if ( (*(_DWORD *)(v62[0] + 8LL))-- == 1 )
                            sub_15D7BC0(v47, v46);
                        }
                        if ( v27 )
                          sub_186B220(v27 - 1);
                      }
                    }
                  }
                }
              }
LABEL_19:
              ;
            }
          }
          v52 += 8;
        }
        while ( v56 != v52 );
      }
    }
    sub_24E680(&v60);
    v65[0] = &off_1C62200;
    if ( v68 )
      sub_186B220(v68);
    if ( v66 )
      sub_186B220(v66);
  }
  return v54;
}

