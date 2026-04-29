__int64 __fastcall sub_141C80(__int64 a1, __int64 a2)
{
  int func_qty; // eax
  __int64 v3; // r12
  __int64 i; // rbx
  unsigned __int64 *v5; // rax
  unsigned __int64 *v6; // r12
  unsigned __int64 *v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  unsigned __int64 *v10; // rdx
  __int64 result; // rax
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // rcx

  func_qty = get_func_qty();
  if ( func_qty > 0 )
  {
    v3 = (unsigned int)(func_qty - 1);
    for ( i = 0; ; ++i )
    {
      v5 = (unsigned __int64 *)getn_func(i);
      if ( v5 )
      {
        a2 = *v5;
        sub_141B80(*(_QWORD *)(a1 + 32), *v5);
      }
      if ( v3 == i )
        break;
    }
  }
  v6 = *(unsigned __int64 **)a1;
  if ( *(_QWORD *)a1 && *(_QWORD *)(a1 + 8) )
  {
    v7 = (unsigned __int64 *)v6[1];
LABEL_10:
    while ( v6 != v7 )
    {
      while ( 1 )
      {
        v8 = v7[4];
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 8);
          if ( *(_QWORD *)(v9 + 8) )
            *(_QWORD *)(v9 + 8) = get_func(*(_QWORD *)(v9 + 40));
        }
        if ( (*v7 & 2) != 0 )
          break;
        v10 = (unsigned __int64 *)v7[2];
        if ( (*(_BYTE *)v10 & 2) != 0 )
        {
          v12 = (unsigned __int64 *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
          v13 = *v12;
          if ( (*v12 & 2) == 0 )
          {
            while ( (unsigned __int64 *)v12[2] == v7 )
            {
              v7 = (unsigned __int64 *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
              v13 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v13 & 2) != 0 )
                goto LABEL_10;
              v14 = v12;
              v12 = v7;
              v7 = v14;
            }
          }
          v7 = v12;
          goto LABEL_10;
        }
        do
        {
          v7 = v10;
          v10 = (unsigned __int64 *)v10[1];
        }
        while ( (*(_BYTE *)v10 & 2) == 0 );
        if ( v6 == v7 )
          goto LABEL_18;
      }
    }
  }
LABEL_18:
  sub_13BD30((unsigned __int64 **)a1, a2);
  result = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(result + 1112) = -1;
  return result;
}
