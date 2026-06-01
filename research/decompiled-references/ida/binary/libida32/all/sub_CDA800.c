__int64 __fastcall sub_CDA800(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ebp
  __int64 result; // rax
  int v4; // eax

  v1 = *(_QWORD *)a1;
  v2 = *(_DWORD *)(a1 + 40);
  result = (unsigned int)*(_QWORD *)a1;
  if ( v2 != -1 )
  {
    v4 = 0;
    if ( v2 != v1 )
      v4 = *(_QWORD *)(sub_CDA220(a1) + 40) == 0 ? 32 : 16;
    return (unsigned int)(v1 - v2 - v4);
  }
  return result;
}

