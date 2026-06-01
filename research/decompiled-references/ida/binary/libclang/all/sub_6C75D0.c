unsigned __int64 __fastcall sub_6C75D0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v3; // r9
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx

  result = a2;
  if ( (*(_BYTE *)(a1[270] + 47LL) & 0x20) != 0 )
  {
    v3 = (unsigned __int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v4 = a2 & 7;
    v5 = *(_QWORD *)&byte_8[*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v5 & 8) == 0
      || (unsigned int)((*(__int64 *)((char *)&qword_18 + (v5 & 0xFFFFFFFFFFFFFFF0LL))
                       | v5 & 7
                       | a2 & 7
                       | byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7) >> 9) != 3 )
    {
      if ( (a2 & 8) != 0 )
      {
        v6 = *(_DWORD *)((_BYTE *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1FF | (unsigned int)(a2 & 7);
        BYTE1(v6) |= 6u;
        return sub_6C3980(a1, *v3, v6);
      }
      else
      {
        BYTE1(v4) = 6;
        return sub_6C3980(a1, (unsigned __int64)v3, v4);
      }
    }
  }
  return result;
}

