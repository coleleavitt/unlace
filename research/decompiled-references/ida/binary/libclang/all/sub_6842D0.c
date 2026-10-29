__int64 *__fastcall sub_6842D0(__int64 *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  _QWORD *v17; // r14

  v4 = *(_DWORD *)(a3 + 240);
  *(_QWORD *)(a3 + 224) += 720LL;
  v5 = v4 + 1;
  *(_DWORD *)(a3 + 240) = v5;
  v6 = *(_QWORD *)(a3 + 144);
  v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(a3 + 152) >= (unsigned __int64)(v7 + 720) && v6 )
  {
    *(_QWORD *)(a3 + 144) = v7 + 720;
  }
  else
  {
    v7 = sub_67A630(a3 + 144, 720, 3);
    v5 = *(_DWORD *)(a3 + 240);
  }
  *(_QWORD *)v7 = a3;
  *(_DWORD *)(a3 + 240) = v5 + 1;
  *(_QWORD *)(v7 + 8) = v7 + 24;
  *(_QWORD *)(v7 + 168) = v7 + 184;
  *(_QWORD *)(v7 + 16) = 0x200000000LL;
  *(_QWORD *)(v7 + 176) = 0x200000000LL;
  *(_QWORD *)(v7 + 688) = 0x200000000LL;
  v8 = 1;
  *(_QWORD *)(v7 + 680) = v7 + 696;
  *(_DWORD *)(v7 + 712) = 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    sub_683800(v7, a2, a3);
    v8 = *(_DWORD *)(v7 + 712) + 1;
  }
  *a1 = v7;
  *(_DWORD *)(v7 + 712) = v8;
  if ( (*(_DWORD *)(a3 + 240))-- != 1 )
    return a1;
  v11 = *(_QWORD *)(a3 + 208);
  v12 = v11 + 16LL * *(unsigned int *)(a3 + 216);
  while ( v12 != v11 )
  {
    v11 += 16;
    operator delete();
  }
  *(_DWORD *)(a3 + 216) = 0;
  v13 = *(unsigned int *)(a3 + 168);
  if ( !(_DWORD)v13 )
    return a1;
  v14 = *(_QWORD **)(a3 + 160);
  v15 = v13;
  *(_QWORD *)(a3 + 224) = 0;
  v16 = &v14[v15];
  v17 = v14 + 1;
  *(__m128i *)(a3 + 144) = _mm_unpacklo_epi64(
                             (__m128i)(unsigned __int64)*v14,
                             (__m128i)(unsigned __int64)(*v14 + 4096LL));
  if ( v15 != 1 )
  {
    do
    {
      ++v17;
      operator delete();
    }
    while ( v16 != v17 );
  }
  *(_DWORD *)(a3 + 168) = 1;
  return a1;
}

