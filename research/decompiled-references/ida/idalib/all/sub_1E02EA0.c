__int64 *__fastcall sub_1E02EA0(__int64 a1, __int64 a2, __int64 a3, __m128 a4, __m128 a5)
{
  __int64 *v8; // r12
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int8 v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // r14d
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 *v25; // rbp
  __int64 v26; // r14
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __m128 si128; // xmm0
  _QWORD *v31; // rax
  __int64 v32; // r13
  int v33; // eax
  __int64 v35; // rax
  __int64 *v36; // rdx
  __int64 v37; // rdi
  __int64 *v38; // rdx
  __int64 v39; // rbx
  __int64 *v40; // rbp
  unsigned int v41; // r13d
  unsigned int v42; // r12d
  __int64 v43; // r13
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // r12d
  int v51; // r12d
  __int64 v52; // rax
  int v53; // r13d
  __int64 v54; // rcx
  unsigned int v55; // ebp
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // edx
  __int64 *v59; // r12
  __int64 *v60; // r14
  __int64 v61; // rbp
  __int64 v62; // r13
  __int64 *v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdi
  __int64 v67; // [rsp-10h] [rbp-E8h]
  _QWORD *v68; // [rsp+0h] [rbp-D8h]
  __int64 v69; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v70; // [rsp+0h] [rbp-D8h]
  _QWORD *v71; // [rsp+0h] [rbp-D8h]
  void **v72; // [rsp+8h] [rbp-D0h]
  __int64 v73; // [rsp+8h] [rbp-D0h]
  __int64 *v74; // [rsp+8h] [rbp-D0h]
  __int64 *v75; // [rsp+8h] [rbp-D0h]
  __int64 *v76; // [rsp+10h] [rbp-C8h]
  __int64 v77; // [rsp+10h] [rbp-C8h]
  __int64 *v78; // [rsp+18h] [rbp-C0h]
  unsigned int v79; // [rsp+24h] [rbp-B4h]
  __int64 *v80; // [rsp+28h] [rbp-B0h]
  __int64 v81; // [rsp+30h] [rbp-A8h]
  __int64 v82; // [rsp+38h] [rbp-A0h]
  void *v83[2]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v84[32]; // [rsp+50h] [rbp-88h] BYREF
  void *ptr; // [rsp+70h] [rbp-68h] BYREF
  __m128 v86; // [rsp+78h] [rbp-60h]
  _BYTE v87[80]; // [rsp+88h] [rbp-50h] BYREF

  v8 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    v8 = (__int64 *)v8[4];
  v9 = 0;
  v10 = 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    if ( v10 )
      v10 -= 64LL;
    v11 = sub_B987D0((_QWORD *)a2, 0);
    v13 = v11;
    v14 = v11 & 0xFFFFFFFFFFFFFFF0LL;
    v15 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v15 + 16) - 43 <= 1
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
      && (v70 = v11 & 0xFFFFFFFFFFFFFFF0LL, v35 = sub_F63050(v15, 0, v14, v12), v14 = v70, (v15 = v35) != 0) )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(v15 + 32);
        if ( (*(_BYTE *)(v15 + 18) & 0x10) == 0 )
          break;
        while ( 1 )
        {
          v15 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v15 + 16) - 43 <= 1 )
            break;
          v17 = sub_F63050(v15, 0, v14, v12);
          v16 = *(_QWORD *)(v17 + 32);
          if ( (*(_BYTE *)(v17 + 18) & 0x10) == 0 )
            goto LABEL_10;
        }
      }
