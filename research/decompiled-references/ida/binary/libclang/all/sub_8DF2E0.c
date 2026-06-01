__int64 __fastcall sub_8DF2E0(__int64 a1, __int64 *a2)
{
  unsigned int v2; // eax
  char v3; // dl
  bool v4; // bl
  __int64 v5; // rdx
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-20h]

  v2 = *((_DWORD *)a2 + 2);
  v3 = *((_BYTE *)a2 + 19) >> 5;
  v8 = v2;
  v4 = !(v3 & 1);
  if ( v2 > 0x40 )
  {
    sub_2585B30(&v7);
    v2 = v8;
    v5 = v7;
  }
  else
  {
    v5 = *a2;
  }
  *(_DWORD *)(a1 + 8) = v2;
  *(_QWORD *)a1 = v5;
  *(_BYTE *)(a1 + 12) = v4;
  return a1;
}

