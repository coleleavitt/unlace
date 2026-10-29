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
  const char *v23; // rsi
  int v24; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // [rsp+Ch] [rbp-ECh] BYREF
  int v30; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v31; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v32; // [rsp+20h] [rbp-D8h]
  unsigned int v33; // [rsp+28h] [rbp-D0h]
  _OWORD v34[2]; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v35; // [rsp+50h] [rbp-A8h]
  __m128i v36; // [rsp+60h] [rbp-98h]
  __m128i v37; // [rsp+70h] [rbp-88h]
  _QWORD v38[2]; // [rsp+80h] [rbp-78h] BYREF
  __int128 v39; // [rsp+90h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-58h]
  __int64 v41; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+B8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v30 = a4;
  v10 = qtime64(a1, a2);
  v11 = 1000000 * HIDWORD(v10) + (unsigned int)v10;
  v12 = v30;
  v31 = v11;
  if ( v30 < 0 )
  {
    v32 = 0;
    if ( v30 != -1 )
      v12 = -v30;
  }
  else
  {
    v32 = 1000 * v30 + v11;
  }
  v33 = v12;
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
  v40 = a1;
  v38[0] = &off_2B12DA0;
  v38[1] = 0;
  v41 = a5;
  v39 = 0;
  v16 = sub_818F80(v38, v15);
  if ( v16 )
  {
    winerr(v16);
    sub_819190(a3);
    goto LABEL_18;
  }
  v34[0] = _mm_loadu_si128(a2);
  v34[1] = _mm_loadu_si128(a2 + 1);
  v35 = _mm_loadu_si128(a2 + 2);
  v17 = _mm_loadu_si128(a2 + 3);
  v35.m128i_i64[0] = -1;
  v36 = v17;
  v37 = _mm_loadu_si128(a2 + 4);
  v35.m128i_i64[1] = (int)**((_DWORD **)&v39 + 1);
  v36.m128i_i64[0] = *(int *)(*((_QWORD *)&v39 + 1) + 4 * v14);
  v18 = launch_process(v34, a3);
  sub_8190A0((__int64)v38);
  if ( !v18 )
  {
LABEL_18:
    v21 = 0;
    goto LABEL_19;
  }
  if ( v30 >= 0 )
  {
    v27 = qtime64(v38, a3);
    v28 = (unsigned int)v27 + 1000000 * HIDWORD(v27);
    if ( v28 + 10 >= v32 )
    {
      sub_818ED0((__int64)v38);
      goto LABEL_25;
    }
    v33 = (v32 + 999 - v28) / 0x3E8;
  }
  v19 = sub_819280(v38, a3, (unsigned int *)&v30, 0x400u);
  sub_818ED0((__int64)v38);
  if ( v19 == -1 )
    goto LABEL_25;
  if ( v30 < 0 )
    goto LABEL_13;
  v25 = qtime64(v38, a3);
  v26 = (unsigned int)v25 + 1000000 * HIDWORD(v25);
  if ( v26 + 10 >= v32 )
  {
LABEL_25:
    v23 = "Timed out capturing the process output";
    sub_819190(a3);
    goto LABEL_26;
  }
  v33 = (v32 + 999 - v26) / 0x3E8;
LABEL_13:
  v20 = 0xFFFFFFFFLL;
  if ( a4 >= 0 )
    v20 = v33;
  if ( (unsigned int)check_process_exit(v18, &v29, v20) == -1 )
  {
    v23 = "Failed to retrieve exit code for %s";
    sub_819190(a3);
LABEL_26:
    v24 = term_process(v18, v23);
    if ( v24 )
    {
      winerr(v24);
      sub_819190(a3);
    }
    goto LABEL_18;
  }
  v21 = 1;
  if ( v29 )
  {
    sub_819190(a3);
    goto LABEL_18;
  }
LABEL_19:
  v38[0] = &off_2B12D78;
  sub_818ED0((__int64)v38);
  return v21;
}

