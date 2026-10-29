__int64 __fastcall sub_18FB30(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int8 (*v4)(void); // rax
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rbx
  __int64 *v7; // rax
  unsigned __int64 v8; // rbx
  _BYTE *v9; // rax
  __int64 v10; // rax

  v4 = *(unsigned __int8 (**)(void))(*a1 + 232LL);
  if ( (char *)v4 == (char *)sub_18EAF0 )
  {
    v5 = a1 + 20;
    if ( !(unsigned __int8)sub_17FBB0((__int64)(a1 + 20)) && !a1[259] )
      return 0;
  }
  else
  {
    v5 = a1 + 20;
    if ( !v4() )
      return 0;
  }
  v6 = *a3;
  v7 = sub_183800(v5, 0xFFFFFFFFFFFFFFFELL);
  if ( v6 < v7[2] )
  {
    v8 = *(_QWORD *)(v7[1] + 8 * v6);
    v9 = sub_1837B0(v5);
    v10 = sub_180250(v9, v8);
    if ( v10 )
      return v10 + 48;
  }
  return 0;
}

