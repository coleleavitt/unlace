bool __fastcall sub_1A5CFC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  char *v21; // r8
  char *v22; // r9
  __int64 v23; // rdi
  __int64 v24; // rbp
  unsigned __int64 v25; // rax
  _QWORD *v26; // rbx
  int v27; // eax
  __m128i v28; // xmm1
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // edx
  char *v38; // rbx
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rdi
  int v44; // eax
  void **v45; // rbx
  char *v46; // rdi
  void **v47; // r12
  void **v48; // r14
  void **v49; // rdi
  void **v50; // r13
  int v51; // eax
  unsigned __int64 v53; // [rsp+10h] [rbp-128h]
  char *v54; // [rsp+18h] [rbp-120h]
  __int64 v55; // [rsp+20h] [rbp-118h]
  __int64 v56; // [rsp+28h] [rbp-110h]
  __int64 v58; // [rsp+50h] [rbp-E8h] BYREF
  void *ptr; // [rsp+58h] [rbp-E0h]
  __int64 v60; // [rsp+60h] [rbp-D8h]
  _BYTE v61[64]; // [rsp+68h] [rbp-D0h] BYREF
  void *v62[2]; // [rsp+A8h] [rbp-90h]
  unsigned __int64 v63; // [rsp+B8h] [rbp-80h]
  __int64 v64; // [rsp+C0h] [rbp-78h]
  __m128i v65; // [rsp+C8h] [rbp-70h]
  __int64 v66; // [rsp+D8h] [rbp-60h]
  __int64 v67; // [rsp+E0h] [rbp-58h]
  int v68; // [rsp+E8h] [rbp-50h]
  int v69; // [rsp+ECh] [rbp-4Ch]
  __int64 v70; // [rsp+F0h] [rbp-48h]

  v7 = a3;
  sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), a3, a4, a5, a6);
  v12 = *(_QWORD *)(v7 + 128);
  if ( (*(_BYTE *)(v12 + 24) & 1) != 0 )
    v13 = sub_B96980(v12);
  else
    v13 = *(_QWORD *)(v12 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(v7 + 104) + 96LL), *(_QWORD *)(v7 + 104), v8, v9, v10, v11);
  v14 = *(_QWORD *)(v7 + 104);
  v55 = v13 + 24LL * *(unsigned int *)(*(_QWORD *)(v7 + 128) + 16LL);
  sub_7052B0((__int64 *)(v14 + 96), v14, v15, v16, v17, v18);
  v23 = *(_QWORD *)(v7 + 128);
  if ( (*(_BYTE *)(v23 + 24) & 1) != 0 )
    v24 = sub_B96980(v23);
  else
    v24 = *(_QWORD *)(v23 + 24);
  if ( v55 != v24 )
  {
    v56 = v7;
    while ( 1 )
    {
      v25 = *(_QWORD *)(**(_QWORD **)(v24 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v25 + 8) & 0xF) != 0 )
        v25 = sub_F64F00(**(_QWORD **)(v24 + 16), v14, v19, v20, (__int64)v21);
      v26 = sub_F60F10(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
              v14,
              v19,
              v20,
              (__int64)v21,
              (__int64)v22);
      v27 = *(_DWORD *)(a2 + 152);
      v28 = _mm_loadu_si128((const __m128i *)(a2 + 120));
      ptr = v61;
      v29 = *(_QWORD *)(a2 + 136);
      v68 = v27;
      *(_OWORD *)v62 = 0;
      v65 = v28;
      v66 = v29;
      v60 = 0x800000000LL;
      v70 = 0x101010000LL;
      v58 = 0;
      v63 = 0;
      v64 = a1;
      v67 = 0;
      v69 = 0;
      sub_1A395A0((__int64)&v58);
      v14 = (unsigned __int64)&v58;
      v63 = sub_A7A9D0(*(_QWORD *)(a1 + 248), v56, v30, v31, v32, v33);
      if ( v26 )
        v26 += 8;
      sub_1A5C990(a1, (__int64)&v58, (unsigned __int64)v26, v34, 0.0, *(double *)v28.m128i_i64, v35, v36);
      v21 = (char *)ptr;
      v22 = (char *)ptr + 8 * (unsigned int)v60;
      if ( v22 != ptr )
        break;
LABEL_26:
      v45 = (void **)v62[0];
      v19 = 0;
      *(_WORD *)((char *)&v70 + 3) = 0;
      if ( v62[0] )
      {
        v46 = *((char **)v62[0] + 29);
        if ( v46 != (char *)v62[0] + 248 )
          free(v46);
        if ( !*((_BYTE *)v45 + 188) )
          free(v45[21]);
        if ( ((_BYTE)v45[4] & 1) == 0 )
          operator delete(v45[5], 16LL * *((unsigned int *)v45 + 12), 8);
        v47 = (void **)v45[1];
        v48 = v45 + 1;
        if ( v45 + 1 != v47 )
        {
          while ( 1 )
          {
            v49 = (void **)v47[2];
            v50 = (void **)*v47;
            if ( v49 == v47 + 4 )
            {
              operator delete(v47);
              if ( v48 == v50 )
                break;
            }
            else
            {
              free(v49);
              operator delete(v47);
              if ( v48 == v50 )
                break;
            }
            v47 = v50;
          }
        }
        v14 = 368;
        operator delete(v45, 0x170u);
      }
      if ( ptr == v61 )
      {
        v24 += 24;
        if ( v24 == v55 )
        {
LABEL_42:
          v7 = v56;
          goto LABEL_43;
        }
      }
      else
      {
        free(ptr);
        v24 += 24;
        if ( v55 == v24 )
          goto LABEL_42;
      }
    }
    v37 = *(_DWORD *)(a2 + 16);
    v38 = (char *)ptr + 8 * (unsigned int)v60;
    while ( 1 )
    {
      v43 = *(_QWORD *)v21 & 3LL;
      LODWORD(v39) = (*(_BYTE *)(v24 + 12) >> 2) & 3;
      if ( (*(_BYTE *)(v24 + 12) & 0xC) == 0xC )
      {
        if ( (*(_BYTE *)(v24 + 12) & 2) == 0 )
        {
          v39 = (unsigned int)v43;
          if ( (_DWORD)v43 == 2 )
            v39 = 3;
          goto LABEL_16;
        }
        LODWORD(v39) = 2;
        if ( (_DWORD)v43 != 2 )
        {
LABEL_14:
          v39 = (unsigned int)v39;
          if ( (int)v39 <= (int)v43 )
            v39 = (unsigned int)v43;
          goto LABEL_16;
        }
      }
      else if ( (_DWORD)v43 != 2 )
      {
        goto LABEL_14;
      }
      v39 = 3;
LABEL_16:
      v14 = *(unsigned int *)(a2 + 20);
      v40 = v39 | *(_QWORD *)v21 & 0xFFFFFFFFFFFFFFF8LL;
      v20 = v37;
      v41 = v37 + 1LL;
      if ( v41 > v14 )
      {
        v14 = a2 + 24;
        v54 = v21;
        v53 = v40;
        sub_2237220(a2 + 8, a2 + 24, v41, 8);
        v20 = *(unsigned int *)(a2 + 16);
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v20) = v53;
        v44 = *(_DWORD *)(a2 + 16);
        v21 = v54 + 8;
        *(_DWORD *)a2 = 2;
        v37 = v44 + 1;
        *(_DWORD *)(a2 + 16) = v44 + 1;
        if ( v38 == v54 + 8 )
          goto LABEL_26;
      }
      else
      {
        v21 += 8;
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v20) = v40;
        v42 = *(_DWORD *)(a2 + 16);
        *(_DWORD *)a2 = 2;
        v37 = v42 + 1;
        *(_DWORD *)(a2 + 16) = v42 + 1;
        if ( v38 == v21 )
          goto LABEL_26;
      }
    }
  }
LABEL_43:
  sub_1A43500(a2);
  v51 = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 96) = v7;
  return v51 != 0;
}
