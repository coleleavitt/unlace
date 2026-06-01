__int64 __fastcall sub_F57F20(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // edx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( *(_BYTE *)(v1 + 16) == 13 )
  {
    v3 = (*(_WORD *)(v1 + 18) >> 3) & 0x1FF;
    LOBYTE(result) = v3 == 450;
    LOBYTE(v3) = v3 == 439;
    return v3 | (unsigned int)result;
  }
  return result;
}
