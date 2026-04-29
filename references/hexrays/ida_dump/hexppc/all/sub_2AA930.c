__int64 __fastcall sub_2AA930(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned __int8 (*v8)(void); // rax
  __int64 v9; // rdi
  unsigned __int8 (*v10)(void); // rax
  __int64 v12; // rdi
  unsigned __int8 (*v13)(void); // rax

  v4 = a2;
  if ( a3 != 1 )
  {
    if ( a3 == 2 )
    {
      if ( a2 > *(_QWORD *)(a1 + 48) )
        v4 = *(_QWORD *)(a1 + 48);
      --v4;
      while ( v4 != -1 )
      {
        v9 = *(_QWORD *)(a1 + 40) + 56 * v4;
        v10 = **(unsigned __int8 (***)(void))v9;
        if ( (char *)v10 == (char *)sub_2A94F0 )
        {
          if ( *(_QWORD *)(v9 + 8) != *(_QWORD *)(v9 + 40) )
            return v4;
        }
        else if ( v10() )
        {
          return v4;
        }
        --v4;
      }
      return -1;
    }
    if ( !a3 )
    {
      v5 = *(_QWORD *)(a1 + 48);
      if ( a2 >= v5 )
        goto LABEL_5;
      v12 = *(_QWORD *)(a1 + 40) + 56 * a2;
      v13 = **(unsigned __int8 (***)(void))v12;
      if ( (char *)v13 == (char *)sub_2A94F0 )
      {
        if ( *(_QWORD *)(v12 + 8) == *(_QWORD *)(v12 + 40) )
        {
LABEL_7:
          v4 = a2 + 1;
          v6 = 56 * (a2 + 1);
          while ( v4 < v5 )
          {
            v7 = v6 + *(_QWORD *)(a1 + 40);
            v8 = **(unsigned __int8 (***)(void))v7;
            if ( (char *)v8 == (char *)sub_2A94F0 )
            {
              if ( *(_QWORD *)(v7 + 8) != *(_QWORD *)(v7 + 40) )
                return v4;
            }
            else
            {
              if ( v8() )
                return v4;
              v5 = *(_QWORD *)(a1 + 48);
            }
            v6 += 56;
            ++v4;
          }
          return -1;
        }
      }
      else if ( !v13() )
      {
        goto LABEL_6;
      }
    }
    return v4;
  }
LABEL_5:
  if ( a2 != -1 )
  {
LABEL_6:
    v5 = *(_QWORD *)(a1 + 48);
    goto LABEL_7;
  }
  return -1;
}
