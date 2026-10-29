unsigned __int64 __fastcall sub_B9BDB0(unsigned __int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v8; // r13
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int16 v13; // ax
  __m128 v14; // xmm0
  char v16; // al
  double v17[2]; // [rsp+8h] [rbp-50h] BYREF
  __int64 v18; // [rsp+18h] [rbp-40h]

  *(_QWORD *)&v17[0] = a5;
  *(_QWORD *)&v17[1] = a6;
  v8 = sub_B98120(a5, a2);
  v9 = sub_B6C590(88, (_QWORD *)a1, a2, 0);
  *(_QWORD *)v9 = off_2BD8B30;
  if ( a2
    && (v10 = sub_B68470(a2), v11 = *(_QWORD *)(v10 + 8) & 7LL, (*(_QWORD *)(v10 + 8) & 7) != 0)
    && (*(char *)(v10 + 29) >= 0 || (v18 = *(_QWORD *)(v10 + 8) & 7LL, v16 = sub_B688D0(v10), v11 = v18, v16)) )
  {
    v12 = v11;
  }
  else
  {
    v12 = 0;
  }
  *(_QWORD *)(v9 + 8) = v12;
  *(_QWORD *)(v9 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v9 + 24) = a3;
  *(_WORD *)(v9 + 28) = 24645;
  v13 = sub_B68380(69);
  *(_BYTE *)(v9 + 32) &= 0xF8u;
  *(_WORD *)(v9 + 30) = v13 & 0x3FFF | *(_WORD *)(v9 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(69);
  *(_QWORD *)(v9 + 40) = a4;
  *(_QWORD *)(v9 + 72) = v9;
  v14 = _mm_loadh_ps(v17);
  *(_QWORD *)(v9 + 64) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(__m128 *)(v9 + 48) = v14;
  *(_QWORD *)(v9 + 80) = 0;
  *(_QWORD *)v9 = &off_2BDA880;
  if ( v8 )
    sub_B64910(v9, 1);
  return v9;
}

