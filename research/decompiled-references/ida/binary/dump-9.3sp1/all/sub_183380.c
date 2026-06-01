__int64 __fastcall sub_183380(unsigned int *a1, int *a2, unsigned int a3)
{
  int v3; // eax
  _DWORD *v4; // rbx
  int v5; // ecx
  __int64 result; // rax

  v3 = *a2;
  if ( (unsigned int)(*a2 - 1) <= 1 )
  {
    if ( v3 == 1 )
    {
      v4 = a2 + 8;
      if ( *a1 >= a3 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  else if ( v3 != 4 )
  {
    if ( !under_debugger )
      sub_383060(51851);
    BUG();
  }
  v4 = a2 + 16;
  if ( *a1 >= a3 )
    goto LABEL_4;
LABEL_9:
  a3 = round_down_power2();
LABEL_4:
  v5 = v4[1];
  result = 0;
  if ( v5 >= (int)a3 )
  {
    *a1 -= v5;
    return 1;
  }
  return result;
}
