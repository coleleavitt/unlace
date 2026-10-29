__int64 __fastcall sub_1F0B900(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // ecx
  bool v10; // zf
  __int64 v11; // rdx
  bool v12; // di
  int v13; // ecx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  _QWORD *v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  _BYTE *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // edx
  __int64 v36; // rsi
  unsigned int v37; // edi
  int v38; // edx
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  void *ptr; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v47; // [rsp+8h] [rbp-F0h]
  _BYTE v48[232]; // [rsp+10h] [rbp-E8h] BYREF

  v4 = *(unsigned int *)(a2 + 24);
  v5 = *(_QWORD **)a2;
  *(_DWORD *)(a2 + 24) = v4 + 1;
  switch ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8 * v4) )
  {
    case 0:
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 &= 0xFFFFFFFE00000000LL;
      break;
    case 1:
      v44 = sub_1F16500(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a2 + 32, a2 + 24);
      v45 = *(unsigned int *)(a2 + 24);
      *(_DWORD *)(a2 + 24) = v45 + 1;
      sub_F1D250(a1, v44, 0, *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v45) != 0);
      break;
    case 2:
      v39 = sub_1EE1670(a2);
      v40 = sub_1F16500(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a2 + 32, a2 + 24);
      v41 = *(unsigned int *)(a2 + 24);
      *(_DWORD *)(a2 + 24) = v41 + 1;
      sub_F1D290((int *)a1, v39, v40, *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v41) != 0);
      break;
    case 3:
      v42 = sub_1F16500(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a2 + 32, a2 + 24);
      v43 = *(unsigned int *)(a2 + 24);
      *(_DWORD *)(a2 + 24) = v43 + 1;
      sub_F1D250(a1, v42, 1, *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v43) != 0);
      break;
    case 4:
      sub_1EB08D0((__int64)&ptr, a2);
      v25 = sub_1F16500(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a2 + 32, a2 + 24);
      v26 = *(unsigned int *)(a2 + 24);
      *(_DWORD *)(a2 + 24) = v26 + 1;
      sub_F1F190(a1, v5, (void ***)&ptr, v25, *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v26) != 0, v27);
      if ( (unsigned int)v47 > 0x40 && ptr )
        operator delete[](ptr);
      break;
    case 5:
      sub_1F0A560((__int64)&ptr, a2);
      v28 = sub_1F16500(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a2 + 32, a2 + 24);
      v29 = *(unsigned int *)(a2 + 24);
      *(_DWORD *)(a2 + 24) = v29 + 1;
      sub_F1EED0(a1, v5, v28, (__int64)&ptr, *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v29) != 0, v30);
      if ( (unsigned int)ptr > 1 )
        sub_A4F8E0((int *)&ptr);
      break;
    case 6:
      v31 = sub_1F17110(a2);
      v32 = *(unsigned int *)(a2 + 24);
      *(_DWORD *)(a2 + 24) = v32 + 1;
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v32) == 0;
      *(_QWORD *)(a1 + 8) = v31;
      *(_BYTE *)(a1 + 3) = (!v10 << 7) | *(_BYTE *)(a1 + 3) & 0x7F;
      *(_QWORD *)a1 = *(_QWORD *)a1 & 0x80000000LL | 6;
      break;
    case 7:
      v33 = sub_1F17110(a2);
      v34 = *(_QWORD *)(a2 + 32);
      v35 = *(_DWORD *)(a2 + 24);
      v36 = *(_QWORD *)(v34 + 8LL * v35);
      v37 = v35 + 2;
      v10 = *(_QWORD *)(v34 + 8LL * (v35 + 1)) == 0;
      v38 = *(_DWORD *)a1;
      *(_DWORD *)(a2 + 24) = v37;
      *(_QWORD *)(a1 + 8) = v33;
      *(_DWORD *)(a1 + 4) = v36;
      *(_DWORD *)a1 = v38 & 0x80000000 | 7;
      *(_BYTE *)(a1 + 3) = !v10 << 7;
      break;
    case 8:
      v6 = sub_1F68F80(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
      v7 = *(unsigned int *)(a2 + 24);
      v8 = *(_QWORD *)(a2 + 32);
      v9 = *(_DWORD *)(a2 + 24);
      v10 = *(_QWORD *)(v8 + 8 * v7) == 0;
      *(_DWORD *)(a2 + 24) = v7 + 2;
      v11 = (unsigned int)(v9 + 1);
      v12 = !v10;
      v13 = *(_DWORD *)a1;
      v10 = *(_QWORD *)(v8 + 8 * v11) == 0;
      LOBYTE(v11) = *(_BYTE *)(a1 + 4);
      *(_QWORD *)(a1 + 8) = v6;
      *(_DWORD *)a1 = v13 & 0x80000000 | 8;
      *(_BYTE *)(a1 + 4) = v12 | v11 & 0xFE;
      *(_BYTE *)(a1 + 3) = !v10 << 7;
      break;
    case 9:
      ptr = v48;
      v47 = 0x800000000LL;
      v15 = sub_1F0BD10(a2, &ptr);
      v17 = -1;
      v18 = v15;
      v19 = v16;
      if ( v16 <= 0x555555555555555LL )
        v17 = 24 * v16;
      v20 = sub_1EC2080(v5 + 294, v17, 3u);
      v21 = (_QWORD *)v20;
      v22 = v19 - 1;
      if ( (__int64)(v19 - 1) >= 0 )
      {
        do
        {
          --v22;
          *v21 &= 0xFFFFFFFE00000000LL;
          v21 += 3;
          *(v21 - 2) = 0;
        }
        while ( v22 != -1 );
      }
      if ( v19 )
      {
        v23 = 0;
        do
        {
          *(__m128i *)(v20 + v23) = _mm_loadu_si128((const __m128i *)(v18 + v23));
          *(_QWORD *)(v20 + v23 + 16) = *(_QWORD *)(v18 + v23 + 16);
          v23 += 24;
        }
        while ( v23 != 24 * v19 );
      }
      v24 = ptr;
      *(_DWORD *)a1 = 9;
      *(_QWORD *)(a1 + 8) = v20;
      *(_DWORD *)(a1 + 4) = v19;
      if ( v24 != v48 )
        free(v24);
      break;
  }
  return a1;
}
