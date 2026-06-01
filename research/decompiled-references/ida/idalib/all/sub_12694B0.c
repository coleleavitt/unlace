__int64 __fastcall sub_12694B0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, void *, __int64); // r15
  __int64 v7; // r15
  __int64 v8; // rcx
  size_t v9; // r14
  const void *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rdx
  _BYTE *v15; // rdi
  __int64 result; // rax
  _QWORD v17[4]; // [rsp+0h] [rbp-188h] BYREF
  __int16 v18; // [rsp+20h] [rbp-168h]
  void *ptr; // [rsp+30h] [rbp-158h] BYREF
  __m128i si128; // [rsp+38h] [rbp-150h]
  _BYTE v21[320]; // [rsp+48h] [rbp-140h] BYREF

  if ( !*(_BYTE *)(a1 + 4880) )
  {
    sub_1173DC0(a1 + 3808, *(__int64 **)(a1 + 3736), a1 + 3744, *(_QWORD *)(a1 + 3800), 1, 0);
    *(_BYTE *)(a1 + 4880) = 1;
  }
  v4 = *(_QWORD *)(a1 + 4096);
  v17[3] = *(_QWORD *)(a1 + 4104);
  v18 = 1285;
  v5 = *a2;
  v17[0] = "-L";
  v17[2] = v4;
  ptr = v21;
  v6 = *(__int64 (__fastcall **)(__int64 *, void *, __int64))(v5 + 16);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v17[1] = 2;
  sub_22538C0(v17, &ptr);
  v7 = v6(a2, ptr, si128.m128i_i64[0]);
  if ( ptr != v21 )
    free(ptr);
  v8 = *((unsigned int *)a3 + 2);
  if ( v8 + 1 > (unsigned __int64)*((unsigned int *)a3 + 3) )
  {
    sub_2237220(a3, a3 + 2, v8 + 1, 8);
    v8 = *((unsigned int *)a3 + 2);
  }
  *(_QWORD *)(*a3 + 8 * v8) = v7;
  ++*((_DWORD *)a3 + 2);
  if ( !(unsigned __int8)sub_21B7850(a2, 1706, 1345, 0) )
    goto LABEL_16;
  if ( !*(_BYTE *)(a1 + 4880) )
  {
    sub_1173DC0(a1 + 3808, *(__int64 **)(a1 + 3736), a1 + 3744, *(_QWORD *)(a1 + 3800), 1, 0);
    *(_BYTE *)(a1 + 4880) = 1;
  }
  v9 = *(_QWORD *)(a1 + 4104);
  v10 = *(const void **)(a1 + 4096);
  ptr = v21;
  si128 = 0;
  if ( v9 )
  {
    sub_2236E10(&ptr, v21, v9, 1);
    memcpy((char *)ptr + si128.m128i_i64[0], v10, v9);
    v9 += si128.m128i_i64[0];
  }
  si128.m128i_i64[0] = v9;
  sub_228F0B0(&ptr, 1, 0);
  v11 = (*(__int64 (__fastcall **)(__int64 *, void *, __int64))(*a2 + 16))(a2, ptr, si128.m128i_i64[0]);
  v12 = *((unsigned int *)a3 + 2);
  v13 = v11;
  if ( v12 + 2 > (unsigned __int64)*((unsigned int *)a3 + 3) )
  {
    sub_2237220(a3, a3 + 2, v12 + 2, 8);
    v12 = *((unsigned int *)a3 + 2);
  }
  v14 = *a3;
  *(_QWORD *)(v14 + 8 * v12) = "-rpath";
  *(_QWORD *)(v14 + 8 * v12 + 8) = v13;
  v15 = ptr;
  result = (unsigned int)(*((_DWORD *)a3 + 2) + 2);
  *((_DWORD *)a3 + 2) = result;
  if ( v15 != v21 )
  {
    free(v15);
LABEL_16:
    result = *((unsigned int *)a3 + 2);
  }
  if ( result + 1 > (unsigned __int64)*((unsigned int *)a3 + 3) )
  {
    sub_2237220(a3, a3 + 2, result + 1, 8);
    result = *((unsigned int *)a3 + 2);
  }
  *(_QWORD *)(*a3 + 8 * result) = "-lamdhip64";
  ++*((_DWORD *)a3 + 2);
  return result;
}
