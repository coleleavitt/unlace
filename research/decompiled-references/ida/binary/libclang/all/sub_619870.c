__int64 __fastcall sub_619870(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // r12
  __int16 v5; // ax
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128i v16; // [rsp+20h] [rbp-38h] BYREF
  __m128i v17[2]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1[1] + 80LL);
  v5 = (*(_WORD *)(a2 + 18) >> 3) & 0x1FF;
  switch ( v5 )
  {
    case 489:
      v6 = sub_6DF820(*(_QWORD *)(a1[1] + 80LL));
      v7 = *(_QWORD *)(v6 + 48);
      if ( !v7 )
        goto LABEL_8;
      break;
    case 490:
      v6 = sub_6CC370(*(_QWORD *)(a1[1] + 80LL));
      v7 = *(_QWORD *)(v6 + 48);
      if ( !v7 )
        goto LABEL_8;
      break;
    case 488:
      v6 = sub_6DF880(*(_QWORD *)(a1[1] + 80LL));
      v7 = *(_QWORD *)(v6 + 48);
      if ( v7 )
        break;
LABEL_8:
      v8 = sub_6E8D60(v4, v6);
      if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
        return 0;
      goto LABEL_9;
    default:
      return 0;
  }
  v8 = v7 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v8 <= 0xF )
    return 0;
LABEL_9:
  v10 = sub_B10DA0(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL), v6);
  if ( !v10 )
    return 0;
  v11 = *(_QWORD *)(v10 + 32);
  sub_639CF0(&v16, v11, *a3, *a1);
  return sub_619180((__int64)a1, v11, v12, v13, v14, v15, (__int128)_mm_load_si128(&v16), (__int128)_mm_load_si128(v17));
}

