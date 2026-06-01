unsigned __int64 __fastcall sub_489A40(__int64 a1, int *a2, char a3, char a4)
{
  int v4; // r8d
  unsigned __int64 v6; // rax
  _QWORD *v10; // rbp
  unsigned __int64 v11; // r14
  __int64 (__fastcall *v12)(__int64); // rax
  unsigned __int64 v13; // rax
  _QWORD *v14; // rbx
  void (__fastcall *v15)(_QWORD *); // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r13
  char v21; // r15
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdi
  const char *v29; // rsi
  _QWORD **v30; // r13
  _QWORD *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r12
  char v35; // r13
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rsi
  __int64 v39; // rbp
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // r9
  __int64 *v47; // r15
  __int64 v48; // rbx
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  void (__fastcall *v54)(_QWORD *); // rax
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // [rsp+0h] [rbp-98h]
  __int64 v59; // [rsp+8h] [rbp-90h]
  __int64 v60; // [rsp+17h] [rbp-81h] BYREF
  char v61; // [rsp+1Fh] [rbp-79h]
  __int64 v62; // [rsp+20h] [rbp-78h] BYREF
  __int64 v63; // [rsp+28h] [rbp-70h]
  _QWORD *v64; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v65; // [rsp+38h] [rbp-60h]
  __int64 v66; // [rsp+40h] [rbp-58h]
  char v67; // [rsp+48h] [rbp-50h]
  unsigned __int64 v68; // [rsp+58h] [rbp-40h]

  v4 = *a2;
  v68 = __readfsqword(0x28u);
  if ( v4 >= 0 && a2[1] >= 0 && *((_QWORD *)a2 + 2) )
  {
    v6 = *((_QWORD *)a2 + 1);
    v58 = HIDWORD(v6);
    if ( HIDWORD(v6) == 0xFFFFFFFF )
    {
      if ( (_DWORD)v6 )
        return v68 - __readfsqword(0x28u);
      v58 = -1;
    }
    v10 = (_QWORD *)sub_4E07A0(*(_QWORD *)(a1 + 40), v58);
    if ( *a2 >= 0 )
    {
      v11 = *a2;
      v12 = *(__int64 (__fastcall **)(__int64))(*v10 + 24LL);
      v13 = v12 == folder_data_t__::vfunc_3 ? v10[2] : v12((__int64)v10);
      if ( v11 < v13 )
      {
        if ( a4 )
        {
          v14 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
          v15 = *(void (__fastcall **)(_QWORD *))(*v14 + 32LL);
          if ( (char *)v15 == (char *)folder_data_t__::vfunc_4 )
          {
            v16 = v14[1];
            if ( v16 )
            {
              v14[2] = 0;
              qfree(v16, (const char *)v58);
              v14[1] = 0;
              v14[3] = 0;
            }
            v17 = v14[4];
            if ( v17 )
            {
              v14[5] = 0;
              qfree(v17, (const char *)v58);
              v14[4] = 0;
              v14[6] = 0;
            }
            v14[10] = 0;
          }
          else
          {
            v15(v14);
          }
          v18 = v10[1] + 9 * v11;
          v19 = v14[1];
          v20 = *(_QWORD *)v18;
          v21 = *(_BYTE *)(v18 + 8);
          v22 = v14[2];
          if ( v14[3] < (unsigned __int64)(v22 + 1) )
          {
            v42 = qvector_reserve(v14 + 1, v19, v22 + 1, 9);
            v14[1] = v42;
            v19 = v42;
            v22 = v14[2];
          }
          v23 = 9 * v22 + v19;
          *(_QWORD *)v23 = v20;
          *(_BYTE *)(v23 + 8) = v21;
          v24 = v14[4];
          ++v14[2];
          v25 = *(_QWORD *)(v10[4] + 8 * v11);
          v26 = v14[5];
          if ( v14[6] < (unsigned __int64)(v26 + 1) )
          {
            v41 = qvector_reserve(v14 + 4, v24, v26 + 1, 8);
            v14[4] = v41;
            v24 = v41;
            v26 = v14[5];
          }
          *(_QWORD *)(v24 + 8 * v26) = v25;
          ++v14[5];
          v27 = *(_QWORD *)(a1 + 32);
          v66 = 0;
          v67 = 0;
          v64 = v14;
          v65 = v58;
          sub_4DE310(v27, &v64);
          sub_4DE2C0(&v64);
        }
        else
        {
          v29 = (const char *)v58;
          v30 = (_QWORD **)sub_4DE3B0(*(_QWORD *)(a1 + 32), v58);
          if ( v30 )
            goto LABEL_25;
          if ( (a3 & 4) == 0 )
          {
            (*(void (__fastcall **)(_QWORD **, _QWORD, int *))(**(_QWORD **)(a1 + 16) + 104LL))(
              &v64,
              *(_QWORD *)(a1 + 16),
              a2);
            if ( ((HIDWORD(v64) | (unsigned int)v64) & 0x80000000) == 0 )
            {
              if ( v66 )
              {
                if ( HIDWORD(v65) == 0xFFFFFFFF )
                {
                  v62 = -1;
                  v63 = (unsigned int)v65;
                  if ( (_DWORD)v65 )
                    return v68 - __readfsqword(0x28u);
                }
                else
                {
                  v62 = HIDWORD(v65);
                  v63 = (unsigned int)v65;
                }
                v45 = **(_QWORD **)(a1 + 24);
                v61 = 0;
                v60 = -1;
                dirtree_resolve_cursor(&v60, v45, &v62);
                v46 = v60;
                if ( v60 != -1 )
                {
                  if ( v61 )
                  {
                    v47 = *(__int64 **)(a1 + 32);
                    v48 = v47[1];
                    if ( v47[2] < (unsigned __int64)(v48 + 1) )
                    {
                      v59 = v60;
                      v57 = qvector_reserve(*(_QWORD *)(a1 + 32), *v47, v48 + 1, 32);
                      v48 = v47[1];
                      v46 = v59;
                      *v47 = v57;
                    }
                    v49 = *v47 + 32 * v48;
                    *(_OWORD *)(v49 + 8) = 0;
                    *(_QWORD *)v49 = 0;
                    *(_BYTE *)(v49 + 24) = 0;
                    ++v47[1];
                    *(_QWORD *)(v49 + 8) = v46;
                    *(_QWORD *)(v49 + 16) = (*(int (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)(a1 + 16) + 120LL))(
                                              *(_QWORD *)(a1 + 16),
                                              &v64);
                    v29 = (const char *)v58;
                    *(_BYTE *)(v49 + 24) = QT::QTreeView::isExpanded(*(_QWORD *)(a1 + 8), &v64, v50, v51, v52, v53);
                    v30 = (_QWORD **)sub_4DE3B0(*(_QWORD *)(a1 + 32), v58);
                    if ( v30 )
                    {
LABEL_25:
                      v31 = *v30;
                      if ( !*v30 )
                      {
                        v31 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
                        v54 = *(void (__fastcall **)(_QWORD *))(*v31 + 32LL);
                        if ( (char *)v54 == (char *)folder_data_t__::vfunc_4 )
                        {
                          v55 = v31[1];
                          if ( v55 )
                          {
                            v31[2] = 0;
                            qfree(v55, v29);
                            v31[1] = 0;
                            v31[3] = 0;
                          }
                          v56 = v31[4];
                          if ( v56 )
                          {
                            v31[5] = 0;
                            qfree(v56, v29);
                            v31[4] = 0;
                            v31[6] = 0;
                          }
                          v31[10] = 0;
                        }
                        else
                        {
                          v54(v31);
                        }
                        *v30 = v31;
                      }
                      v32 = v10[1] + 9 * v11;
                      v33 = v31[1];
                      v34 = *(_QWORD *)v32;
                      v35 = *(_BYTE *)(v32 + 8);
                      v36 = v31[2];
                      if ( v31[3] < (unsigned __int64)(v36 + 1) )
                      {
                        v44 = qvector_reserve(v31 + 1, v33, v36 + 1, 9);
                        v31[1] = v44;
                        v33 = v44;
                        v36 = v31[2];
                      }
                      v37 = 9 * v36 + v33;
                      *(_QWORD *)v37 = v34;
                      *(_BYTE *)(v37 + 8) = v35;
                      v38 = v31[4];
                      ++v31[2];
                      v39 = *(_QWORD *)(v10[4] + 8 * v11);
                      v40 = v31[5];
                      if ( v31[6] < (unsigned __int64)(v40 + 1) )
                      {
                        v43 = qvector_reserve(v31 + 4, v38, v40 + 1, 8);
                        v31[4] = v43;
                        v38 = v43;
                        v40 = v31[5];
                      }
                      *(_QWORD *)(v38 + 8 * v40) = v39;
                      ++v31[5];
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
  return v68 - __readfsqword(0x28u);
}
