__int64 __fastcall sub_2B4AE0(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 i; // rbx
  __int64 v5; // rdi
  bool (__fastcall *v6)(__int64); // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int8 (*v10)(void); // rax
  __int64 v11; // rdi
  unsigned __int8 (*v12)(void); // rax

  i = a2;
  switch ( a3 )
  {
    case 1:
LABEL_5:
      if ( a2 != -1 )
        goto LABEL_6;
      return -1;
    case 2:
      v8 = *(_QWORD *)(a1 + 48);
      if ( a2 <= v8 )
        v8 = a2;
      for ( i = v8 - 1; i != -1; --i )
      {
        v9 = *(_QWORD *)(a1 + 40) + 264 * i;
        v10 = **(unsigned __int8 (***)(void))v9;
        if ( (char *)v10 == (char *)sub_2AF040 )
        {
          if ( *(_DWORD *)(v9 + 120) != *(_DWORD *)(v9 + 248) || (unsigned int)sub_1377A0(v9 + 8, v9 + 136) )
            return i;
        }
        else if ( v10() )
        {
          return i;
        }
      }
      return -1;
    case 0:
      if ( a2 >= *(_QWORD *)(a1 + 48) )
        goto LABEL_5;
      v11 = *(_QWORD *)(a1 + 40) + 264 * a2;
      v12 = **(unsigned __int8 (***)(void))v11;
      if ( (char *)v12 == (char *)sub_2AF040 )
      {
        if ( *(_DWORD *)(v11 + 120) == *(_DWORD *)(v11 + 248) && !(unsigned int)sub_1377A0(v11 + 8, v11 + 136) )
        {
LABEL_6:
          while ( ++i < *(_QWORD *)(a1 + 48) )
          {
            while ( 1 )
            {
              v5 = *(_QWORD *)(a1 + 40) + 264 * i;
              v6 = **(bool (__fastcall ***)(__int64))v5;
              if ( v6 != sub_2AF040 )
                break;
              if ( *(_DWORD *)(v5 + 120) != *(_DWORD *)(v5 + 248) || (unsigned int)sub_1377A0(v5 + 8, v5 + 136) )
                return i;
              if ( ++i >= *(_QWORD *)(a1 + 48) )
                return -1;
            }
            if ( ((unsigned __int8 (*)(void))v6)() )
              return i;
          }
          return -1;
        }
      }
      else if ( !v12() )
      {
        goto LABEL_6;
      }
      break;
  }
  return i;
}
