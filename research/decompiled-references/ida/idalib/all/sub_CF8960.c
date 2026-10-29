__int64 __fastcall sub_CF8960(__int64 a1, __int64 *a2)
{
  unsigned int v2; // eax
  bool v3; // bp
  __int64 v4; // rdx
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-20h]

  v2 = *((_DWORD *)a2 + 2);
  v3 = (*((_BYTE *)a2 + 19) & 0x20) == 0;
  v7 = v2;
  if ( v2 > 0x40 )
  {
    sub_2205510(&v6);
    v2 = v7;
    v4 = v6;
  }
  else
  {
    v4 = *a2;
  }
  *(_DWORD *)(a1 + 8) = v2;
  *(_BYTE *)(a1 + 12) = v3;
  *(_QWORD *)a1 = v4;
  return a1;
}
