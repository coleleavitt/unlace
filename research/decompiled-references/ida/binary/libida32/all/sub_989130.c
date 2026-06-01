void __fastcall sub_989130(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 *v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // r15
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // esi
  int v21; // r8d
  __int64 v22; // r10
  __m128i v23[2]; // [rsp+0h] [rbp-98h] BYREF
  __m128 v24; // [rsp+20h] [rbp-78h] BYREF
  int v25; // [rsp+30h] [rbp-68h]

  if ( (*(_WORD *)a2 & 0x1FF) == 0x3C && (*(_DWORD *)a2 & 0x80000) == 0 )
    v6 = *(_QWORD *)(a2 + 16);
  else
    v6 = a2;
  v7 = sub_BD7CB0(v6);
  v8 = *(unsigned int *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 16);
  if ( (_DWORD)v8 )
  {
    v10 = (v8 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
    v11 = (__int64 *)(v9 + ((unsigned __int64)v10 << 6));
    v12 = *v11;
    if ( v7 == *v11 )
    {
LABEL_6:
      sub_9885F0(&v24, v11, (_QWORD *)((v8 << 6) + v9), a1 + 16, 1);
      v13 = v24.m128_u64[0];
      goto LABEL_7;
    }
    v20 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v21 = v20 + 1;
        v10 = (v8 - 1) & (v20 + v10);
        v11 = (__int64 *)(v9 + ((unsigned __int64)v10 << 6));
        v22 = *v11;
        if ( v7 == *v11 )
          goto LABEL_6;
        v20 = v21;
      }
      while ( v22 != -4096 );
    }
  }
  sub_9885F0(
    &v24,
    (_QWORD *)(v9 + ((unsigned __int64)(unsigned int)v8 << 6)),
    (_QWORD *)(v9 + ((unsigned __int64)(unsigned int)v8 << 6)),
    a1 + 16,
    1);
  v13 = v24.m128_u64[0];
LABEL_7:
  v14 = (_QWORD *)(*(_QWORD *)(a1 + 16) + ((unsigned __int64)*(unsigned int *)(a1 + 32) << 6));
  sub_9885F0(&v24, v14, v14, a1 + 16, 1);
  if ( v24.m128_u64[0] == v13 )
  {
    if ( a3 )
    {
      v24.m128_u64[0] = sub_BD7CB0(a2);
      v24.m128_i32[2] = 1;
      v25 = a3;
      sub_988660(v23, a1 + 16, (__int64 *)&v24, (const __m128i *)&v24.m128_u16[4], v18, v19);
    }
  }
  else if ( (unsigned int)(*(_DWORD *)(v13 + 8) - 4) <= 1 )
  {
    sub_9866B0(*(_QWORD *)(a1 + 8), v13 + 8, a3, v15, v16, v17);
  }
}

