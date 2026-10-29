__int64 __fastcall sub_20D12D0(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r13
  __int64 v4; // r12
  unsigned __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 result; // rax
  char v8; // dl

  v2 = *(_QWORD **)(a1 + 4096);
  v3 = *a2;
  v4 = a2[1];
  v5 = v2[1] + 32LL;
  if ( v5 > 0xFEF )
  {
    v6 = malloc(0x1000u);
    if ( !v6 )
      std::terminate();
    *v6 = v2;
    v2 = v6;
    v6[1] = 0;
    *(_QWORD *)(a1 + 4096) = v6;
    v5 = 32;
  }
  v2[1] = v5;
  result = *(_QWORD *)(a1 + 4096) + *(_QWORD *)(*(_QWORD *)(a1 + 4096) + 8LL) - 16LL;
  *(_WORD *)(result + 8) = 16392;
  v8 = *(_BYTE *)(result + 10);
  *(_QWORD *)(result + 16) = v3;
  *(_QWORD *)(result + 24) = v4;
  *(_BYTE *)(result + 10) = v8 & 0xF0 | 5;
  *(_QWORD *)result = off_2BE68A0;
  return result;
}
