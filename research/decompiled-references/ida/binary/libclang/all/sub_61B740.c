__int64 __fastcall sub_61B740(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r15
  unsigned int v10; // r14d
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // al
  __m128i v17; // xmm0
  unsigned int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rdx
  _BYTE *v21; // rdi
  unsigned int v22; // ebx
  __int64 v23; // r15
  unsigned int v24; // r14d
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128i v31; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v32; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v33; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v34; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v35; // [rsp+60h] [rbp-98h] BYREF
  void *ptr; // [rsp+70h] [rbp-88h] BYREF
  __int64 v37; // [rsp+78h] [rbp-80h]
  _BYTE v38[120]; // [rsp+80h] [rbp-78h] BYREF

  ptr = v38;
  v37 = 0x400000000LL;
  if ( !a2 )
    return 0;
  v4 = a2;
  v5 = 4;
  v6 = 0;
  while ( 1 )
  {
    if ( v5 < v6 + 1 )
    {
      sub_25D6060(&ptr, v38, v6 + 1, 16);
      v6 = (unsigned int)v37;
    }
    v7 = (unsigned __int64 *)((char *)ptr + 16 * v6);
    *v7 = v4;
    v7[1] = a3;
    v6 = (unsigned int)(v37 + 1);
    LODWORD(v37) = v37 + 1;
    v8 = *(_QWORD *)(v4 + 8);
    v4 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v8 <= 7 )
      break;
    v5 = HIDWORD(v37);
  }
  if ( !(_DWORD)v6 )
  {
LABEL_19:
    v21 = ptr;
    v22 = 0;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v17 = _mm_loadu_si128((const __m128i *)ptr + (unsigned int)v6 - 1);
    LODWORD(v37) = v6 - 1;
    v31 = v17;
    v18 = sub_A7AE10(v17.m128i_i64[0]);
    if ( v18 == 2 )
    {
      v23 = *a1;
      v24 = sub_A7BA00(&v31);
      v25 = sub_A7AEB0(v17.m128i_i64[0]);
      sub_639D90(&v34, v25, v24, v23);
      v16 = sub_619180(
              (__int64)a1,
              v25,
              v26,
              v27,
              v28,
              v29,
              (__int128)_mm_load_si128(&v34),
              (__int128)_mm_load_si128(&v35));
      goto LABEL_11;
    }
    if ( v18 > 2 )
      break;
    if ( v18 != 1 )
      goto LABEL_12;
    v9 = *a1;
    v10 = sub_A7BA00(&v31);
    v11 = sub_A7AE80(v17.m128i_i64[0]);
    sub_639D90(&v32, v11, v10, v9);
    v16 = sub_619180(
            (__int64)a1,
            v11,
            v12,
            v13,
            v14,
            v15,
            (__int128)_mm_load_si128(&v32),
            (__int128)_mm_load_si128(&v33));
LABEL_11:
    if ( v16 )
      goto LABEL_17;
LABEL_12:
    LODWORD(v6) = v37;
    if ( !(_DWORD)v37 )
      goto LABEL_19;
  }
  if ( v18 - 3 > 1 )
    goto LABEL_12;
  v19 = sub_A7BB80(&v31);
  if ( !(unsigned __int8)sub_61B330(a1, v19, v20) )
    goto LABEL_12;
LABEL_17:
  v21 = ptr;
  v22 = 1;
LABEL_20:
  if ( v21 != v38 )
    free(v21);
  return v22;
}

