__int64 __fastcall sub_780760(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rcx

  v1 = (__int64 *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 56) & 4) != 0 )
    v1 = (__int64 *)v1[4];
  result = 0;
  if ( v1 )
  {
    v3 = *v1;
    if ( (*v1 & 7) != 0 )
      return 0;
    v4 = v1 + 1;
    v5 = *v1;
    if ( (v3 & 8) != 0 )
    {
      return 0;
    }
    else
    {
      if ( *(_BYTE *)(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 39 )
      {
        v5 = sub_B1B150(v3, v4, v4);
        v3 = v5;
        if ( (v5 & 7) != 0 )
          return 0;
      }
      if ( (v5 & 8) != 0 || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
        return 0;
      else
        return v5;
    }
  }
  return result;
}

