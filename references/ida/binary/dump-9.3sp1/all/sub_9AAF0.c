__int64 __fastcall sub_9AAF0(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r15
  _DWORD *v7; // r13
  __int64 v8; // r14
  int v9; // eax
  unsigned __int8 v10; // [rsp+Fh] [rbp-71h]
  __int64 v11; // [rsp+18h] [rbp-68h] BYREF
  __int64 v12[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  __int128 v14; // [rsp+38h] [rbp-48h]
  unsigned __int64 v15; // [rsp+48h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 64) != 4 )
    return 0;
  v4 = *(_DWORD **)(a2 + 72);
  if ( *v4 != 12 )
    return 0;
  if ( !v4 )
    return 0;
  v5 = sub_11C8A0(v4, &v11);
  if ( !v5
    || *(_DWORD *)(a2 + 36) != sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(unsigned int *)(v5 + 4), 1)
    || *(_BYTE *)(a2 + 32) != 4 )
  {
    return 0;
  }
  v6 = *(_QWORD *)(a2 + 16);
  v14 = 0;
  v12[0] = 0;
  v12[1] = 0;
  v13 = 0;
  v13 = qvector_reserve((__int64)&v13, 0, 1, 16);
  *(__m128i *)(v13 + 16 * v14) = _mm_load_si128((const __m128i *)&xmmword_424800);
  *(_QWORD *)&v14 = v14 + 1;
  v7 = (_DWORD *)sub_129150(a1, (unsigned int)v12, v6, 0, 0, 0, 257);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  qfree(v12[0]);
  if ( v7
    && *v7 == 1
    && (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
        (unsigned __int8)sub_30D8F0(v8, a1, a2, *(_QWORD *)(a2 + 40), v7, v7 + 8))
    && (unsigned __int8)sub_12EA80(v8, a1, a2, (int)a2 + 48, (_DWORD)v7, (int)v7 + 48, 0)
    && (v10 = sub_12EA80(v8, a1, a2, v11, (_DWORD)v7, (int)v7 + 64, 0)) != 0 )
  {
    sub_1207E0(v7 + 8, v8, 8, *(_QWORD *)(a2 + 24), (unsigned int)(2 * *(_DWORD *)(a2 + 36)));
    sub_11D5A0(a2);
    v9 = *(_DWORD *)(a1 + 24);
    BYTE1(v9) &= ~2u;
    LOBYTE(v9) = v9 | 0x80;
    *(_DWORD *)(a1 + 24) = v9;
    sub_11D890(a2, v7);
    sub_993D0(a1, a2);
  }
  else
  {
    return 0;
  }
  return v10;
}
