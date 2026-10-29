__int64 __fastcall sub_24A370(__int64 a1)
{
  __int64 result; // rax
  __int64 (*v2)(void); // rax
  __int64 estimated_alloc_size_0; // rax
  double v4; // xmm0_8
  __int64 v5; // rax
  void (*v6)(void); // rax
  __int64 (__fastcall *v7)(); // rax
  __int64 *v8; // rax
  __int64 v9; // rbp
  unsigned __int8 (*v10)(void); // rax
  __int64 v11; // rax
  double v12; // xmm0_8
  __int64 v13; // rax
  void (*v14)(void); // rax
  __int64 (__fastcall *v15)(); // rax
  __int64 *v16; // r13
  __int64 v17; // rbx
  __int64 (*v18)(); // rax
  __int64 v19; // rax
  double v20; // xmm0_8
  __int64 v21; // rax
  __int64 v22; // rdi
  void (*v23)(void); // rax
  __int64 (__fastcall *v24)(); // rax
  std::chrono::_V2::steady_clock **v25; // r12
  std::chrono::_V2::steady_clock *v26; // r14
  unsigned __int8 (*v27)(void); // rax
  __int64 v28; // rax
  double v29; // xmm0_8
  __int64 v30; // rax
  __int64 v31; // rdi
  void (*v32)(void); // rax
  void (*v33)(void); // rax
  __int64 (*v34)(); // rax
  void (*v35)(); // rax
  __int64 (*v36)(); // rax
  void (*v37)(void); // rax
  __int64 (*v38)(); // rax
  void (*v39)(void); // rax
  __int64 (*v40)(); // rax
  __int64 *v41; // [rsp+8h] [rbp-140h]
  std::chrono::_V2::steady_clock *v42; // [rsp+10h] [rbp-138h]
  std::chrono::_V2::steady_clock **v43; // [rsp+18h] [rbp-130h]
  __int64 *i; // [rsp+28h] [rbp-120h]
  __int64 *v45; // [rsp+30h] [rbp-118h]
  std::chrono::_V2::steady_clock **v47; // [rsp+40h] [rbp-108h]
  std::chrono::_V2::steady_clock **v48; // [rsp+48h] [rbp-100h]
  _QWORD v49[2]; // [rsp+50h] [rbp-F8h] BYREF
  char v50; // [rsp+60h] [rbp-E8h]
  double v51; // [rsp+68h] [rbp-E0h]
  std::chrono::_V2::steady_clock *v52; // [rsp+70h] [rbp-D8h]
  __int128 v53; // [rsp+80h] [rbp-C8h] BYREF
  char v54; // [rsp+90h] [rbp-B8h]
  double v55; // [rsp+98h] [rbp-B0h]
  __int64 v56; // [rsp+A0h] [rbp-A8h]
  __int128 v57; // [rsp+B0h] [rbp-98h] BYREF
  char v58; // [rsp+C0h] [rbp-88h]
  double v59; // [rsp+C8h] [rbp-80h]
  __int64 v60; // [rsp+D0h] [rbp-78h]
  __int128 v61; // [rsp+E0h] [rbp-68h] BYREF
  char v62; // [rsp+F0h] [rbp-58h]
  double v63; // [rsp+F8h] [rbp-50h]
  std::chrono::_V2::steady_clock *v64; // [rsp+100h] [rbp-48h]

  result = *(_QWORD *)(a1 + 32);
  if ( result )
  {
    v48 = (std::chrono::_V2::steady_clock **)(result + 8LL * *(unsigned int *)(result - 4));
    if ( v48 != (std::chrono::_V2::steady_clock **)result )
    {
      v47 = *(std::chrono::_V2::steady_clock ***)(a1 + 32);
      do
      {
        v42 = *v47;
        v2 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 16) + 48LL);
        if ( v2 != sub_2492C0 )
        {
          result = v2();
          if ( (_BYTE)result )
            break;
        }
        result = sub_18290A0(*(_QWORD *)(a1 + 8));
        if ( !(_BYTE)result )
          break;
        (*(void (__fastcall **)(std::chrono::_V2::steady_clock *))(*(_QWORD *)v42 + 56LL))(v42);
        v49[1] = 0;
        estimated_alloc_size_0 = Z3_get_estimated_alloc_size_0();
        if ( estimated_alloc_size_0 < 0 )
          v4 = (double)(int)(estimated_alloc_size_0 & 1 | ((unsigned __int64)estimated_alloc_size_0 >> 1))
             + (double)(int)(estimated_alloc_size_0 & 1 | ((unsigned __int64)estimated_alloc_size_0 >> 1));
        else
          v4 = (double)(int)estimated_alloc_size_0;
        v52 = v42;
        v51 = v4 * 0.00000095367431640625;
        v5 = std::chrono::_V2::steady_clock::now(v42);
        v50 = 1;
        v49[0] = v5;
        v6 = *(void (**)(void))(**(_QWORD **)(a1 + 16) + 80LL);
        if ( v6 != nullsub_115 )
          v6();
        v7 = *(__int64 (__fastcall **)())(*(_QWORD *)v42 + 40LL);
        if ( v7 == sub_24A370 )
        {
          v8 = *((__int64 **)v42 + 4);
          if ( v8 )
          {
            v45 = &v8[*((unsigned int *)v8 - 1)];
            if ( v8 != v45 )
            {
              for ( i = *((__int64 **)v42 + 4); v45 != i; ++i )
              {
                v9 = *i;
                v10 = *(unsigned __int8 (**)(void))(**((_QWORD **)v42 + 2) + 48LL);
                if ( (char *)v10 != (char *)sub_2492C0 )
                {
                  if ( v10() )
                    break;
                }
                if ( !(unsigned __int8)sub_18290A0(*((_QWORD *)v42 + 1)) )
                  break;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9);
                v54 = 0;
                v53 = 0;
                v11 = Z3_get_estimated_alloc_size_0();
                if ( v11 < 0 )
                  v12 = (double)(int)(v11 & 1 | ((unsigned __int64)v11 >> 1))
                      + (double)(int)(v11 & 1 | ((unsigned __int64)v11 >> 1));
                else
                  v12 = (double)(int)v11;
                v56 = v9;
                v55 = v12 * 0.00000095367431640625;
                v13 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)v9);
                v54 = 1;
                *(_QWORD *)&v53 = v13;
                v14 = *(void (**)(void))(**((_QWORD **)v42 + 2) + 80LL);
                if ( v14 != nullsub_115 )
                  v14();
                v15 = *(__int64 (__fastcall **)())(*(_QWORD *)v9 + 40LL);
                if ( v15 == sub_24A370 )
                {
                  v16 = *(__int64 **)(v9 + 32);
                  if ( v16 )
                  {
                    v41 = &v16[*((unsigned int *)v16 - 1)];
                    while ( v41 != v16 )
                    {
                      v17 = *v16;
                      v18 = *(__int64 (**)())(**(_QWORD **)(v9 + 16) + 48LL);
                      if ( v18 != sub_2492C0 && (unsigned __int8)v18()
                        || !(unsigned __int8)sub_18290A0(*(_QWORD *)(v9 + 8)) )
                      {
                        break;
                      }
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
                      v58 = 0;
                      v57 = 0;
                      v19 = Z3_get_estimated_alloc_size_0();
                      if ( v19 < 0 )
                        v20 = (double)(int)(v19 & 1 | ((unsigned __int64)v19 >> 1))
                            + (double)(int)(v19 & 1 | ((unsigned __int64)v19 >> 1));
                      else
                        v20 = (double)(int)v19;
                      v60 = v17;
                      v59 = v20 * 0.00000095367431640625;
                      v21 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)v17);
                      v22 = *(_QWORD *)(v9 + 16);
                      v58 = 1;
                      *(_QWORD *)&v57 = v21;
                      v23 = *(void (**)(void))(*(_QWORD *)v22 + 80LL);
                      if ( v23 != nullsub_115 )
                        v23();
                      v24 = *(__int64 (__fastcall **)())(*(_QWORD *)v17 + 40LL);
                      if ( v24 == sub_24A370 )
                      {
                        v25 = *(std::chrono::_V2::steady_clock ***)(v17 + 32);
                        if ( v25 )
                        {
                          v43 = &v25[*((unsigned int *)v25 - 1)];
                          if ( v25 != v43 )
                          {
                            while ( 1 )
                            {
                              v26 = *v25;
                              v27 = *(unsigned __int8 (**)(void))(**(_QWORD **)(v17 + 16) + 48LL);
                              if ( (char *)v27 != (char *)sub_2492C0 )
                              {
                                if ( v27() )
                                  break;
                              }
                              if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(v17 + 8)) )
                                break;
                              (*(void (__fastcall **)(std::chrono::_V2::steady_clock *))(*(_QWORD *)v26 + 56LL))(v26);
                              v62 = 0;
                              v61 = 0;
                              v28 = Z3_get_estimated_alloc_size_0();
                              if ( v28 < 0 )
                                v29 = (double)(int)(v28 & 1 | ((unsigned __int64)v28 >> 1))
                                    + (double)(int)(v28 & 1 | ((unsigned __int64)v28 >> 1));
                              else
                                v29 = (double)(int)v28;
                              v64 = v26;
                              v63 = v29 * 0.00000095367431640625;
                              v30 = std::chrono::_V2::steady_clock::now(v26);
                              v31 = *(_QWORD *)(v17 + 16);
                              v62 = 1;
                              *(_QWORD *)&v61 = v30;
                              v32 = *(void (**)(void))(*(_QWORD *)v31 + 80LL);
                              if ( v32 != nullsub_115 )
                                v32();
                              (*(void (__fastcall **)(std::chrono::_V2::steady_clock *))(*(_QWORD *)v26 + 40LL))(v26);
                              v33 = *(void (**)(void))(**(_QWORD **)(v17 + 16) + 64LL);
                              if ( v33 != nullsub_102 )
                                v33();
                              if ( *(_BYTE *)(v17 + 40) )
                              {
                                v34 = *(__int64 (**)())(**(_QWORD **)(v17 + 16) + 72LL);
                                if ( v34 == sub_2492D0 || !(unsigned __int8)v34() )
                                {
                                  sub_249DC0(&v61);
                                  break;
                                }
                              }
                              ++v25;
                              sub_249DC0(&v61);
                              if ( v43 == v25 )
                              {
                                v35 = *(void (**)())(**(_QWORD **)(v9 + 16) + 64LL);
                                if ( v35 == nullsub_102 )
                                  goto LABEL_45;
                                goto LABEL_62;
                              }
                            }
                          }
                        }
                      }
                      else
                      {
                        ((void (__fastcall *)(__int64))v24)(v17);
                      }
                      v35 = *(void (**)())(**(_QWORD **)(v9 + 16) + 64LL);
                      if ( v35 == nullsub_102 )
                      {
LABEL_45:
                        if ( !*(_BYTE *)(v9 + 40) )
                          goto LABEL_63;
                      }
                      else
                      {
LABEL_62:
                        v35();
                        if ( !*(_BYTE *)(v9 + 40) )
                          goto LABEL_63;
                      }
                      v36 = *(__int64 (**)())(**(_QWORD **)(v9 + 16) + 72LL);
                      if ( v36 == sub_2492D0 || !(unsigned __int8)v36() )
                      {
                        sub_249DC0(&v57);
                        break;
                      }
LABEL_63:
                      ++v16;
                      sub_249DC0(&v57);
                    }
                  }
                }
                else
                {
                  ((void (__fastcall *)(__int64))v15)(v9);
                }
                v37 = *(void (**)(void))(**((_QWORD **)v42 + 2) + 64LL);
                if ( v37 != nullsub_102 )
                  v37();
                if ( *((_BYTE *)v42 + 40) )
                {
                  v38 = *(__int64 (**)())(**((_QWORD **)v42 + 2) + 72LL);
                  if ( v38 == sub_2492D0 || !(unsigned __int8)v38() )
                  {
                    sub_249DC0(&v53);
                    break;
                  }
                }
                sub_249DC0(&v53);
              }
            }
          }
        }
        else
        {
          ((void (__fastcall *)(std::chrono::_V2::steady_clock *))v7)(v42);
        }
        v39 = *(void (**)(void))(**(_QWORD **)(a1 + 16) + 64LL);
        if ( v39 != nullsub_102 )
          v39();
        if ( *(_BYTE *)(a1 + 40) )
        {
          v40 = *(__int64 (**)())(**(_QWORD **)(a1 + 16) + 72LL);
          if ( v40 == sub_2492D0 || !(unsigned __int8)v40() )
            return sub_249DC0(v49);
        }
        sub_249DC0(v49);
        result = (__int64)++v47;
      }
      while ( v48 != v47 );
    }
  }
  return result;
}

