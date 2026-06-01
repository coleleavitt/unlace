__int64 __fastcall sub_2033A10(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r13d
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // ebx

  if ( a2 != a3 )
  {
    v4 = sub_2033900(*(_QWORD *)a1, *(_QWORD *)(a2 + 24));
    v5 = sub_2033900(*(_QWORD *)a1, *(_QWORD *)(a3 + 24));
    if ( v4 < v5 )
    {
      v6 = **(unsigned __int8 **)(a1 + 8);
      if ( (_BYTE)v6 && v5 <= **(_DWORD **)(a1 + 16) )
        return v6;
      return 0;
    }
    v6 = **(unsigned __int8 **)(a1 + 8);
    if ( v4 > v5 )
    {
      if ( (_BYTE)v6 )
      {
        if ( v4 <= **(_DWORD **)(a1 + 16) )
          return 0;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      if ( !(_BYTE)v6 || v4 > **(_DWORD **)(a1 + 16) )
      {
        v8 = sub_20C9A20(a2);
        LOBYTE(v9) = v8 > (unsigned int)sub_20C9A20(a3);
        return v9;
      }
      v10 = sub_20C9A20(a2);
      LOBYTE(v6) = v10 < (unsigned int)sub_20C9A20(a3);
    }
    return v6;
  }
  return 0;
}
