__int64 __fastcall sub_1DE0390(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r15
  __int64 v6; // r12
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 *v12; // r13
  _BYTE *v13; // rax
  bool v14; // sf
  int v15; // edx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // edi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rdi
  __int64 v22; // r14
  __int64 v23; // rax
  char v24; // al
  void *v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r15d
  __int64 v30; // r14
  int v31; // eax
  unsigned __int16 *v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  int v36; // eax
  unsigned __int16 *v37; // rax
  __int64 v38; // r14
  int v39; // eax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int16 *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 *v48; // r8
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r9
  __int64 v53; // [rsp-10h] [rbp-118h]
  __int64 v54; // [rsp-8h] [rbp-110h]
  unsigned __int64 v55; // [rsp+0h] [rbp-108h]
  int v56; // [rsp+8h] [rbp-100h]
  int v57; // [rsp+8h] [rbp-100h]
  unsigned __int8 v58; // [rsp+Fh] [rbp-F9h]
  _DWORD *v59; // [rsp+18h] [rbp-F0h]
  char v60; // [rsp+2Ah] [rbp-DEh] BYREF
  char v61; // [rsp+2Bh] [rbp-DDh] BYREF
  int v62; // [rsp+2Ch] [rbp-DCh] BYREF
  void *v63; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v64; // [rsp+38h] [rbp-D0h]
  _BYTE v65[40]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v66; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+78h] [rbp-90h]
  void *ptr; // [rsp+90h] [rbp-78h] BYREF
  __int64 v69; // [rsp+98h] [rbp-70h]
  _BYTE v70[104]; // [rsp+A0h] [rbp-68h] BYREF

  v4 = a2;
  if ( (*(_DWORD *)a2 & 0x20000) == 0 )
    return v4;
  v6 = *a1;
  sub_18C74E0(*a1, 4, 0, 4);
  v12 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 32), v8, v9, v10, v11, a3, a4);
  if ( v12 == (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    v4 = 1;
    sub_190D5E0(v6, a3);
    return v4;
  }
  sub_190D5E0(v6, a3);
  v13 = v70;
  v14 = *(char *)(a2 + 7) < 0;
  ptr = v70;
  v15 = *(_DWORD *)(a2 + 4);
  v69 = 0x500000000LL;
  if ( v14 && (v15 & 0x7FFFFFFF) == 0 )
  {
    v17 = 0;
    v18 = 1;
    goto LABEL_8;
  }
  v16 = v15 & 0x7FFFFFFF;
  if ( !(_DWORD)v16 )
  {
    v19 = *(_QWORD *)(a2 + 24);
    v63 = v65;
    v20 = v19;
    v55 = v19;
    v64 = 0x200000000LL;
    sub_1E4CA90(v19);
    v21 = v20;
    v60 = 1;
    v22 = (unsigned int)v64;
    v61 = 0;
    v4 = 1;
    v62 = 0;
    v23 = sub_EEC8C0(v21, (__int64)&v63, *(double *)a3.m128_u64);
    v24 = sub_1DDBB60(
            a1,
            *(_DWORD *)(a2 + 16),
            v23,
            (__int64)v63,
            v22,
            (__int64)&v60,
            a3,
            a4,
            (__int64)&v61,
            (__int64)&v62);
    v27 = v53;
    v28 = v54;
    if ( v24 )
      goto LABEL_31;
    v58 = v60;
    if ( v60 )
    {
      if ( v62 == 1 )
      {
LABEL_25:
        if ( v61 )
        {
          v38 = *a1;
          v39 = *(_DWORD *)(*a1 + 12632);
          *(_DWORD *)(*a1 + 12632) = 0;
          v57 = v39;
          sub_1DB8420((__m128i *)&v66, a1);
          v44 = sub_1DC71F0(a1, v55, v40, v41, v42, v43, a3, a4);
          v48 = a1 + 4;
          if ( v44 == (unsigned __int16 *)((char *)&dword_0 + 1)
            || (v49 = sub_1E53EF0(*a1, (unsigned __int64)v44 & 0xFFFFFFFFFFFFFFFELL), v48 = a1 + 4, v49 == 1) )
          {
            v4 = 1;
            sub_1DB8040((__int64)a1, v48, v45, v46, (__int64)v48, v47, v66, v67);
            *(_DWORD *)(v38 + 12632) = v57;
LABEL_31:
            if ( v63 != v65 )
              free(v63);
            goto LABEL_9;
          }
          sub_14B7B40((__int64)&ptr, v49 & 0xFFFFFFFFFFFFFFFELL);
          sub_1DB8040((__int64)a1, a1 + 4, v50, v51, (__int64)(a1 + 4), v52, v66, v67);
          *(_DWORD *)(v38 + 12632) = v57;
          v58 = 0;
        }
        if ( v63 != v65 )
          free(v63);
        v18 = v58;
        v13 = ptr;
        v17 = (unsigned int)v69;
        goto LABEL_8;
      }
      v29 = 0;
      while ( 1 )
      {
        v30 = *a1;
        ++v29;
        v31 = *(_DWORD *)(*a1 + 12632);
        *(_DWORD *)(*a1 + 12632) = v29;
        v56 = v31;
        v32 = sub_1DC71F0(a1, v55, (unsigned __int64)v25, v26, v27, v28, a3, a4);
        if ( v32 == (unsigned __int16 *)((char *)&dword_0 + 1) )
          break;
        v33 = (_DWORD *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v33 & 0x4000) != 0 )
        {
          v34 = sub_1E53EF0(*a1, v33);
          if ( v34 == 1 )
            break;
          v58 = 0;
          v33 = (_DWORD *)(v34 & 0xFFFFFFFFFFFFFFFELL);
        }
        v26 = (unsigned int)v69;
        v35 = (unsigned int)v69 + 1LL;
        if ( v35 <= HIDWORD(v69) )
        {
          v25 = ptr;
          *((_QWORD *)ptr + (unsigned int)v69) = v33;
          LODWORD(v69) = v69 + 1;
          *(_DWORD *)(v30 + 12632) = v56;
          if ( v62 - 1 == v29 )
            goto LABEL_25;
        }
        else
        {
          v59 = v33;
          sub_2237220(&ptr, v70, v35, 8);
          v26 = (unsigned int)v69;
          v25 = ptr;
          *((_QWORD *)ptr + (unsigned int)v69) = v59;
          LODWORD(v69) = v69 + 1;
          *(_DWORD *)(v30 + 12632) = v56;
          if ( v29 == v62 - 1 )
            goto LABEL_25;
        }
      }
    }
    else
    {
      v30 = *a1;
      v36 = *(_DWORD *)(*a1 + 12632);
      *(_DWORD *)(*a1 + 12632) = 0;
      v56 = v36;
      v37 = sub_1DC71F0(a1, v55, (unsigned __int64)v25, v26, v53, v54, a3, a4);
      if ( v37 != (unsigned __int16 *)((char *)&dword_0 + 1) )
      {
        v4 = sub_1E4D480(
               *a1,
               (unsigned __int64)v37 & 0xFFFFFFFFFFFFFFFELL,
               *(unsigned int *)(a2 + 16),
               (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFELL,
               *(unsigned int *)(a2 + 20),
               0,
               0,
               0);
        goto LABEL_30;
      }
    }
    v4 = 1;
LABEL_30:
    *(_DWORD *)(v30 + 12632) = v56;
    goto LABEL_31;
  }
  v4 = 1;
  if ( (unsigned __int8)sub_1DDBD00(a1, (unsigned __int64 *)(a2 + 40), v16, 0, (__int64)&ptr, nullptr, a3, a4) )
    goto LABEL_9;
  v13 = ptr;
  v17 = (unsigned int)v69;
  v18 = 1;
LABEL_8:
  v4 = sub_1E4D480(
         *a1,
         *(_QWORD *)(a2 + 24),
         *(unsigned int *)(a2 + 16),
         (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFELL,
         *(unsigned int *)(a2 + 20),
         v18,
         v13,
         v17);
LABEL_9:
  if ( ptr != v70 )
    free(ptr);
  return v4;
}
