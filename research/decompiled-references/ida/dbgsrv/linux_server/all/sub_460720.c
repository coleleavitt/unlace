/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_460720
// Address: 0x0000000000460720

//----- (0000000000460720) ----------------------------------------------------
__int64 __fastcall sub_460720(
        __int64 a1,
        size_t *a2,
        char **a3,
        int a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  char *v14; // r14
  size_t v15; // rbx
  __int64 v16; // rdx
  signed __int64 v17; // rax
  size_t v18; // r8
  size_t v19; // r15
  unsigned __int64 v20; // r10
  char *v21; // rsi
  size_t v22; // rax
  signed __int64 v23; // rax
  size_t v24; // r15
  size_t v25; // rbx
  unsigned __int64 v26; // r8
  char *v27; // rsi
  size_t v28; // rax
  char *v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rcx
  char v32; // al
  char *v33; // rbx
  signed __int64 v34; // rax
  size_t v35; // r9
  size_t v36; // r10
  size_t v37; // r11
  char *v38; // rsi
  size_t v39; // rax
  size_t v40; // rax
  size_t v41; // r9
  size_t v42; // r10
  size_t v43; // r11
  char *v44; // rsi
  size_t v45; // rax
  unsigned int v46; // r14d
  double v47; // xmm4_8
  double v48; // xmm5_8
  size_t v49; // r15
  unsigned __int64 v50; // r8
  void *v51; // r9
  unsigned __int64 v52; // r10
  char *v53; // rsi
  unsigned __int64 v54; // rax
  int v55; // eax
  unsigned int v56; // ebx
  size_t v58; // [rsp+8h] [rbp-D0h]
  void *v59; // [rsp+10h] [rbp-C8h]
  char **v60; // [rsp+18h] [rbp-C0h]
  unsigned __int64 *v61; // [rsp+20h] [rbp-B8h]
  size_t n; // [rsp+28h] [rbp-B0h]
  size_t v63; // [rsp+30h] [rbp-A8h]
  size_t v64; // [rsp+38h] [rbp-A0h]
  unsigned int v65; // [rsp+40h] [rbp-98h]
  int v66; // [rsp+44h] [rbp-94h]
  __int64 v67; // [rsp+48h] [rbp-90h]
  void *v68; // [rsp+50h] [rbp-88h] BYREF
  size_t v69; // [rsp+58h] [rbp-80h]
  unsigned __int64 v70; // [rsp+60h] [rbp-78h]
  void *ptr; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v72; // [rsp+78h] [rbp-60h]
  unsigned __int64 v73; // [rsp+80h] [rbp-58h]
  _BYTE src[5]; // [rsp+8Eh] [rbp-4Ah] BYREF
  char v75; // [rsp+93h] [rbp-45h] BYREF
  unsigned __int64 v76; // [rsp+98h] [rbp-40h] BYREF

  v67 = a1;
  v66 = a4;
  v76 = __readfsqword(0x28u);
  if ( !a4 )
    return 0;
  v68 = nullptr;
  v70 = 0;
  if ( a4 <= 0 )
    return 0;
  v61 = &v76;
  while ( 2 )
  {
    v14 = "";
    v69 = 0;
    v65 = 0;
    v58 = 0;
    v60 = &a3[v66];
    v59 = &v75;
    while ( 1 )
    {
      v15 = (*a2 - v58) >> 63;
      v16 = v58 - *a2;
      if ( v16 < 0 )
        v16 = *a2 - v58;
      v17 = sub_47FC90(src, (unsigned __int64)v61, v16 + 1) - src;
      v18 = v17;
      if ( v17 )
      {
        v19 = v69;
        v20 = v69 + v17;
        if ( __CFADD__(v69, v17) )
        {
          if ( v69 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( v69 != 0x7FFFFFFFFFFFFFFFLL )
              v69 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_12;
          }
          v20 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v21 = (char *)v68;
        v22 = v69;
        if ( v70 < v20 )
        {
          n = v18;
          v58 = v20;
          v68 = sub_481540((__int64)&v68, v68, v20, 1u);
          v21 = (char *)v68;
          v18 = n;
          v22 = v69;
          v20 = v58;
        }
        n = v18;
        v58 = v20;
        memset(&v21[v22], 0, v20 - v22);
        v18 = n;
        v69 = v58;
LABEL_12:
        memcpy((char *)v68 + v19, src, v18);
      }
      v23 = sub_47FB50(src, (unsigned __int64)v59, (unsigned __int8)v15) - src;
      v24 = v23;
      if ( !v23 )
        goto LABEL_19;
      v25 = v69;
      v26 = v69 + v23;
      if ( __CFADD__(v69, v23) )
      {
        if ( v69 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v69 != 0x7FFFFFFFFFFFFFFFLL )
            v69 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_18;
        }
        v26 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v27 = (char *)v68;
      v28 = v69;
      if ( v70 < v26 )
      {
        v58 = v26;
        v68 = sub_481540((__int64)&v68, v68, v26, 1u);
        v27 = (char *)v68;
        v26 = v58;
        v28 = v69;
      }
      v58 = v26;
      memset(&v27[v28], 0, v26 - v28);
      v69 = v58;
LABEL_18:
      memcpy((char *)v68 + v25, src, v24);
LABEL_19:
      v29 = *a3;
      v30 = 0;
      v31 = 0;
      v58 = *a2;
      v32 = **a3;
      v33 = *a3;
      if ( v32 )
      {
        do
        {
          if ( v14[v31] != v32 )
            break;
          v30 = (unsigned int)(v30 + 1);
          v31 = (int)v30;
          v33 = &v29[(int)v30];
          v32 = *v33;
        }
        while ( *v33 );
      }
      v34 = sub_47FB50(src, (unsigned __int64)v59, v30) - src;
      v35 = v34;
      if ( v34 )
      {
        v36 = v69;
        v37 = v69 + v34;
        if ( __CFADD__(v69, v34) )
        {
          if ( v69 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( v69 != 0x7FFFFFFFFFFFFFFFLL )
              v69 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_28;
          }
          v37 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v38 = (char *)v68;
        v39 = v69;
        if ( v70 < v37 )
        {
          v64 = v69;
          v63 = v35;
          n = v37;
          v68 = sub_481540((__int64)&v68, v68, v37, 1u);
          v38 = (char *)v68;
          v36 = v64;
          v39 = v69;
          v35 = v63;
          v37 = n;
        }
        v64 = v36;
        v63 = v35;
        n = v37;
        memset(&v38[v39], 0, v37 - v39);
        v35 = v63;
        v36 = v64;
        v69 = n;
LABEL_28:
        memcpy((char *)v68 + v36, src, v35);
      }
      if ( !v33 )
      {
        v41 = v69;
        v42 = 1;
        v33 = "";
        v43 = v69 + 1;
        if ( v69 == -1 )
        {
          v41 = -1;
          v33 = "";
LABEL_33:
          v69 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_34;
        }
        goto LABEL_38;
      }
      v40 = strlen(v33);
      v41 = v69;
      v42 = v40 + 1;
      v43 = v40 + 1 + v69;
      if ( !__CFADD__(v40 + 1, v69) )
        goto LABEL_38;
      if ( v69 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v43 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_38:
        v44 = (char *)v68;
        v45 = v41;
        if ( v70 < v43 )
        {
          v64 = v42;
          v63 = v41;
          n = v43;
          v68 = sub_481540((__int64)&v68, v68, v43, 1u);
          v44 = (char *)v68;
          v42 = v64;
          v45 = v69;
          v41 = v63;
          v43 = n;
        }
        v64 = v42;
        v63 = v41;
        n = v43;
        memset(&v44[v45], 0, v43 - v45);
        v41 = v63;
        v42 = v64;
        v69 = n;
        goto LABEL_34;
      }
      if ( v69 != 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_33;
LABEL_34:
      ++a2;
      ++a3;
      memcpy((char *)v68 + v41, v33, v42);
      ++v65;
      if ( v69 > 0x100000 || a3 == v60 )
        break;
      v14 = v29;
    }
    v46 = v65;
    v66 -= v65;
    sub_470050((__int64)&ptr, 50);
    sub_45BD90((char **)&ptr, v46);
    v49 = v69;
    if ( v69 )
    {
      v50 = v72;
      v51 = v68;
      v52 = v72 + v69;
      if ( !__CFADD__(v72, v69) )
        goto LABEL_54;
      if ( v72 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v52 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_54:
        v53 = (char *)ptr;
        v54 = v72;
        if ( v73 < v52 )
        {
          v60 = (char **)v72;
          v59 = v68;
          v58 = v52;
          ptr = sub_481540((__int64)&ptr, ptr, v52, 1u);
          v53 = (char *)ptr;
          v50 = (unsigned __int64)v60;
          v54 = v72;
          v51 = v59;
          v52 = v58;
        }
        v60 = (char **)v50;
        v59 = v51;
        v58 = v52;
        memset(&v53[v54], 0, v52 - v54);
        v51 = v59;
        v50 = (unsigned __int64)v60;
        v72 = v58;
      }
      else if ( v72 != 0x7FFFFFFFFFFFFFFFLL )
      {
        v72 = 0x7FFFFFFFFFFFFFFFLL;
      }
      memcpy((char *)ptr + v50, v51, v49);
    }
    v55 = sub_46B580((__int64 *)(v67 + 192), (__int64 *)&ptr, -1, 0, a5, a6, a7, a8, v47, v48, a11, a12);
    if ( v65 == v55 )
    {
      if ( ptr )
      {
        v72 = 0;
        j__free(ptr);
      }
      if ( v66 <= 0 )
      {
        v56 = 0;
        goto LABEL_63;
      }
      continue;
    }
    break;
  }
  if ( ptr )
  {
    v72 = 0;
    j__free(ptr);
  }
  v56 = 1;
LABEL_63:
  if ( v68 )
  {
    v69 = 0;
    j__free(v68);
  }
  return v56;
}
// 460C0A: variable 'v47' is possibly undefined
// 460C0A: variable 'v48' is possibly undefined
