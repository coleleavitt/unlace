unsigned __int64 __fastcall sub_65F9A0(__int64 a1, char *a2, unsigned __int64 a3)
{
  int v3; // eax
  int v4; // eax
  char *v5; // rdx
  char v6; // al
  char *v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v8 = a2;
  v9 = a3;
  v3 = unpack_dd(&v8);
  *(_DWORD *)a1 = v3;
  *(_DWORD *)(a1 + 4) = unpack_dd(&v8) + v3;
  v4 = unpack_dd(&v8);
  v5 = v8;
  *(_DWORD *)(a1 + 8) = v4 - 1;
  v6 = 0;
  if ( (unsigned __int64)v5 < v9 )
    v6 = *v5;
  *(_BYTE *)(a1 + 12) = v6;
  return v10 - __readfsqword(0x28u);
}

