__int64 __fastcall sub_6693C0(__int64 a1)
{
  char *v1; // rdx
  int v2; // esi

  v1 = (char *)haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v1 = *(char **)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 != -1 )
    sub_669210(*(_QWORD *)(qword_2CA1698 + 1480), v2, v1);
  return 0;
}

