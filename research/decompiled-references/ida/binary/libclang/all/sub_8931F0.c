__int64 __fastcall sub_8931F0(__int64 a1, char a2, unsigned int a3)
{
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r12
  __m128i v10; // xmm0
  __int64 v11; // rbx
  __int64 v12; // rax
  char v13; // bl
  __int64 result; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // r13
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __m128i v19; // [rsp+10h] [rbp-138h] BYREF
  __int64 v20; // [rsp+20h] [rbp-128h]
  void *ptr[2]; // [rsp+28h] [rbp-120h] BYREF
  _BYTE v22[72]; // [rsp+38h] [rbp-110h] BYREF
  __m128i v23; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+90h] [rbp-B8h]
  int v25; // [rsp+98h] [rbp-B0h]
  __int64 v26; // [rsp+A0h] [rbp-A8h]
  __int64 v27; // [rsp+A8h] [rbp-A0h]
  void *v28[2]; // [rsp+B0h] [rbp-98h] BYREF
  _BYTE v29[64]; // [rsp+C0h] [rbp-88h] BYREF
  __int16 v30; // [rsp+100h] [rbp-48h]

  LODWORD(v5) = *(_DWORD *)(a1 + 320);
  if ( !a2 )
  {
    if ( a3 < (unsigned int)v5 )
    {
      v16 = 32LL * (unsigned int)(v5 - 1);
      v17 = 32 * ((unsigned int)(v5 - 1) - (unsigned __int64)((unsigned int)v5 - a3 - 1));
      while ( 1 )
      {
        v18 = *(_QWORD *)(a1 + 312);
        v23.m128i_i8[4] &= ~1u;
        v23.m128i_i32[0] = 0;
        sub_6A01B0(*(_QWORD *)(v16 + v18) & 0xFFFFFFFFFFFFFFF8LL, (__int64)&v23);
        if ( v23.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v23);
        if ( v17 == v16 )
          break;
        v16 -= 32;
      }
    }
    goto LABEL_15;
  }
LABEL_2:
  if ( a3 >= (unsigned int)v5 )
  {
LABEL_15:
    result = 1;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v6 = 0;
    v5 = (unsigned int)(v5 - 1);
    v7 = *(_QWORD *)(a1 + 312) + 32 * v5;
    v8 = *(_QWORD *)(v7 + 8);
    if ( v8 )
    {
      if ( (v8 & 3) != 0 )
      {
        if ( (*(_QWORD *)(v7 + 8) & 3LL) == 1 )
        {
          v15 = v8 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v15 )
            v6 = (unsigned int)sub_8124E0(v15);
        }
      }
      else
      {
        v6 = *(unsigned int *)((v8 & 0xFFFFFFFFFFFFFFFCLL) + 24);
      }
    }
    v9 = *(_QWORD *)v7;
    v10 = _mm_loadu_si128((const __m128i *)(v7 + 8));
    v11 = *(_QWORD *)(v7 + 24);
    if ( **(_BYTE **)(a1 + 24) )
      break;
    v23 = v10;
    v19 = v10;
    v28[0] = v29;
    LOBYTE(v25) = v25 | 1;
    v30 &= 0xFDu;
    v24 = 0;
    v27 = 0;
    v28[1] = (void *)0x800000000LL;
    v12 = sub_69F240(v19.m128i_i64);
    ptr[0] = v22;
    v19.m128i_i32[0] = 0;
    v19.m128i_i64[1] = 0;
    v20 = v12;
    ptr[1] = (void *)0x800000000LL;
    v25 = 0;
    v26 = 0;
    v27 = v12;
    sub_820970((__int64)v28, (__int64)ptr);
    if ( ptr[0] != v22 )
      free(ptr[0]);
    v30 &= 0xFEu;
    v13 = sub_8912C0(a1, (v6 << 32) | (unsigned int)v6, (__int64)&v23, v9 & 0xFFFFFFFFFFFFFFF8LL, v11);
    if ( v28[0] != v29 )
    {
      free(v28[0]);
      if ( v13 )
        goto LABEL_2;
      break;
    }
    if ( !v13 )
      break;
    if ( a3 >= (unsigned int)v5 )
      goto LABEL_15;
  }
  result = 0;
LABEL_12:
  *(_DWORD *)(a1 + 320) = a3;
  return result;
}

