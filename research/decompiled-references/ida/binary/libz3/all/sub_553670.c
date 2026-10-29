__int64 __fastcall sub_553670(__int64 a1, _QWORD *a2, double a3)
{
  unsigned int v3; // eax
  unsigned int v4; // r13d
  __int64 v5; // rbx

  v3 = sub_182A5D0(a1, *a2);
  if ( (_BYTE)v3 )
  {
    v4 = v3;
    v5 = 0;
    if ( !*((_DWORD *)a2 + 4) )
      return v4;
    while ( (unsigned __int8)sub_182A5D0(a1, *(_QWORD *)(a2[1] + 8 * v5))
         && (unsigned __int8)sub_182A680(a1, *a2, *(_QWORD *)(a2[1] + 8 * v5), a3) )
    {
      if ( (unsigned int)++v5 >= *((_DWORD *)a2 + 4) )
        return v4;
    }
  }
  return 0;
}

