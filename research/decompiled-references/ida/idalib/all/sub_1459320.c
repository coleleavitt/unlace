__int64 __fastcall sub_1459320(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  int v7; // r8d
  __int64 v8; // r10
  int v9; // r9d
  __int64 v10; // rsi
  unsigned int v11; // ecx
  __int64 *v12; // rdx
  __int64 v13; // rbp
  int v14; // edx
  int v15; // ebp
  __int64 *v16; // rax
  int v17; // edx
  __int64 v18; // rdi
  int v19; // esi
  unsigned int v20; // ecx
  __int64 **v21; // rdx
  __int64 *v22; // r8
  int v23; // edx
  int v24; // r9d
  __int64 *v25; // r8

  if ( (*a3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v16 = sub_13F1C60((__int64 *)(*a3 & 0xFFFFFFFFFFFFFFF8LL));
    if ( v16 )
      v16 = (__int64 *)v16[2];
    v17 = *(_DWORD *)(a1 + 208);
    v18 = *(_QWORD *)(a1 + 192);
    if ( v17 )
    {
      v19 = v17 - 1;
      v20 = (v17 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
      v21 = (__int64 **)(v18 + 16LL * v20);
      v22 = *v21;
      if ( v16 == *v21 )
      {
LABEL_17:
        *v21 = (__int64 *)-8192LL;
        --*(_DWORD *)(a1 + 200);
        ++*(_DWORD *)(a1 + 204);
        goto LABEL_2;
      }
      v23 = 1;
      if ( v22 != (__int64 *)-4096LL )
      {
        do
        {
          v24 = v23 + 1;
          v20 = v19 & (v23 + v20);
          v21 = (__int64 **)(v18 + 16LL * v20);
          v25 = *v21;
          if ( v16 == *v21 )
            goto LABEL_17;
          v23 = v24;
        }
        while ( v25 != (__int64 *)-4096LL );
      }
    }
  }
LABEL_2:
  result = a3[1];
  v6 = result + 8LL * a3[2];
  if ( result != v6 )
  {
    v7 = *(_DWORD *)(a1 + 208);
    v8 = *(_QWORD *)(a1 + 192);
    v9 = v7 - 1;
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)result + 16LL);
      if ( v7 )
      {
        v11 = v9 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
        v12 = (__int64 *)(v8 + 16LL * v11);
        v13 = *v12;
        if ( *v12 != v10 )
        {
          v14 = 1;
          if ( v13 == -4096 )
            goto LABEL_7;
          while ( 1 )
          {
            v15 = v14 + 1;
            v11 = v9 & (v14 + v11);
            v12 = (__int64 *)(v8 + 16LL * v11);
            if ( v10 == *v12 )
              break;
            if ( *v12 == -4096 )
              goto LABEL_7;
            v14 = v15;
          }
        }
        *v12 = -8192;
        --*(_DWORD *)(a1 + 200);
        ++*(_DWORD *)(a1 + 204);
      }
LABEL_7:
      result += 8;
    }
    while ( v6 != result );
  }
  return result;
}
