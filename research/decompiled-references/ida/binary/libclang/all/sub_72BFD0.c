__int64 __fastcall sub_72BFD0(__int64 a1, __int64 a2)
{
  void *v2; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(void **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v2 <= 0xEu )
    return sub_26240F0(a2, "__arm_streaming", 15);
  qmemcpy(v2, "__arm_streaming", 15);
  *(_QWORD *)(a2 + 32) += 15LL;
  return 0x676E696D61657274LL;
}

