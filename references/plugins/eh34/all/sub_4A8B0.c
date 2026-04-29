__int64 __fastcall sub_4A8B0(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  bool v5; // zf
  char v6; // cl
  __int64 v8; // [rsp+0h] [rbp-8h]

  v2 = *(int *)(a1[30] + 16 * (a2 + 1LL) + 8);
  v3 = (_QWORD *)(a1[13] + 8 * (v2 / 64));
  v4 = v2 % 64;
  if ( v2 % 64 < 0 )
  {
    --v3;
    LOBYTE(v4) = v4 + 64;
  }
  v5 = (*v3 & (1LL << v4)) == 0;
  v6 = 0;
  if ( !v5 )
  {
    v6 = 1;
    LODWORD(v8) = *(_DWORD *)(a1[10] + 4 * v2);
  }
  BYTE4(v8) = v6;
  return v8;
}
