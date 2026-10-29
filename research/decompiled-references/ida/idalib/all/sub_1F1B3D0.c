// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_1F1B3D0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i v15; // rax
  __int64 v16; // rsi
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  unsigned __int64 v19; // rdx
  int v20; // r12d
  char *v21; // r15
  int v22; // r13d
  __int64 v23; // rax
  int v24; // r13d
  __int64 v25; // rax
  int v26; // r13d
  __int64 v27; // rax
  int v28; // r13d
  __int64 v29; // rax
  int v30; // r13d
  __int64 v31; // rax
  int v32; // r13d
  __int64 v33; // rax
  __int64 v34; // rdx
  __m128i v35; // [rsp+0h] [rbp-108h] BYREF
  void *v36; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v37; // [rsp+18h] [rbp-F0h]
  __m128i v38; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+30h] [rbp-D8h]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+48h] [rbp-C0h]
  _QWORD v42[23]; // [rsp+50h] [rbp-B8h] BYREF

  if ( !a2 )
  {
    sub_1EACA60(a1, 0);
    *(_QWORD *)&word_10 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    BUG();
  }
  v4 = a2 + 24;
  sub_1EACA60(a1, v4);
  v5 = sub_1F61940(*(_QWORD *)(*a1 + 8));
  v6 = *a1;
  *(_QWORD *)(a2 + 40) = v5;
  v7 = sub_1EE7490(v6);
  v8 = *a1;
  *(_DWORD *)(a2 + 12) = v7;
  v9 = sub_1EE7490(v8);
  v10 = *a1;
  *(_DWORD *)(a2 + 48) = v9;
  v15.m128i_i64[0] = sub_1F194E0(v10, v4, v11, v12, v13, v14);
  v16 = *a1;
  v35 = v15;
  sub_1F194A0((__int64)&v38, v16);
  v17 = _mm_load_si128(&v35);
  v18 = _mm_load_si128(&v38);
  v19 = *(unsigned int *)(a2 + 16);
  ptr = v42;
  v42[0] = v39;
  *(_QWORD *)(a2 + 88) = v39;
  v20 = v19;
  *(__m128i *)(a2 + 56) = v17;
  *(__m128i *)(a2 + 72) = v18;
  v41 = 0x1000000000LL;
  if ( v19 > 0x10 )
  {
    v21 = (char *)(a2 + 96);
    sub_2237220(&ptr, v42, v19, 8);
    if ( v20 )
    {
LABEL_4:
      v22 = 0;
      do
      {
        ++v22;
        v23 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        sub_14B7B40((__int64)&ptr, v23);
      }
      while ( v22 != v20 );
      v24 = 0;
      v36 = ptr;
      v37 = (unsigned int)v41;
      sub_EB8020((__int64)&v36, v21);
      LODWORD(v41) = 0;
      do
      {
        ++v24;
        v25 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        sub_14B7B40((__int64)&ptr, v25);
      }
      while ( v24 != v20 );
      v26 = 0;
      sub_EB83B0(a2, (__int64)ptr, (unsigned int)v41);
      LODWORD(v41) = 0;
      do
      {
        ++v26;
        v27 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        sub_14B7B40((__int64)&ptr, v27);
      }
      while ( v26 != v20 );
      v28 = 0;
      sub_EB83E0(a2, (__int64)ptr, (unsigned int)v41);
      LODWORD(v41) = 0;
      do
      {
        ++v28;
        v29 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        sub_14B7B40((__int64)&ptr, v29);
      }
      while ( v28 != v20 );
      v30 = 0;
      sub_EB8410(a2, (__int64)ptr, (unsigned int)v41);
      LODWORD(v41) = 0;
      do
      {
        ++v30;
        v31 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        sub_14B7B40((__int64)&ptr, v31);
      }
      while ( v30 != v20 );
      v32 = 0;
      sub_EB8440(a2, (__int64)ptr, (unsigned int)v41);
      LODWORD(v41) = 0;
      do
      {
        ++v32;
        v33 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        sub_14B7B40((__int64)&ptr, v33);
      }
      while ( v32 != v20 );
      v34 = (unsigned int)v41;
      goto LABEL_17;
    }
  }
  else
  {
    v21 = (char *)(a2 + 96);
    if ( (_DWORD)v19 )
      goto LABEL_4;
  }
  v36 = ptr;
  v37 = (unsigned int)v41;
  sub_EB8020((__int64)&v36, v21);
  LODWORD(v41) = 0;
  sub_EB83B0(a2, (__int64)ptr, 0);
  LODWORD(v41) = 0;
  sub_EB83E0(a2, (__int64)ptr, 0);
  LODWORD(v41) = 0;
  sub_EB8410(a2, (__int64)ptr, 0);
  LODWORD(v41) = 0;
  sub_EB8440(a2, (__int64)ptr, 0);
  LODWORD(v41) = 0;
  v34 = 0;
LABEL_17:
  sub_EB8470(a2, (__int64)ptr, v34);
  if ( ptr != v42 )
    free(ptr);
}
