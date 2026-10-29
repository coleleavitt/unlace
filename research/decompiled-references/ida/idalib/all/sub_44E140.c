__int64 __fastcall sub_44E140(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v7; // eax
  __int64 v9; // r14
  int v10; // edx
  bool v11; // zf
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int *v15; // r9
  __int16 v16; // ax
  int v17; // r14d
  int v18; // eax
  int v19; // edx
  int v20; // edx
  __int64 v21; // rdx
  int v22; // r15d
  __int64 v23; // r14
  __int64 v24; // rax
  void *v25; // rax
  int *v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v36; // rax
  unsigned int v37; // eax
  char *v38; // rdx
  __int64 v39; // r12
  __int64 v40; // rbp
  char *v41; // rax
  void *v42; // rdi
  __int64 v43; // r13
  __int64 v44; // r14
  unsigned __int64 *v45; // rcx
  unsigned __int64 v46; // rsi
  int *v47; // rbx
  int *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 *v51; // rax
  __int64 v52; // r15
  __int64 v53; // r13
  __int64 v54; // rdx
  __int64 v55; // r8
  size_t v56; // rax
  __int64 v57; // rsi
  __int64 v58; // r10
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // r13
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  int *v65; // rdi
  int *v66; // rdi
  unsigned int v67; // ebx
  int *v68; // rdi
  int v69; // [rsp+0h] [rbp-118h]
  char *v70; // [rsp+0h] [rbp-118h]
  __int64 v71; // [rsp+0h] [rbp-118h]
  int v72; // [rsp+8h] [rbp-110h]
  __int64 v73; // [rsp+8h] [rbp-110h]
  __int64 v74; // [rsp+8h] [rbp-110h]
  int v75; // [rsp+10h] [rbp-108h]
  __int64 v76; // [rsp+18h] [rbp-100h]
  __int64 v77; // [rsp+20h] [rbp-F8h]
  unsigned __int64 segm_base; // [rsp+28h] [rbp-F0h]
  __int64 v79; // [rsp+30h] [rbp-E8h]
  __int64 v80; // [rsp+38h] [rbp-E0h]
  int *v81; // [rsp+48h] [rbp-D0h]
  unsigned __int64 *v82; // [rsp+58h] [rbp-C0h] BYREF
  void *v83; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v84; // [rsp+68h] [rbp-B0h]
  void *ptr; // [rsp+80h] [rbp-98h] BYREF
  __int128 v86; // [rsp+88h] [rbp-90h]
  __int64 v87; // [rsp+A0h] [rbp-78h] BYREF
  int v88; // [rsp+A8h] [rbp-70h] BYREF
  int *v89; // [rsp+B0h] [rbp-68h]
  int *v90; // [rsp+B8h] [rbp-60h]
  int *v91; // [rsp+C0h] [rbp-58h]
  __int64 v92; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v93; // [rsp+D8h] [rbp-40h]

  v93 = __readfsqword(0x28u);
  *(_QWORD *)(a4 + 8) = a2;
  v7 = *(_DWORD *)a3;
  v69 = *(_DWORD *)a3 & 0x4000;
  if ( v69 )
  {
    v83 = nullptr;
    ptr = nullptr;
    v84 = 0;
    v86 = 0;
    v37 = sub_3792E0(0x29u, &ptr, &v83, a2, a3);
    if ( v37 > 1 )
      sub_378C70((__int64)"bad response from processor_t::calc_switch_cases");
    if ( v37 == 1 )
    {
      v88 = 0;
      v89 = nullptr;
      v90 = &v88;
      v91 = &v88;
      v92 = 0;
      if ( (_QWORD)v84 )
      {
        v44 = 0;
        v45 = (unsigned __int64 *)v83;
LABEL_94:
        v47 = &v88;
LABEL_85:
        v82 = v45;
        v47 = (int *)sub_44DFB0(&v87, v47, (__int64)&unk_23ADC14, &v82);
        while ( 1 )
        {
          v51 = (__int64 *)((char *)ptr + 24 * v44);
          v52 = 8 * v51[1];
          v53 = v52 >> 3;
          if ( v52 >> 3 )
          {
            v54 = *((_QWORD *)v47 + 6);
            v55 = *v51;
            v56 = 0;
            v57 = *((_QWORD *)v47 + 5);
            v58 = 8 * v54;
            v59 = v53 + v54;
            if ( *((_QWORD *)v47 + 7) < v59 )
            {
              v74 = v55;
              v71 = v58;
              v57 = qvector_reserve(v47 + 10, v57, v59, 8);
              v58 = v71;
              v55 = v74;
              *((_QWORD *)v47 + 5) = v57;
              v56 = 8LL * *((_QWORD *)v47 + 6) - v71;
            }
            v73 = v55;
            v70 = (char *)(v58 + v57);
            memmove(&v70[v52], v70, v56);
            v60 = 0;
            if ( v52 )
            {
              do
              {
                *(_QWORD *)&v70[v60] = *(_QWORD *)(v73 + v60);
                v60 += 8;
              }
              while ( v52 != v60 );
            }
            *((_QWORD *)v47 + 6) += v53;
          }
          if ( ++v44 >= (unsigned __int64)v84 )
            break;
          v48 = v89;
          v45 = (unsigned __int64 *)((char *)v83 + 8 * v44);
          if ( !v89 )
            goto LABEL_94;
          v46 = *v45;
          v47 = &v88;
          do
          {
            while ( 1 )
            {
              v49 = *((_QWORD *)v48 + 2);
              v50 = *((_QWORD *)v48 + 3);
              if ( *((_QWORD *)v48 + 4) < v46 )
                break;
              v47 = v48;
              v48 = *((int **)v48 + 2);
              if ( !v49 )
                goto LABEL_83;
            }
            v48 = *((int **)v48 + 3);
          }
          while ( v50 );
LABEL_83:
          if ( v47 == &v88 || v46 < *((_QWORD *)v47 + 4) )
            goto LABEL_85;
        }
        v61 = (__int64)v90;
        if ( v90 == &v88 )
        {
          v65 = v89;
          v67 = 0;
        }
        else
        {
          do
          {
            v62 = *(_QWORD *)(v61 + 32);
            v67 = (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a4)(a4, v62, v61 + 40);
            if ( v67 )
              break;
            v61 = std::_Rb_tree_increment(v61, v62, v63, v64);
          }
          while ( (int *)v61 != &v88 );
          v65 = v89;
        }
      }
      else
      {
        v65 = nullptr;
        v67 = 0;
      }
      sub_44B2A0(v65);
    }
    else
    {
      v67 = -1;
    }
    v38 = (char *)ptr;
    if ( ptr )
    {
      v39 = v86;
      if ( (_QWORD)v86 )
      {
        v40 = 0;
        do
        {
          v41 = &v38[24 * v40];
          v42 = *(void **)v41;
          if ( *(_QWORD *)v41 )
          {
            *((_QWORD *)v41 + 1) = 0;
            qfree(v42);
            v38 = (char *)ptr;
          }
          ++v40;
        }
        while ( v39 != v40 );
      }
      *(_QWORD *)&v86 = 0;
      qfree(v38);
    }
    if ( v83 )
    {
      *(_QWORD *)&v84 = 0;
      qfree(v83);
    }
  }
  else
  {
    v80 = *(_QWORD *)(a3 + 16);
    v9 = v80;
    if ( (v7 & 0x10000) != 0 )
      v9 = *(_QWORD *)(a3 + 48);
    v72 = 2;
    v10 = *(_DWORD *)a3 & 0x802;
    if ( (v7 & 0x802) != 0 )
    {
      if ( v10 == 2 )
      {
        v72 = (v7 & 8) == 0 ? 4 : 2;
      }
      else
      {
        v11 = v10 == 2048;
        v12 = 1;
        if ( !v11 )
          v12 = 8;
        v72 = v12;
      }
    }
    v13 = v7 & 0x404;
    v76 = *(_QWORD *)(a3 + 8);
    if ( (v7 & 0x40) != 0 )
    {
      v75 = 2;
      v19 = v72 * (*(unsigned __int16 *)(a3 + 4) - 1);
      v72 = -v72;
      v80 += v19;
      if ( (v7 & 0x404) != 0 )
      {
        if ( v13 == 4 )
        {
          v75 = 4;
        }
        else
        {
          v20 = 8;
          if ( v13 == 1024 )
            v20 = 1;
          v75 = v20;
        }
      }
      v21 = v76 + v75;
      if ( (v7 & 0x400060) != 0x60 )
        v21 = *(_QWORD *)(a3 + 8);
      v76 = v21;
    }
    else
    {
      v75 = 2;
      if ( (v7 & 0x404) != 0 )
      {
        if ( v13 == 4 )
        {
          v75 = 4;
        }
        else
        {
          v14 = 8;
          if ( v13 == 1024 )
            v14 = 1;
          v75 = v14;
        }
      }
    }
    v77 = sub_505D70(a1 + 203, a2);
    if ( v77 )
    {
      if ( (*(_BYTE *)(a3 + 1) & 2) != 0 )
        segm_base = *(_QWORD *)(a3 + 56);
      else
        segm_base = get_segm_base(v77);
      v16 = *(_WORD *)(a3 + 4);
      v88 = 0;
      v89 = nullptr;
      v90 = &v88;
      v91 = &v88;
      v92 = 0;
      if ( a5 )
      {
        if ( v16 )
        {
          v17 = 0;
          do
          {
            v18 = v17;
            if ( (*(_DWORD *)a3 & 1) != 0 && (*(_DWORD *)a3 & 0x10000) != 0 )
              v18 = sub_44B580(a1, a3, v80 + v69);
            ptr = (void *)sub_44B830(a1, (unsigned int *)a3, v76 + v75 * v18, segm_base, v77, (__int64)v15);
            sub_42FD40(&v87, (unsigned __int64 *)&ptr);
            ++v17;
            v69 += v72;
          }
          while ( *(unsigned __int16 *)(a3 + 4) > v17 );
          v43 = (__int64)v90;
          if ( v90 == &v88 )
          {
            v68 = v89;
            v67 = 0;
          }
          else
          {
            do
            {
              v67 = (**(__int64 (__fastcall ***)(__int64, _QWORD, _QWORD))a4)(a4, *(_QWORD *)(v43 + 32), 0);
              if ( v67 )
                break;
              v43 = std::_Rb_tree_increment(v43);
            }
            while ( (int *)v43 != &v88 );
            v68 = v89;
          }
        }
        else
        {
          v68 = nullptr;
          v67 = 0;
        }
        sub_44B0D0(v68);
      }
      else
      {
        if ( v16 )
        {
          v79 = v9;
          v22 = 0;
          do
          {
            v23 = (int)v79;
            LODWORD(v24) = v22;
            if ( *(_DWORD *)(a1[3] + 24) == 8 )
              v23 = v79;
            if ( (*(_BYTE *)a3 & 1) != 0 )
            {
              v24 = sub_44B580(a1, a3, v80 + v69);
              if ( (*(_BYTE *)(a3 + 2) & 1) == 0 )
              {
                v23 = v24;
                LODWORD(v24) = v22;
              }
            }
            v25 = (void *)sub_44B830(a1, (unsigned int *)a3, v76 + v75 * (int)v24, segm_base, v77, (__int64)v15);
            v26 = v89;
            v83 = v25;
            v15 = &v88;
            if ( !v89 )
              goto LABEL_45;
            do
            {
              while ( 1 )
              {
                v27 = *((_QWORD *)v26 + 2);
                v28 = *((_QWORD *)v26 + 3);
                if ( *((_QWORD *)v26 + 4) < (unsigned __int64)v25 )
                  break;
                v15 = v26;
                v26 = *((int **)v26 + 2);
                if ( !v27 )
                  goto LABEL_43;
              }
              v26 = *((int **)v26 + 3);
            }
            while ( v28 );
LABEL_43:
            if ( v15 == &v88 || (unsigned __int64)v25 < *((_QWORD *)v15 + 4) )
            {
LABEL_45:
              ptr = &v83;
              v15 = (int *)sub_44DFB0(&v87, v15, (__int64)&unk_23ADC14, (unsigned __int64 **)&ptr);
            }
            v29 = *((_QWORD *)v15 + 6);
            v30 = *((_QWORD *)v15 + 5);
            if ( *((_QWORD *)v15 + 7) < (unsigned __int64)(v29 + 1) )
            {
              v81 = v15;
              v36 = qvector_reserve(v15 + 10, v30, v29 + 1, 8);
              v15 = v81;
              v30 = v36;
              *((_QWORD *)v81 + 5) = v36;
              v29 = *((_QWORD *)v81 + 6);
            }
            *(_QWORD *)(v30 + 8 * v29) = v23;
            ++v22;
            ++*((_QWORD *)v15 + 6);
            ++v79;
            v69 += v72;
          }
          while ( *(unsigned __int16 *)(a3 + 4) > v22 );
          v31 = (__int64)v90;
          if ( v90 == &v88 )
          {
            v66 = v89;
            v67 = 0;
          }
          else
          {
            do
            {
              v32 = *(_QWORD *)(v31 + 32);
              v67 = (**(__int64 (__fastcall ***)(__int64, __int64, __int64, __int64))a4)(a4, v32, v31 + 40, v28);
              if ( v67 )
                break;
              v31 = std::_Rb_tree_increment(v31, v32, v33, v34);
            }
            while ( (int *)v31 != &v88 );
            v66 = v89;
          }
        }
        else
        {
          v66 = nullptr;
          v67 = 0;
        }
        sub_44B2A0(v66);
      }
    }
    else
    {
      return (unsigned int)-1;
    }
  }
  return v67;
}
