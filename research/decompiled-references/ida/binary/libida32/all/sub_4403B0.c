__int64 __fastcall sub_4403B0(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, unsigned int a5)
{
  _DWORD *v7; // rax

  v7 = (_DWORD *)sub_4EE890(a1 + 2408, a5);
  if ( !v7 )
    return 0;
  if ( a2 )
    *a2 = *v7;
  if ( a3 )
    *a3 = v7[2];
  if ( a4 )
    *a4 = v7[1] - *v7;
  return 1;
}

