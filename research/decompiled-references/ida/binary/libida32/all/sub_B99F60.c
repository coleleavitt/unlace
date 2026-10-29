unsigned __int64 __fastcall sub_B99F60(unsigned __int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  char v10; // r13
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int16 v15; // ax
  __m128 v16; // xmm0
  char v18; // al
  __int64 v19; // [rsp+10h] [rbp-48h] BYREF
  __int64 v20; // [rsp+18h] [rbp-40h]

  v19 = a5;
  v9 = sub_B69600(a6);
  v10 = sub_B98120(a5, v9);
  v11 = sub_B6C590(88, (_QWORD *)a1, a2, 0);
  *(_QWORD *)v11 = off_2BD8B30;
  if ( a2
    && (v12 = sub_B68470(a2), v13 = *(_QWORD *)(v12 + 8) & 7LL, (*(_QWORD *)(v12 + 8) & 7) != 0)
    && (*(char *)(v12 + 29) >= 0 || (v20 = *(_QWORD *)(v12 + 8) & 7LL, v18 = sub_B688D0(v12), v13 = v20, v18)) )
  {
    v14 = v13;
  }
  else
  {
    v14 = 0;
  }
  *(_QWORD *)(v11 + 8) = v14;
  *(_QWORD *)(v11 + 16) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(v11 + 24) = a3;
  *(_WORD *)(v11 + 28) = 24647;
  v15 = sub_B68380(71);
  *(_BYTE *)(v11 + 32) &= 0xF8u;
  *(_WORD *)(v11 + 30) = v15 & 0x3FFF | *(_WORD *)(v11 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(71);
  *(_QWORD *)(v11 + 40) = a4;
  *(_QWORD *)(v11 + 72) = v11;
  v16 = _mm_loadh_ps((const double *)&v19);
  *(_QWORD *)(v11 + 64) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(__m128 *)(v11 + 48) = v16;
  *(_QWORD *)(v11 + 80) = 0;
  *(_QWORD *)v11 = &off_2BDA430;
  if ( v10 )
    sub_B64910(v11, 1);
  return v11;
}

