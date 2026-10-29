__int64 __fastcall sub_867120(__int64 **a1, int a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rax
  unsigned int v13; // ebp
  __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned int *v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax
  __m128i v20; // [rsp+0h] [rbp-138h] BYREF
  void *v21[2]; // [rsp+10h] [rbp-128h] BYREF
  __int64 v22; // [rsp+20h] [rbp-118h]
  char v23; // [rsp+28h] [rbp-110h] BYREF
  __m128i v24; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+90h] [rbp-A8h]
  int v26; // [rsp+98h] [rbp-A0h]
  __int64 v27; // [rsp+A0h] [rbp-98h]
  __int64 v28; // [rsp+A8h] [rbp-90h]
  void *ptr; // [rsp+B0h] [rbp-88h]
  __int64 v30; // [rsp+B8h] [rbp-80h]
  _BYTE v31[64]; // [rsp+C0h] [rbp-78h] BYREF
  __int16 v32; // [rsp+100h] [rbp-38h]

  v4 = (unsigned int)(a2 - 1);
  if ( (unsigned int)v4 <= 3 )
    v3 = (unsigned __int8)byte_3C98A68[v4];
  v7 = sub_B9AC70(*(_QWORD *)(**a1 + 16) + 22720LL, *(_QWORD *)(a3 + 8));
  if ( *(_BYTE *)(v7 + 112) != 2 && !(_BYTE)v3 )
    v3 = 1;
  v8 = *(_QWORD *)(sub_B9AC80(v7, v3) + 8);
  v24 = 0u;
  LOBYTE(v26) = v26 | 1;
  v30 = 0x800000000LL;
  v25 = 0;
  v28 = 0;
  ptr = v31;
  HIBYTE(v32) = 0;
  sub_69F1C0((__int64)&v20, v8, 0, 0);
  v9 = _mm_load_si128(&v20);
  LOBYTE(v32) = v32 & 0xFD;
  v25 = 0;
  v24 = v9;
  *(__m128i *)v21 = v9;
  v10 = sub_69F240((__int64 *)v21);
  v11 = *(_QWORD *)(a3 + 8);
  v22 = v10;
  v28 = v10;
  v12 = *a1;
  v32 &= 0xFEu;
  v26 = 0;
  v27 = 0;
  LODWORD(v30) = 0;
  v13 = sub_85F440(*v12, (_DWORD *)a3, v11, (__int64)&v24, v12[2], 0);
  if ( (_BYTE)v13 )
  {
    v15 = *(_QWORD *)(a3 + 8);
    v16 = *(_DWORD *)(a3 + 4);
    v17 = (unsigned int *)(*a1)[2];
    v18 = **a1;
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v19 + 16) != 13 || ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) != 0x1B2 )
    {
      BYTE4(v22) = 1;
      v21[0] = &v23;
      v21[1] = byte_8;
      LODWORD(v22) = 0;
      v13 = sub_849100(0, v18, v16, v15, v17, 0, 0, (__int64)v21);
      if ( !BYTE4(v22) )
        free(v21[0]);
    }
  }
  if ( ptr != v31 )
    free(ptr);
  return v13;
}

