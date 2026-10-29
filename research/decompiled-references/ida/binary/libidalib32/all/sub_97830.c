__int64 __fastcall sub_97830(__int64 a1, int a2, __int64 a3, int a4, char a5, int a6)
{
  int v7; // r8d
  __int64 result; // rax
  int v9; // [rsp+0h] [rbp-28h]
  int v10; // [rsp+8h] [rbp-20h]

  v7 = a5 & 4;
  if ( v7 )
    goto LABEL_4;
  if ( *(_DWORD *)(a3 + 40) == 3 )
  {
    if ( (a5 & 2) != 0 )
      goto LABEL_4;
  }
  else
  {
    v10 = a4;
    v9 = a3;
    result = nullsub_44(*(unsigned int *)(a3 + 52), 1);
    a4 = v10;
    LODWORD(a3) = v9;
    if ( (a5 & 2) != 0 )
      goto LABEL_4;
  }
  result = sub_C73B0(19, a2, a3, a4, v7, a6, v9);
LABEL_4:
  if ( (a5 & 1) == 0 )
    return mark_builtin_widgets();
  return result;
}

