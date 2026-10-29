__int64 __fastcall sub_18CCE30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 *v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // r12
  __int64 v14; // r9
  _QWORD *v15; // rdx
  unsigned __int64 v16; // r15
  int v17; // r8d
  int v18; // r9d
  int v19; // esi
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rdi
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rax
  int v31; // eax
  int v33; // esi
  int v34; // r8d
  __int64 v35; // r10
  __int64 v36; // rax
  __m128 v38[4]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a1 + 8;
  v7 = *(unsigned int *)(a1 + 24);
  v8 = *(_QWORD *)(a3 + 40);
  v9 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v7 )
  {
    v10 = (v7 - 1) & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
    v11 = (__int64 *)(v9 + 16LL * v10);
    v12 = *v11;
    if ( v8 == *v11 )
    {
LABEL_3:
      sub_AEAAD0(v38, v11, (_QWORD *)(16 * v7 + v9), v4, 1);
      v13 = v38[0].m128_u64[0];
      v14 = a1 + 8;
      goto LABEL_4;
    }
    v33 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v34 = v33 + 1;
        v10 = (v7 - 1) & (v33 + v10);
        v11 = (__int64 *)(v9 + 16LL * v10);
        v35 = *v11;
        if ( v8 == *v11 )
          goto LABEL_3;
        v33 = v34;
      }
      while ( v35 != -4096 );
    }
  }
  sub_AEAAD0(v38, (_QWORD *)(v9 + 16LL * (unsigned int)v7), (_QWORD *)(v9 + 16LL * (unsigned int)v7), v4, 1);
  v13 = v38[0].m128_u64[0];
  v14 = a1 + 8;
LABEL_4:
  v15 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
  sub_AEAAD0(v38, v15, v15, v14, 1);
  if ( v13 != v38[0].m128_u64[0] )
    v8 = *(_QWORD *)(v13 + 8);
  if ( !v8 )
    return 0;
  v16 = a4 + 12;
  LOBYTE(v17) = *(_BYTE *)(a3 + 32) & 0x3F;
  if ( (_BYTE)v17 )
  {
    v18 = *(_DWORD *)(a4 + 8);
    v17 = (unsigned __int8)v17;
    v19 = *(_DWORD *)(a4 + 4);
  }
  else
  {
    v17 = 0;
    v18 = 0;
    v19 = 0;
  }
  v20 = sub_1A891C0(*(_QWORD *)(*(_QWORD *)a1 + 736LL), v8, v19, (int)a3 + 48, v17, v18, (int)a4 + 12, v17, 1);
  v21 = v20;
  if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v22 = 4;
  v23 = *(_BYTE *)(v20 + 32) & 0x3F;
  if ( v23 )
    v22 = 4 * ((unsigned int)(4 * v23 + 11) >> 2) + 4;
  sub_1EA6140(a2, v21, v22, 4);
  if ( (*(_BYTE *)(a3 + 32) & 0x3F) != 0 )
  {
    *(_DWORD *)(v24 + 4) = *(_DWORD *)(a4 + 4);
    v25 = *(_BYTE *)(a3 + 32) & 0x3F;
    if ( (*(_BYTE *)(a3 + 32) & 0x3F) == 0 )
      goto LABEL_32;
    v26 = v24 + 12;
    if ( (v24 + 12 >= (unsigned __int64)(a4 + 28) || v16 >= v24 + 28) && v25 - 1 > 2 )
    {
      v27 = 12;
      do
      {
        *(__m128i *)(v24 + v27) = _mm_loadu_si128((const __m128i *)(a4 + v27));
        v27 += 16;
      }
      while ( v27 != 16LL * (v25 >> 2) + 12 );
      v28 = v25 & 0xFC;
      if ( (v25 & 0xFFFFFFFC) != v25 )
      {
        *(_DWORD *)(v26 + 4LL * ((unsigned __int8)v25 & 0xFC)) = *(_DWORD *)(v16 + 4LL * ((unsigned __int8)v25 & 0xFC));
        v29 = (unsigned int)(v28 + 1);
        if ( v25 != (_DWORD)v29 )
        {
          v30 = (unsigned int)(v28 + 2);
          *(_DWORD *)(v24 + 4 * v29 + 12) = *(_DWORD *)(4 * v29 + a4 + 12);
          if ( v25 != (_DWORD)v30 )
            *(_DWORD *)(v26 + 4 * v30) = *(_DWORD *)(v16 + 4 * v30);
        }
      }
    }
    else
    {
      v36 = 0;
      do
      {
        *(_DWORD *)(v24 + 4 * v36 + 12) = *(_DWORD *)(a4 + 4 * v36 + 12);
        ++v36;
      }
      while ( v25 != (_DWORD)v36 );
    }
    if ( (*(_BYTE *)(a3 + 32) & 0x3F) != 0 )
      v31 = *(_DWORD *)(a4 + 8);
    else
LABEL_32:
      v31 = 0;
    *(_DWORD *)(v24 + 8) = v31;
  }
  return v21;
}
