__int64 __fastcall sub_3F5A50(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // r13
  char v9[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  if ( *(_DWORD *)a3 == 4
    && *(_DWORD *)(a3 + 68) == 16
    && *(_BYTE *)(a3 + 32) == 4
    && (unsigned __int8)sub_120560(*(_QWORD *)(a3 + 40), "_mm_cvtps_pd")
    && (v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 72LL) + 24LL), *(_BYTE *)v6 == 4)
    && (unsigned __int8)sub_120560(*(_QWORD *)(v6 + 8), "_mm_unpacklo_ps")
    && (v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
        sub_125B60(*(unsigned __int8 **)(v7 + 24), *(_QWORD *)(v7 + 24) + 80LL, 0)) )
  {
    sub_123A40((__int64)v9, *(unsigned __int8 **)(v7 + 24));
    if ( (unsigned __int8)sub_12AB50((unsigned __int64)v9, *(_QWORD *)(a1 + 16), 4, 1)
      && (v4 = sub_12AB50(a3 + 64, *(_QWORD *)(a1 + 16), 8, 1), (_BYTE)v4) )
    {
      *(_DWORD *)(a3 + 4) |= 0x10u;
      *(_DWORD *)a3 = 67;
      sub_11CA10((char *)(a3 + 32), v9);
      v8 = j__qalloc_or_throw(80);
      *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v8 + 40) = 0;
      *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v8 + 56) = 0;
      *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v8 + 72) = 0;
      *(_OWORD *)(v8 + 8) = 0;
      sub_1253A0(v8, a3);
      sub_125180(v8 + 32, (unsigned __int8 *)(v8 + 64));
      sub_12CD10((__int16 *)(v8 + 64), *(_QWORD *)(a1 + 16), 1);
      sub_A3160(a2, (_QWORD *)v8, a3);
    }
    else
    {
      v4 = 0;
    }
    sub_11CDA0((__int64)v9);
  }
  else
  {
    return 0;
  }
  return v4;
}
