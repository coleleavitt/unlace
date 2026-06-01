void __fastcall sub_11BAFD0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  const void *v5; // r14
  size_t v6; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  _BYTE *v9; // rdi
  char *v10; // rdi
  __int64 v11; // [rsp+8h] [rbp-210h]
  char *v12; // [rsp+10h] [rbp-208h] BYREF
  __int16 v13; // [rsp+30h] [rbp-1E8h]
  _BYTE v14[32]; // [rsp+40h] [rbp-1D8h] BYREF
  __int16 v15; // [rsp+60h] [rbp-1B8h]
  _BYTE v16[32]; // [rsp+70h] [rbp-1A8h] BYREF
  __int16 v17; // [rsp+90h] [rbp-188h]
  _QWORD v18[4]; // [rsp+A0h] [rbp-178h] BYREF
  __int16 v19; // [rsp+C0h] [rbp-158h]
  void *ptr; // [rsp+D0h] [rbp-148h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-140h]
  _BYTE v22[304]; // [rsp+E8h] [rbp-130h] BYREF

  v5 = (const void *)sub_228A4B0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL), 0);
  v6 = v4;
  ptr = v22;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  if ( v4 > 0x100 )
  {
    sub_2236E10(&ptr, v22, v4, 1);
    v10 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !v4 )
      goto LABEL_3;
    v10 = v22;
  }
  memcpy(v10, v5, v6);
  v4 = v6 + si128.m128i_i64[0];
LABEL_3:
  si128.m128i_i64[0] = v4;
  v19 = 257;
  v15 = 257;
  v17 = 257;
  v13 = 259;
  v12 = "lib";
  sub_228A3B0(&ptr, &v12, v14, v16, v18);
  v18[0] = "-L";
  v19 = 1283;
  v18[2] = ptr;
  v18[3] = si128.m128i_i64[0];
  v7 = sub_10DA6C0(a2, (__int64)v18);
  v8 = *(unsigned int *)(a3 + 8);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    v11 = v7;
    sub_2237220(a3, a3 + 16, v8 + 1, 8);
    v8 = *(unsigned int *)(a3 + 8);
    v7 = v11;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v8) = v7;
  v9 = ptr;
  ++*(_DWORD *)(a3 + 8);
  if ( v9 != v22 )
    free(v9);
}
