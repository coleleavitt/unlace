__int64 __fastcall sub_1566D30(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi

  v2 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  v3 = *(__int64 **)(v2 + 608);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = *((_DWORD *)v3 + 2);
      if ( (v4 & 1) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(v5 + 760) )
        {
          *(_BYTE *)(v5 + 968) = 1;
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 6LL) = 1;
        }
        v6 = *(_QWORD *)(a1 + 96);
        *(_WORD *)(a1 + 32) = 1;
        sub_172A9A0(*(_QWORD *)(v6 + 656), *(_QWORD *)(v6 + 608), 11);
        return *(unsigned int *)(a1 + 40);
      }
      if ( (v4 & 0x20) != 0 )
        break;
      v3 = (__int64 *)*v3;
      if ( !v3 )
        goto LABEL_9;
    }
    v9 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v9 + 760) )
    {
      *(_BYTE *)(v9 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v9 + 48) + 6LL) = 1;
      v2 = *(_QWORD *)(a1 + 96);
    }
    v10 = *(_QWORD *)(v2 + 656);
    *(_WORD *)(a1 + 32) = 1;
    sub_172A9A0(v10, *(_QWORD *)(v2 + 608), 1);
    return *(unsigned int *)(a1 + 40);
  }
  else
  {
LABEL_9:
    v8 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v8 + 760) )
    {
      *(_BYTE *)(v8 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v8 + 48) + 6LL) = 1;
    }
    *(_WORD *)(a1 + 32) = 1;
    sub_172A9A0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 656LL), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), 0);
    return *(unsigned int *)(a1 + 40);
  }
}
