char *__fastcall sub_63EEE0(__int64 a1, unsigned __int8 **a2, int *a3, unsigned __int8 **a4, __int64 *a5)
{
  __int64 *v9; // rbx
  unsigned __int8 *v10; // rcx
  char *result; // rax
  __int64 v12; // r14
  size_t v13; // r12
  int v14; // r8d
  size_t v15; // r13
  unsigned __int8 *v16; // r15
  _BYTE *v17; // rdi
  _BYTE *v18; // rdi
  __int64 v19; // rax
  char *v20; // r14
  __int64 v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  bool v24; // cf
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r12
  int v29; // r11d
  __int64 v30; // r13
  unsigned __int8 *v31; // r10
  void *v32; // rdi
  size_t v33; // r8
  _BYTE *v34; // r9
  size_t v35; // r15
  void *v36; // rdi
  char *v37; // r15
  char *v38; // r12
  char *v39; // r13
  __int64 v40; // rcx
  int v41; // ecx
  _QWORD *v42; // rsi
  char *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  char *v46; // rdi
  char *v47; // rdi
  _QWORD *v48; // rsi
  char *v49; // rcx
  unsigned int v50; // edi
  __int64 v51; // rax
  unsigned int v52; // edi
  unsigned __int64 v53; // rcx
  char *v54; // rsi
  char *v55; // r8
  unsigned int v56; // edi
  unsigned int v57; // edi
  unsigned int v58; // esi
  __int64 v59; // r9
  unsigned __int64 v60; // rcx
  char *v61; // rsi
  __int64 v62; // r8
  unsigned int v63; // edi
  unsigned int v64; // edi
  unsigned int v65; // esi
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // [rsp+0h] [rbp-78h]
  int v70; // [rsp+0h] [rbp-78h]
  __int64 v71; // [rsp+0h] [rbp-78h]
  unsigned __int8 *srca; // [rsp+8h] [rbp-70h]
  char *src; // [rsp+8h] [rbp-70h]
  _BYTE *v74; // [rsp+10h] [rbp-68h]
  size_t v75; // [rsp+10h] [rbp-68h]
  int v76; // [rsp+10h] [rbp-68h]
  unsigned __int8 **v77; // [rsp+18h] [rbp-60h]
  int v78; // [rsp+18h] [rbp-60h]
  _BYTE *v79; // [rsp+18h] [rbp-60h]
  _BYTE *v80; // [rsp+20h] [rbp-58h]
  unsigned __int8 *v81; // [rsp+28h] [rbp-50h]
  size_t v82; // [rsp+38h] [rbp-40h]
  size_t v83; // [rsp+38h] [rbp-40h]

  v9 = *(__int64 **)(a1 + 8);
  if ( v9 != *(__int64 **)(a1 + 16) )
  {
    v10 = *a2;
    result = (char *)(v9 + 2);
    v12 = *a5;
    v13 = (size_t)a2[1];
    v14 = *a3;
    v15 = (size_t)a4[1];
    v16 = *a4;
    *v9 = (__int64)(v9 + 2);
    if ( v10 )
    {
      v82 = v13;
      if ( v13 > 0xF )
      {
        srca = v10;
        v69 = v14;
        v19 = std::string::_M_create();
        v14 = v69;
        v10 = srca;
        *v9 = v19;
        v17 = (_BYTE *)v19;
        v9[2] = v13;
        goto LABEL_15;
      }
    }
    else
    {
      if ( v13 )
        goto LABEL_87;
      v82 = 0;
    }
    v17 = (_BYTE *)*v9;
    if ( v13 == 1 )
    {
      result = (char *)*v10;
      *v17 = (_BYTE)result;
      v13 = v82;
      v17 = (_BYTE *)*v9;
LABEL_6:
      v9[1] = v13;
      v17[v13] = 0;
      v18 = v9 + 7;
      *((_DWORD *)v9 + 8) = v14;
      v9[5] = (__int64)(v9 + 7);
      if ( v16 || !v15 )
      {
        if ( v15 > 0xF )
        {
          v51 = std::string::_M_create();
          v9[5] = v51;
          v18 = (_BYTE *)v51;
          v9[7] = v15;
        }
        else
        {
          if ( v15 == 1 )
          {
            result = (char *)*v16;
            *((_BYTE *)v9 + 56) = (_BYTE)result;
            goto LABEL_11;
          }
          if ( !v15 )
          {
LABEL_11:
            v9[6] = v15;
            v18[v15] = 0;
            v9[9] = v12;
            *(_QWORD *)(a1 + 8) += 80LL;
            return result;
          }
        }
        result = (char *)memcpy(v18, v16, v15);
        v18 = (_BYTE *)v9[5];
        goto LABEL_11;
      }
LABEL_87:
      std::__throw_logic_error("basic_string: construction from null is not valid");
    }
    if ( !v13 )
      goto LABEL_6;
LABEL_15:
    v70 = v14;
    result = (char *)memcpy(v17, v10, v13);
    v13 = v82;
    v17 = (_BYTE *)*v9;
    v14 = v70;
    goto LABEL_6;
  }
  v20 = *(char **)a1;
  v21 = (__int64)v9 - *(_QWORD *)a1;
  v22 = 0xCCCCCCCCCCCCCCCDLL * (v21 >> 4);
  if ( v22 == 0x199999999999999LL )
    std::__throw_length_error("vector::_M_realloc_append");
  v23 = 1;
  if ( v22 )
    v23 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)v9 - *(_QWORD *)a1) >> 4);
  v24 = __CFADD__(v23, v22);
  v25 = v23 - 0x3333333333333333LL * (((__int64)v9 - *(_QWORD *)a1) >> 4);
  if ( v24 )
  {
    v71 = 0x7FFFFFFFFFFFFFD0LL;
    v26 = 0x7FFFFFFFFFFFFFD0LL;
  }
  else
  {
    if ( v25 > 0x199999999999999LL )
      v25 = 0x199999999999999LL;
    v71 = 80 * v25;
    v26 = 80 * v25;
  }
  v77 = a4;
  v27 = operator new(v26);
  v28 = v27 + v21;
  v29 = *a3;
  v30 = *a5;
  src = (char *)v27;
  v31 = *a2;
  v32 = (void *)(v28 + 16);
  v33 = (size_t)a2[1];
  v34 = *v77;
  v35 = (size_t)v77[1];
  *(_QWORD *)v28 = v28 + 16;
  if ( !v31 && v33 )
    goto LABEL_87;
  v83 = v33;
  if ( v33 > 0xF )
  {
    v81 = v31;
    v80 = v34;
    v78 = v29;
    v75 = v33;
    v68 = std::string::_M_create();
    v33 = v75;
    v29 = v78;
    *(_QWORD *)v28 = v68;
    v32 = (void *)v68;
    v34 = v80;
    v31 = v81;
    *(_QWORD *)(v28 + 16) = v83;
    goto LABEL_82;
  }
  if ( v33 != 1 )
  {
    if ( !v33 )
      goto LABEL_27;
LABEL_82:
    v79 = v34;
    v76 = v29;
    memcpy(v32, v31, v33);
    v33 = v83;
    v32 = *(void **)v28;
    v34 = v79;
    v29 = v76;
    goto LABEL_27;
  }
  *(_BYTE *)(v28 + 16) = *v31;
