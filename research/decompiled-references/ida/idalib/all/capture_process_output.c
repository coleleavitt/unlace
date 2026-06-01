__int64 __fastcall capture_process_output(__int64 a1, const __m128i *a2, __int64 *a3, int a4, __int64 a5)
{
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edx
  void *v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rsi
  int v16; // eax
  __m128i v17; // xmm0
  __int64 v18; // r13
  int v19; // r14d
  __int64 v20; // rdx
  unsigned int v21; // ebp
  int v23; // eax
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // [rsp+Ch] [rbp-ECh] BYREF
  int v29; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v31; // [rsp+20h] [rbp-D8h]
  unsigned int v32; // [rsp+28h] [rbp-D0h]
  _OWORD v33[2]; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v34; // [rsp+50h] [rbp-A8h]
  __m128i v35; // [rsp+60h] [rbp-98h]
  __m128i v36; // [rsp+70h] [rbp-88h]
  _QWORD v37[2]; // [rsp+80h] [rbp-78h] BYREF
  __int128 v38; // [rsp+90h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-58h]
  __int64 v40; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v41; // [rsp+B8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v29 = a4;
  v10 = qtime64(a1, a2);
  v11 = 1000000 * HIDWORD(v10) + (unsigned int)v10;
  v12 = v29;
  v30 = v11;
  if ( v29 < 0 )
  {
    v31 = 0;
    if ( v29 != -1 )
      v12 = -v29;
  }
  else
  {
    v31 = 1000 * v29 + v11;
  }
  v32 = v12;
  if ( a3 )
  {
    v13 = (void *)*a3;
    if ( *a3 )
    {
      a3[1] = 0;
      qfree(v13);
      *a3 = 0;
      a3[2] = 0;
    }
  }
  if ( a5 )
  {
    v14 = 1;
    v15 = 2;
  }
  else
  {
    v14 = 0;
    v15 = 1;
  }
  v39 = a1;
  v37[0] = &off_2B3CD40;
  v37[1] = 0;
  v40 = a5;
  v38 = 0;
  v16 = sub_83C340(v37, v15);
  if ( v16 )
  {
    winerr(v16);
    sub_83C550(a3);
    goto LABEL_18;
  }
  v33[0] = _mm_loadu_si128(a2);
  v33[1] = _mm_loadu_si128(a2 + 1);
  v34 = _mm_loadu_si128(a2 + 2);
  v17 = _mm_loadu_si128(a2 + 3);
  v34.m128i_i64[0] = -1;
  v35 = v17;
  v36 = _mm_loadu_si128(a2 + 4);
  v34.m128i_i64[1] = (int)**((_DWORD **)&v38 + 1);
  v35.m128i_i64[0] = *(int *)(*((_QWORD *)&v38 + 1) + 4 * v14);
  v18 = launch_process(v33, a3);
  sub_83C460((__int64)v37);
  if ( !v18 )
  {
LABEL_18:
    v21 = 0;
    goto LABEL_19;
  }
  if ( v29 >= 0 )
  {
    v26 = qtime64(v37, a3);
    v27 = (unsigned int)v26 + 1000000 * HIDWORD(v26);
    if ( v27 + 10 >= v31 )
    {
      sub_83C290((__int64)v37);
      goto LABEL_25;
    }
    v32 = (v31 + 999 - v27) / 0x3E8;
  }
  v19 = sub_83C640(v37, a3, (unsigned int *)&v29, 0x400u);
  sub_83C290((__int64)v37);
  if ( v19 == -1 )
    goto LABEL_25;
  if ( v29 < 0 )
    goto LABEL_13;
  v24 = qtime64(v37, a3);
  v25 = (unsigned int)v24 + 1000000 * HIDWORD(v24);
  if ( v25 + 10 >= v31 )
  {
LABEL_25:
    sub_83C550(a3);
    goto LABEL_26;
  }
  v32 = (v31 + 999 - v25) / 0x3E8;
LABEL_13:
  v20 = 0xFFFFFFFFLL;
  if ( a4 >= 0 )
    v20 = v32;
  if ( (unsigned int)check_process_exit(v18, &v28, v20) == -1 )
  {
    sub_83C550(a3);
LABEL_26:
    v23 = term_process(v18);
    if ( v23 )
    {
      winerr(v23);
      sub_83C550(a3);
    }
    goto LABEL_18;
  }
  v21 = 1;
  if ( v28 )
  {
    sub_83C550(a3);
    goto LABEL_18;
  }
LABEL_19:
  v37[0] = &off_2B3CD18;
  sub_83C290((__int64)v37);
  return v21;
}
