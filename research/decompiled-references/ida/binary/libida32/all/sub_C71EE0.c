void __fastcall sub_C71EE0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  unsigned __int64 v8; // rax
  int v9; // r15d
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int16 v17; // ax
  __m128 v18; // xmm0
  __int64 v19; // rax
  char v20; // al
  unsigned __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+8h] [rbp-40h]

  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) == 0 )
    {
      v6 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v6 = (_QWORD *)*v6;
      v7 = (_QWORD *)sub_B685F0(a2);
      v8 = sub_B6C590(72, v7, (__int64)v6, 0);
      v9 = *(_DWORD *)(a2 + 24);
      v10 = v8;
      v11 = *(_QWORD *)(a2 + 16);
      if ( (v11 & 4) != 0 )
      {
        v13 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
        v12 = v13 & 0xFFFFFFFFFFFFFFFBLL;
      }
      else
      {
        v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      }
      *(_QWORD *)v10 = off_2BD8B30;
      if ( v13
        && (v21 = v12,
            v14 = sub_B68470(v13),
            v12 = v21,
            v15 = *(_QWORD *)(v14 + 8) & 7LL,
            (*(_QWORD *)(v14 + 8) & 7) != 0)
        && (*(char *)(v14 + 29) >= 0
         || (v22 = *(_QWORD *)(v14 + 8) & 7LL, v20 = sub_B688D0(v14), v12 = v21, v15 = v22, v20)) )
      {
        v16 = v15;
      }
      else
      {
        v16 = 0;
      }
      *(_QWORD *)(v10 + 8) = v16;
      *(_QWORD *)(v10 + 16) = v12;
      *(_DWORD *)(v10 + 24) = v9;
      *(_WORD *)(v10 + 28) = 24658;
      v17 = sub_B68380(82);
      *(_BYTE *)(v10 + 32) &= 0xF8u;
      *(_WORD *)(v10 + 30) = v17 & 0x3FFF | *(_WORD *)(v10 + 30) & 0xC000;
      if ( byte_2CAD3F0[0] )
        sub_B67B90(82);
      v21 = a2;
      *(_DWORD *)(v10 + 56) = a3;
      *(_QWORD *)v10 = &off_2BD9100;
      v18 = _mm_loadh_ps((const double *)&v21);
      v19 = v10 | 4;
      *(_QWORD *)(v10 + 64) = 0;
      *(__m128 *)(v10 + 40) = v18;
      v5 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)(a1 + 16) = v19;
    }
    *(_QWORD *)(v5 + 48) = a2;
    *(_DWORD *)(v5 + 56) = a3;
  }
}

