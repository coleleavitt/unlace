_BYTE *__fastcall sub_B4FB90(__int64 a1)
{
  __int64 v1; // rdx
  _BYTE *result; // rax
  _BYTE *v3; // rdx

  v1 = *(_QWORD *)(a1 + 88);
  result = nullptr;
  if ( v1 )
  {
    if ( (v1 & 4) != 0 )
    {
      v3 = (_BYTE *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v3 )
      {
        if ( (*v3 & 1) != 0 )
          return v3 + 16;
      }
    }
  }
  return result;
}

