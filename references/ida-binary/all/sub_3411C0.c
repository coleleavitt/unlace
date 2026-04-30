__int64 __fastcall sub_3411C0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax

  v3 = sub_341100(a1, a2);
  if ( !v3 )
    return -1;
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)v3;
  v6 = a2 - v4;
  if ( v4 >= a2 )
    v6 = 0;
  if ( *(_BYTE *)(v3 + 24) )
  {
    v9 = *(int *)(a1 + 176);
    v10 = *(_QWORD *)(v3 + 8) - v5;
    if ( (int)v9 <= 0 )
      v9 = 1;
    v7 = v10 / v9;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 168);
  }
  return v7 * v6 + v5;
}
