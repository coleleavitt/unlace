__int64 __fastcall sub_B645B0(__int64 a1, unsigned int *a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rax

  if ( !*((_WORD *)a2 + 2) )
  {
    v2 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( v2 )
    {
      if ( !*v2 && v2[1] == 8 && a2[6] == 1 )
        return (unsigned int)sub_B645B0(a1, *((_QWORD *)a2 + 4)) ^ 1;
    }
  }
  v3 = *(_QWORD *)(a1 + 104);
  if ( *(unsigned int **)(v3 + 856) == a2 )
    return (unsigned int)dword_1C7ED6C;
  if ( *(unsigned int **)(v3 + 864) == a2 )
    return (unsigned int)dword_1C7ED68;
  return (unsigned int)(2 * *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * *a2));
}

