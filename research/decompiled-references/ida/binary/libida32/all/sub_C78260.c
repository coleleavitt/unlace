__int64 __fastcall sub_C78260(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi

  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_QWORD *)(a2 + 18360);
  if ( v4 && a1 != v4 )
  {
    *(_DWORD *)(a1 + 12) = sub_C78260();
    return v3;
  }
  else
  {
    *(_DWORD *)(a1 + 12) = v3 + 1;
    if ( v3 == -1 )
      sub_21FDF60("generation counter overflowed");
    return v3;
  }
}

