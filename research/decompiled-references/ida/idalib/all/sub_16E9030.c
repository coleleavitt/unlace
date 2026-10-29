__int64 __fastcall sub_16E9030(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5,
        int a6,
        double a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10)
{
  int v10; // ebp
  int v11; // r11d
  unsigned int v12; // r15d
  __int64 result; // rax
  unsigned int v14; // ebx
  unsigned int v15; // r14d
  unsigned int v18; // eax
  unsigned int v19; // r11d

  v10 = *(_DWORD *)(a2 + 48);
  v11 = *(_DWORD *)(a2 + 52);
  v12 = v10 - 1;
  if ( !v11 )
  {
    if ( a5 )
    {
      result = 0;
      if ( v10 == 1 )
        return result;
      v12 = v10 - 2;
      v14 = 0;
      v15 = 2;
    }
    else
    {
      v14 = 0;
      v15 = 2;
    }
    goto LABEL_5;
  }
  v14 = v11 - 1;
  v15 = a6 != 4;
  if ( !a5 )
  {
LABEL_5:
    v18 = sub_16CA550(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) + 16LL, **(unsigned int **)(*(_QWORD *)(a2 + 40) + 16LL));
    return sub_16E8B90(a1, a3, a4, v15, 0, v12, a7, v14, v18, a6, a8, a9, a10);
  }
  result = 0;
  if ( v10 != 1 )
  {
    v19 = v11 - 2;
    v12 = v10 - 2;
    if ( v14 )
      v14 = v19;
    goto LABEL_5;
  }
  return result;
}
