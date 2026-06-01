__int64 __fastcall sub_8190A0(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  int v4; // edi

  if ( *(_QWORD *)(a1 + 8) )
  {
    v2 = 0;
    do
    {
      result = *(_QWORD *)(a1 + 24);
      v4 = *(_DWORD *)(result + 4 * v2);
      if ( v4 != -1 )
      {
        qpipe_close(v4);
        result = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(result + 4 * v2) = -1;
      }
      ++v2;
    }
    while ( v2 < *(_QWORD *)(a1 + 8) );
  }
  return result;
}

