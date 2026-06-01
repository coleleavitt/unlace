bool __fastcall sub_1F37C20(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  __int64 v7; // r10
  char v8; // r8
  unsigned int v9; // edi
  __int64 v10; // r9
  unsigned int v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v18; // rdi
  int v19; // eax
  __m128 v20[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v4 = a1 + 8;
    v5 = 64;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = 16LL * *(unsigned int *)(a1 + 16);
  }
  sub_1EDE4B0(v20, (_QWORD *)(v4 + v5), (_QWORD *)(v4 + v5), a1, 1);
  v6 = v20[0].m128_u64[0];
  v7 = *a2;
  v8 = *(_BYTE *)a1 & 1;
  if ( v8 )
  {
    v10 = a1 + 8;
    v15 = 64;
    v13 = ((unsigned __int8)((unsigned int)v7 >> 9) ^ (unsigned __int8)((unsigned int)v7 >> 4)) & 3;
    v14 = (_QWORD *)(a1
                   + 8
                   + 16LL * (((unsigned __int8)((unsigned int)v7 >> 9) ^ (unsigned __int8)((unsigned int)v7 >> 4)) & 3));
    if ( v7 == *v14 )
      goto LABEL_7;
    v18 = 64;
    v12 = 3;
    if ( *v14 != -4096 )
    {
LABEL_16:
      v19 = 1;
      while ( 1 )
      {
        v13 = v12 & (v19 + v13);
        v14 = (_QWORD *)(v10 + 16LL * v13);
        if ( v7 == *v14 )
          break;
        ++v19;
        if ( *v14 == -4096 )
        {
          if ( !v8 )
          {
            v9 = *(_DWORD *)(a1 + 16);
            goto LABEL_14;
          }
          v18 = 64;
          goto LABEL_12;
        }
      }
      if ( !v8 )
      {
        v11 = *(_DWORD *)(a1 + 16);
        goto LABEL_6;
      }
      v15 = 64;
      goto LABEL_7;
    }
LABEL_12:
    sub_1EDE4B0(v20, (_QWORD *)(v10 + v18), (_QWORD *)(v10 + v18), a1, 1);
    v16 = v20[0].m128_u64[0];
    return v6 != v16;
  }
  v9 = *(_DWORD *)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = v9;
  if ( !v9 )
  {
LABEL_14:
    v18 = 16LL * v9;
    goto LABEL_12;
  }
  v12 = v9 - 1;
  v13 = (v9 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
  v14 = (_QWORD *)(v10 + 16LL * v13);
  if ( v7 != *v14 )
  {
    if ( *v14 != -4096 )
      goto LABEL_16;
    goto LABEL_14;
  }
LABEL_6:
  v15 = 16LL * v11;
LABEL_7:
  sub_1EDE4B0(v20, v14, (_QWORD *)(v10 + v15), a1, 1);
  v16 = v20[0].m128_u64[0];
  return v6 != v16;
}
