unsigned __int64 __fastcall sub_19F55C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx

  while ( 1 )
  {
    v6 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u
      || sub_F612F0(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, v7, a4, a5, a6) )
    {
      return 16;
    }
    v9 = *v6;
    v10 = (unsigned int)*(unsigned __int8 *)(*v6 + 16) - 57;
    if ( (unsigned int)v10 > 1 )
    {
      v9 = sub_19F5590(v9, a2, v10, a4);
      if ( !v9 )
        break;
    }
    a2 = *(_QWORD *)(v9 + 32);
  }
  return (unsigned __int64)sub_A97D20(a1, *v6) >> 3;
}
