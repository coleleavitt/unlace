__int64 __fastcall sub_19AA3D0(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  _WORD *v8; // r13
  unsigned int v10; // ebp
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  size_t v24; // rax
  unsigned int v25; // edx
  unsigned __int8 v26; // [rsp+3h] [rbp-115h] BYREF
  __int64 v27; // [rsp+4h] [rbp-114h]
  _DWORD v28[6]; // [rsp+10h] [rbp-108h] BYREF
  void *v29; // [rsp+28h] [rbp-F0h]
  __int64 v30; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v31[200]; // [rsp+50h] [rbp-C8h] BYREF

  v8 = (_WORD *)a4;
  v10 = a5;
  v12 = (_QWORD *)*a3;
  v13 = *(_QWORD *)(*a3 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_BYTE *)(*(_QWORD *)v13 + 16LL) == 13 && ((*(_WORD *)(*(_QWORD *)v13 + 18LL) >> 3) & 0x1FFu) > 0x1F1 )
  {
    v21 = sub_1907C70(a1, v12, (__m128i)a7, a8, v13, a4, a5, a6);
    if ( v21 == 1 )
      return 1;
    v12 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFELL);
    *a3 = v21 & 0xFFFFFFFFFFFFFFFELL;
    v14 = *(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFFELL) + 8);
    *a2 = v14;
    if ( *v8 != 37 )
      return 0;
  }
  else
  {
    v14 = v12[1];
    *a2 = v14;
    if ( *(_WORD *)a4 != 37 )
      return 0;
  }
  v16 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)v17 <= 0x2Au )
  {
    a4 = 0x4000600007CLL;
    if ( _bittest64(&a4, v17) )
    {
      v12 = (_QWORD *)*a3;
      v18 = sub_19179A0(a1, (_QWORD *)*a3, 1u, 0x4000600007CLL, a5, a6, a7, a8);
      if ( v18 == 1 )
        return 1;
      v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
      *a3 = v19;
      v20 = *(_QWORD *)(v19 + 8);
      *a2 = v20;
      v16 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  if ( *(_BYTE *)(v16 + 16) == 42 || (v16 = sub_199F9E0(v16, (__int64)v12, v17, a4)) != 0 )
  {
    *a2 = *(_QWORD *)(v16 + 32);
    return 0;
  }
  if ( (*(_DWORD *)*a3 & 0x10000) != 0 )
    return 0;
  sub_168B9F0((__int64)v31, (__int64 *)(a1 + 8), v10, 0x14AFu, 0);
  v22 = sub_1605D30((__int64)v31, a2);
  v26 = 1;
  v23 = sub_1588420(v22, &v26);
  v24 = j__strlen(".");
  LODWORD(v27) = v10;
  HIDWORD(v27) = v10;
  sub_19A1600((__int64)v28, v27, 1, ".", v24);
  sub_1589170(v23, v28);
  if ( v29 != &v30 )
    operator delete(v29);
  sub_15F7200(v31);
  sub_1DBADC0(a1);
  result = v25;
  if ( !(_BYTE)v25 )
  {
    *v8 = 26;
    return result;
  }
  return 1;
}
