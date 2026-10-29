unsigned __int64 __fastcall sub_A61940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 *v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // r13
  _QWORD *v14; // rdx
  int v16; // esi
  int v17; // r10d
  __int64 v18; // r8
  __int32 v19; // [rsp+1Ch] [rbp-3Ch]
  __m128 v20[3]; // [rsp+20h] [rbp-38h] BYREF

  v7 = *(_QWORD *)(a2 + 128);
  if ( v7
    || (sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, a5, a6),
        (v7 = *(_QWORD *)(a2 + 128)) != 0) )
  {
    v7 = *(_QWORD *)(v7 + 88);
  }
  v8 = *(unsigned int *)(a1 + 2216);
  v9 = *(_QWORD *)(a1 + 2200);
  if ( (_DWORD)v8 )
  {
    v10 = (v8 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
    v11 = (__int64 *)(v9 + 16LL * v10);
    v12 = *v11;
    if ( v7 == *v11 )
    {
LABEL_5:
      sub_A618D0(v20, v11, (_QWORD *)(16 * v8 + v9), a1 + 2200, 1);
      v13 = v20[0].m128_u64[0];
      goto LABEL_6;
    }
    v16 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v17 = v16 + 1;
        v10 = (v8 - 1) & (v16 + v10);
        v11 = (__int64 *)(v9 + 16LL * v10);
        v18 = *v11;
        if ( v7 == *v11 )
          goto LABEL_5;
        v16 = v17;
      }
      while ( v18 != -4096 );
    }
  }
  sub_A618D0(v20, (_QWORD *)(v9 + 16LL * (unsigned int)v8), (_QWORD *)(v9 + 16LL * (unsigned int)v8), a1 + 2200, 1);
  v13 = v20[0].m128_u64[0];
LABEL_6:
  v14 = (_QWORD *)(*(_QWORD *)(a1 + 2200) + 16LL * *(unsigned int *)(a1 + 2216));
  sub_A618D0(v20, v14, v14, a1 + 2200, 1);
  if ( v20[0].m128_u64[0] == v13 )
  {
    v20[0].m128_i8[8] = 0;
  }
  else
  {
    LOBYTE(v19) = 1;
    v20[0].m128_u64[0] = *(_QWORD *)(v13 + 8);
    v20[0].m128_i32[2] = v19;
  }
  return v20[0].m128_u64[0];
}

