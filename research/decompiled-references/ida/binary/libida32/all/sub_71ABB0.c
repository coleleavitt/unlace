__int64 __fastcall sub_71ABB0(unsigned int *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r9d

  result = qclose(*a1);
  if ( (_DWORD)result )
    off_2C57CC0(0x1Bu, 0, v2, v3, v4, v5);
  return result;
}

