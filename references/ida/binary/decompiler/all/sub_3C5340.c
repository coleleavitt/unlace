__int64 __fastcall sub_3C5340(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v4; // rax

  v2 = *a1;
  if ( *a1 == 7 )
  {
    v4 = *((unsigned int *)a1 + 2);
    if ( (unsigned int)v4 >= *(_DWORD *)(a2 + 64) )
      sub_3C5320();
    return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 528) + 8 * v4) + 32LL);
  }
  else
  {
    if ( v2 > 7u )
    {
      if ( v2 == 8 )
        return **((_QWORD **)a1 + 1);
      return -1;
    }
    if ( v2 != 2 )
    {
      if ( v2 == 6 )
        return *((_QWORD *)a1 + 1);
      return -1;
    }
    if ( !(unsigned __int8)is_mapped() )
      return -1;
    return *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL);
  }
}
