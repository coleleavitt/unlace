unsigned __int64 __fastcall sub_1B1E970(
        __int64 *a1,
        __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i *a8)
{
  __int64 v11; // rcx
  __int64 v12; // rax
  char *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r12
  unsigned __int64 *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 *v37; // rax
  __int64 **v38; // rax
  __int64 *v39; // rdx
  __int64 **v40; // rax
  int v41; // eax
  __int64 *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rbx
  _BYTE *v45; // rbp
  _QWORD *v46; // rax
  __int64 v47; // r9
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 *v55; // rax
  __m128i *v56; // rsi
  unsigned int v57; // eax
  __int64 v58; // rbp
  __int64 v59; // rax
  int v60; // eax
  _DWORD *v61; // [rsp+8h] [rbp-180h]
  unsigned int v64; // [rsp+34h] [rbp-154h]
  __int64 v65; // [rsp+60h] [rbp-128h] BYREF
  __int64 v66; // [rsp+68h] [rbp-120h] BYREF
  void *ptr; // [rsp+70h] [rbp-118h] BYREF
  __int64 v68; // [rsp+78h] [rbp-110h]
  _BYTE v69[64]; // [rsp+80h] [rbp-108h] BYREF
  _BYTE v70[200]; // [rsp+C0h] [rbp-C8h] BYREF

  v64 = (unsigned int)a2;
  if ( !a6 )
  {
    if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 68) & 8) != 0 )
    {
      v17 = a1[1];
      v18 = *(_QWORD *)(v17 + 27512);
      v19 = v18 + 8LL * *(unsigned int *)(v17 + 27520);
      a2 = (__int64 *)v19;
      if ( sub_1AED4C0(v18, v19) == v19 )
      {
        a2 = (__int64 *)*a1;
        sub_1606D30((__int64)v70, (_QWORD *)*a1, v64, 3744, 0);
        sub_15F7200(v70);
      }
    }
    goto LABEL_14;
  }
  a2 = (__int64 *)a6;
  v11 = a5 + 8 * a6;
  if ( a5 == v11 )
  {
LABEL_14:
    v61 = nullptr;
    v13 = nullptr;
    v16 = 0;
    goto LABEL_15;
  }
  v61 = nullptr;
  v12 = a5;
  v13 = nullptr;
  do
  {
    v14 = *(_QWORD *)v12;
    if ( *(_DWORD *)(*(_QWORD *)v12 + 8LL) == 8 )
      v13 = *(char **)(v14 + 16);
    else
      v61 = *(_DWORD **)(v14 + 16);
    v12 += 8;
  }
  while ( v11 != v12 );
  a2 = (__int64 *)a1[1];
  v15 = *a1;
  if ( v13 )
  {
    v16 = 9;
    if ( (*(_DWORD *)v13 & 0x3C000) == 0 )
      v16 = sub_1AE80F0(v15, (__int64)a2, (unsigned __int64)v13);
  }
  else
  {
    v16 = 0;
  }
