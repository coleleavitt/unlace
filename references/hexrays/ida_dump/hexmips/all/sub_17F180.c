__int64 __fastcall sub_17F180(_DWORD *a1, int *a2, unsigned int a3)
{
  int v4; // eax
  __int64 v5; // rdi
  _DWORD *v6; // rbx
  signed int v7; // ecx
  __int64 result; // rax

  v4 = *a2;
  if ( (unsigned int)(*a2 - 1) <= 1 )
  {
    if ( v4 == 1 )
    {
      v5 = (unsigned int)*a1;
      v6 = a2 + 8;
      if ( (unsigned int)v5 >= a3 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  else if ( v4 != 4 )
  {
    if ( !under_debugger )
      sub_37E160(51851);
    BUG();
  }
  v5 = (unsigned int)*a1;
  v6 = a2 + 16;
  if ( (unsigned int)v5 >= a3 )
    goto LABEL_4;
LABEL_9:
  a3 = round_down_power2(v5);
LABEL_4:
  v7 = v6[1];
  result = 0;
  if ( v7 >= (int)a3 )
  {
    *a1 -= v7;
    return 1;
  }
  return result;
}
