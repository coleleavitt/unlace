void __fastcall sub_A68960(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v7; // ecx
  __int64 *v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // esi
  __int64 v17; // r8
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 *v20; // rbp
  __int64 *v21; // r12
  __int64 v22; // rsi
  int v23; // esi
  int v24; // r10d
  __int64 v25; // rdi
  int v26; // eax
  bool v27; // zf
  int v28; // r11d
  __int64 v29; // r10
  int v30; // eax
  __int64 v31; // [rsp+8h] [rbp-40h] BYREF
  __m128 v32[3]; // [rsp+10h] [rbp-38h] BYREF

  v2 = a1 + 1096;
  v4 = *(unsigned int *)(a1 + 1112);
  v5 = *(_QWORD *)(a1 + 1096);
  v31 = a2;
  if ( (_DWORD)v4 )
  {
    v7 = (v4 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v8 = (__int64 *)(v5 + 16LL * v7);
    v9 = *v8;
    if ( a2 == *v8 )
    {
LABEL_3:
      sub_A60260(v32, v8, (_QWORD *)(16 * v4 + v5), v2, 1);
      v10 = v32[0].m128_u64[0];
      goto LABEL_4;
    }
    v23 = 1;
    if ( v9 != -4096 )
    {
      do
      {
        v24 = v23 + 1;
        v7 = (v4 - 1) & (v23 + v7);
        v8 = (__int64 *)(v5 + 16LL * v7);
        v25 = *v8;
        if ( a2 == *v8 )
          goto LABEL_3;
        v23 = v24;
      }
      while ( v25 != -4096 );
    }
  }
  sub_A60260(v32, (_QWORD *)(v5 + 16LL * (unsigned int)v4), (_QWORD *)(v5 + 16LL * (unsigned int)v4), v2, 1);
  v10 = v32[0].m128_u64[0];
LABEL_4:
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 1096) + 16LL * *(unsigned int *)(a1 + 1112));
  sub_A60260(v32, v11, v11, v2, 1);
  if ( v10 == v32[0].m128_u64[0] )
    return;
  v16 = *(_DWORD *)(a1 + 1872);
  *(_QWORD *)(v10 + 8) = 0;
  if ( v16 )
  {
    v13 = v31;
    v15 = v16 - 1;
    v17 = *(_QWORD *)(a1 + 1856);
    v18 = v15 & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
    v12 = v17 + 56LL * v18;
    v19 = *(_QWORD *)v12;
    if ( *(_QWORD *)v12 == v31 )
    {
LABEL_7:
      v20 = *(__int64 **)(v12 + 8);
      v21 = &v20[*(unsigned int *)(v12 + 16)];
      while ( v21 != v20 )
      {
        v22 = *v20++;
        sub_A68960(a1, v22);
      }
      return;
    }
    v28 = 1;
    v29 = 0;
    if ( v19 != -4096 )
    {
      while ( 1 )
      {
        if ( v19 == -8192 && !v29 )
          v29 = v12;
        v18 = v15 & (v28 + v18);
        v12 = v17 + 56LL * v18;
        v19 = *(_QWORD *)v12;
        if ( v31 == *(_QWORD *)v12 )
          goto LABEL_7;
        if ( v19 == -4096 )
        {
          if ( v29 )
            v12 = v29;
          break;
        }
        ++v28;
      }
    }
    v30 = *(_DWORD *)(a1 + 1864);
    v32[0].m128_u64[0] = v12;
    v26 = v30 + 1;
    v14 = (unsigned int)(4 * v26);
    if ( (unsigned int)v14 < 3 * v16 )
    {
      v14 = v16 >> 3;
      if ( v16 - *(_DWORD *)(a1 + 1868) - v26 > (unsigned int)v14 )
        goto LABEL_17;
      goto LABEL_16;
    }
  }
  else
  {
    v32[0].m128_u64[0] = 0;
  }
  v16 *= 2;
LABEL_16:
  sub_A68610((__int64 **)(a1 + 1856), v16, v12, v13, v14, v15);
  sub_A49F10((__int64 *)(a1 + 1856), &v31, v32);
  v13 = v31;
  v12 = v32[0].m128_u64[0];
  v26 = *(_DWORD *)(a1 + 1864) + 1;
LABEL_17:
  v27 = *(_QWORD *)v12 == -4096;
  *(_DWORD *)(a1 + 1864) = v26;
  if ( !v27 )
    --*(_DWORD *)(a1 + 1868);
  *(_QWORD *)v12 = v13;
  *(_QWORD *)(v12 + 8) = v12 + 24;
  *(_QWORD *)(v12 + 16) = 0x400000000LL;
}

