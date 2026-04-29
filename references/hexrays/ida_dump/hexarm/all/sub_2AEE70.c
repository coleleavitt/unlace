__int64 __fastcall sub_2AEE70(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  bool (__fastcall *v7)(__int64); // rax
  __int64 v9; // rdi
  unsigned __int8 (*v10)(void); // rax
  __int64 v11; // rdi
  unsigned __int8 (*v12)(void); // rax

  v4 = a2;
  if ( a3 == 1 )
  {
LABEL_5:
    if ( a2 != -1 )
    {
LABEL_6:
      v5 = *(_QWORD *)(a1 + 48);
      goto LABEL_7;
    }
    return -1;
  }
  if ( a3 == 2 )
  {
    if ( a2 > *(_QWORD *)(a1 + 48) )
      v4 = *(_QWORD *)(a1 + 48);
    --v4;
    while ( v4 != -1 )
    {
      v9 = *(_QWORD *)(a1 + 40) + 192 * v4;
      v10 = **(unsigned __int8 (***)(void))v9;
      if ( (char *)v10 == (char *)sub_2AD4A0 )
      {
        if ( (unsigned int)(*(_DWORD *)(v9 + 40) - 3) <= 1 )
          return v4;
      }
      else if ( v10() )
      {
        return v4;
      }
      --v4;
    }
  }
  else
  {
    if ( a3 )
      return v4;
    v5 = *(_QWORD *)(a1 + 48);
    if ( a2 >= v5 )
      goto LABEL_5;
    v11 = *(_QWORD *)(a1 + 40) + 192 * a2;
    v12 = **(unsigned __int8 (***)(void))v11;
    if ( (char *)v12 != (char *)sub_2AD4A0 )
    {
      if ( !v12() )
        goto LABEL_6;
      return v4;
    }
    if ( (unsigned int)(*(_DWORD *)(v11 + 40) - 3) <= 1 )
      return v4;
LABEL_7:
    while ( ++v4 < v5 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(a1 + 40) + 192 * v4;
        v7 = **(bool (__fastcall ***)(__int64))v6;
        if ( v7 == sub_2AD4A0 )
          break;
        if ( ((unsigned __int8 (*)(void))v7)() )
          return v4;
        v5 = *(_QWORD *)(a1 + 48);
        if ( ++v4 >= v5 )
          return -1;
      }
      if ( (unsigned int)(*(_DWORD *)(v6 + 40) - 3) <= 1 )
        return v4;
    }
  }
  return -1;
}
