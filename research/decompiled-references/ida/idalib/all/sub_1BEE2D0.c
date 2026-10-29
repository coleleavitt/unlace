void __fastcall sub_1BEE2D0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8,
        char a9)
{
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rsi
  char v14; // dl
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  unsigned int v17; // r11d
  __int64 *v18; // r10
  _QWORD *v19; // rax
  __int64 v20; // rdi
  _QWORD *v21; // rdi
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 *v26; // rsi
  __int64 v28; // [rsp+10h] [rbp-48h]
  __int64 v29; // [rsp+10h] [rbp-48h]
  __int64 v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+18h] [rbp-40h]
  __int64 v32; // [rsp+18h] [rbp-40h]
  __int64 v33; // [rsp+18h] [rbp-40h]

  v12 = *(__int64 (__fastcall **)(__int64))(*a2 + 32LL);
  if ( v12 == sub_6EE8E0 )
  {
    v13 = a2[9];
  }
  else
  {
    v32 = a6;
    v29 = a5;
    v23 = v12((__int64)a2);
    a6 = v32;
    a5 = v29;
    v13 = v23;
  }
  v14 = *(_BYTE *)(a7 + 2724);
  if ( !v14 )
    goto LABEL_12;
  v15 = *(_QWORD **)(a7 + 2704);
  v16 = *(unsigned int *)(a7 + 2716);
  v17 = *(_DWORD *)(a7 + 2716);
  v18 = &v15[v16];
  if ( v15 != &v15[v16] )
  {
    v19 = *(_QWORD **)(a7 + 2704);
    if ( *v15 == v13 )
    {
LABEL_26:
      v14 = 0;
      v21 = &v15[*(unsigned int *)(a7 + 2716)];
      goto LABEL_14;
    }
    while ( v18 != ++v19 )
    {
      if ( v13 == *v19 )
        goto LABEL_26;
    }
  }
  if ( v17 < *(_DWORD *)(a7 + 2712) )
  {
    *(_DWORD *)(a7 + 2716) = v17 + 1;
    *v18 = v13;
    v20 = *(_QWORD *)(a7 + 2704);
    v19 = (_QWORD *)(v20 + v16 * 8);
  }
  else
  {
LABEL_12:
    v31 = a6;
    v28 = a5;
    v19 = (_QWORD *)sub_2236760(a7 + 2704, v13);
    a5 = v28;
    a6 = v31;
    v20 = *(_QWORD *)(a7 + 2704);
    if ( !*(_BYTE *)(a7 + 2724) )
    {
      v21 = (_QWORD *)(v20 + 8LL * *(unsigned int *)(a7 + 2712));
      goto LABEL_14;
    }
  }
  v21 = (_QWORD *)(v20 + 8LL * *(unsigned int *)(a7 + 2716));
LABEL_14:
  if ( v21 != v19 && (unsigned __int64)(*v19 + 2LL) <= 1 )
  {
    do
      ++v19;
    while ( v21 != v19 && *v19 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( v14 )
  {
    v22 = *(_DWORD *)(a7 + 2972);
    if ( v22 == 2 || v22 == 5 || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 || v22 == 3 )
    {
      sub_1BEDBA0(a1, a7, (__int64)a2, a3, a4, a5, a6, a8, a9, 1);
      *(_BYTE *)(a7 + 2867) |= 0x80u;
    }
    else
    {
      v24 = *(_DWORD *)(a7 + 2988);
      if ( 4864 - v24 <= 0x37 )
      {
        v33 = a6;
        v30 = a5;
        v25 = sub_9C3B30((__int64 *)(a7 + 2872), 56, 3u);
        a5 = v30;
        a6 = v33;
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
      *(_BYTE *)(v25 + 8) = (4 * (a8 & 1)) | 0xA;
      *(_QWORD *)(v25 + 16) = a2;
      *(_QWORD *)(v25 + 24) = a3;
      *(_QWORD *)(v25 + 32) = a4;
      *(_QWORD *)(v25 + 40) = a5;
      *(_QWORD *)(v25 + 48) = a6;
    }
  }
}
