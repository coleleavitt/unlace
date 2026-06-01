void __fastcall sub_1BEE030(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8,
        char a9,
        char a10)
{
  __int64 v14; // rax
  char v15; // dl
  __int64 *v16; // rdi
  __int64 v17; // r9
  __int64 *v18; // r8
  __int64 *v19; // rcx
  __int64 v20; // rdi
  __int64 *v21; // rsi
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 *v26; // rcx

  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v15 = *(_BYTE *)(a7 + 2724);
  if ( !v15 )
    goto LABEL_10;
  v16 = *(__int64 **)(a7 + 2704);
  v17 = *(unsigned int *)(a7 + 2716);
  v18 = &v16[v17];
  if ( v16 != v18 )
  {
    v19 = *(__int64 **)(a7 + 2704);
    if ( *v16 == v14 )
    {
LABEL_24:
      v15 = 0;
      v21 = &v16[*(unsigned int *)(a7 + 2716)];
      goto LABEL_12;
    }
    while ( v18 != ++v19 )
    {
      if ( v14 == *v19 )
        goto LABEL_24;
    }
  }
  if ( (unsigned int)v17 < *(_DWORD *)(a7 + 2712) )
  {
    *(_DWORD *)(a7 + 2716) = v17 + 1;
    *v18 = v14;
    v20 = *(_QWORD *)(a7 + 2704);
    v19 = (__int64 *)(v20 + 8 * v17);
  }
  else
  {
LABEL_10:
    v22 = sub_2236760(a7 + 2704, v14);
    v20 = *(_QWORD *)(a7 + 2704);
    v19 = (__int64 *)v22;
    if ( !*(_BYTE *)(a7 + 2724) )
    {
      v21 = (__int64 *)(v20 + 8LL * *(unsigned int *)(a7 + 2712));
      goto LABEL_12;
    }
  }
  v21 = (__int64 *)(v20 + 8LL * *(unsigned int *)(a7 + 2716));
LABEL_12:
  if ( v21 != v19 && (*v19 == -2 || *v19 == -1) )
  {
    do
      ++v19;
    while ( v21 != v19 && (unsigned __int64)*v19 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( v15 )
  {
    v23 = *(_DWORD *)(a7 + 2972);
    if ( v23 == 5 || v23 == 2 || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 || v23 == 3 )
    {
      sub_1BEDBA0(a1, a7, a2, a3, a4, a5, a6, a8, a9, a10);
      *(_BYTE *)(a7 + 2867) |= 0x80u;
    }
    else
    {
      v24 = *(_DWORD *)(a7 + 2988);
      if ( 4864 - v24 <= 0x37 )
      {
        v25 = sub_9C3B30((__int64 *)(a7 + 2872), 56, 3u);
      }
      else
      {
        *(_DWORD *)(a7 + 2988) = v24 + 56;
        v25 = a7 + v24 + 2992;
      }
      v26 = *(__int64 **)(a7 + 2856);
      if ( v26 )
      {
        while ( *v26 )
          v26 = (__int64 *)*v26;
        *v26 = v25;
      }
      else
      {
        *(_QWORD *)(a7 + 2856) = v25;
      }
      *(_DWORD *)(a7 + 2864) = (*(_DWORD *)(a7 + 2864) + 1) & 0x3FFFFFFF | *(_DWORD *)(a7 + 2864) & 0xC0000000;
      *(_QWORD *)v25 = 0;
      *(_QWORD *)(v25 + 16) = a2;
      *(_QWORD *)(v25 + 40) = a5;
      *(_QWORD *)(v25 + 48) = a6;
      *(_BYTE *)(v25 + 8) = (4 * (a8 & 1)) | (8 * (a10 & 1)) | 2;
      *(_QWORD *)(v25 + 24) = a3;
      *(_QWORD *)(v25 + 32) = a4;
    }
  }
}
