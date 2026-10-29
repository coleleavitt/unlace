__int64 __fastcall sub_5F0910(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // rsi
  char *v7; // rax
  char v9; // [rsp+70h] [rbp-C8h] BYREF
  _DWORD v10[2]; // [rsp+D0h] [rbp-68h] BYREF
  void *v11; // [rsp+D8h] [rbp-60h]
  __int128 v12; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v13; // [rsp+F8h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( a2 )
  {
    v6 = a3;
    if ( !a3 )
      v6 = *(_QWORD *)(a1 + 8);
    v7 = &v9;
    do
    {
      *(_QWORD *)v7 = 0;
      v7 += 24;
      *((_OWORD *)v7 - 1) = 0;
    }
    while ( v7 != (char *)v10 );
    v10[0] = 0;
    v10[1] = a5;
    v11 = nullptr;
    v12 = 0;
    sub_395C70((int)"HIDECANCEL\nBuilding list of types/symbols", v6, a6, &off_2B087F0, a5 & 9);
  }
  return 0;
}

