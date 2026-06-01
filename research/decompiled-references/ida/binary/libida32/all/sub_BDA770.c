__int64 __fastcall sub_BDA770(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // eax
  _DWORD *v4; // rdi
  _BYTE v6[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = sub_BD7F30(*(_QWORD *)(a1 + 32));
  if ( v2
    && (*(_BYTE *)(v2 + 28) & 0x7Fu) - 34 <= 5
    && ((v3 = sub_B51D10(v2, 0), v3 == 922) || v3 == 150)
    && (v4 = *(_DWORD **)(a1 + 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL) + 32), (*v4 & 0x20000) == 0)
    && (unsigned __int8)sub_C19B10(v4, v6, a2, 0) )
  {
    return v6[0] ^ 1u;
  }
  else
  {
    return 0;
  }
}

