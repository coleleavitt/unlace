void __fastcall sub_1469A10(__int64 a1, int *a2, int a3, __int64 a4, __int64 a5, double a6, __m128 a7)
{
  void *v11; // rdi
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  __m128 v14; // xmm0
  int v15; // eax
  __int16 v16; // dx
  int *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r12
  int v20; // eax
  int v21; // r8d
  int v22; // ecx
  int v23; // edx
  int v24; // esi
  int v25; // eax
  double v26[7]; // [rsp+0h] [rbp-38h] BYREF

  *(_QWORD *)&v26[0] = a5;
  if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
  {
    v11 = *(void **)(a1 + 24);
    if ( v11 )
      operator delete[](v11);
    *(_BYTE *)(a1 + 64) &= ~8u;
    *(_QWORD *)(a1 + 24) = 0;
  }
  v12 = *(_QWORD **)(a1 + 8);
  v13 = *(_QWORD *)(a1 + 16);
  if ( v12 )
  {
    sub_13EFF90(v12, v13);
    v13 = *(_QWORD *)(a1 + 16);
  }
  *(_QWORD *)&v26[1] = a4;
  *(_DWORD *)(a1 + 36) = 0;
  v14 = _mm_loadh_ps(v26);
  *(__m128 *)a1 = v14;
  v15 = *a2;
  v16 = *((_WORD *)a2 + 9);
  *(_DWORD *)(a1 + 44) = a3;
  *(_DWORD *)(a1 + 40) = v15;
  LOBYTE(v16) = (2 * ((v16 & 2) != 0)) | v16 & 1 | *(_BYTE *)(a1 + 64) & 0xFC;
  LOBYTE(v15) = v16 & 0xC3;
  *(_BYTE *)(a1 + 64) = v16 & 0xFB;
  v17 = *(int **)(a4 + 16);
  *(_BYTE *)(a1 + 64) = v15;
  v18 = *(unsigned int *)(a4 + 28);
  *(_QWORD *)(a1 + 24) = v17;
  v18 *= 3;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 32) = -1431655765 * v18;
  v19 = *(_QWORD *)(v13 + 88);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(v19 + 312);
  if ( 8 * v18 )
  {
    v20 = *v17;
    if ( *v17 < 0 )
    {
      v20 = sub_10212A0(v19, v20);
      a4 = *(_QWORD *)a1;
    }
    *(_DWORD *)(a1 + 56) = v20;
    if ( (*(_BYTE *)(a4 + 36) & 1) != 0 )
      v21 = *(_DWORD *)(a4 + 32);
    else
      v21 = sub_13F2300(a4, v19);
    v22 = *(_DWORD *)(a1 + 44);
    v23 = *(_DWORD *)(a1 + 40);
    v24 = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 60) = v21;
    v25 = sub_10209A0(v19, v24, v23, v22, v21, 1, 0, 0);
    a4 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 48) = v25;
  }
  if ( (*(_BYTE *)(a4 + 36) & 2) != 0 && *(_DWORD *)(a4 + 24) )
  {
    sub_14688A0(a1, v14, a7);
    *(_BYTE *)(*(_QWORD *)a1 + 36LL) |= 0x40u;
  }
  else
  {
    *(_BYTE *)(a4 + 36) |= 0x40u;
  }
}
