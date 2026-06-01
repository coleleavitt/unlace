__int64 __fastcall sub_3D4A00(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // rsi
  int v10; // edx
  __m128i v11; // xmm0
  bool v12; // zf
  __int64 v13; // rsi
  int v14; // edi
  int v15; // r9d
  __int64 v16; // r10
  __int64 v17; // rsi
  _BYTE v18[16]; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 v19; // [rsp+10h] [rbp-88h]
  __int64 v20; // [rsp+18h] [rbp-80h]
  int v21; // [rsp+30h] [rbp-68h]
  unsigned int v22; // [rsp+34h] [rbp-64h]
  _QWORD v23[4]; // [rsp+40h] [rbp-58h] BYREF
  int v24; // [rsp+60h] [rbp-38h]
  __m128i v25; // [rsp+68h] [rbp-30h]
  __m128i v26; // [rsp+78h] [rbp-20h]
  unsigned __int64 v27; // [rsp+88h] [rbp-10h]

  v27 = __readfsqword(0x28u);
  if ( *a1 != a2 )
    return (unsigned int)-1;
  v6 = a1[8];
  if ( !v6 )
    return (unsigned int)-1;
  v7 = -1;
  if ( (unsigned int)(*(_DWORD *)(v6 + 60) - 1) > 1 || *(_DWORD *)(v6 + 72) != *(_DWORD *)(a3 + 16) )
    return v7;
  v9 = *(_QWORD *)(a4 + 8);
  v10 = *(_DWORD *)(a4 + 32);
  v11 = _mm_loadu_si128((const __m128i *)(a4 + 56));
  v23[0] = off_4E90B0;
  v12 = *(_DWORD *)(a3 + 24) == *(_DWORD *)(a4 + 24);
  v23[1] = v9;
  v13 = *(_QWORD *)(a4 + 16);
  v14 = *(_DWORD *)(a4 + 8);
  v24 = v10;
  LOBYTE(v10) = !v12;
  v15 = *(_DWORD *)(a3 + 8);
  v16 = *(_QWORD *)(a3 + 48);
  v25 = _mm_loadu_si128((const __m128i *)(a4 + 40));
  v23[2] = v13;
  v17 = *(_QWORD *)(a4 + 24);
  v12 = *(_DWORD *)(a3 + 20) == *(_DWORD *)(a4 + 20);
  v26 = v11;
  v23[3] = v17;
  if ( !v12 | (unsigned __int8)v10 || v15 != v14 )
    return (unsigned int)-1;
  if ( v16 == v11.m128i_i64[0] )
  {
    return (unsigned int)-2;
  }
  else
  {
    sub_3D3190((__int64)v18, (__int64)v23, (_QWORD *)v6);
    sub_1AF220(
      v19,
      v19 + v20,
      (unsigned __int8 (__fastcall *)(__int64, __int64, _BYTE *, __int64))sub_3D10E0,
      (__int64)v18);
    v7 = -1;
    if ( v21 )
      v7 = v22;
    if ( v19 )
    {
      v20 = 0;
      qfree();
    }
  }
  return v7;
}
