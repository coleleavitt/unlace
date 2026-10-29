__int64 __fastcall sub_43A340(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v7; // eax
  unsigned int v8; // r13d
  int v10; // edx
  bool v11; // zf
  int v12; // edx
  int v13; // edx
  int v14; // eax
  int *v15; // r9
  __int16 v16; // ax
  int v17; // r14d
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // edx
  int v22; // r15d
  unsigned int v23; // r14d
  unsigned int v24; // eax
  unsigned int v25; // eax
  _QWORD *v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rsi
  int *v31; // r13
  __int64 v33; // rax
  unsigned int v34; // eax
  char *v35; // rdx
  __int64 v36; // r12
  __int64 v37; // rbp
  char *v38; // rax
  void *v39; // rdi
  int *v40; // r13
  __int64 v41; // r14
  unsigned int *v42; // rcx
  unsigned int v43; // esi
  int *v44; // rbx
  _QWORD *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 *v48; // rax
  __int64 v49; // r15
  __int64 v50; // r13
  __int64 v51; // rdx
  __int64 v52; // r8
  size_t v53; // rax
  __int64 v54; // rsi
  __int64 v55; // r10
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  int *v58; // r13
  _QWORD *v59; // rdi
  _QWORD *v60; // rdi
  unsigned int v61; // ebx
  _QWORD *v62; // rdi
  char *v63; // [rsp+0h] [rbp-108h]
  __int64 v64; // [rsp+0h] [rbp-108h]
  int v65; // [rsp+8h] [rbp-100h]
  __int64 v66; // [rsp+8h] [rbp-100h]
  __int64 v67; // [rsp+8h] [rbp-100h]
  int v68; // [rsp+10h] [rbp-F8h]
  int v69; // [rsp+1Ch] [rbp-ECh]
  __int64 v70; // [rsp+20h] [rbp-E8h]
  unsigned int segm_base; // [rsp+28h] [rbp-E0h]
  unsigned int v72; // [rsp+2Ch] [rbp-DCh]
  int *v73; // [rsp+38h] [rbp-D0h]
  unsigned int *v74; // [rsp+48h] [rbp-C0h] BYREF
  void *v75; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v76; // [rsp+58h] [rbp-B0h]
  void *ptr; // [rsp+70h] [rbp-98h] BYREF
  __int128 v78; // [rsp+78h] [rbp-90h]
  __int64 v79; // [rsp+90h] [rbp-78h] BYREF
  int v80; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v81; // [rsp+A0h] [rbp-68h]
  int *v82; // [rsp+A8h] [rbp-60h]
  int *v83; // [rsp+B0h] [rbp-58h]
  __int64 v84; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v85; // [rsp+C8h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  *(_DWORD *)(a4 + 8) = a2;
  v7 = *(_DWORD *)a3;
  if ( (*(_DWORD *)a3 & 0x4000) != 0 )
  {
    v75 = nullptr;
    ptr = nullptr;
    v76 = 0;
    v78 = 0;
    v34 = sub_375980(0x29u, &ptr, &v75, (unsigned int)a2, a3);
    if ( v34 > 1 )
      sub_375320((__int64)"bad response from processor_t::calc_switch_cases");
    if ( v34 == 1 )
    {
      v80 = 0;
      v81 = nullptr;
      v82 = &v80;
      v83 = &v80;
      v84 = 0;
      if ( (_QWORD)v76 )
      {
        v41 = 0;
        v42 = (unsigned int *)v75;
LABEL_92:
        v44 = &v80;
LABEL_83:
        v74 = v42;
        v44 = (int *)sub_43A1B0(&v79, (__int64)v44, (__int64)&unk_2389B34, &v74);
        while ( 1 )
        {
          v48 = (__int64 *)((char *)ptr + 24 * v41);
          v49 = 4 * v48[1];
          v50 = v49 >> 2;
          if ( v49 >> 2 )
          {
            v51 = *((_QWORD *)v44 + 6);
            v52 = *v48;
            v53 = 0;
            v54 = *((_QWORD *)v44 + 5);
            v55 = 4 * v51;
            v56 = v50 + v51;
            if ( *((_QWORD *)v44 + 7) < v56 )
            {
              v67 = v52;
              v64 = v55;
              v54 = qvector_reserve(v44 + 10, v54, v56, 4);
              v55 = v64;
              v52 = v67;
              *((_QWORD *)v44 + 5) = v54;
              v53 = 4LL * *((_QWORD *)v44 + 6) - v64;
            }
            v66 = v52;
            v63 = (char *)(v55 + v54);
            memmove(&v63[v49], v63, v53);
            v57 = 0;
            if ( v49 )
            {
              do
              {
                *(_DWORD *)&v63[v57] = *(_DWORD *)(v66 + v57);
                v57 += 4;
              }
              while ( v49 != v57 );
            }
            *((_QWORD *)v44 + 6) += v50;
          }
          if ( ++v41 >= (unsigned __int64)v76 )
            break;
          v45 = v81;
          v42 = (unsigned int *)((char *)v75 + 4 * v41);
          if ( !v81 )
            goto LABEL_92;
          v43 = *v42;
          v44 = &v80;
          do
          {
            while ( 1 )
            {
              v46 = v45[2];
              v47 = v45[3];
              if ( *((_DWORD *)v45 + 8) < v43 )
                break;
              v44 = (int *)v45;
              v45 = (_QWORD *)v45[2];
              if ( !v46 )
                goto LABEL_81;
            }
            v45 = (_QWORD *)v45[3];
          }
          while ( v47 );
LABEL_81:
          if ( v44 == &v80 || v43 < v44[8] )
            goto LABEL_83;
        }
        v58 = v82;
        if ( v82 == &v80 )
        {
          v59 = v81;
          v61 = 0;
        }
        else
        {
          do
          {
            v61 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))a4)(
                    a4,
                    (unsigned int)v58[8],
                    (__int64)(v58 + 10));
            if ( v61 )
              break;
            v58 = (int *)std::_Rb_tree_increment();
          }
          while ( v58 != &v80 );
          v59 = v81;
        }
      }
      else
      {
        v59 = nullptr;
        v61 = 0;
      }
      sub_437590(v59);
    }
    else
    {
      v61 = -1;
    }
    v35 = (char *)ptr;
    if ( ptr )
    {
      v36 = v78;
      if ( (_QWORD)v78 )
      {
        v37 = 0;
        do
        {
          v38 = &v35[24 * v37];
          v39 = *(void **)v38;
          if ( *(_QWORD *)v38 )
          {
            *((_QWORD *)v38 + 1) = 0;
            qfree(v39);
            v35 = (char *)ptr;
          }
          ++v37;
        }
        while ( v36 != v37 );
      }
      *(_QWORD *)&v78 = 0;
      qfree(v35);
    }
    if ( v75 )
    {
      *(_QWORD *)&v76 = 0;
      qfree(v75);
    }
  }
  else
  {
    v8 = *(_DWORD *)(a3 + 12);
    v72 = v8;
    if ( (v7 & 0x10000) != 0 )
      v72 = *(_DWORD *)(a3 + 28);
    v65 = 2;
    v10 = *(_DWORD *)a3 & 0x802;
    if ( (v7 & 0x802) != 0 )
    {
      if ( v10 == 2 )
      {
        v65 = (v7 & 8) == 0 ? 4 : 2;
      }
      else
      {
        v11 = v10 == 2048;
        v12 = 1;
        if ( !v11 )
          v12 = 8;
        v65 = v12;
      }
    }
    v13 = v7 & 0x404;
    v69 = *(_DWORD *)(a3 + 8);
    if ( (v7 & 0x40) != 0 )
    {
      v68 = 2;
      v19 = v65 * (*(unsigned __int16 *)(a3 + 4) - 1);
      v65 = -v65;
      v8 += v19;
      if ( (v7 & 0x404) != 0 )
      {
        if ( v13 == 4 )
        {
          v68 = 4;
        }
        else
        {
          v11 = v13 == 1024;
          v20 = 8;
          if ( v11 )
            v20 = 1;
          v68 = v20;
        }
      }
      v21 = v69 + v68;
      if ( (v7 & 0x400060) != 0x60 )
        v21 = *(_DWORD *)(a3 + 8);
      v69 = v21;
    }
    else
    {
      v68 = 2;
      if ( (v7 & 0x404) != 0 )
      {
        if ( v13 == 4 )
        {
          v68 = 4;
        }
        else
        {
          v14 = 8;
          if ( v13 == 1024 )
            v14 = 1;
          v68 = v14;
        }
      }
    }
    v70 = sub_4EE820(a1 + 194, a2);
    if ( v70 )
    {
      if ( (*(_BYTE *)(a3 + 1) & 2) != 0 )
        segm_base = *(_DWORD *)(a3 + 32);
      else
        segm_base = get_segm_base(v70);
      v16 = *(_WORD *)(a3 + 4);
      v80 = 0;
      v81 = nullptr;
      v82 = &v80;
      v83 = &v80;
      v84 = 0;
      if ( a5 )
      {
        if ( v16 )
        {
          v17 = 0;
          do
          {
            v18 = v17;
            if ( (*(_DWORD *)a3 & 1) != 0 && (*(_DWORD *)a3 & 0x10000) != 0 )
              v18 = sub_437870(a1, a3, v8);
            LODWORD(ptr) = sub_437AB0(a1, (unsigned int *)a3, v68 * v18 + v69, segm_base, v70, (__int64)v15);
            sub_41BFC0(&v79, (unsigned int *)&ptr);
            ++v17;
            v8 += v65;
          }
          while ( *(unsigned __int16 *)(a3 + 4) > v17 );
          v40 = v82;
          if ( v82 == &v80 )
          {
            v62 = v81;
            v61 = 0;
          }
          else
          {
            do
            {
              v61 = (**(__int64 (__fastcall ***)(__int64, _QWORD, _QWORD))a4)(a4, (unsigned int)v40[8], 0);
              if ( v61 )
                break;
              v40 = (int *)std::_Rb_tree_increment();
            }
            while ( v40 != &v80 );
            v62 = v81;
          }
        }
        else
        {
          v62 = nullptr;
          v61 = 0;
        }
        sub_4373C0(v62);
      }
      else
      {
        if ( v16 )
        {
          v22 = 0;
          do
          {
            v23 = v72 + v22;
            v24 = v22;
            if ( (*(_BYTE *)a3 & 1) != 0 )
            {
              v24 = sub_437870(a1, a3, v8);
              if ( (*(_BYTE *)(a3 + 2) & 1) == 0 )
              {
                v23 = v24;
                v24 = v22;
              }
            }
            v25 = sub_437AB0(a1, (unsigned int *)a3, v68 * v24 + v69, segm_base, v70, (__int64)v15);
            v26 = v81;
            LODWORD(v75) = v25;
            v15 = &v80;
            if ( !v81 )
              goto LABEL_43;
            do
            {
              while ( 1 )
              {
                v27 = v26[2];
                v28 = v26[3];
                if ( *((_DWORD *)v26 + 8) < v25 )
                  break;
                v15 = (int *)v26;
                v26 = (_QWORD *)v26[2];
                if ( !v27 )
                  goto LABEL_41;
              }
              v26 = (_QWORD *)v26[3];
            }
            while ( v28 );
LABEL_41:
            if ( v15 == &v80 || v25 < v15[8] )
            {
LABEL_43:
              ptr = &v75;
              v15 = (int *)sub_43A1B0(&v79, (__int64)v15, (__int64)&unk_2389B34, (unsigned int **)&ptr);
            }
            v29 = *((_QWORD *)v15 + 6);
            v30 = *((_QWORD *)v15 + 5);
            if ( *((_QWORD *)v15 + 7) < (unsigned __int64)(v29 + 1) )
            {
              v73 = v15;
              v33 = qvector_reserve(v15 + 10, v30, v29 + 1, 4);
              v15 = v73;
              v30 = v33;
              *((_QWORD *)v73 + 5) = v33;
              v29 = *((_QWORD *)v73 + 6);
            }
            *(_DWORD *)(v30 + 4 * v29) = v23;
            ++v22;
            ++*((_QWORD *)v15 + 6);
            v8 += v65;
          }
          while ( *(unsigned __int16 *)(a3 + 4) > v22 );
          v31 = v82;
          if ( v82 == &v80 )
          {
            v60 = v81;
            v61 = 0;
          }
          else
          {
            do
            {
              v61 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64, __int64))a4)(
                      a4,
                      (unsigned int)v31[8],
                      (__int64)(v31 + 10),
                      v28);
              if ( v61 )
                break;
              v31 = (int *)std::_Rb_tree_increment();
            }
            while ( v31 != &v80 );
            v60 = v81;
          }
        }
        else
        {
          v60 = nullptr;
          v61 = 0;
        }
        sub_437590(v60);
      }
    }
    else
    {
      return (unsigned int)-1;
    }
  }
  return v61;
}

