__int64 __fastcall sub_204C280(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  int v3; // edx
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx

  result = *(_QWORD *)(a1 + 56);
  v2 = a1 + 48;
  if ( result == v2 )
    return v2;
  while ( 1 )
  {
    if ( !result )
      BUG();
    v3 = *(unsigned __int8 *)(result - 24);
    if ( (_BYTE)v3 != 84 )
      break;
    result = *(_QWORD *)(result + 8);
    if ( v2 == result )
      return v2;
  }
  if ( v2 == result )
    return v2;
  v4 = (unsigned int)(v3 - 39);
  if ( (unsigned int)v4 <= 0x38 )
  {
    v5 = 0x100060000000001LL;
    if ( _bittest64(&v5, v4) )
      return *(_QWORD *)(result + 8);
  }
  return result;
}
