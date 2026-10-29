__int64 __fastcall sub_20D17D0(__int64 a1, const char *a2, __int64 a3)
{
  size_t v4; // rax
  _QWORD *v5; // rbx
  size_t v6; // r14
  unsigned __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 result; // rax
  char v10; // dl

  v4 = strlen(a2);
  v5 = *(_QWORD **)(a1 + 4096);
  v6 = v4;
  v7 = v5[1] + 48LL;
  if ( v7 > 0xFEF )
  {
    v8 = malloc(0x1000u);
    if ( !v8 )
      std::terminate();
    *v8 = v5;
    v5 = v8;
    v8[1] = 0;
    *(_QWORD *)(a1 + 4096) = v8;
    v7 = 48;
  }
  v5[1] = v7;
  result = *(_QWORD *)(a1 + 4096) + *(_QWORD *)(*(_QWORD *)(a1 + 4096) + 8LL) - 32LL;
  *(_WORD *)(result + 8) = 16405;
  v10 = *(_BYTE *)(result + 10);
  *(_QWORD *)(result + 16) = v6;
  *(_QWORD *)(result + 24) = a2;
  *(_QWORD *)(result + 32) = a3;
  *(_BYTE *)(result + 10) = v10 & 0xF0 | 5;
  *(_QWORD *)result = off_2BE6F00;
  return result;
}
