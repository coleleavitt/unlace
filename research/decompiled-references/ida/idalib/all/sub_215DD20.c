__int64 __fastcall sub_215DD20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 *v8; // rbp
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // [rsp+8h] [rbp-40h] BYREF
  __int128 v21; // [rsp+10h] [rbp-38h]
  __int128 v22; // [rsp+20h] [rbp-28h]

  v20 = 0;
  if ( *((_QWORD *)&a7 + 1) > 7u && *(_QWORD *)a7 == 0xA3E66616769623CLL )
  {
    v21 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
    v22 = (__int128)_mm_loadu_si128((const __m128i *)&a8);
    v8 = (__int64 *)operator new(0xD0u);
    sub_215C490((__int64)v8, &v20, v16, v17, v18, v19, v21, v22);
    v13 = v20;
    if ( v20 )
      goto LABEL_4;
LABEL_8:
    *(_QWORD *)a1 = v8;
    *(_BYTE *)(a1 + 8) &= ~1u;
    return a1;
  }
  v21 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
  v22 = (__int128)_mm_loadu_si128((const __m128i *)&a8);
  v8 = (__int64 *)operator new(0x90u);
  sub_215B790((__int64)v8, &v20, v9, v10, v11, v12, v21, v22);
  v13 = v20;
  if ( !v20 )
    goto LABEL_8;
LABEL_4:
  *(_QWORD *)a1 = v13;
  v14 = *v8;
  *(_BYTE *)(a1 + 8) |= 1u;
  v20 = 0;
  (*(void (__fastcall **)(__int64 *))(v14 + 8))(v8);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  return a1;
}
