__int64 __fastcall sub_B0F90(_QWORD *a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = (unsigned int *)a1[7];
  if ( v2 )
  {
    if ( (v4 = *v2, (unsigned int)(v4 - 56) <= 1) && *((_BYTE *)v2 + 64) != 8 || (unsigned __int8)sub_329E00(v4, 0) )
    {
      if ( !under_debugger )
        sub_37E160(51232);
      BUG();
    }
  }
  v5 = a1[8];
  v6 = sub_1CB7F0(v5, *(_QWORD *)(a2 + 24));
  if ( (*(_BYTE *)(a2 + 4) & 0x20) != 0 )
    v6 += *(int *)(*(_QWORD *)(v5 + 1504) + 80LL);
  if ( a1[40] < v6 )
    a1[40] = v6;
  v7 = sub_92B90(a1[60], a2);
  if ( v7 )
    sub_333450(a1, v7);
  sub_333450(a1, a2);
  if ( *(_DWORD *)a2 == 58 )
    sub_1D1230(a1[8], *(_QWORD *)(a2 + 24));
  while ( (unsigned __int8)sub_AF4D0(a1, a2) )
    ;
  return a2;
}
