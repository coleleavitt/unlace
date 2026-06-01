__int64 __fastcall sub_46600(__int64 a1, __int64 *a2, unsigned int a3)
{
  unsigned int *v4; // rdx

  if ( *(_BYTE *)(a1 + 168) )
  {
    if ( (unsigned __int64)a3 < *(_QWORD *)(a1 + 40)
      && (v4 = (unsigned int *)(*(_QWORD *)(a1 + 32) + ((unsigned __int64)a3 << 6))) != nullptr
      && *(__int64 *)(a1 + 176) > 0
      && *(_QWORD *)(a1 + 192) )
    {
      return sub_461E0(*(_QWORD *)(a1 + 160), a2, (__int64 *)(a1 + 176), *v4);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_30AC0();
    return sub_46660();
  }
}

