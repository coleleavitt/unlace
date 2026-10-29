__int64 __fastcall sub_1390590(std::_V2 *a1, __int64 a2, __int64 a3, void *a4, size_t a5)
{
  size_t v8; // r14
  const void *v9; // rax
  size_t v10; // rdx
  __int64 v11; // rax
  size_t v12; // rdx
  unsigned int v13; // r13d
  __int64 (__fastcall *v15)(__int64); // rax
  std::_V2 *v16; // rdi
  char *v17; // rdi
  __int64 v18; // rdi
  const void *v19; // [rsp+8h] [rbp-450h]
  __int64 v20; // [rsp+10h] [rbp-448h] BYREF
  size_t v21; // [rsp+18h] [rbp-440h]
  __int16 v22; // [rsp+30h] [rbp-428h]
  _BYTE v23[32]; // [rsp+40h] [rbp-418h] BYREF
  __int16 v24; // [rsp+60h] [rbp-3F8h]
  _QWORD v25[4]; // [rsp+70h] [rbp-3E8h] BYREF
  __int16 v26; // [rsp+90h] [rbp-3C8h]
  __int64 v27; // [rsp+A0h] [rbp-3B8h] BYREF
  size_t v28; // [rsp+A8h] [rbp-3B0h]
  __int16 v29; // [rsp+C0h] [rbp-398h]
  void *ptr; // [rsp+D0h] [rbp-388h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-380h]
  _BYTE v32[264]; // [rsp+E8h] [rbp-370h] BYREF
  void *v33; // [rsp+1F0h] [rbp-268h] BYREF
  __int64 v34; // [rsp+1F8h] [rbp-260h]
  size_t v35; // [rsp+200h] [rbp-258h]
  _BYTE v36[256]; // [rsp+208h] [rbp-250h] BYREF
  void *v37; // [rsp+308h] [rbp-150h]
  __int64 v38; // [rsp+310h] [rbp-148h]
  __int64 v39; // [rsp+320h] [rbp-138h] BYREF

  sub_2222780(&v33, (char *)a1 + 184, a2, a3);
  v8 = *((_QWORD *)a1 + 8);
  v9 = *((const void **)a1 + 7);
  ptr = v32;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  if ( v8 > 0x100 )
  {
    v19 = v9;
    sub_2236E10(&ptr, v32, v8, 1);
    v9 = v19;
    v17 = (char *)ptr + si128.m128i_i64[0];
LABEL_17:
    memcpy(v17, v9, v8);
    si128.m128i_i64[0] += v8;
    if ( !a5 )
      goto LABEL_4;
    goto LABEL_18;
  }
  if ( v8 )
  {
    v17 = v32;
    goto LABEL_17;
  }
  si128.m128i_i64[0] = 0;
  if ( !a5 )
  {
LABEL_4:
    v29 = 257;
    v24 = 257;
    v26 = 257;
    v20 = sub_2289D50(v33, v34, 0);
    v21 = v10;
    v22 = 261;
    sub_228A3B0(&ptr, &v20, v23, v25, &v27);
    goto LABEL_5;
  }
LABEL_18:
  v27 = (__int64)a4;
  v16 = (std::_V2 *)&v27;
  v28 = a5;
  v29 = 261;
  if ( (unsigned int)sub_228C1E0(&v27, 0) )
  {
LABEL_19:
    v13 = 0;
    std::_V2::system_category(v16);
    goto LABEL_6;
  }
  v29 = 257;
  v26 = 257;
  v24 = 257;
  v22 = 261;
  v20 = (__int64)a4;
  v21 = a5;
  sub_228A3B0(&ptr, &v20, v23, v25, &v27);
  v18 = 0;
  v34 = 0;
  if ( a5 > v35 )
  {
    sub_2236E10(&v33, v36, a5, 1);
    v18 = v34;
  }
  memcpy((char *)v33 + v18, a4, a5);
  v34 += a5;
LABEL_5:
  v11 = sub_228A4B0(ptr, si128.m128i_i64[0], 0);
  v28 = v12;
  v29 = 261;
  v27 = v11;
  v13 = sub_228BCB0(&v27, 1, 504);
  if ( !v13 )
  {
    v29 = 261;
    v26 = 261;
    v27 = (__int64)ptr;
    v28 = si128.m128i_i64[0];
    v25[0] = v33;
    v25[1] = v34;
    v13 = sub_228D2A0(v25, &v27);
    if ( !v13 )
    {
      v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL);
      if ( v15 == sub_1390520 )
      {
        v16 = (std::_V2 *)((char *)a1 + 120);
        sub_2260C30((char *)a1 + 120);
      }
      else
      {
        v16 = a1;
        ((void (__fastcall *)(std::_V2 *, void *, __int64, void *, __int64))v15)(a1, v37, v38, ptr, si128.m128i_i64[0]);
      }
      goto LABEL_19;
    }
  }
LABEL_6:
  if ( ptr != v32 )
    free(ptr);
  if ( v37 != &v39 )
    free(v37);
  if ( v33 != v36 )
    free(v33);
  return v13;
}
