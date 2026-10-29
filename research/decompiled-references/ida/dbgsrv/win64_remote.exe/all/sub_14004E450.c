/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004E450
// Address: 0x000000014004E450

//----- (000000014004E450) ----------------------------------------------------
__int64 __fastcall sub_14004E450(__int64 a1, void **a2, unsigned __int64 *a3)
{
  double v3; // xmm1_8
  __int64 v7; // r13
  int v8; // eax
  int v9; // r14d
  int v10; // ecx
  unsigned __int64 v11; // r12
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  _QWORD *v14; // rbx
  void *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r14
  char *v18; // rbx
  char *v19; // r15
  __int64 v20; // r12
  int v21; // r14d
  char *v22; // r15
  __int64 v23; // rbx
  unsigned __int8 *v24; // rcx
  unsigned __int8 v25; // dl
  unsigned __int64 v26; // rax
  size_t v27; // r14
  void *v28; // rcx
  const void *v29; // rdx
  size_t v30; // rax
  char *v31; // rbx
  __int64 i; // r12
  int v33; // r8d
  int v34; // eax
  unsigned int v35; // r15d
  char *v36; // rsi
  char *v37; // rbx
  __int64 v38; // rax
  const char *v39; // rax
  char *v40; // rbx
  char v41; // r14
  unsigned __int64 v42; // r8
  __int64 v43; // r8
  char v44; // r14
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // r14
  size_t v47; // r15
  const void *v48; // r12
  unsigned __int64 v49; // rdx
  char *j; // rsi
  char v51; // r14
  unsigned __int64 v52; // r8
  __int64 v53; // rax
  const char *v54; // r8
  void *v55; // rbx
  const char *v56; // rsi
  size_t v57; // rax
  size_t v58; // r14
  char *v59; // rbx
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rsi
  __int64 v62; // rdi
  _QWORD *v63; // rbx
  void *v64; // rcx
  void *v66; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v67; // [rsp+38h] [rbp-81h]
  __int64 v68; // [rsp+40h] [rbp-79h]
  unsigned int v69; // [rsp+48h] [rbp-71h]
  void *v70; // [rsp+50h] [rbp-69h] BYREF
  __int64 v71; // [rsp+58h] [rbp-61h]
  __int64 v72; // [rsp+60h] [rbp-59h]
  __int64 v73; // [rsp+68h] [rbp-51h] BYREF
  void *v74[2]; // [rsp+70h] [rbp-49h]
  __int64 v75; // [rsp+80h] [rbp-39h]
  __int64 v76; // [rsp+88h] [rbp-31h]
  unsigned __int64 v77; // [rsp+90h] [rbp-29h]
  __int64 v78; // [rsp+98h] [rbp-21h]
  char v79[8]; // [rsp+A0h] [rbp-19h] BYREF
  void *Block; // [rsp+A8h] [rbp-11h]
  __int64 v81; // [rsp+B0h] [rbp-9h]
  int v83; // [rsp+130h] [rbp+77h]
  unsigned int v84; // [rsp+138h] [rbp+7Fh] BYREF

  v66 = nullptr;
  v67 = 0;
  v68 = 0;
  v7 = (int)sub_14005B690(a3, a3[1]);
  v8 = sub_14005B690(a3, a3[1]);
  v9 = v8;
  v83 = v8;
  if ( (int)v7 < 0 || v8 < 0 || 0x7FFFFFFF - v8 < (int)v7 )
  {
    sub_140002D20(a2, 0);
    if ( *(_BYTE *)(a1 + 184) )
      sub_140002CE0((struct __crt_locale_pointers *)"update_bpts(nadd=%d, ndel=%d) => 0 (incorrect values)\n", v7, v9);
    v35 = 0;
  }
  else
  {
    v10 = v8 + v7;
    v11 = v8 + (int)v7;
    if ( v11 != v67 )
    {
      v77 = 0xFFFFFFFF00000000uLL;
      v73 = -1;
      *(_OWORD *)v74 = 0;
      v75 = 0;
      v76 = 4;
      v78 = 0;
      if ( v10 >= v67 )
      {
        if ( v11 > v67 )
        {
          if ( &v73 < v66 || &v73 >= (__int64 *)((char *)v66 + 56 * v68) )
          {
            sub_14004E350((__int64)&v66, v11, (__int64)&v73);
          }
          else
          {
            v16 = sub_140040950((__int64)v79, (__int64)&v73);
            sub_14004E350((__int64)&v66, v11, v16);
            if ( Block )
            {
              v81 = 0;
              j_free(Block);
            }
          }
        }
      }
      else
      {
        v12 = 56LL * v10;
        v13 = v67 - v10;
        do
        {
          v14 = (char *)v66 + v12;
          v15 = *(void **)((char *)v66 + v12 + 8);
          if ( v15 )
          {
            v14[2] = 0;
            j_free(v15);
            v14[1] = 0;
            v14[3] = 0;
          }
          v12 += 56;
          --v13;
        }
        while ( v13 );
        v67 = v11;
      }
      if ( v74[0] )
        j_free(v74[0]);
    }
    v17 = 0;
    v18 = (char *)v66;
    v19 = (char *)v66 + 56 * v7;
    if ( v66 != v19 )
    {
      do
      {
        v18[40] = 0;
        v17 += sub_14005B7B0(a3, a3[1]) - 1;
        *(_QWORD *)v18 = v17;
        *((_DWORD *)v18 + 9) = sub_14005B690(a3, a3[1]);
        *((_DWORD *)v18 + 8) = sub_14005B690(a3, a3[1]);
        *((_DWORD *)v18 + 11) = sub_14005B690(a3, a3[1]);
        *((_DWORD *)v18 + 12) = sub_14005B690(a3, a3[1]);
        v18 += 56;
      }
      while ( v18 != v19 );
    }
    v20 = 0;
    v21 = v83;
    v22 = &v19[56 * v83];
    if ( v18 != v22 )
    {
      v23 = (__int64)(v18 + 8);
      while ( 1 )
      {
        v20 += sub_14005B7B0(a3, a3[1]) - 1;
        *(_QWORD *)(v23 - 8) = v20;
        v24 = (unsigned __int8 *)*a3;
        v25 = 0;
        if ( *a3 < a3[1] )
          v25 = *v24;
        v26 = (unsigned __int64)(v24 + 1);
        if ( *a3 >= a3[1] )
          v26 = *a3;
        *a3 = v26;
        if ( !v25 )
          goto LABEL_39;
        v27 = v25;
        if ( (unsigned __int64)v25 > *(_QWORD *)(v23 + 8) )
          break;
        if ( v25 != *(_QWORD *)(v23 + 8) && (unsigned __int64)v25 < *(_QWORD *)(v23 + 8) )
          goto LABEL_35;
LABEL_36:
        v28 = *(void **)v23;
        v29 = (const void *)*a3;
        v30 = v27 + *a3;
        if ( v30 >= *a3 && v30 <= a3[1] )
        {
          *a3 = v30;
          memcpy(v28, v29, v27);
        }
LABEL_39:
        *(_DWORD *)(v23 + 24) = sub_14005B690(a3, a3[1]);
        *(_DWORD *)(v23 + 36) = sub_14005B690(a3, a3[1]);
        *(_DWORD *)(v23 + 40) = sub_14005B690(a3, a3[1]);
        v23 += 56;
        if ( (char *)(v23 - 8) == v22 )
        {
          v21 = v83;
          goto LABEL_41;
        }
      }
      if ( (unsigned __int64)v25 > *(_QWORD *)(v23 + 16) )
        *(_QWORD *)v23 = sub_14005ABE0(v23, *(void **)v23, v25, 1u);
      memset((void *)(*(_QWORD *)v23 + *(_QWORD *)(v23 + 8)), 0, v27 - *(_QWORD *)(v23 + 8));
LABEL_35:
      *(_QWORD *)(v23 + 8) = v27;
      goto LABEL_36;
    }
LABEL_41:
    v31 = (char *)v66 + 56 * v7;
    for ( i = a1; v31 != v22; v31 += 56 )
    {
      if ( *(_BYTE *)(a1 + 184) )
      {
        v33 = *((_DWORD *)v31 + 8);
        if ( v33 == 4 )
          v34 = 0;
        else
          v34 = *((_DWORD *)v31 + 9);
        sub_140002CE0(
          (struct __crt_locale_pointers *)"del_bpt(ea=%a, type=%d orgbytes.size=%zu size=%d)\n",
          v3,
          v33,
          *((_QWORD *)v31 + 2),
          v34);
      }
    }
    v70 = nullptr;
    v71 = 0;
    v72 = 0;
    v35 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, void *, _QWORD, int, void **))(**(_QWORD **)(a1 + 440)
                                                                                          + 320LL))(
            *(_QWORD *)(a1 + 440),
            &v84,
            v66,
            (unsigned int)v7,
            v21,
            &v70);
    v69 = v35;
    v36 = (char *)v66 + 56 * v7;
    if ( v66 != v36 )
    {
      v37 = (char *)v66 + 36;
      do
      {
        if ( *(_BYTE *)(a1 + 184) )
        {
          v38 = (unsigned __int8)v37[4];
          if ( (unsigned __int8)v38 < 0xBu )
            v39 = off_140097D40[v38];
          else
            v39 = "?";
          sub_140002CE0(
            (struct __crt_locale_pointers *)"add_bpt(ea=%a type=%d len=%d) => %s\n",
            v3,
            *((_DWORD *)v37 - 1),
            *(_DWORD *)v37,
            v39);
        }
        v37 += 56;
      }
      while ( v37 - 36 != v36 );
    }
    sub_140002D20(a2, v35);
    sub_140002D20(a2, v84);
    v40 = (char *)v66;
    if ( v66 != v36 )
    {
      do
      {
        v41 = v40[40];
        v42 = (unsigned __int64)a2[1] + 1;
        if ( v42 > (unsigned __int64)a2[2] )
          *a2 = sub_14005ABE0((__int64)a2, *a2, v42, 1u);
        *((_BYTE *)a2[1] + (_QWORD)*a2) = v41;
        v43 = (__int64)a2[1] + 1;
        a2[1] = (void *)v43;
        if ( !v40[40] && *((_DWORD *)v40 + 8) == 4 )
        {
          v44 = v40[16];
          v45 = v43 + 1;
          if ( v45 > (unsigned __int64)a2[2] )
            *a2 = sub_14005ABE0((__int64)a2, *a2, v45, 1u);
          *((_BYTE *)a2[1] + (_QWORD)*a2) = v44;
          v46 = (unsigned __int64)a2[1] + 1;
          a2[1] = (void *)v46;
          v47 = *((_QWORD *)v40 + 2);
          v48 = *((const void **)v40 + 1);
          if ( v47 )
          {
            v49 = v46 + v47;
            if ( v46 + v47 < v46 )
              v49 = 0x7FFFFFFFFFFFFFFFLL;
            sub_140002EF0((__int64)a2, v49);
            memcpy((char *)*a2 + v46, v48, v47);
          }
        }
        v40 += 56;
      }
      while ( v40 != v36 );
      v35 = v69;
      i = a1;
      v21 = v83;
    }
    for ( j = &v36[56 * v21]; v40 != j; v40 += 56 )
    {
      v51 = v40[40];
      v52 = (unsigned __int64)a2[1] + 1;
      if ( v52 > (unsigned __int64)a2[2] )
        *a2 = sub_14005ABE0((__int64)a2, *a2, v52, 1u);
      *((_BYTE *)a2[1] + (_QWORD)*a2) = v51;
      a2[1] = (char *)a2[1] + 1;
      if ( *(_BYTE *)(i + 184) )
      {
        v53 = (unsigned __int8)v40[40];
        v54 = "?";
        if ( (unsigned __int8)v53 < 0xBu )
          v54 = off_140097D40[v53];
        sub_140002CE0((struct __crt_locale_pointers *)"del_bpt(ea=%a) => %s\n", v3, v54);
      }
    }
    v55 = v70;
    if ( v35 != 1 )
    {
      if ( v71 )
      {
        v56 = pNodeName;
        if ( v70 )
          v56 = (const char *)v70;
      }
      else
      {
        v56 = Str1;
      }
      v57 = strlen(v56);
      v58 = v57 + 1;
      if ( v57 != -1 )
      {
        v59 = (char *)a2[1];
        v60 = (unsigned __int64)&v59[v58];
        if ( &v59[v58] < v59 )
          v60 = 0x7FFFFFFFFFFFFFFFLL;
        sub_140002EF0((__int64)a2, v60);
        memcpy((char *)*a2 + (_QWORD)v59, v56, v58);
        v55 = v70;
      }
    }
    if ( v55 )
    {
      v71 = 0;
      j_free(v55);
      v70 = nullptr;
      v72 = 0;
    }
  }
  if ( v66 )
  {
    v61 = v67;
    if ( v67 )
    {
      v62 = 0;
      do
      {
        v63 = (char *)v66 + v62;
        v64 = *(void **)((char *)v66 + v62 + 8);
        if ( v64 )
        {
          v63[2] = 0;
          j_free(v64);
          v63[1] = 0;
          v63[3] = 0;
        }
        v62 += 56;
        --v61;
      }
      while ( v61 );
    }
    v67 = 0;
    j_free(v66);
  }
  return v35;
}
// 14004E79E: variable 'v3' is possibly undefined
// 140097D40: using guessed type char *off_140097D40[11];
