__int64 __fastcall sub_1744760(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  void *v20; // [rsp+20h] [rbp-138h] BYREF
  __int64 v21; // [rsp+28h] [rbp-130h]
  _BYTE v22[96]; // [rsp+30h] [rbp-128h] BYREF
  int v23; // [rsp+90h] [rbp-C8h]
  char v24; // [rsp+94h] [rbp-C4h]
  void *ptr[2]; // [rsp+A0h] [rbp-B8h] BYREF
  _DWORD v26[25]; // [rsp+B0h] [rbp-A8h] BYREF
  char v27; // [rsp+114h] [rbp-44h]

  v24 = 0;
  v20 = v22;
  v21 = 0x400000000LL;
  v11 = *(_QWORD *)(a3 + 16);
  v23 = 0;
  v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v11 & 4) != 0 )
    v12 = *(_QWORD *)(v12 + 8);
  sub_1DBA4B0((unsigned int)ptr, a2, a3, v12, 0, 1);
  sub_17445F0((char ***)&v20, (char ***)ptr);
  v23 = v26[24];
  v24 = v27;
  if ( ptr[0] != v26 )
    free(ptr[0]);
  if ( (*(_BYTE *)(a3 + 80) & 0x7Fu) - 35 <= 3
    && ((v15 = *(_QWORD *)(sub_B8C1B0(a3 + 72) + 16), (v15 & 4) != 0)
      ? (v16 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL))
      : (v16 = v15 & 0xFFFFFFFFFFFFFFF8LL),
        v16
     && v16 != 64
     && (v17 = *(_QWORD *)(v16 + 64)) != 0
     && (*(_BYTE *)(v17 + 10) & 0x20) != 0
     && (unsigned int)sub_B77890(a3) == 42)
    || !(unsigned __int8)sub_1741D50(a2, a3, (__int64)&v20, a4, v13, v14, a7, a8, a9) )
  {
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0x400000000LL;
    if ( (_DWORD)v21 )
      sub_17445F0((char ***)a1, (char ***)&v20);
    v18 = v23;
    *(_BYTE *)(a1 + 120) = 1;
    *(_DWORD *)(a1 + 112) = v18;
    *(_BYTE *)(a1 + 116) = v24;
  }
  else
  {
    *(_BYTE *)(a1 + 120) = 0;
  }
  if ( v20 != v22 )
    free(v20);
  return a1;
}
