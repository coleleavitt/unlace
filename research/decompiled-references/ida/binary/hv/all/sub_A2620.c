_BOOL8 __fastcall sub_A2620(__int64 a1)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(a1 + 56);
  result = 1;
  if ( v1 )
  {
    if ( a1 == *(_QWORD *)v1 )
      return (unsigned int)(*(_DWORD *)(v1 + 8) - 16180) > 0x1F;
  }
  return result;
}

