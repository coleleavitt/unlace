void __fastcall sub_9B0440(__int64 a1, __int64 a2, __int64 a3, int a4)
{
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
  int v18; // eax
  __int64 v19; // rdi
  int v20; // esi
  int v21; // r8d
  __int64 v22; // r10
  int v23; // edx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // [rsp+Ch] [rbp-9Ch]
  __m128i v27[2]; // [rsp+10h] [rbp-98h] BYREF
  __m128 v28; // [rsp+30h] [rbp-78h] BYREF
  int v29; // [rsp+40h] [rbp-68h]

  if ( (*(_WORD *)a2 & 0x1FF) == 0x3C && (*(_DWORD *)a2 & 0x80000) == 0 )
    a2 = *(_QWORD *)(a2 + 16);
  v7 = sub_BFB9F0(a2);
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
      sub_9AC330(&v28, v11, (_QWORD *)((v8 << 6) + v9), a1 + 16, 1);
      v13 = v28.m128_u64[0];
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
  sub_9AC330(
    &v28,
    (_QWORD *)(v9 + ((unsigned __int64)(unsigned int)v8 << 6)),
    (_QWORD *)(v9 + ((unsigned __int64)(unsigned int)v8 << 6)),
    a1 + 16,
    1);
  v13 = v28.m128_u64[0];
LABEL_7:
  v14 = (_QWORD *)(*(_QWORD *)(a1 + 16) + ((unsigned __int64)*(unsigned int *)(a1 + 32) << 6));
  sub_9AC330(&v28, v14, v14, a1 + 16, 1);
  if ( v28.m128_u64[0] == v13 )
    return;
  v18 = *(_DWORD *)(v13 + 8);
  v19 = *(_QWORD *)(a1 + 8);
  switch ( v18 )
  {
    case 4:
      v23 = sub_9ADE40(v19, *(_QWORD *)(v13 + 16));
      goto LABEL_19;
    case 5:
      v23 = sub_9AFF80(v19, *(_QWORD *)(v13 + 16));
LABEL_19:
      v26 = v23;
      if ( v23 )
      {
        v28.m128_u64[0] = sub_BFB9F0(a3);
        v29 = v26;
        v28.m128_i32[2] = 1;
        sub_9AC3A0(v27, a1 + 16, (__int64 *)&v28, (const __m128i *)&v28.m128_u16[4], v24, v25);
      }
      break;
    case 1:
      v23 = *(_DWORD *)(v13 + 16);
      goto LABEL_19;
  }
  if ( a4 )
  {
    if ( (unsigned int)(*(_DWORD *)(v13 + 8) - 4) <= 1 )
      sub_9AA3F0(*(_QWORD *)(a1 + 8), v13 + 8, a4, v15, v16, v17);
  }
}
