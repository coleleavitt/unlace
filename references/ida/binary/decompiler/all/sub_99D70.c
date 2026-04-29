__int64 __fastcall sub_99D70(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r15
  _DWORD *v9; // r13
  __int64 v10; // r14
  int v11; // eax
  unsigned __int8 v12; // [rsp+Fh] [rbp-71h]
  __int64 v13; // [rsp+18h] [rbp-68h] BYREF
  _QWORD v14[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+30h] [rbp-50h]
  __int128 v16; // [rsp+38h] [rbp-48h]
  unsigned __int64 v17; // [rsp+48h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 64) != 4 )
    return 0;
  v4 = *(_DWORD **)(a2 + 72);
  if ( *v4 != 12 )
    return 0;
  if ( !v4 )
    return 0;
  v5 = sub_11A460(v4, &v13);
  if ( !v5
    || *(_DWORD *)(a2 + 36) != sub_327770(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(unsigned int *)(v5 + 4), 1)
    || *(_BYTE *)(a2 + 32) != 4 )
  {
    return 0;
  }
  v14[0] = 0;
  v14[1] = 0;
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *((_QWORD *)&xmmword_4ED7D0 + 1);
  v15 = 0;
  v16 = 0;
  v8 = xmmword_4ED7D0;
  if ( (unsigned __int64)xmmword_4ED7D0 + v7 - 1 >= (unsigned __int64)xmmword_4ED7D0 )
  {
    v15 = qvector_reserve();
    *(__m128i *)(v15 + 16 * v16) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v7);
    *(_QWORD *)&v16 = v16 + 1;
  }
  v9 = (_DWORD *)sub_126C30(a1, (unsigned int)v14, v6, 0, 0, 0, 257);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  qfree();
  if ( v9
    && *v9 == 1
    && (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
        (unsigned __int8)sub_30A7F0(v10, a1, a2, *(_QWORD *)(a2 + 40), v9, v9 + 8))
    && (unsigned __int8)sub_12C560(v10, a1, a2, (int)a2 + 48, (_DWORD)v9, (int)v9 + 48, 0)
    && (v12 = sub_12C560(v10, a1, a2, v13, (_DWORD)v9, (int)v9 + 64, 0)) != 0 )
  {
    sub_11E3A0(v9 + 8, v10, 8, *(_QWORD *)(a2 + 24), (unsigned int)(2 * *(_DWORD *)(a2 + 36)));
    sub_11B160(a2);
    v11 = *(_DWORD *)(a1 + 24);
    BYTE1(v11) &= ~2u;
    LOBYTE(v11) = v11 | 0x80;
    *(_DWORD *)(a1 + 24) = v11;
    sub_11B450(a2, v9);
    sub_98660(a1, a2);
  }
  else
  {
    return 0;
  }
  return v12;
}