LABEL_10:
      v13 = v16;
      v14 = v16 & 0xFFFFFFFFFFFFFFF0LL;
    }
    v18 = *(_QWORD *)(v14 + 8);
    v19 = 0;
    if ( (v18 & 8) != 0 )
      v19 = *(__int64 *)((char *)&qword_18 + (v18 & 0xFFFFFFFFFFFFFFF0LL));
    v9 = v19 | (v13 | (unsigned __int8)v18) & 7;
  }
  v20 = *(unsigned __int8 *)(a1 + 56);
  v72 = *(void ***)(a2 + 40);
  v68 = *(_QWORD **)a1;
  v21 = sub_B72FF0(a2);
  v78 = sub_1DEFAD0(v68, v8, *(_QWORD *)(a1 + 32), v21, v72, v10, *(double *)a4.m128_u64, a5, v9, v20);
  v23 = v67;
  if ( !v78 )
    return nullptr;
  v24 = *v8;
  v25 = v8 + 1;
  v26 = *v8;
  if ( *v8 & 7 | (*v8 >> 3) & 1 )
    goto LABEL_18;
  if ( *(_BYTE *)(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 40 )
  {
    v23 = (__int64)(v8 + 1);
    v26 = sub_F6D010(v24, (unsigned __int64)(v8 + 1));
    v25 = v36;
    if ( v26 & 7 | (v26 >> 3) & 1 )
      goto LABEL_18;
    v28 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v28 + 16) != 26 )
      goto LABEL_18;
  }
  else
  {
    v27 = v24 & 0xFFFFFFFFFFFFFFF0LL;
    v28 = *(_QWORD *)v27;
    if ( *(_BYTE *)(*(_QWORD *)v27 + 16LL) != 26 )
    {
LABEL_18:
      v29 = *(_QWORD *)(a2 + 120);
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
      v87[16] = 0;
      v83[0] = v84;
      v83[1] = (void *)0x400000000LL;
      v31 = *(_QWORD **)a1;
      ptr = v87;
      v32 = *(_QWORD *)(a1 + 32);
      v86 = si128;
      v69 = (__int64)v31;
      v73 = v29;
      v33 = sub_B76070(a2, v23, v29, v22);
      if ( !(unsigned __int8)sub_1DE7190(
                               v69,
                               *(_DWORD *)(a2 + 24),
                               v73,
                               v33,
                               0,
                               v32,
                               si128,
                               a5,
                               (__int64)v83,
                               a3,
                               (__int64)&ptr) )
      {
        if ( ptr != v87 )
          free(ptr);
        if ( v83[0] != v84 )
          free(v83[0]);
        return v78;
      }
      if ( ptr != v87 )
        free(ptr);
      if ( v83[0] != v84 )
        free(v83[0]);
      return nullptr;
    }
  }
  if ( !v26 )
    goto LABEL_18;
  if ( v78 == v8 )
  {
    if ( *(_BYTE *)(v26 + 16) != 25 )
    {
      v58 = *(unsigned __int16 *)(v26 + 22);
      if ( *(_WORD *)(v26 + 22) )
      {
        v75 = v8;
        v59 = (__int64 *)a1;
        v60 = v25 + 2;
        v61 = (__int64)&v25[(unsigned int)(v58 - 1) + 3];
        v62 = a2;
        v63 = (__int64 *)(v28 + 48);
        do
        {
          v66 = *v59;
          if ( *v60 )
          {
            v64 = sub_1DD7820(v66, *v60, v59[4], 0, 0, 0, a4, a5, 1);
            if ( !v64 )
              return nullptr;
          }
          else
          {
            v64 = sub_17A5990(v66, v62 + 72, *(_DWORD *)(v62 + 24), *v63);
          }
          v65 = *(unsigned int *)(a3 + 8);
          if ( v65 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
          {
            v77 = v64;
            sub_2237220(a3, a3 + 16, v65 + 1, 8);
            v65 = *(unsigned int *)(a3 + 8);
            v64 = v77;
          }
          ++v60;
          ++v63;
          *(_QWORD *)(*(_QWORD *)a3 + 8 * v65) = v64;
          ++*(_DWORD *)(a3 + 8);
        }
        while ( (__int64 *)v61 != v60 );
        return v75;
      }
    }
  }
  else
  {
    v37 = *v78;
    v74 = v78 + 1;
    if ( !(*v78 & 7 | (*v78 >> 3) & 1) && *(_BYTE *)(*(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 40 )
    {
      sub_F6D010(v37, (unsigned __int64)(v78 + 1));
      v74 = v38;
    }
    if ( *(_BYTE *)(v26 + 16) != 25 && *(_WORD *)(v26 + 22) )
    {
      v39 = v25[2];
      if ( !v39 )
        return nullptr;
      v40 = v25 + 3;
      v71 = (_QWORD *)a1;
      v41 = 0;
      v76 = &v40[(unsigned int)*(unsigned __int16 *)(v26 + 22) - 1];
      v82 = a3 + 16;
      while ( 1 )
      {
        v47 = *(_QWORD *)(*v71 + 11280LL);
        if ( sub_B799A0(v39) && (v50 = sub_1E4CC70(*v71, *(_QWORD *)(v39 + 48), v71[4])) != 0 )
        {
          sub_1DC29F0(v47, v39, v48, v49);
          v51 = v50 - 1;
          if ( v51 )
          {
            v52 = v41;
            v80 = v40;
            v79 = v51 + v41;
            v53 = v51 + v41;
            while ( 1 )
            {
              v54 = *(unsigned int *)(a3 + 8);
              v55 = v52 + 1;
              v56 = v74[v52 + 2];
              if ( v54 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
              {
                v81 = v56;
                sub_2237220(a3, v82, v54 + 1, 8);
                v54 = *(unsigned int *)(a3 + 8);
                v57 = *(_QWORD *)a3;
                v56 = v81;
              }
              else
              {
                v57 = *(_QWORD *)a3;
              }
              *(_QWORD *)(v57 + 8 * v54) = v56;
              ++*(_DWORD *)(a3 + 8);
              sub_1DC26A0(v47, v39, v56, v54);
              if ( v55 == v53 )
                break;
              v52 = v55;
            }
            v40 = v80;
            v41 = v79;
          }
        }
        else
        {
          v42 = v41 + 1;
          v43 = v74[v41 + 2];
          v44 = *(unsigned int *)(a3 + 8);
          v45 = *(unsigned int *)(a3 + 12);
          if ( v44 + 1 > v45 )
          {
            sub_2237220(a3, v82, v44 + 1, 8);
            v44 = *(unsigned int *)(a3 + 8);
          }
          *(_QWORD *)(*(_QWORD *)a3 + 8 * v44) = v43;
          v46 = v43;
          v41 = v42;
          ++*(_DWORD *)(a3 + 8);
          sub_1DC20B0(v47, v39, v46, v45);
        }
        if ( v40 == v76 )
          break;
        v39 = *v40++;
        if ( !v39 )
          return nullptr;
      }
    }
  }
  return v78;
}
