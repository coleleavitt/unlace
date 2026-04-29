__int64 __fastcall sub_3CA6C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v8; // rdi
  int v9; // esi
  __m128i v10; // xmm0
  int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // rdi
  int v14; // r8d
  int v15; // ebx
  __int64 v16; // rdi
  __int64 v17[3]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v18; // [rsp+18h] [rbp-80h]
  __int64 v19; // [rsp+20h] [rbp-78h]
  int v20; // [rsp+38h] [rbp-60h]
  unsigned int v21; // [rsp+3Ch] [rbp-5Ch]
  _QWORD v22[4]; // [rsp+40h] [rbp-58h] BYREF
  int v23; // [rsp+60h] [rbp-38h]
  __m128i v24; // [rsp+68h] [rbp-30h]
  __m128i v25; // [rsp+78h] [rbp-20h]
  unsigned __int64 v26; // [rsp+88h] [rbp-10h]

  v26 = __readfsqword(0x28u);
  if ( *a1 != a2 )
    return (unsigned int)-1;
  v5 = a1[8];
  if ( !v5 )
    return (unsigned int)-1;
  v6 = -1;
  if ( (unsigned int)(*(_DWORD *)(v5 + 60) - 1) > 1 || *(_DWORD *)(v5 + 72) != *(_DWORD *)(a3 + 16) )
    return v6;
  v8 = *(_QWORD *)(a4 + 8);
  v9 = *(_DWORD *)(a4 + 32);
  v10 = _mm_loadu_si128((const __m128i *)(a4 + 56));
  v22[0] = off_4E8410;
  v11 = *(_DWORD *)(a3 + 20);
  v12 = *(_QWORD *)(a3 + 48);
  v22[1] = v8;
  v13 = *(_QWORD *)(a4 + 16);
  v14 = *(_DWORD *)(a4 + 20);
  v23 = v9;
  v15 = *(_DWORD *)(a4 + 24);
  v24 = _mm_loadu_si128((const __m128i *)(a4 + 40));
  v22[2] = v13;
  v16 = *(_QWORD *)(a4 + 24);
  v25 = v10;
  v22[3] = v16;
  if ( *(_DWORD *)(a3 + 24) != v15 || v11 != v14 )
    return (unsigned int)-1;
  if ( v10.m128i_i64[0] == v12 )
  {
    return (unsigned int)-2;
  }
  else
  {
    sub_3C9000(v17, (__int64)v22, v5);
    sub_1AC9A0(v18, v18 + v19, sub_3C8FB0, v17);
    v6 = -1;
    if ( v20 )
      v6 = v21;
    if ( v18 )
    {
      v19 = 0;
      qfree();
    }
  }
  return v6;
}
