/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_413C90
// Address: 0x0000000000413C90

//----- (0000000000413C90) ----------------------------------------------------
__int64 __fastcall sub_413C90(__int64 *a1)
{
  bool v1; // zf
  __int64 v3; // rbp
  _QWORD *v4; // r12
  void *v5; // rdi
  __int64 v6; // r14
  _QWORD *v7; // r13
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // rbp
  _QWORD *v11; // r12
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  __int64 v15; // rbp
  void *v16; // rdi
  __m128i v17; // xmm3
  __m128i v18; // xmm2
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  unsigned __int64 v21; // r12
  void **v22; // rbp
  void *v23; // rdi
  __m128i v24; // xmm5
  FILE *v25; // rdi
  __int64 v26; // rbp
  void *v27; // rdi
  td_thragent_t *v28; // rdi
  _QWORD *v29; // rbp
  _QWORD *v30; // r12
  void *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  void *v35; // rdi
  int v36; // ebp
  __int64 v37; // rax
  void *v38; // rdi
  void *v39; // rdi
  __m128i v41; // [rsp+0h] [rbp-98h] BYREF
  __m128i v42; // [rsp+10h] [rbp-88h] BYREF
  _OWORD v43[2]; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v44[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-30h]

  v1 = *((_DWORD *)a1 + 335) == -1;
  v45 = __readfsqword(0x28u);
  if ( !v1 )
    (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, 0);
  v3 = a1[153];
  *(__int64 *)((char *)a1 + 1340) = -1;
  *((_BYTE *)a1 + 1348) = 0;
  *((_BYTE *)a1 + 861) = 0;
  *(_WORD *)((char *)a1 + 1413) = 0;
  while ( v3 )
  {
    v4 = (_QWORD *)v3;
    sub_40F6B0(*(_QWORD **)(v3 + 24));
    v5 = *(void **)(v3 + 72);
    v3 = *(_QWORD *)(v3 + 16);
    if ( v5 )
    {
      v4[10] = 0;
      j__free(v5);
    }
    operator delete(v4, 0x60u);
  }
  v6 = a1[147];
  a1[153] = 0;
  a1[154] = (__int64)(a1 + 152);
  a1[155] = (__int64)(a1 + 152);
  a1[156] = 0;
  while ( v6 )
  {
    v7 = (_QWORD *)v6;
    sub_4104B0(*(_QWORD **)(v6 + 24));
    v8 = *(void **)(v6 + 176);
    v6 = *(_QWORD *)(v6 + 16);
    if ( v8 )
    {
      v7[23] = 0;
      j__free(v8);
    }
    v9 = (void *)v7[19];
    if ( v9 )
    {
      v7[20] = 0;
      j__free(v9);
    }
    v10 = v7[15];
    while ( v10 )
    {
      v11 = (_QWORD *)v10;
      sub_40F970(*(_QWORD **)(v10 + 24));
      v12 = *(void **)(v10 + 40);
      v10 = *(_QWORD *)(v10 + 16);
      if ( v12 )
      {
        v11[6] = 0;
        j__free(v12);
      }
      operator delete(v11, 0x40u);
    }
    v13 = (void *)v7[10];
    if ( v13 )
    {
      v7[11] = 0;
      j__free(v13);
    }
    v14 = (void *)v7[7];
    if ( v14 )
    {
      v7[8] = 0;
      j__free(v14);
    }
    operator delete(v7, 0xD0u);
  }
  v15 = a1[141];
  a1[147] = 0;
  a1[148] = (__int64)(a1 + 146);
  a1[149] = (__int64)(a1 + 146);
  a1[150] = 0;
  while ( v15 )
  {
    sub_40FDA0(*(_QWORD **)(v15 + 24));
    v16 = (void *)v15;
    v15 = *(_QWORD *)(v15 + 16);
    operator delete(v16, 0x28u);
  }
  v17 = _mm_loadu_si128((const __m128i *)(a1 + 17));
  a1[141] = 0;
  a1[142] = (__int64)(a1 + 140);
  v18 = _mm_loadu_si128((const __m128i *)(a1 + 19));
  a1[143] = (__int64)(a1 + 140);
  v19 = _mm_loadu_si128((const __m128i *)(a1 + 21));
  v20 = _mm_loadu_si128((const __m128i *)(a1 + 23));
  v42 = v17;
  a1[144] = 0;
  v43[0] = v19;
  v43[1] = v20;
  v44[0] = v17;
  v41 = v18;
  v44[1] = v18;
  sub_40DD40((__int64 *)v44, (__int64 *)v43);
  v21 = a1[24] + 8;
  v22 = (void **)(v18.m128i_i64[1] + 8);
  if ( v18.m128i_i64[1] + 8 < v21 )
  {
    do
    {
      v23 = *v22++;
      operator delete(v23, 0x1F8u);
    }
    while ( (unsigned __int64)v22 < v21 );
  }
  v24 = _mm_load_si128(&v41);
  v25 = (FILE *)a1[175];
  *(__m128i *)(a1 + 21) = _mm_load_si128(&v42);
  *(__m128i *)(a1 + 23) = v24;
  if ( v25 )
  {
    sub_480D70(v25);
    a1[175] = 0;
  }
  v26 = a1[66];
  *((_BYTE *)a1 + 1008) = 0;
  while ( v26 )
  {
    sub_40EDE0(*(_QWORD **)(v26 + 24));
    v27 = (void *)v26;
    v26 = *(_QWORD *)(v26 + 16);
    operator delete(v27, 0x40u);
  }
  v28 = (td_thragent_t *)a1[119];
  a1[66] = 0;
  a1[67] = (__int64)(a1 + 65);
  a1[68] = (__int64)(a1 + 65);
  a1[69] = 0;
  *((_WORD *)a1 + 675) = 0;
  if ( v28 )
  {
    td_ta_delete(v28);
    v29 = qword_4C8050;
    a1[119] = 0;
    while ( v29 )
    {
      v30 = v29;
      sub_40F140((_QWORD *)v29[3]);
      v31 = (void *)v29[4];
      v29 = (_QWORD *)v29[2];
      if ( v31 )
      {
        v30[5] = 0;
        j__free(v31);
      }
      operator delete(v30, 0x40u);
    }
    qword_4C8050 = nullptr;
    qword_4C8058 = (__int64)&dword_4C8048;
    qword_4C8060 = (__int64)&dword_4C8048;
    qword_4C8068 = 0;
  }
  v32 = a1[120];
  if ( v32 )
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *, _QWORD))(*a1 + 320))(
      a1,
      4,
      v32,
      a1 + 121,
      *((unsigned __int8 *)a1 + 969));
  v33 = a1[122];
  *((_BYTE *)a1 + 969) = 0;
  a1[120] = 0;
  if ( v33 )
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *, _QWORD))(*a1 + 320))(
      a1,
      4,
      v33,
      a1 + 123,
      *((unsigned __int8 *)a1 + 985));
  v34 = a1[124];
  *((_BYTE *)a1 + 985) = 0;
  a1[122] = 0;
  if ( v34 )
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *, _QWORD))(*a1 + 320))(
      a1,
      4,
      v34,
      a1 + 125,
      *((unsigned __int8 *)a1 + 1001));
  v35 = (void *)a1[177];
  a1[124] = 0;
  *((_BYTE *)a1 + 1001) = 0;
  *((_DWORD *)a1 + 352) = 0;
  if ( v35 )
  {
    a1[178] = 0;
    j__free(v35);
    a1[177] = 0;
    a1[179] = 0;
  }
  v1 = a1[137] == 0;
  *((_BYTE *)a1 + 1349) = 0;
  a1[181] = 0;
  if ( !v1 )
  {
    v36 = 0;
    v37 = 0;
    do
    {
      ++v36;
      j__free(*(void **)(a1[136] + 8 * v37));
      v37 = v36;
    }
    while ( v36 < (unsigned __int64)a1[137] );
  }
  v38 = (void *)a1[133];
  if ( v38 )
  {
    a1[134] = 0;
    j__free(v38);
    a1[133] = 0;
    a1[135] = 0;
  }
  v39 = (void *)a1[136];
  if ( v39 )
  {
    a1[137] = 0;
    j__free(v39);
    a1[136] = 0;
    a1[138] = 0;
  }
  return sub_4569A0(a1);
}
// 4C8048: using guessed type int dword_4C8048;
// 4C8058: using guessed type __int64 qword_4C8058;
// 4C8060: using guessed type __int64 qword_4C8060;
// 4C8068: using guessed type __int64 qword_4C8068;
