__int64 __fastcall sub_1CBCA50(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int8 v3; // cl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v14[168]; // [rsp+10h] [rbp-A8h] BYREF

  v2 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v2 = *(_QWORD *)v2;
  v3 = *(_BYTE *)(v2 + 8) & 0x7F;
  if ( v3 > 0x12u )
  {
    if ( ((v3 + 94) & 0x7Fu) <= 5 )
      goto LABEL_5;
  }
  else if ( ((1LL << v3) & 0x40182) != 0 )
  {
LABEL_5:
    sub_168B9F0(
      (__int64)v14,
      (__int64 *)(*(_QWORD *)a1 + 8LL),
      a1[2],
      (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 0x10) == 0 ? 5679 : 6779,
      0);
    v8 = *(_QWORD *)(a2 + 48);
    if ( v8 )
      v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v9 = sub_A7AA70(*(_QWORD *)(*(_QWORD *)a1 + 248LL), a2, v4, v5, v6, v7);
    v13 = v9;
    v10 = sub_162B6D0((__int64)v14, (__int64 *)&v13);
    sub_15884C0(v10, (__int64 *)a1 + 1);
    sub_15F7200(v14);
    return 1;
  }
  result = 0;
  if ( !*(_QWORD *)(a2 + 40) )
  {
    v12 = *(_QWORD *)(a2 + 120);
    if ( (v12 & 4) != 0 || (v12 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      sub_168B9F0(
        (__int64)v14,
        (__int64 *)(*(_QWORD *)a1 + 8LL),
        a1[2],
        (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 0x10) == 0 ? 5681 : 6782,
        0);
      sub_15884C0((__int64)v14, (__int64 *)a1 + 1);
      sub_15F7200(v14);
      sub_168B9F0((__int64)v14, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(a2 + 24), 0x190Eu, 0);
      sub_15F7200(v14);
      return 1;
    }
  }
  return result;
}
