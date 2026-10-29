__int64 __fastcall sub_3F5C70(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  unsigned __int8 *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  char v16; // al
  __int64 v17; // r8
  int v18; // r9d
  unsigned __int8 v19[4]; // [rsp+10h] [rbp-58h] BYREF
  int v20; // [rsp+14h] [rbp-54h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( *(_DWORD *)a3 != 4 )
    return 0;
  if ( *(_DWORD *)(a3 + 68) != 16 )
    return 0;
  if ( *(_BYTE *)(a3 + 32) != 4 )
    return 0;
  if ( !(unsigned __int8)sub_120560(*(_QWORD *)(a3 + 40), "_mm_xor_pd") )
    return 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 72LL);
  if ( *(_BYTE *)(*(_QWORD *)(v7 + 24) + 80LL) != 6 || !(unsigned __int8)equal_bytes() )
    return 0;
  if ( *(_BYTE *)(a3 + 32) != 4 )
  {
LABEL_10:
    v12 = *(unsigned __int8 **)(v7 + 24);
    goto LABEL_11;
  }
  v16 = sub_1205A0(*(_BYTE **)(a3 + 40), *(_QWORD *)(a1 + 16), 0, v9, v10, v11);
  v12 = *(unsigned __int8 **)(v7 + 24);
  if ( v16 )
  {
    if ( (unsigned __int8)sub_155AA0(a2, (_BYTE *)a3, *(_QWORD *)(v7 + 24), 0, v17, v18) )
      goto LABEL_10;
    return 0;
  }
LABEL_11:
  sub_123A40((__int64)v19, v12, v8, v9);
  if ( (unsigned __int8)sub_12AB50(v19, *(_QWORD *)(a1 + 16), 8, 0)
    && (v4 = sub_12AB50((unsigned __int8 *)(a3 + 64), *(_QWORD *)(a1 + 16), 8, 1), (_BYTE)v4) )
  {
    sub_12AB50(v19, *(_QWORD *)(a1 + 16), v20, 2);
    *(_DWORD *)(a3 + 4) |= 0x10u;
    *(_DWORD *)a3 = 68;
    sub_11CA10((char *)(a3 + 32), (char *)v19);
    v15 = j__qalloc_or_throw(80, (__int64)v19, v13, v14);
    *(_QWORD *)(v15 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v15 + 40) = 0;
    *(_QWORD *)(v15 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v15 + 56) = 0;
    *(_QWORD *)(v15 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v15 + 72) = 0;
    *(_OWORD *)(v15 + 8) = 0;
    sub_1253A0(v15, a3);
    sub_12CD10((__int16 *)(v15 + 32), *(unsigned __int64 **)(a1 + 16), 1);
    sub_12CD10((__int16 *)(v15 + 64), *(unsigned __int64 **)(a1 + 16), 1);
    sub_A3160(a2, (_QWORD *)v15, a3);
    *(_DWORD *)(a3 + 4) |= 0x10000u;
    *(_DWORD *)(v15 + 4) |= 0x10000u;
  }
  else
  {
    v4 = 0;
  }
  sub_11CDA0((__int64)v19);
  return v4;
}
