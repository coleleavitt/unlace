char __fastcall sub_F56A30(int a1, int a2, __int64 a3)
{
  char result; // al
  __int64 v4; // rcx
  bool (__fastcall *v5)(__int64, int, int); // rax

  result = a2 != 3 && a1 == 5;
  if ( !result )
  {
    if ( a1 == 1 )
    {
      if ( (unsigned int)(a2 - 6) <= 1 )
        return 1;
    }
    else
    {
      if ( a1 != 11 )
      {
        if ( (unsigned int)(a1 - 16) <= 2 || a1 == 0 )
        {
          result = a2 == 0 || (unsigned int)(a2 - 16) <= 2;
          if ( result )
            return result;
          if ( !a1 )
          {
            if ( (unsigned int)(a2 - 8) <= 7 )
              return (unsigned int)(a1 - 16) <= 2 || a1 == 0;
            if ( (unsigned int)(a2 - 21) <= 2 )
              return (unsigned int)(a1 - 16) <= 2 || a1 == 0;
          }
        }
        goto LABEL_8;
      }
      if ( (unsigned int)(a2 - 12) <= 1 )
        return 1;
    }
LABEL_8:
    v4 = *(_QWORD *)(a3 + 17448);
    v5 = *(bool (__fastcall **)(__int64, int, int))(*(_QWORD *)v4 + 48LL);
    if ( v5 == sub_F56590 )
      return a1 == a2;
    else
      return v5(v4, a1, a2);
  }
  return result;
}
