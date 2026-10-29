_BOOL8 __fastcall sub_61C0A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BOOL4 v7; // ebx
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128i v22; // [rsp+20h] [rbp-58h] BYREF
  __m128i v23; // [rsp+30h] [rbp-48h] BYREF
  __m128i v24; // [rsp+40h] [rbp-38h] BYREF
  __m128i v25[2]; // [rsp+50h] [rbp-28h] BYREF

  v7 = sub_61BF20(a1, a2, a3, a4, a5, a6);
  if ( !v7 )
  {
    v8 = *(_BYTE *)(a2 + 68);
    if ( (v8 & 1) == 0 )
      goto LABEL_10;
    v9 = *(_QWORD *)(a2 + 72);
    if ( (~v8 & 0xC) != 0 && (v8 & 0xC) != 0 )
      v9 = *(_QWORD *)(v9 + 8);
    if ( v9 )
    {
      sub_639270(&v22, v9, a1[6], *a1, *(__int64 *)((char *)a1 + 84));
      return (int)sub_619180(
                    (__int64)a1,
                    v9,
                    v10,
                    v11,
                    v12,
                    v13,
                    (__int128)_mm_load_si128(&v22),
                    (__int128)_mm_load_si128(&v23));
    }
    else
    {
LABEL_10:
      v16 = sub_781770(a2);
      if ( !v16 )
        return v7;
      v17 = v16;
      sub_639270(&v24, v16, a1[6], *a1, *(__int64 *)((char *)a1 + 84));
      return (int)sub_619180(
                    (__int64)a1,
                    v17,
                    v18,
                    v19,
                    v20,
                    v21,
                    (__int128)_mm_load_si128(&v24),
                    (__int128)_mm_load_si128(v25));
    }
  }
  return v7;
}

