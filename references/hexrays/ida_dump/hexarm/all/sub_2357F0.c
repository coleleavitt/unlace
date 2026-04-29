__int64 __fastcall sub_2357F0(__int64 a1, __int64 a2, int a3, __int16 a4)
{
  __int64 v6; // rsi
  __int64 v8; // r15
  __int64 v9; // r9
  int v10; // r8d
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rsi
  int v15; // edx
  unsigned __int64 v16; // r8
  __int64 v17; // r15
  _BYTE *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  char *v21; // r15
  __int64 v22; // r14
  _BYTE *v23; // rsi
  __int64 v24; // r15
  __int64 v25; // rdx
  char *v26; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  signed int v30; // ecx
  __int64 v31; // rcx
  int v32; // r8d
  int v33; // r9d
  _QWORD *v34; // r13
  __int64 v35; // r12
  __int64 v36; // rsi
  unsigned __int64 v37; // r14
  __int64 v38; // r15
  __int64 v39; // r12
  unsigned __int64 v40; // r12
  _QWORD *v41; // r13
  size_t v42; // r15
  __int64 v43; // r14
  size_t v44; // r8
  __int64 v45; // rsi
  __int64 v46; // rax
  char tinfo_property; // al
  __int64 v48; // r9
  int v49; // r8d
  __int64 v50; // rax
  __int64 v51; // [rsp+8h] [rbp-A8h]
  signed int v52; // [rsp+10h] [rbp-A0h]
  __int64 v53; // [rsp+10h] [rbp-A0h]
  _DWORD *v54; // [rsp+18h] [rbp-98h]
  __int64 v55; // [rsp+18h] [rbp-98h]
  __int64 v56; // [rsp+20h] [rbp-90h]
  unsigned __int64 v57; // [rsp+28h] [rbp-88h]
  __int64 v58; // [rsp+28h] [rbp-88h]
  size_t v59; // [rsp+28h] [rbp-88h]
  unsigned int v60; // [rsp+34h] [rbp-7Ch]
  int v61; // [rsp+34h] [rbp-7Ch]
  __int64 v63; // [rsp+38h] [rbp-78h]
  char v64; // [rsp+4Fh] [rbp-61h] BYREF
  __int64 v65; // [rsp+50h] [rbp-60h] BYREF
  __int64 v66; // [rsp+58h] [rbp-58h]
  void *src; // [rsp+60h] [rbp-50h] BYREF
  __int128 v68; // [rsp+68h] [rbp-48h]
  unsigned __int64 v69; // [rsp+78h] [rbp-38h]

  v6 = *(_QWORD *)(a2 + 24);
  v69 = __readfsqword(0x28u);
  v64 = 0;
  v56 = a3;
  if ( a3 == get_tinfo_size(0, v6, 0) )
  {
    tinfo_property = get_tinfo_property(*(_QWORD *)(a2 + 24), 2);
    v48 = *(_QWORD *)(a2 + 40);
    v49 = *(_DWORD *)(a2 + 48);
    src = nullptr;
    v8 = *(_QWORD *)(a1 + 8);
    v58 = v48;
    v61 = v49;
    a4 |= 32 * ((tinfo_property & 0x2F) == 13);
    copy_tinfo_t(&src, a2 + 24);
    v9 = v58;
    v10 = v61;
  }
  else
  {
    src = nullptr;
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_QWORD *)(a2 + 40);
    v10 = *(_DWORD *)(a2 + 48);
  }
  v60 = sub_233050(v8, *(_QWORD *)(a2 + 32), a3, (__int64)&src, v10, v9, a4, &v64);
  clear_tinfo_t(&src);
  if ( v64 )
  {
    if ( !under_debugger )
      sub_3835A0(52280);
    BUG();
  }
  v11 = *(_QWORD *)(a1 + 8);
  v63 = *(_QWORD *)(v11 + 432) + 104LL * (int)v60;
  if ( (*(_BYTE *)(a1 + 201) & 4) != 0 && *(_BYTE *)(a1 + 168) )
  {
    v12 = *(_QWORD *)(v11 + 432) + 104LL * (int)v60;
    *(_DWORD *)(v12 + 24) = *(_DWORD *)(v12 + 24) & 0xFFFBFFFD | 2;
    v11 = *(_QWORD *)(a1 + 8);
  }
  if ( *(_DWORD *)v63 == 1 )
  {
    v13 = *(_QWORD *)(v63 + 8);
    v57 = v13;
  }
  else
  {
    v57 = -1;
    v13 = -1;
  }
  src = nullptr;
  v68 = 0;
  v14 = *(int *)(v63 + 88);
  v15 = *(_DWORD *)(v63 + 88);
  if ( *(_DWORD *)(v11 + 116) )
  {
    if ( *(_DWORD *)(v63 + 88) )
    {
      v16 = *(_QWORD *)(v11 + 136);
      if ( *(int *)(v11 + 116) + v16 - 1 >= v57
        && v14 + v57 - 1 >= v16
        && (v16 != v13 || (_DWORD)v14 != *(_DWORD *)(v11 + 116)) )
      {
        v51 = *(_QWORD *)(v11 + 136);
        v52 = *(_DWORD *)(v11 + 116);
        v54 = *(_DWORD **)(v11 + 1504);
        v65 = 0;
        v66 = 0;
        cleanup_argloc(&v65);
        LODWORD(v65) = 1;
        v66 = v51;
        sub_1C75C0((__int64)&v65, v54, (__int64 *)&src, v52, 2);
        cleanup_argloc(&v65);
        v17 = v68;
        if ( (_QWORD)v68 )
        {
          v20 = v68 + 8;
          v19 = v68 + 9;
          v18 = src;
          v17 = v68 - 1;
          if ( *((_QWORD *)&v68 + 1) >= (unsigned __int64)(v68 + 9) )
            goto LABEL_15;
        }
        else
        {
          v18 = src;
          v19 = 10;
          v20 = 9;
          if ( *((_QWORD *)&v68 + 1) >= 0xAu )
          {
LABEL_15:
            *(_QWORD *)&v68 = v19;
            v18[v20] = 0;
            v21 = (char *)src + v17;
            *(_QWORD *)v21 = 0x7264646174657228LL;
            v21[8] = 41;
            v11 = *(_QWORD *)(a1 + 8);
            v15 = *(_DWORD *)(v63 + 88);
            goto LABEL_16;
          }
        }
        v53 = v20;
        v55 = v19;
        src = (void *)qvector_reserve(&src, v18, v19, 1);
        v20 = v53;
        v18 = src;
        v19 = v55;
        goto LABEL_15;
      }
    }
  }
