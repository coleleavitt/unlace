__int64 __fastcall sub_780810(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // r12
  _QWORD *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rbp
  int v12; // edx
  __int64 v13; // rax
  char *v14; // rbx
  unsigned int v15; // eax
  _QWORD *v16; // rdx
  _OWORD v17[3]; // [rsp+0h] [rbp-38h] BYREF

  v1 = (__int64 *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 56) & 4) != 0 )
    v1 = (__int64 *)v1[4];
  if ( !v1 )
    goto LABEL_5;
  v2 = *v1;
  if ( (*v1 & 7) != 0 )
    goto LABEL_5;
  v6 = v1 + 1;
  v7 = v2;
  if ( (v2 & 8) != 0 )
    goto LABEL_5;
  v8 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) == 39 )
  {
    v2 = sub_B1B150(v2, v6, v8);
    v7 = v2;
    v6 = v16;
    if ( (v2 & 7) != 0 )
      goto LABEL_5;
  }
  if ( (v7 & 8) != 0
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1
    || !v7 )
  {
    goto LABEL_5;
  }
  v9 = sub_798D40(a1);
  v10 = *(_BYTE *)(v7 + 16);
  v11 = *(_QWORD *)(v9 + 2152);
  if ( v10 == 26 )
  {
    v12 = 8 * ((*(_WORD *)(v7 + 22) & 0x3C0) != 0) + 15;
  }
  else
  {
    v13 = 16;
    if ( v10 == 25 )
      goto LABEL_15;
    v12 = 15;
  }
  v13 = 8 * ((v12 + ((*(_DWORD *)(v7 + 20) >> 3) & 0x7FFF8u)) >> 3) + 8;
LABEL_15:
  v14 = (char *)v6 + v13;
  v15 = sub_B1AFD0(*(_QWORD *)(v7 + 24));
  v17[0] = _mm_unpacklo_epi64(
             _mm_loadl_epi64((const __m128i *)(v7 + 24)),
             (__m128i)(v15 * ((v14 != nullptr) + (unsigned __int64)&v14[-(v14 != nullptr)] / v15)));
  v4 = (unsigned int)sub_B1E800(v17);
  v3 = sub_B1E2D0(v17);
  if ( (_DWORD)v4 == 0 || v3 == 0 || !*(_DWORD *)(a1 + 24) || !(unsigned __int8)sub_CB1620(v11, (unsigned int)v4) )
  {
LABEL_5:
    v3 = 0;
    v4 = 0;
  }
  return (v4 << 32) | v3;
}

