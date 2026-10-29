__int64 __fastcall sub_784580(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  bool v4; // si

  v2 = a1[412];
  result = a2 >> 1;
  if ( v2 )
  {
    if ( (unsigned int)result < *(_DWORD *)(v2 - 4) )
    {
      v4 = !(a2 & 1);
      *(_BYTE *)(a1[431] + result) = v4;
      *(_BYTE *)(a1[432] + result) = v4;
    }
  }
  return result;
}

