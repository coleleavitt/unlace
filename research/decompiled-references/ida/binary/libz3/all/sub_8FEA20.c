__int64 __fastcall sub_8FEA20(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // rbp
  _DWORD *v4; // rbx
  __int64 v5; // r13

  v3 = a2;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 24);
  if ( *a3 >= *a2 )
  {
    v4 = a2;
    v3 = a3;
  }
  if ( (unsigned __int8)sub_15D27F0(*(_QWORD *)(a1 + 24), v4, v3) )
    return *(_QWORD *)(v5 + 864);
  if ( (unsigned __int8)sub_15D2760(v5, v4, v3) )
    return *(_QWORD *)(v5 + 856);
  return sub_15E1B70(*(_QWORD *)(a1 + 24));
}