LABEL_15:
  v20 = &a3[a4];
  ptr = v69;
  v68 = 0x800000000LL;
  if ( a3 == v20 )
  {
    v45 = v69;
    goto LABEL_56;
  }
  do
  {
    v27 = *a3;
    v65 = *(_QWORD *)(*a3 + 16);
    if ( (unsigned int)sub_B73370(v65) )
      goto LABEL_24;
    v31 = v65;
    if ( (*(_BYTE *)(v65 + 29) & 1) == 0 )
      goto LABEL_17;
    v32 = sub_B8C3D0(v65, (__int64)a2, v28, v65, v29, v30);
    v35 = *v32;
    v36 = *v32 + 8LL * *((unsigned int *)v32 + 2);
    if ( *v32 >= v36 )
    {
      if ( v35 != v36 )
      {
        if ( *(_WORD *)(*(_QWORD *)v36 + 36LL) == 297 )
          goto LABEL_24;
        v42 = (__int64 *)(v36 + 8);
        while ( (__int64 *)v35 != v42 )
        {
          v43 = *v42++;
          if ( *(_WORD *)(v43 + 36) == 297 )
            goto LABEL_24;
        }
      }
LABEL_31:
      v31 = v65;
      if ( (*(_BYTE *)(v65 + 96) & 7) == 5 && (*(_BYTE *)(v65 + 29) & 1) != 0 )
      {
        v38 = (__int64 **)sub_B8C3D0(v65, (__int64)a2, v35, v65, v33, v34);
        v39 = *v38;
        a2 = &(*v38)[*((unsigned int *)v38 + 2)];
        if ( *v38 < a2 )
        {
          v55 = *v38;
          while ( *(_WORD *)(*v55 + 36) != 139 )
          {
            if ( a2 == ++v55 )
            {
              v31 = v65;
              goto LABEL_17;
            }
          }
          v31 = v65;
          if ( a2 == v55 )
            goto LABEL_17;
          goto LABEL_39;
        }
        v31 = v65;
        if ( v39 != a2 )
        {
          if ( *(_WORD *)(*a2 + 36) != 139 )
          {
            v40 = (__int64 **)(a2 + 1);
            while ( v39 != (__int64 *)v40 )
            {
              a2 = *v40++;
              if ( *((_WORD *)a2 + 18) == 139 )
                goto LABEL_39;
            }
            goto LABEL_17;
          }
LABEL_39:
          v41 = *(_BYTE *)(v31 + 28) & 0x7F;
          if ( v41 != 40 && v41 != 46 || !sub_1AE8710(v31) )
            goto LABEL_24;
          v31 = v65;
        }
      }
LABEL_17:
      a2 = (__int64 *)a1[1];
      if ( !(unsigned __int8)sub_1B07170(*a1, (__int64)a2, v27, v31, v16, v13) )
      {
        if ( v13 && !sub_9B48E0(v65) && v16 == 9 )
        {
          v57 = sub_C00A40((unsigned __int64)v13, (__int64)a2, v21, v22, v23);
          sub_168B9F0((__int64)v70, a1, v57, 0x1189u, 0);
          v66 = sub_EEC8C0((unsigned __int64)v13, (__int64)a1, a7);
          sub_1587DB0((__int64)v70, &v66);
          sub_15F7200(v70);
          v58 = v65;
          v59 = sub_168B6C0((__int64)a1);
          v60 = sub_B74100(v58, v59);
          sub_168B9F0((__int64)v70, a1, *(_DWORD *)(v65 + 24), v60 == 0 ? 6283 : 5899, 0);
          a2 = &v65;
          sub_17B9080((__int64)v70, &v65);
          sub_15F7200(v70);
        }
        else
        {
          v24 = (unsigned int)v68;
          v25 = (unsigned int)v68 + 1LL;
          if ( v25 > HIDWORD(v68) )
          {
            a2 = (__int64 *)v69;
            sub_2237220(&ptr, v69, v25, 8);
            v24 = (unsigned int)v68;
          }
          *((_QWORD *)ptr + v24) = v27;
          LODWORD(v68) = v68 + 1;
          v26 = sub_EEC8C0(v27, (__int64)a2, a7);
          a2 = (__int64 *)v65;
          sub_1AE9B00((__int64 *)(*a1 + 248), v65, v16, v13, v61, v26);
        }
      }
      goto LABEL_24;
    }
    v37 = (__int64 *)*v32;
    while ( 1 )
    {
      v35 = *v37;
      if ( *(_WORD *)(*v37 + 36) == 297 )
        break;
      if ( (__int64 *)v36 == ++v37 )
        goto LABEL_31;
    }
    if ( (__int64 *)v36 == v37 )
      goto LABEL_31;
LABEL_24:
    ++a3;
  }
  while ( v20 != a3 );
  v44 = (unsigned int)v68;
  v45 = ptr;
  if ( !(_DWORD)v68 )
  {
LABEL_56:
    v49 = 0;
    goto LABEL_52;
  }
  if ( !a8 )
  {
    v56 = *(__m128i **)(*a1 + 3032);
    if ( !v56 )
      v56 = *(__m128i **)(*a1 + 544);
    a8 = v56;
  }
  v46 = (_QWORD *)sub_168B6C0((__int64)a1);
  v48 = sub_BB1BA0(v46, (__int64)a8, v64, v45, v44, v47, a5, a6);
  *(_BYTE *)(v48 + 29) &= 0x9Fu;
  v49 = v48;
  sub_B94AD0(a8, v48, v50, v51, v52, v53);
  v45 = ptr;
LABEL_52:
  if ( v45 != v69 )
    free(v45);
  return v49;
}
