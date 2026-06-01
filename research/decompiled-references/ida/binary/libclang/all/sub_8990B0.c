__int64 __fastcall sub_8990B0(__int64 a1, unsigned __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 v7; // r15
  int v8; // eax
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  _DWORD *v13; // r15
  unsigned int v14; // ebx
  __int64 v16; // rbx
  __m128i v17; // xmm0
  __m128i v18; // [rsp+0h] [rbp-148h] BYREF
  __m128i v19; // [rsp+10h] [rbp-138h] BYREF
  __int64 v20; // [rsp+20h] [rbp-128h]
  __m128i v21; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+90h] [rbp-B8h]
  int v23; // [rsp+98h] [rbp-B0h]
  __int64 v24; // [rsp+A0h] [rbp-A8h]
  __int64 v25; // [rsp+A8h] [rbp-A0h]
  void *ptr; // [rsp+B0h] [rbp-98h]
  __int64 v27; // [rsp+B8h] [rbp-90h]
  _BYTE v28[64]; // [rsp+C0h] [rbp-88h] BYREF
  __int16 v29; // [rsp+100h] [rbp-48h]

  v7 = *(_QWORD *)(a4 + 32);
  LOBYTE(v23) = v23 | 1;
  v27 = 0x800000000LL;
  v8 = *(_DWORD *)(v7 + 176);
  v21 = 0u;
  v22 = 0;
  v25 = 0;
  ptr = v28;
  HIBYTE(v29) = 0;
  if ( a1 )
  {
    sub_69F1C0((__int64)&v18, a1, v8, a3);
    v9 = _mm_load_si128(&v18);
    LOBYTE(v29) = v29 & 0xFD;
    v22 = 0;
    v21 = v9;
    v19 = v9;
    v10 = sub_69F240(v19.m128i_i64);
    v11 = *(_QWORD *)(a1 + 48);
    v12 = a1;
  }
  else
  {
    v16 = *(_QWORD *)(a2 + 8);
    sub_69F1F0((__int64)&v18, a2, v8, *(_DWORD *)(*(_QWORD *)(v7 + 184) + 4LL * *(unsigned int *)(v7 + 192) - 4));
    v17 = _mm_load_si128(&v18);
    LOBYTE(v29) = v29 & 0xFD;
    v22 = 0;
    v21 = v17;
    v19 = v17;
    v10 = sub_69F240(v19.m128i_i64);
    v11 = v16;
    v12 = a2;
  }
  v29 &= 0xFEu;
  v20 = v10;
  v23 = 0;
  v24 = 0;
  v25 = v10;
  LODWORD(v27) = 0;
  v13 = (_DWORD *)sub_823990(v7, v18.m128i_i64[0], v18.m128i_i64[1], v12, v11, 2);
  v14 = sub_88A010((__int64)v13, a4, &v21, a2, 0);
  if ( !(_BYTE)v14 )
    goto LABEL_11;
  if ( a5 && *v13 == 7 && (unsigned __int8)sub_6A3540((__int64)v13) )
  {
    sub_A2E240(a4, a2, 2324, 0);
LABEL_11:
    v14 = 0;
  }
  if ( ptr != v28 )
    free(ptr);
  return v14;
}

