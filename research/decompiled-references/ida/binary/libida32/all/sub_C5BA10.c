__int64 __fastcall sub_C5BA10(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int8 v7; // al
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  const __m128i *v11; // rdx
  _BYTE v13[3]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+8h] [rbp-20h]

  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v5 + 16) != 7 )
    v5 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  v6 = *(_QWORD *)(v5 + 32);
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x36;
  if ( unk_2CAD564 )
    sub_EC5E10(54);
  v14 = v6;
  *(_WORD *)&v13[1] &= 0xF801u;
  v7 = sub_B3F3F0((__int64)v13);
  v10 = a1[2];
  v11 = (const __m128i *)a1[1];
  v13[1] = (v7 << 6) | v13[1] & 0x3F;
  v13[2] = v13[2] & 0xF8 | (v7 >> 2) & 7;
  if ( v11 )
    return sub_C2BC60(v10, *a1, v11, (__int64)v13);
  else
    return sub_C15CD0(v10, *a1, (unsigned __int64)v13, v8, v9);
}

