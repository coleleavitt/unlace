__int64 __fastcall sub_15F1950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-20h]

  v6 = a1 + 32;
  v8 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v8 || (v9 = *(_QWORD *)(a1 + 24)) == 0 )
  {
    v15 = *(_QWORD *)(a1 + 264);
    v16 = operator new(0x500u);
    *(_QWORD *)(v16 + 16) = 0;
    *(_QWORD *)(v16 + 24) = 2;
    *(_QWORD *)v16 = &off_2BC63E0;
    v17 = *(_QWORD *)(v16 + 8);
    *(_DWORD *)(v16 + 32) = 0;
    *(_QWORD *)(v16 + 40) = v15;
    *(_QWORD *)(v16 + 8) = (unsigned int)v17 & 0xFFEC0000 | 0x20000LL;
    *(_DWORD *)(v16 + 48) = *(_DWORD *)(v15 + 196);
    LODWORD(v17) = *(_DWORD *)(v15 + 200);
    *(_QWORD *)(v16 + 64) = 0x800000000LL;
    *(_DWORD *)(v16 + 52) = v17;
    *(_QWORD *)(v16 + 56) = v16 + 72;
    *(_QWORD *)(v16 + 136) = v16 + 152;
    v18 = (_QWORD *)(v16 + 200);
    *(_QWORD *)(v16 + 144) = 0x400000000LL;
    *(_QWORD *)(v16 + 184) = 0;
    for ( *(_QWORD *)(v16 + 192) = 1; (_QWORD *)(v16 + 264) != v18; v18 += 2 )
      *v18 = -4096;
    *(_QWORD *)(v16 + 416) = 1;
    *(_QWORD *)(v16 + 360) = v16 + 376;
    *(_QWORD *)(v16 + 408) = v16 + 432;
    *(_QWORD *)(v16 + 264) = v16 + 280;
    *(_QWORD *)(v16 + 448) = v16 + 464;
    *(_QWORD *)(v16 + 272) = 0x400000000LL;
    *(_QWORD *)(v16 + 368) = 0x400000000LL;
    *(_QWORD *)(v16 + 456) = 0x400000000LL;
    *(_QWORD *)(v16 + 624) = v16 + 648;
    *(_QWORD *)(v16 + 720) = 0x400000000LL;
    v19 = (_QWORD *)(v16 + 768);
    *(_QWORD *)(v16 + 712) = v16 + 728;
    *(_OWORD *)(v16 + 344) = 0;
    *(_DWORD *)(v16 + 424) = 0;
    *(_BYTE *)(v16 + 428) = 1;
    *(_QWORD *)(v16 + 440) = 0;
    *(_QWORD *)(v16 + 632) = 8;
    *(_DWORD *)(v16 + 640) = 0;
    *(_BYTE *)(v16 + 644) = 1;
    for ( *(_QWORD *)(v16 + 760) = 1; (_QWORD *)(v16 + 1280) != v19; *(v19 - 7) = 0 )
    {
      *v19 = 0;
      v19 += 8;
    }
    v20 = *(unsigned int *)(a1 + 40);
    if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
    {
      v22 = v16;
      sub_2237220(v6, a1 + 48, v20 + 1, 8);
      v20 = *(unsigned int *)(a1 + 40);
      v16 = v22;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v20) = v16;
    v21 = *(_QWORD *)(a1 + 232);
    ++*(_DWORD *)(a1 + 40);
    result = *(unsigned int *)(v21 + 64);
    if ( (_DWORD)result )
      return sub_1AF2C00(*(_QWORD *)(a1 + 760));
  }
  else
  {
    sub_15EDE30(v9, a2, v8, a4, a5, a6);
    v10 = *(unsigned int *)(a1 + 40);
    v11 = *(unsigned int *)(a1 + 44);
    v12 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = 0;
    if ( v10 + 1 > v11 )
    {
      sub_2237220(v6, a1 + 48, v10 + 1, 8);
      v10 = *(unsigned int *)(a1 + 40);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v10) = v12;
    v13 = *(_QWORD *)(a1 + 232);
    ++*(_DWORD *)(a1 + 40);
    result = *(unsigned int *)(v13 + 64);
    if ( (_DWORD)result )
      return sub_1AF2C00(*(_QWORD *)(a1 + 760));
  }
  return result;
}
