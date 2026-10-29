void __fastcall sub_1F92E50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  int v7; // r12d
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  char *v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdi
  volatile signed __int32 *v30; // rax
  unsigned int v31; // ebx
  __int64 v32; // rdi
  __int64 v33; // [rsp+0h] [rbp-2D8h]
  __int64 v34; // [rsp+8h] [rbp-2D0h]
  __int64 v35; // [rsp+10h] [rbp-2C8h]
  __int64 v36; // [rsp+28h] [rbp-2B0h]
  __int128 v37; // [rsp+40h] [rbp-298h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-288h] BYREF
  volatile signed __int32 *v39; // [rsp+58h] [rbp-280h]
  void *base; // [rsp+60h] [rbp-278h] BYREF
  __int64 v41; // [rsp+68h] [rbp-270h]
  _BYTE v42[32]; // [rsp+70h] [rbp-268h] BYREF
  void *ptr; // [rsp+90h] [rbp-248h] BYREF
  __int64 v44; // [rsp+98h] [rbp-240h]
  _BYTE v45[568]; // [rsp+A0h] [rbp-238h] BYREF

  v6 = *(_DWORD *)(a1 + 2872);
  if ( !v6 )
    return;
  v7 = 0;
  v9 = *(_QWORD *)(a1 + 2864);
  v44 = 0x4000000000LL;
  v41 = 0x200000000LL;
  base = v42;
  v10 = v45;
  v33 = 8;
  v34 = 0;
  ptr = v45;
  v11 = *(_QWORD *)v9;
  v36 = 8LL * (unsigned int)(v6 - 1) + 8;
  v12 = 0;
  while ( 1 )
  {
    *(_QWORD *)&v10[8 * v12] = 0;
    v13 = *(_QWORD *)(v11 + 120);
    LODWORD(v44) = v44 + 1;
    if ( !v13 )
    {
      v19 = *(_QWORD *)(v11 + 96);
      v20 = *(_QWORD *)(v19 + 88);
      v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v20 & 1) == 0 )
      {
        v22 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v20 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          v10 = (_BYTE *)(v20 & 2);
          if ( !(_DWORD)v10 )
            goto LABEL_15;
          v21 = sub_6E2500(v22, *(_QWORD *)(v11 + 96), (__int64)v10, v9, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
          *(_QWORD *)(v19 + 88) = v21 | 1;
        }
      }
      v38 = v21;
      sub_B7BB70(&v38);
      v13 = *(_QWORD *)(v11 + 120);
    }
    v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v14 )
      goto LABEL_15;
    v10 = (_BYTE *)v14;
    if ( (*(_BYTE *)(v14 + 72) & 1) != 0 )
    {
      sub_BA8900(v11);
      v10 = (_BYTE *)(*(_QWORD *)(v11 + 120) & 0xFFFFFFFFFFFFFFF8LL);
    }
    v15 = *((_QWORD *)v10 + 7);
    if ( !v15 )
    {
LABEL_15:
      v16 = 0;
      goto LABEL_16;
    }
    LODWORD(v16) = 0;
    do
    {
      v17 = sub_1F92240(a1, v15);
      v9 = (unsigned int)v44;
      v18 = (unsigned int)v44 + 1LL;
      if ( v18 > HIDWORD(v44) )
      {
        v35 = v17;
        sub_2237220(&ptr, v45, v18, 8);
        v9 = (unsigned int)v44;
        v17 = v35;
      }
      v10 = ptr;
      *((_QWORD *)ptr + v9) = v17;
      v15 = *(_QWORD *)(v15 + 128);
      v16 = (unsigned int)(v16 + 1);
      LODWORD(v44) = v44 + 1;
    }
    while ( v15 );
LABEL_16:
    *((_QWORD *)ptr + v34) = v16;
    *(_QWORD *)&v37 = sub_1F85DD0(a1, v11, (__int64)v10, v9, a5, a6);
    v38 = v37;
    v23 = (unsigned int)v41;
    DWORD2(v37) = v7;
    v24 = (unsigned int)v41 + 1LL;
    LODWORD(v39) = v7;
    if ( v24 > HIDWORD(v41) )
    {
      sub_2237220(&base, v42, v24, 12);
      v23 = (unsigned int)v41;
    }
    v25 = (char *)base + 12 * v23;
    *(_QWORD *)v25 = v38;
    *((_DWORD *)v25 + 2) = (_DWORD)v39;
    v26 = (unsigned int)(v41 + 1);
    LODWORD(v41) = v41 + 1;
    if ( v33 == v36 )
      break;
    v9 = HIDWORD(v44);
    v27 = (unsigned int)v44 + 1LL;
    v7 = v44;
    v34 = (unsigned int)v44;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 2864) + v33);
    v12 = (unsigned int)v44;
    if ( v27 > HIDWORD(v44) )
    {
      sub_2237220(&ptr, v45, v27, 8);
      v12 = (unsigned int)v44;
    }
    v10 = ptr;
    v33 += 8;
  }
  v28 = 12 * v26;
  if ( (unsigned __int64)v28 > 0xC )
    qsort(base, 0xAAAAAAAAAAAAAAABLL * (v28 >> 2), 0xCu, (__compar_fn_t)sub_1F6A420);
  sub_1F6B880(&v37);
  sub_A1FE00(v37, 41, 1);
  sub_A1FE00(v37, 6, 4);
  sub_A1FE00(v37, 0, 10);
  v29 = *(_QWORD *)(a1 + 16);
  v30 = *((volatile signed __int32 **)&v37 + 1);
  v38 = v37;
  v37 = 0;
  v39 = v30;
  v31 = sub_A22F90(v29, (__int64 *)&v38);
  if ( v39 )
    sub_4343A0(v39);
  v32 = *(_QWORD *)(a1 + 16);
  v38 = 41;
  v39 = (volatile signed __int32 *)(unsigned int)v41;
  sub_1F759B0(v32, v31, (unsigned __int8 *)&v38, 2, (unsigned __int64)base, (unsigned int)(12 * v41), 0);
  sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x2Eu, (__int64)&ptr);
  if ( *((_QWORD *)&v37 + 1) )
    sub_4343A0(*((volatile signed __int32 **)&v37 + 1));
  if ( ptr != v45 )
    free(ptr);
  if ( base != v42 )
    free(base);
}