LABEL_27:
  *(_QWORD *)(v28 + 8) = v33;
  *((_BYTE *)v32 + v33) = 0;
  v36 = (void *)(v28 + 56);
  *(_DWORD *)(v28 + 32) = v29;
  *(_QWORD *)(v28 + 40) = v28 + 56;
  if ( !v34 && v35 )
    goto LABEL_87;
  if ( v35 > 0xF )
  {
    v74 = v34;
    v67 = std::string::_M_create();
    v34 = v74;
    *(_QWORD *)(v28 + 40) = v67;
    v36 = (void *)v67;
    *(_QWORD *)(v28 + 56) = v35;
LABEL_80:
    memcpy(v36, v34, v35);
    v36 = *(void **)(v28 + 40);
    goto LABEL_32;
  }
  if ( v35 == 1 )
  {
    *(_BYTE *)(v28 + 56) = *v34;
    goto LABEL_32;
  }
  if ( v35 )
    goto LABEL_80;
LABEL_32:
  *(_QWORD *)(v28 + 48) = v35;
  *((_BYTE *)v36 + v35) = 0;
  *(_QWORD *)(v28 + 72) = v30;
  if ( v9 != (__int64 *)v20 )
  {
    v37 = src;
    v38 = v20 + 16;
    v39 = v20 + 56;
    while ( 1 )
    {
      v48 = v37 + 16;
      *(_QWORD *)v37 = v37 + 16;
      v49 = *((char **)v38 - 2);
      if ( v38 != v49 )
        break;
      v40 = *((_QWORD *)v38 - 1);
      v50 = v40 + 1;
      if ( (unsigned int)(v40 + 1) >= 8 )
      {
        *v48 = *(_QWORD *)v38;
        *(_QWORD *)((char *)v48 + v50 - 8) = *(_QWORD *)&v38[v50 - 8];
        v60 = (unsigned __int64)(v37 + 24) & 0xFFFFFFFFFFFFFFF8LL;
        v61 = (char *)v48 - v60;
        v62 = v38 - v61;
        v63 = ((_DWORD)v61 + v50) & 0xFFFFFFF8;
        if ( v63 >= 8 )
        {
          v64 = v63 & 0xFFFFFFF8;
          v65 = 0;
          do
          {
            v66 = v65;
            v65 += 8;
            *(_QWORD *)(v60 + v66) = *(_QWORD *)(v62 + v66);
          }
          while ( v65 < v64 );
        }
        goto LABEL_35;
      }
      if ( (v50 & 4) != 0 )
      {
        *(_DWORD *)v48 = *(_DWORD *)v38;
        *(_DWORD *)((char *)v48 + v50 - 4) = *(_DWORD *)&v38[v50 - 4];
        v40 = *((_QWORD *)v38 - 1);
      }
      else if ( (_DWORD)v40 != -1 )
      {
        *(_BYTE *)v48 = *v38;
        if ( (v50 & 2) == 0 )
          goto LABEL_35;
        *(_WORD *)((char *)v48 + v50 - 2) = *(_WORD *)&v38[v50 - 2];
        v40 = *((_QWORD *)v38 - 1);
      }
LABEL_36:
      *((_QWORD *)v37 + 1) = v40;
      v41 = *((_DWORD *)v38 + 4);
      v42 = v37 + 56;
      *((_QWORD *)v38 - 2) = v38;
      *((_QWORD *)v38 - 1) = 0;
      *v38 = 0;
      *((_DWORD *)v37 + 8) = v41;
      *((_QWORD *)v37 + 5) = v37 + 56;
      v43 = *((char **)v38 + 3);
      if ( v43 != v39 )
      {
        *((_QWORD *)v37 + 5) = v43;
        *((_QWORD *)v37 + 7) = *((_QWORD *)v38 + 5);
LABEL_38:
        v44 = *((_QWORD *)v38 + 4);
        goto LABEL_39;
      }
      v44 = *((_QWORD *)v38 + 4);
      v52 = v44 + 1;
      if ( (unsigned int)(v44 + 1) >= 8 )
      {
        *v42 = *(_QWORD *)v39;
        *(_QWORD *)((char *)v42 + v52 - 8) = *(_QWORD *)&v39[v52 - 8];
        v53 = (unsigned __int64)(v37 + 64) & 0xFFFFFFFFFFFFFFF8LL;
        v54 = (char *)v42 - v53;
        v55 = (char *)(v39 - v54);
        v56 = ((_DWORD)v54 + v52) & 0xFFFFFFF8;
        if ( v56 >= 8 )
        {
          v57 = v56 & 0xFFFFFFF8;
          v58 = 0;
          do
          {
            v59 = v58;
            v58 += 8;
            *(_QWORD *)(v53 + v59) = *(_QWORD *)&v55[v59];
          }
          while ( v58 < v57 );
        }
        goto LABEL_38;
      }
      if ( (v52 & 4) != 0 )
      {
        *(_DWORD *)v42 = *(_DWORD *)v39;
        *(_DWORD *)((char *)v42 + v52 - 4) = *(_DWORD *)&v39[v52 - 4];
        v44 = *((_QWORD *)v38 + 4);
      }
      else if ( (_DWORD)v44 != -1 )
      {
        *(_BYTE *)v42 = *v39;
        if ( (v52 & 2) == 0 )
          goto LABEL_38;
        *(_WORD *)((char *)v42 + v52 - 2) = *(_WORD *)&v39[v52 - 2];
        v44 = *((_QWORD *)v38 + 4);
      }
LABEL_39:
      *((_QWORD *)v37 + 6) = v44;
      v45 = *((_QWORD *)v38 + 7);
      *((_QWORD *)v38 + 3) = v39;
      *((_QWORD *)v38 + 4) = 0;
      v38[40] = 0;
      *((_QWORD *)v37 + 9) = v45;
      v46 = *((char **)v38 + 3);
      if ( v46 != v39 )
        operator delete(v46, *((_QWORD *)v38 + 5) + 1LL);
      v47 = *((char **)v38 - 2);
      if ( v38 != v47 )
        operator delete(v47, *(_QWORD *)v38 + 1LL);
      v37 += 80;
      v39 += 80;
      if ( v9 == (__int64 *)(v38 + 64) )
        goto LABEL_66;
      v38 += 80;
    }
    *(_QWORD *)v37 = v49;
    *((_QWORD *)v37 + 2) = *(_QWORD *)v38;
LABEL_35:
    v40 = *((_QWORD *)v38 - 1);
    goto LABEL_36;
  }
  v37 = src;
LABEL_66:
  if ( v20 )
    operator delete(v20, *(_QWORD *)(a1 + 16) - (_QWORD)v20);
  *(_QWORD *)(a1 + 8) = v37 + 80;
  *(_QWORD *)a1 = src;
  *(_QWORD *)(a1 + 16) = &src[v71];
  return src;
}

