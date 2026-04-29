bool __fastcall sub_3E6920(__int64 a1, __int64 a2, int a3, double a4)
{
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rdi
  _DWORD *v9; // r8

  if ( *(_DWORD *)(a1 + 676) > (int)a2 )
  {
    v6 = a2;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
    {
      if ( (int)a2 >= *(_DWORD *)(a1 + 480) && (int)a2 <= *(_DWORD *)(a1 + 356) + *(_DWORD *)(a1 + 80) - 1 )
        goto LABEL_6;
    }
    else if ( (int)a2 >= *(_DWORD *)(a1 + 356) && (int)a2 <= *(_DWORD *)(a1 + 480) + *(_DWORD *)(a1 + 80) - 1 )
    {
      goto LABEL_6;
    }
    if ( (int)a2 < *(_DWORD *)(a1 + 484) || (int)a2 > *(_DWORD *)(a1 + 608) + *(_DWORD *)(a1 + 80) - 1 )
      return 0;
LABEL_6:
    v7 = *(_QWORD *)(a1 + 736);
    if ( !v7 || (a2 = a1 + *(_QWORD *)v7, *(_QWORD *)v7 == 692) )
    {
LABEL_20:
      if ( !under_debugger )
        sub_37E160(0xCCF1u, a2, a4);
      BUG();
    }
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 + 16);
      v9 = (_DWORD *)a2;
      a2 = a1 + v8;
      if ( v6 < *(_DWORD *)(a1 + v8) )
        break;
      v7 += 16;
      if ( v8 == 692 )
        goto LABEL_20;
    }
    if ( v6 == *v9 )
      return a3 <= *(char *)(v7 + 15);
    return 0;
  }
  return 1;
}
