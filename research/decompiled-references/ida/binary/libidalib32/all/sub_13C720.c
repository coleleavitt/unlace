__int64 __fastcall sub_13C720(_DWORD *a1, __int64 a2, int a3, __int64 a4, char a5)
{
  int v7; // [rsp+0h] [rbp-78h]

  if ( a3 == -1 )
    return 0;
  get_flags_ex();
  if ( a5 )
  {
    if ( get_immvals() )
      goto LABEL_7;
    return 0;
  }
  if ( !get_immvals() )
    return 0;
LABEL_7:
  *a1 = v7;
  return 1;
}

