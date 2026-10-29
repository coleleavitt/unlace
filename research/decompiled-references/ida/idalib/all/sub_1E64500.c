void __fastcall sub_1E64500(__int64 a1, __int64 a2, int a3, char a4, __m128i a5, double a6)
{
  int v8; // eax
  int v9; // r14d
  const char *v10; // r15
  char *v11; // rax
  __int64 v12; // rdi
  size_t v13; // rdx
  size_t v14; // rbx
  unsigned __int64 v15; // rdx
  size_t v16; // rbx
  size_t v17; // rbp
  _BYTE *v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  bool v22; // cf
  unsigned __int8 v23; // di
  char *v25; // [rsp+8h] [rbp-C0h]
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v28; // [rsp+20h] [rbp-A8h]
  _BYTE v29[40]; // [rsp+28h] [rbp-A0h] BYREF
  _DWORD v30[6]; // [rsp+50h] [rbp-78h] BYREF
  void *v31; // [rsp+68h] [rbp-60h]
  __int64 v32; // [rsp+78h] [rbp-50h] BYREF

  if ( a3 < 0 )
    return;
  v8 = sub_15F0EF0(a1, a3, 0, a5, a6);
  v9 = v8;
  if ( !v8 )
    return;
  if ( a3 == v8 )
    return;
  v10 = sub_1021A70(*(_QWORD *)(a1 + 272), v8, nullptr);
  if ( !v10 )
    return;
  v29[0] = 32;
  ptr = v29;
  v28 = _mm_load_si128((const __m128i *)&xmmword_23A8D20).m128i_u64[1];
  v27 = 1;
  v11 = sub_FDFBE0(a4, 0);
  v12 = 1;
  v14 = v13;
  v15 = v13 + 1;
  if ( v15 > v28 )
  {
    v25 = v11;
    sub_2236E10(&ptr, v29, v15, 1);
    v12 = v27;
    v11 = v25;
  }
  if ( v14 )
  {
    memcpy((char *)ptr + v12, v11, v14);
    v12 = v27;
  }
  v16 = v12 + v14;
  v27 = v16;
  v17 = j__strlen(" ");
  if ( v17 + v16 > v28 )
  {
    sub_2236E10(&ptr, v29, v17 + v16, 1);
    v16 = v27;
  }
  v18 = ptr;
  if ( v17 )
  {
    memcpy((char *)ptr + v16, " ", v17);
    v18 = ptr;
    v16 = v27;
  }
  v19 = v17 + v16;
  v27 = v17 + v16;
  v20 = *(unsigned __int8 *)v10;
  if ( (byte_2411740[2 * v20] & 7) != 0 )
  {
    v21 = v19 - 1;
    v22 = v19 != 0;
    v19 = 0;
    if ( v22 )
      v19 = v21;
    goto LABEL_16;
  }
  v23 = *(v10 - 1);
  if ( v23 == 91 )
  {
    if ( (_BYTE)v20 != 93 )
    {
      if ( v19 )
      {
        --v19;
        ++v18;
      }
      goto LABEL_16;
    }
  }
  else if ( byte_23F75C0[v20] || (_BYTE)v20 == 36 || byte_23F75C0[v23] || v23 == 36 )
  {
    goto LABEL_16;
  }
  if ( v19 < 2 )
  {
    v19 = 0;
  }
  else
  {
    v19 -= 2LL;
    ++v18;
  }
LABEL_16:
  sub_9EC740((__int64)v30, v9, v18, v19, 0);
  sub_1589170(a2, v30);
  if ( v31 != &v32 )
    operator delete(v31);
  if ( ptr != v29 )
    free(ptr);
}
