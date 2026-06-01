unsigned __int64 __fastcall sub_A6BC0(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebp
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx

  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
  v1 = dbg;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  LODWORD(v1) = *(_DWORD *)(v1 + 64);
  v2 = v1 + 14;
  result = (unsigned int)(v1 + 7);
  if ( (result & 0x80000000) == 0LL )
    v2 = result;
  v4 = v2 >> 3;
  if ( v4 )
  {
    v5 = qvector_reserve();
    *(_QWORD *)a1 = v5;
    v6 = v5;
    result = *(_QWORD *)(a1 + 8);
    if ( result < v4 )
    {
      *(_BYTE *)(v6 + result++) = 0;
      if ( result < v4 )
      {
        do
          *(_BYTE *)(*(_QWORD *)a1 + result++) = 0;
        while ( v4 != result );
      }
    }
    *(_QWORD *)(a1 + 8) = v4;
  }
  return result;
}

