__int64 __fastcall sub_A637F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // edx

  v6 = sub_A57140(a2, a2, a3, a4, a5);
  v10 = sub_A57140(a3, a2, v7, v8, v9);
  v11 = 0;
  if ( v6 != v10 )
    return 2 * (unsigned int)(v6 > v10) - 1;
  return v11;
}