LABEL_16:
  if ( sub_227390(v11, v13, v15) )
  {
    v22 = v68;
    if ( (unsigned __int64)v68 > 1 )
    {
      v23 = src;
      v24 = v68 - 1;
      v25 = v68 + 5;
      if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v68 + 5) )
      {
        src = (void *)qvector_reserve(&src, src, v25, 1);
        v25 = v22 + 5;
        v23 = src;
      }
      *(_QWORD *)&v68 = v25;
      v23[v22 + 4] = 0;
      v26 = (char *)src + v24;
      *(_DWORD *)v26 = 1684955424;
      v26[4] = 32;
    }
    sub_FA510((__int64 *)&src, (__int64)"input argument area (%a)", 0.0);
  }
  if ( (unsigned __int64)v68 <= 1 )
  {
    if ( (*(_BYTE *)(v63 + 25) & 4) != 0 )
    {
      v28 = *(_QWORD *)(a2 + 32);
      if ( *(_DWORD *)(v63 + 88) )
      {
        if ( v28 >= v57 && *(int *)(v63 + 88) + v57 - 1 >= v56 + v28 - 1 )
          sub_1F4970(*(_QWORD *)(a1 + 8), *(_QWORD *)(v63 + 16), v63);
      }
    }
    goto LABEL_24;
  }
  v29 = *(_QWORD *)(a1 + 8);
  v30 = *(_DWORD *)(v63 + 88);
  v65 = 0;
  v66 = 0;
  sub_1EFDD0(*(_DWORD **)(v29 + 1504), (__int64 *)(v29 + 496), v63, v30, &v65, 0);
  cleanup_argloc(&v65);
  v34 = *(_QWORD **)(a1 + 8);
  v35 = v34[63];
  if ( v35 )
  {
    v38 = v35 + 4;
    v37 = v35 + 5;
    v36 = v34[62];
    --v35;
    if ( v34[64] >= v37 )
      goto LABEL_35;
  }
  else
  {
    v36 = v34[62];
    v37 = 6;
    v38 = 5;
    if ( v34[64] >= 6u )
      goto LABEL_35;
  }
  v46 = qvector_reserve(v34 + 62, v36, v37, 1);
  v34[62] = v46;
  v36 = v46;
LABEL_35:
  v34[63] = v37;
  *(_BYTE *)(v36 + v38) = 0;
  v39 = v34[62] + v35;
  *(_DWORD *)v39 = 1684955424;
  *(_BYTE *)(v39 + 4) = 32;
  v40 = v68;
  v41 = *(_QWORD **)(a1 + 8);
  if ( (_QWORD)v68 )
  {
    v42 = v68 - 1;
    if ( (_QWORD)v68 != 1 )
    {
      v43 = v41[63];
      v44 = v68 - 1;
      if ( v43 )
      {
        --v43;
        v44 = v42 + v43;
        v40 = v68 + v43;
      }
      v45 = v41[62];
      if ( v41[64] < v40 )
      {
        v59 = v44;
        v50 = qvector_reserve(v41 + 62, v45, v40, 1);
        v41[62] = v50;
        v44 = v59;
        v45 = v50;
      }
      v41[63] = v40;
      *(_BYTE *)(v45 + v44) = 0;
      memcpy((void *)(v43 + v41[62]), src, v42);
      v41 = *(_QWORD **)(a1 + 8);
    }
  }
  sub_1F0C70((__int64)v41, *(_QWORD *)(v63 + 16), 20, v31, v32, v33);
  *(_DWORD *)(v63 + 24) |= 0x400u;
LABEL_24:
  if ( src )
  {
    *(_QWORD *)&v68 = 0;
    qfree(src);
  }
  return v60;
}
