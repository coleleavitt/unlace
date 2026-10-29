_QWORD *__fastcall node_iterator_goup_0(_QWORD *a1)
{
  int v1; // eax
  int v2; // ebp
  int v3; // esi

  v1 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 56LL))(*a1);
  if ( v1 > *((_DWORD *)a1 + 2) )
  {
    v2 = v1;
    do
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 72LL))(*a1) )
        break;
      v3 = *((_DWORD *)a1 + 2) + 1;
      *((_DWORD *)a1 + 2) = v3;
    }
    while ( v3 < v2 );
  }
  return a1;
}

