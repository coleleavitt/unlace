__int64 __fastcall sub_A05B20(__int64 a1, size_t *a2, __int64 a3, __int64 a4, char a5)
{
  size_t *v5; // rax
  size_t v9; // rbp
  __int64 v10; // r12
  const char *v11; // rdx
  __int64 v12; // r12
  char *v14; // rdi
  _QWORD *v15; // rax
  _QWORD v16[4]; // [rsp+10h] [rbp-1F8h] BYREF
  __int16 v17; // [rsp+30h] [rbp-1D8h]
  _QWORD v18[4]; // [rsp+40h] [rbp-1C8h] BYREF
  __int16 v19; // [rsp+60h] [rbp-1A8h]
  _QWORD v20[4]; // [rsp+70h] [rbp-198h] BYREF
  __int16 v21; // [rsp+90h] [rbp-178h]
  _QWORD *v22[4]; // [rsp+A0h] [rbp-168h] BYREF
  __int16 v23; // [rsp+C0h] [rbp-148h]
  _QWORD v24[4]; // [rsp+D0h] [rbp-138h] BYREF
  __int16 v25; // [rsp+F0h] [rbp-118h]
  _QWORD *v26; // [rsp+100h] [rbp-108h] BYREF
  char v27; // [rsp+108h] [rbp-100h]
  __int16 v28; // [rsp+120h] [rbp-E8h]
  void *ptr; // [rsp+130h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+138h] [rbp-D0h]
  _BYTE v31[192]; // [rsp+148h] [rbp-C0h] BYREF

  v5 = a2;
  v9 = *a2;
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  ptr = v31;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v9 > 0x80 )
  {
    sub_2236E10(&ptr, v31, v9, 1);
    v5 = a2;
    v14 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !v9 )
      goto LABEL_3;
    v14 = v31;
  }
  memcpy(v14, v5 + 4, v9);
  v9 += si128.m128i_i64[0];
LABEL_3:
  v11 = &byte_22F0C30;
  si128.m128i_i64[0] = v9;
  v16[0] = a3;
  v16[1] = a4;
  v16[3] = a5 == 0 ? 8 : 0;
  if ( !a5 )
    v11 = "_private";
  v18[0] = v16;
  v18[2] = ".";
  v28 = 257;
  v25 = 257;
  v23 = 257;
  v16[2] = v11;
  v17 = 1285;
  v20[0] = v18;
  v19 = 770;
  v20[2] = "apinotes";
  v21 = 770;
  sub_228A3B0(&ptr, v20, v22, v24, &v26);
  sub_FD9C70(&v26, v10, ptr, si128.m128i_i64[0], 1, 1, 1);
  if ( (v27 & 1) != 0 )
  {
    v15 = v26;
    v26 = nullptr;
    v22[0] = v15;
    sub_A05760(v24, v22);
    if ( v22[0] )
      (*(void (__fastcall **)(_QWORD *))(*v22[0] + 8LL))(v22[0]);
    v12 = 0;
  }
  else
  {
    v12 = (__int64)v26;
  }
  sub_A04D90((__int64 *)&v26);
  if ( ptr != v31 )
    free(ptr);
  return v12;
}
