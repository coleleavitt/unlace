__int64 __fastcall sub_E68690(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebp
  _DWORD *v6; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  if ( (_BYTE)v4 )
  {
    *a3 = a2;
  }
  else
  {
    v5 = v4;
    if ( *(_WORD *)(a2 + 4) )
      return v5;
    v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v6
      || *v6 != 5
      || v6[1] != 18
      || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(
            *(_QWORD *)(a1 + 8),
            *(_QWORD *)(a2 + 32)) )
    {
      return v5;
    }
    *a3 = *(_QWORD *)(a2 + 32);
  }
  return 1;
}

