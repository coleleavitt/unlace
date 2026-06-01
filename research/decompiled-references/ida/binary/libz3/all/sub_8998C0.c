__int64 __fastcall sub_8998C0(_QWORD *a1, int a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  unsigned int v4[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = 0;
  result = a1[1];
  if ( result )
  {
    while ( v2 < *(_DWORD *)(result - 4) )
    {
      if ( *(_DWORD *)(result + 16LL * v2 + 8) )
      {
        v4[0] = v2;
        sub_8997A0(a1, a2, v4);
        result = a1[1];
        ++v2;
        if ( !result )
          return result;
      }
      else
      {
        ++v2;
      }
    }
  }
  return result;
}

