/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461640
// Address: 0x0000000000461640

//----- (0000000000461640) ----------------------------------------------------
__int64 __fastcall sub_461640(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  const char *v16; // r15
  char *v17; // rax
  unsigned __int8 v18; // r12
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64); // rax
  char v21; // al
  unsigned int v22; // ebx
  int v24; // edi
  __int32 v25; // esi
  void *v26; // r15
  __m128 v27; // xmm1
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rax
  unsigned __int8 *(__fastcall *v31)(__int64, unsigned __int8, __int64 *, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  unsigned __int8 *v32; // rax
  int v33; // eax
  int v34; // ebp
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 (*v37)(); // rax
  __m128i v38; // [rsp+0h] [rbp-98h] BYREF
  char *s; // [rsp+18h] [rbp-80h]
  void *v40; // [rsp+20h] [rbp-78h] BYREF
  __m128 v41; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __m128i v43; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  sub_470050((__int64)&v40, 3);
  sub_45BD90((char **)&v40, 0x1Fu);
  sub_45BD90((char **)&v40, 1u);
  sub_45BD90((char **)&v40, 8u);
  v12 = sub_46B350(a1 + 192, 3u, (__int64 *)&v40, 0, a2, a3, a4, a5, v10, v11, a8, a9);
  v13 = v12;
  if ( !v12 )
  {
    sub_45C330(a1, "[%d] Could not establish the connection\n", *(_DWORD *)(a1 + 168));
    goto LABEL_9;
  }
  v14 = *(unsigned int *)v12;
  ptr = v13 + 5;
  v43.m128i_i64[0] = (__int64)&v13[v14 + 5];
  if ( !(unsigned int)sub_47FD50((unsigned __int64 *)&ptr, v43.m128i_u64[0]) )
  {
    sub_45C330(a1, "[%d] Incompatible IDA version\n", *(_DWORD *)(a1 + 168));
    *(_BYTE *)(a1 + 261) = 0;
    j__free(v13);
    goto LABEL_9;
  }
  v15 = *(_QWORD *)(a1 + 448);
  if ( *(_QWORD *)(v15 + 120) > 1u )
  {
    v16 = (const char *)ptr;
    v17 = (char *)ptr;
    do
    {
      if ( (unsigned __int64)v17 >= v43.m128i_i64[0] )
        goto LABEL_7;
      ++v17;
    }
    while ( *(v17 - 1) );
    ptr = v17;
    if ( !v16 )
      goto LABEL_7;
    s = *(char **)(v15 + 112);
    v38.m128i_i64[0] = strlen(v16);
    v24 = strlen(s);
    v25 = v38.m128i_i32[0] ^ v24;
    if ( v24 && v38.m128i_i32[0] > 0 )
    {
      v35 = 0;
      do
      {
        v25 |= (char)(v16[v35] ^ s[(int)v35 % v24]);
        v36 = v35++;
      }
      while ( v36 != v38.m128i_i32[0] - 1 );
      if ( v25 )
        goto LABEL_7;
      goto LABEL_19;
    }
    if ( v25 )
    {
LABEL_7:
      sub_45C330(a1, "[%d] Bad password\n", *(_DWORD *)(a1 + 168));
      *(_BYTE *)(a1 + 261) = 0;
      j__free(v13);
      v18 = 0;
      goto LABEL_20;
    }
  }
LABEL_19:
  *(_BYTE *)(a1 + 261) = 1;
  j__free(v13);
  v18 = 1;
LABEL_20:
  sub_470050((__int64)&ptr, 0);
  v26 = ptr;
  ptr = nullptr;
  v27 = (__m128)_mm_loadu_si128(&v43);
  v43 = 0;
  if ( v40 )
  {
    v38 = (__m128i)v27;
    v41.m128_u64[0] = 0;
    j__free(v40);
    v27 = (__m128)_mm_load_si128(&v38);
    v40 = v26;
    v41 = v27;
    if ( ptr )
    {
      v43.m128i_i64[0] = 0;
      j__free(ptr);
    }
  }
  else
  {
    v40 = v26;
    v41 = v27;
  }
  sub_45BD90((char **)&v40, v18);
  sub_46F530((__int64 *)(a1 + 192), (__int64 *)&v40);
  *(_DWORD *)(a1 + 256) = -1;
  *(_BYTE *)(a1 + 261) = 1;
  if ( v18 )
  {
    v30 = *(_QWORD *)(a1 + 192);
    ptr = nullptr;
    v43 = 0;
    v31 = *(unsigned __int8 *(__fastcall **)(__int64, unsigned __int8, __int64 *, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(v30 + 16);
    if ( v31 == sub_45B5D0 )
      v32 = sub_46B350(a1 + 192, 3u, (__int64 *)&ptr, 0, (__m128)0LL, v27, a4, a5, v28, v29, a8, a9);
    else
      v32 = (unsigned __int8 *)((__int64 (__fastcall *)(__int64, __int64, void **))v31)(a1 + 192, 3, &ptr);
    if ( v32 )
      j__free(v32);
    if ( ptr )
    {
      v43.m128i_i64[0] = 0;
      j__free(ptr);
    }
  }
LABEL_9:
  v19 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 200) = 0;
  v20 = *(__int64 (__fastcall **)(__int64))(v19 + 56);
  if ( v20 == sub_45B330 )
    v21 = *(_BYTE *)(*(_QWORD *)(a1 + 440) + 860LL);
  else
    v21 = v20(a1);
  if ( !v21 )
  {
LABEL_12:
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 112LL))(*(_QWORD *)(a1 + 440));
    sub_46D7D0(a1);
    v22 = 1;
    goto LABEL_13;
  }
  sub_45C330(
    a1,
    "[%d] Broken connection (mode=%d)\n",
    *(_DWORD *)(a1 + 168),
    *(_DWORD *)(*(_QWORD *)(a1 + 448) + 140LL));
  v33 = *(_DWORD *)(*(_QWORD *)(a1 + 448) + 140LL);
  if ( v33 != 1 )
  {
    if ( v33 == 2 )
    {
      v34 = *(_DWORD *)(*(_QWORD *)(a1 + 440) + 656LL);
      sub_45C330(a1, "[%d] Debugged process PID: %d\n", *(_DWORD *)(a1 + 168), v34);
      if ( v34 > 0 )
      {
        sub_45C330(
          a1,
          "[%d] Killing debugged process %d\n",
          *(_DWORD *)(a1 + 168),
          *(_DWORD *)(*(_QWORD *)(a1 + 440) + 656LL));
        if ( (unsigned int)sub_461580(a1) )
          sub_45C330(a1, "[%d] Failed to kill process after %d seconds. Giving up\n", *(_DWORD *)(a1 + 168), 5);
      }
    }
    goto LABEL_12;
  }
  sub_46D7D0(a1);
  sub_45C330(a1, "[%d] Debugged session entered into sleeping mode\n", *(_DWORD *)(a1 + 168));
  if ( !byte_4C8240[0] )
    goto LABEL_46;
  v37 = *(__int64 (**)())(**(_QWORD **)(a1 + 440) + 504LL);
  if ( v37 == sub_40C080 || !(unsigned __int8)v37() )
  {
    sub_45C3F0((_BYTE *)(a1 + 192), "Error preparing debugger server to handle a broken connection\n");
LABEL_46:
    v22 = 0;
    goto LABEL_13;
  }
  v22 = 0;
LABEL_13:
  if ( v40 )
  {
    v41.m128_u64[0] = 0;
    j__free(v40);
  }
  return v22;
}
// 4616AC: variable 'v10' is possibly undefined
// 4616AC: variable 'v11' is possibly undefined
// 461945: variable 'v28' is possibly undefined
// 461945: variable 'v29' is possibly undefined
// 40C080: using guessed type __int64 sub_40C080();
