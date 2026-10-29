__int64 __fastcall sub_7A5610(_DWORD *a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax
  int v3; // eax

  v1 = *(_BYTE *)((*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 32LL))(a1) + 81);
  result = 0;
  if ( v1 >> 5 != 2
    && ((a1[10] & 7) != 6 || (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) & 0xFFFFFFFFFFFFFFF8LL) - 1) > 3) )
  {
    LOBYTE(v3) = sub_780450((__int64)a1);
    return v3 ^ 1u;
  }
  return result;
}

