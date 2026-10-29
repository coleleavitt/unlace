__int64 __fastcall sub_20D1380(__int64 a1, const char *a2)
{
  size_t v2; // rax
  _QWORD *v3; // rbx
  size_t v4; // r13
  unsigned __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 result; // rax
  char v8; // dl

  v2 = strlen(a2);
  v3 = *(_QWORD **)(a1 + 4096);
  v4 = v2;
  v5 = v3[1] + 32LL;
  if ( v5 > 0xFEF )
  {
    v6 = malloc(0x1000u);
    if ( !v6 )
      std::terminate();
    *v6 = v3;
    v3 = v6;
    v6[1] = 0;
    *(_QWORD *)(a1 + 4096) = v6;
    v5 = 32;
  }
  v3[1] = v5;
  result = *(_QWORD *)(a1 + 4096) + *(_QWORD *)(*(_QWORD *)(a1 + 4096) + 8LL) - 16LL;
  *(_WORD *)(result + 8) = 16392;
  v8 = *(_BYTE *)(result + 10);
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = a2;
  *(_BYTE *)(result + 10) = v8 & 0xF0 | 5;
  *(_QWORD *)result = off_2BE68A0;
  return result;
}
