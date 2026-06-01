__int64 __fastcall sub_227D5A0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  int v4; // eax
  __int64 v6; // rax
  _QWORD v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = sub_228D4C0(*(unsigned int *)(a2 + 48));
  if ( v2 )
  {
    sub_2220500(v7, v2, v3);
    v6 = v7[0];
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v6;
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 48);
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_DWORD *)a1 = v4;
  }
  return a1;
}
