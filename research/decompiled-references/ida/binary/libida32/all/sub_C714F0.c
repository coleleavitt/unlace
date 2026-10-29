unsigned __int64 __fastcall sub_C714F0(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rax
  _DWORD *v3; // rdx

  result = *(_QWORD *)(sub_F3F530(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL)) + 128);
  if ( result )
  {
    if ( (*(_BYTE *)(result + 10) & 0x20) != 0 )
    {
      v2 = *(_QWORD *)(result + 128);
      v3 = (_DWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v2 & 4) != 0 )
      {
        result = 0;
        if ( v3[2] )
          return **(_QWORD **)v3;
      }
      else
      {
        return v2 & 0xFFFFFFFFFFFFFFF8LL;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}

