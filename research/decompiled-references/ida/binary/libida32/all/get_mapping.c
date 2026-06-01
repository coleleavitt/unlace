__int64 __fastcall get_mapping(_DWORD *a1, _DWORD *a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v5; // rax

  v5 = (_DWORD *)sub_4EE890(*(_QWORD *)(qword_2CA1698 + 1480) + 2408LL, a4);
  if ( !v5 )
    return 0;
  if ( a1 )
    *a1 = *v5;
  if ( a2 )
    *a2 = v5[2];
  if ( a3 )
    *a3 = v5[1] - *v5;
  return 1;
}

