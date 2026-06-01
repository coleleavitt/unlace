__int64 __fastcall sub_AB5980(__int64 a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rbp

  v4 = *(_QWORD **)(a1 + 536);
  if ( v4 )
  {
    if ( a2 >= *((_DWORD *)v4 - 1) )
      v4 = nullptr;
    else
      v4 = (_QWORD *)v4[a2];
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4) )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)v4[1];
      if ( !v4 )
        break;
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)v4);
      if ( (unsigned int)sub_B39350(v5, a3) != -1 )
        return v5;
    }
  }
  return 0;
}

