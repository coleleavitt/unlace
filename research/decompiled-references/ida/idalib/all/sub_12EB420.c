__int64 __fastcall sub_12EB420(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5)
{
  unsigned int v7; // r12d
  unsigned int v8; // ebx
  _BYTE *v9; // r14
  size_t v10; // rbp
  __int64 v12; // rax
  unsigned int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // r13
  __m128i v16; // xmm1
  _BYTE *s1; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v18; // [rsp+10h] [rbp-B8h] BYREF
  char v19; // [rsp+18h] [rbp-B0h]
  void *v20[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-98h] BYREF
  __m128i v22[8]; // [rsp+40h] [rbp-88h] BYREF

  v7 = *(unsigned __int8 *)(a1 + 76);
  if ( (BYTE1(*(_DWORD *)(a1 + 72)) & 7) == 1 )
    v7 = ((_BYTE)v7 != 0) + 3;
  v8 = *(unsigned __int8 *)(a1 + 64);
  if ( (_BYTE)v8 )
  {
    v16 = _mm_loadu_si128((const __m128i *)(a1 + 48));
    v22[0] = _mm_loadu_si128((const __m128i *)(a1 + 32));
    v22[1] = v16;
    *(_DWORD *)(a4 + 520) = sub_10271A0((_QWORD *)a4, v22[0].m128i_i64, v7, 0, 0, 0, v22[0]);
    return v8;
  }
  v9 = *(_BYTE **)a1;
  v10 = *(_QWORD *)(a1 + 8);
  s1 = *(_BYTE **)a1;
  if ( j__strlen("-") == v10 && (!v10 || !memcmp(v9, "-", v10)) )
  {
    sub_FDCE70((__int64)&v18, a3);
    if ( (v19 & 1) != 0 )
      goto LABEL_12;
  }
  else
  {
    sub_FD9C70((__int64)&v18, a3, s1, v10, 1, 1, 1);
    if ( (v19 & 1) != 0 )
    {
LABEL_12:
      v12 = v18;
      v18 = 0;
      v22[0].m128i_i64[0] = v12;
      v13 = sub_2220DB0(v22);
      v15 = v14;
      if ( v22[0].m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22[0].m128i_i64[0] + 8LL))(v22[0].m128i_i64[0]);
      if ( v10 == j__strlen("-") && (!v10 || !memcmp(s1, "-", v10)) )
      {
        sub_FC70B0((__int64)v22, a2, 0, 721);
      }
      else
      {
        sub_FC70B0((__int64)v22, a2, 0, 720);
        sub_AEC220((unsigned __int8 **)v22, s1, v10);
      }
      (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v15 + 32LL))(v20, v15, v13);
      sub_AEC220((unsigned __int8 **)v22, (_BYTE *)v20[0], (signed __int64)v20[1]);
      if ( v20[0] != &v21 )
        operator delete(v20[0]);
      sub_AEA040((__int64)v22);
      goto LABEL_7;
    }
  }
  v8 = 1;
  *(_DWORD *)(a4 + 520) = sub_1026F70(a4, v18, 0, v7, 0, 0, a5);
LABEL_7:
  sub_A04D90((__int64 *)&v18);
  return v8;
}
