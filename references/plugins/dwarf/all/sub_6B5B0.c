__int64 __fastcall sub_6B5B0(__int64 *a1)
{
  __int64 (*v1)(void); // rax
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 fchunk; // rax

  v1 = *(__int64 (**)(void))(*a1 + 56);
  if ( (char *)v1 == (char *)sub_6B4E0 )
    v2 = sub_6B440(*(_QWORD *)(a1[3] + 256), a1[4], a1[2]);
  else
    v2 = v1();
  v3 = a1[5];
  if ( v3 )
  {
    v4 = sub_6B440(*(_QWORD *)(a1[3] + 256), v3, a1[2]);
  }
  else
  {
    fchunk = get_fchunk(v2);
    if ( !fchunk )
      return 0;
    v4 = *(_QWORD *)(fchunk + 8);
  }
  if ( v4 != -1 )
    return v4 - v2;
  return 0;
}
