__int64 __fastcall sub_11E900(_BYTE *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rax
  _BOOL8 v4; // rcx
  __int64 v5; // rdx

  *(_QWORD *)(a2 + 32) = a1;
  if ( a1[32] )
  {
    result = sub_11E9B0(a1 + 32, a2, 0, 0);
    if ( (_DWORD)result )
      return result;
    if ( !a1[48] )
      goto LABEL_3;
LABEL_7:
    result = sub_11E9B0(a1 + 48, a2, 0, 0);
    if ( (_DWORD)result )
      return result;
    result = 0;
    if ( !a1[64] )
      return result;
    goto LABEL_9;
  }
  if ( a1[48] )
    goto LABEL_7;
LABEL_3:
  result = 0;
  if ( !a1[64] )
    return result;
LABEL_9:
  v3 = *(unsigned int *)a1;
  if ( (_DWORD)v3 == 62 )
  {
    v4 = (a1[5] & 0x10) == 0;
  }
  else
  {
    v4 = 1;
    if ( (unsigned int)v3 <= 0x3B )
    {
      v5 = 0xCFFFC0000000003LL;
      v4 = !_bittest64(&v5, v3);
    }
  }
  return sub_11E9B0(a1 + 64, a2, 0, v4);
}
