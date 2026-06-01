__int64 __fastcall sub_3EB0A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  unsigned __int8 *v11; // rsi
  __int64 v12; // r13
  char v13; // al
  __int64 v14; // r8
  int v15; // r9d
  char v16[4]; // [rsp+10h] [rbp-58h] BYREF
  int v17; // [rsp+14h] [rbp-54h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( *(_DWORD *)a3 != 4 )
    return 0;
  if ( *(_DWORD *)(a3 + 68) != 16 )
    return 0;
  if ( *(_BYTE *)(a3 + 32) != 4 )
    return 0;
  if ( !(unsigned __int8)sub_11E120(*(_QWORD *)(a3 + 40), "_mm_xor_pd") )
    return 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 72LL);
  if ( *(_BYTE *)(*(_QWORD *)(v7 + 24) + 80LL) != 6 || !(unsigned __int8)equal_bytes() )
    return 0;
  if ( *(_BYTE *)(a3 + 32) != 4 )
  {
LABEL_10:
    v11 = *(unsigned __int8 **)(v7 + 24);
    goto LABEL_11;
  }
  v13 = sub_11E160(*(_BYTE **)(a3 + 40), *(_QWORD *)(a1 + 16), 0, v8, v9, v10);
  v11 = *(unsigned __int8 **)(v7 + 24);
  if ( v13 )
  {
    if ( (unsigned __int8)sub_153720(a2, a3, *(_QWORD *)(v7 + 24), 0, v14, v15) )
      goto LABEL_10;
    return 0;
  }
LABEL_11:
  sub_121540((__int64)v16, v11);
  if ( (unsigned __int8)sub_128630((unsigned __int64)v16, *(_QWORD *)(a1 + 16), 8, 0)
    && (v4 = sub_128630(a3 + 64, *(_QWORD *)(a1 + 16), 8, 1), (_BYTE)v4) )
  {
    sub_128630((unsigned __int64)v16, *(_QWORD *)(a1 + 16), v17, 2);
    *(_DWORD *)(a3 + 4) |= 0x10u;
    *(_DWORD *)a3 = 68;
    sub_11A5D0((char *)(a3 + 32), v16);
    v12 = j__qalloc_or_throw();
    *(_QWORD *)(v12 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v12 + 40) = 0;
    *(_QWORD *)(v12 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v12 + 56) = 0;
    *(_QWORD *)(v12 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v12 + 72) = 0;
    *(_OWORD *)(v12 + 8) = 0;
    sub_122EA0(v12, a3);
    sub_12A7F0((__int16 *)(v12 + 32), *(_QWORD *)(a1 + 16), 1);
    sub_12A7F0((__int16 *)(v12 + 64), *(_QWORD *)(a1 + 16), 1);
    sub_A23D0(a2, (_QWORD *)v12, a3);
    *(_DWORD *)(a3 + 4) |= 0x10000u;
    *(_DWORD *)(v12 + 4) |= 0x10000u;
  }
  else
  {
    v4 = 0;
  }
  sub_11A960((__int64)v16);
  return v4;
}
