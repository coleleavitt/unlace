// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_1C36410(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // rax
  __int64 result; // rax
  unsigned __int8 v4; // al
  int v5; // edx

  v1 = *(_DWORD *)(a1 + 224);
  if ( ((v1 >> 3) & 7) == 7 )
  {
    if ( (v1 & 0x104) != 0 )
      goto LABEL_3;
  }
  else if ( ((v1 >> 3) & 7) != 1 )
  {
    goto LABEL_3;
  }
  v4 = v1;
  v5 = v1 & 0x100;
  result = v4 >> 6;
  if ( (_DWORD)result == 3 )
  {
    if ( !v5 )
      return result;
  }
  else if ( !((unsigned int)result | v5) )
  {
    return result;
  }
LABEL_3:
  v2 = *(unsigned int *)(a1 + 40);
  if ( !(_DWORD)v2 )
  {
    *(_DWORD *)byte_8 = 0;
    BUG();
  }
  result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2 - 8);
  *(_BYTE *)(result + 9) |= 4u;
  return result;
}
