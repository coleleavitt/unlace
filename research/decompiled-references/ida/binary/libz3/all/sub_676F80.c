__int64 __fastcall sub_676F80(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rax

  v2 = sub_15D2CB0(*a1, a2);
  if ( (_BYTE)v2 )
  {
    if ( !*(_WORD *)(a2 + 4) )
    {
      v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( v3 )
      {
        if ( *v3
          || v3[1] != 2
          || (unsigned __int8)sub_15D2CB0(*a1, *(_QWORD *)(a2 + 32))
          && !*(_WORD *)(a2 + 4)
          && (v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr )
        {
          LOBYTE(v2) = *v3 != 0;
        }
      }
    }
  }
  return v2;
}

