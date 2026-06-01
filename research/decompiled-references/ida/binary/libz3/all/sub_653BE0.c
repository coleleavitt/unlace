void __fastcall sub_653BE0(__int64 *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  __int64 *v4; // r13
  __int64 v5; // r15
  void *v6; // r13
  __int64 v7; // r13
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned int i; // ebx
  int v16; // eax
  int *v17; // rdi
  char *v18; // rcx
  char *v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // r13d
  __int64 v22; // rax
  __int64 j; // rdx
  int v24; // eax
  int v25; // [rsp-8h] [rbp-138h]
  int *v26; // [rsp+0h] [rbp-130h]
  int v27[2]; // [rsp+8h] [rbp-128h] BYREF
  void *v28; // [rsp+10h] [rbp-120h] BYREF
  _BYTE v29[24]; // [rsp+20h] [rbp-110h] BYREF
  _BYTE v30[24]; // [rsp+38h] [rbp-F8h] BYREF
  _BYTE v31[16]; // [rsp+50h] [rbp-E0h] BYREF
  int v32; // [rsp+60h] [rbp-D0h]
  void *v33; // [rsp+68h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+70h] [rbp-C0h]
  int v35[46]; // [rsp+78h] [rbp-B8h] BYREF

  if ( *((_DWORD *)a1 + 756) == 7 )
  {
    v4 = (__int64 *)a1[4];
    v5 = *v4;
    sub_180C5A0(&v33, "auto-config");
    v6 = (void *)sub_185A820(v5, "engine", v4 + 1, &v33);
    sub_180C5A0(&v33, "datalog");
    if ( v33 == v6 )
    {
      *((_DWORD *)a1 + 756) = 0;
    }
    else
    {
      sub_180C5A0(&v33, "spacer");
      if ( v33 == v6 )
      {
        *((_DWORD *)a1 + 756) = 1;
      }
      else
      {
        sub_180C5A0(&v33, "bmc");
        if ( v33 == v6 )
        {
          *((_DWORD *)a1 + 756) = 2;
        }
        else
        {
          sub_180C5A0(&v33, "qbmc");
          if ( v33 == v6 )
          {
            *((_DWORD *)a1 + 756) = 3;
          }
          else
          {
            sub_180C5A0(&v33, "tab");
            if ( v33 == v6 )
            {
              *((_DWORD *)a1 + 756) = 4;
            }
            else
            {
              sub_180C5A0(&v33, "clp");
              if ( v33 == v6 )
              {
                *((_DWORD *)a1 + 756) = 5;
              }
              else
              {
                sub_180C5A0(&v33, "ddnf");
                if ( v33 == v6 )
                {
                  *((_DWORD *)a1 + 756) = 6;
                }
                else
                {
                  sub_180C5A0(&v33, "auto-config");
                  if ( v33 != v6 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_104888((__int64 *)&v33, "unsupported datalog engine type", v3);
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, &v33);
                    sub_233E40((__int64)&v33);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  if ( *((_DWORD *)a1 + 756) == 7 )
                  {
                    v7 = *a1;
                    v26 = v35;
                    v33 = v35;
                    *(_QWORD *)v27 = v7;
                    v34 = 0x1000000000LL;
                    sub_16669D0(&v28, v7);
                    sub_15F01E0(v29, v7);
                    sub_16744A0(v30, v7);
                    sub_1684300(v31, v7);
                    v32 = 0;
                    *((_DWORD *)a1 + 756) = 0;
                    if ( !a2
                      || (sub_657080((int)v27, (int)&v33, a2, v8, v9, v10, v25, (int)v35, v27[0], v28),
                          v11 = v32,
                          *((_DWORD *)a1 + 756) = v32,
                          !v11) )
                    {
                      v12 = 0;
                      while ( 1 )
                      {
                        v13 = a1[298];
                        if ( !v13 || v12 >= *(_DWORD *)(v13 - 4) )
                          break;
                        v14 = *(_QWORD *)(v13 + 8LL * v12);
                        sub_657080((int)v27, (int)&v33, *(_QWORD *)(v14 + 40), v8, v9, v10, v25, (int)v26, v27[0], v28);
                        for ( i = 0; i < *(_DWORD *)(v14 + 56); ++i )
                          sub_657080(
                            (int)v27,
                            (int)&v33,
                            *(_DWORD *)(v14 + 8LL * i + 80) & 0xFFFFFFF8,
                            v8,
                            v9,
                            v10,
                            v25,
                            (int)v26,
                            v27[0],
                            v28);
                        v16 = v32;
                        ++v12;
                        *((_DWORD *)a1 + 756) = v32;
                        if ( v16 )
                          goto LABEL_19;
                      }
                      v21 = *((_DWORD *)a1 + 724);
                      do
                      {
                        v22 = a1[364];
                        if ( !v22 || v21 >= *(_DWORD *)(v22 - 4) )
                          break;
                        for ( j = *(_QWORD *)(v22 + 8LL * v21); *(_WORD *)(j + 4) == 2; j = *(_QWORD *)(j + 24) )
                          ;
                        sub_657080((int)v27, (int)&v33, j, v8, v9, v10, v25, (int)v26, v27[0], v28);
                        v24 = v32;
                        ++v21;
                        *((_DWORD *)a1 + 756) = v32;
                      }
                      while ( !v24 );
                    }
LABEL_19:
                    v17 = (int *)v33;
                    v18 = (char *)v33 + 8 * (unsigned int)v34;
                    v19 = (char *)v33;
                    if ( v33 != v18 )
                    {
                      do
                      {
                        v20 = *(_QWORD *)v19;
                        v19 += 8;
                        *(_BYTE *)(v20 + 6) &= ~1u;
                      }
                      while ( v18 != v19 );
                    }
                    LODWORD(v34) = 0;
                    if ( v17 != v26 )
                    {
                      if ( v17 )
                        sub_186B220(v17);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

