__int64 __fastcall sub_F341A0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // edx
  unsigned int v4; // eax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( *(_BYTE *)(v1 + 16) == 13 )
  {
    v3 = *(unsigned __int16 *)(v1 + 18);
    LOWORD(v3) = ((unsigned __int16)v3 >> 3) & 0x1FF;
    v4 = (unsigned __int16)v3 - 437;
    LOBYTE(v4) = v4 <= 1;
    v3 += 64;
    LOWORD(v3) = v3 & 0x1FF;
    LOBYTE(v3) = (unsigned __int16)v3 <= 1u;
    return v3 | v4;
  }
  return result;
}

