__int64 __fastcall sub_3F5A50(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r13
  unsigned __int8 v13[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( *(_DWORD *)a3 == 4
    && *(_DWORD *)(a3 + 68) == 16
    && *(_BYTE *)(a3 + 32) == 4
    && (unsigned __int8)sub_120560(*(_QWORD *)(a3 + 40), "_mm_cvtps_pd")
    && (v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 72LL) + 24LL), *(_BYTE *)v6 == 4)
    && (unsigned __int8)sub_120560(*(_QWORD *)(v6 + 8), "_mm_unpacklo_ps")
    && (v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 72LL),
        sub_125B60(*(unsigned __int8 **)(v7 + 24), *(_QWORD *)(v7 + 24) + 80LL, 0)) )
  {
    sub_123A40((__int64)v13, *(unsigned __int8 **)(v7 + 24), v8, v9);
    if ( (unsigned __int8)sub_12AB50(v13, *(_QWORD *)(a1 + 16), 4, 1)
      && (v4 = sub_12AB50((unsigned __int8 *)(a3 + 64), *(_QWORD *)(a1 + 16), 8, 1), (_BYTE)v4) )
    {
      *(_DWORD *)(a3 + 4) |= 0x10u;
      *(_DWORD *)a3 = 67;
      sub_11CA10((char *)(a3 + 32), (char *)v13);
      v12 = j__qalloc_or_throw(80, (__int64)v13, v10, v11);
      *(_QWORD *)(v12 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v12 + 40) = 0;
      *(_QWORD *)(v12 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v12 + 56) = 0;
      *(_QWORD *)(v12 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v12 + 72) = 0;
      *(_OWORD *)(v12 + 8) = 0;
      sub_1253A0(v12, a3);
      sub_125180(v12 + 32, (unsigned __int8 *)(v12 + 64));
      sub_12CD10((__int16 *)(v12 + 64), *(unsigned __int64 **)(a1 + 16), 1);
      sub_A3160(a2, (_QWORD *)v12, a3);
    }
    else
    {
      v4 = 0;
    }
    sub_11CDA0((__int64)v13);
  }
  else
  {
    return 0;
  }
  return v4;
}
