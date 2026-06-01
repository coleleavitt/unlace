__int64 __fastcall sub_5179F0(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  _QWORD *v3; // rbp

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1616LL);
  if ( *(_BYTE *)(v2 + 64) )
  {
    sub_517580((__int64 *)(v2 + 32), 0);
    if ( (unsigned __int64)a2 < *(_QWORD *)(v2 + 48) )
    {
      v3 = *(_QWORD **)(*(_QWORD *)a1 + 1480LL);
      if ( *(_BYTE *)(v2 + 64) )
        sub_517580((__int64 *)(v2 + 32), 0);
      return sub_3B9110(v3, *(_DWORD *)(*(_QWORD *)(v2 + 40) + 4LL * a2));
    }
  }
  else if ( (unsigned __int64)a2 < *(_QWORD *)(v2 + 48) )
  {
    v3 = *(_QWORD **)(*(_QWORD *)a1 + 1480LL);
    return sub_3B9110(v3, *(_DWORD *)(*(_QWORD *)(v2 + 40) + 4LL * a2));
  }
  return 0xFFFFFFFFLL;
}

