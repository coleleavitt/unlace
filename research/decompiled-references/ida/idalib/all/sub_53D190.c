__int64 __fastcall sub_53D190(_BYTE *a1, __int64 a2, _DWORD *a3, unsigned int a4, char a5)
{
  __int64 v8; // r13
  bool v9; // dl
  __int64 result; // rax
  char v11; // di
  unsigned __int8 v12; // al

  v8 = *(_QWORD *)(a2 + 1824);
  v9 = sub_53CE30((__int64)a1, a2, a5, -2147483646);
  result = -1;
  if ( v9 )
  {
    if ( a3 )
    {
      *a3 = *((_DWORD *)a1 + 14);
      if ( (a4 & 1) != 0 )
      {
        v11 = a1[70];
        v12 = a1[70] & 0xF;
        if ( v12 == 11 )
        {
          get_tinfo_size(a3, *(_QWORD *)a1, a4);
        }
        else if ( v12 <= 9u )
        {
          *a3 = sub_531740(v11, *((_QWORD *)a1 + 6), 1);
        }
      }
    }
    if ( (unsigned __int64)*(int *)(v8 + 136) < *(_QWORD *)(v8 + 152) )
      sub_541800(v8, 0);
    result = *((_QWORD *)a1 + 6);
    if ( !result && (a1[70] & 0x2F) == 0xD && (a4 & 2) == 0 )
    {
      if ( *(char *)(*(_QWORD *)a1 + 44LL) >= 0 && ((getinf(57) & 0xF) == 6 || (getinf(67) & 0x80u) != 0LL) )
      {
        return *((_QWORD *)a1 + 6);
      }
      else
      {
        result = *((unsigned int *)a1 + 14);
        if ( !(_DWORD)result )
          return 1;
      }
    }
  }
  return result;
}
