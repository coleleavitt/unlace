__int64 __fastcall sub_123650(unsigned __int64 a1, __int64 a2, int a3, char a4)
{
  int v6; // edx

  if ( *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) && sub_117990((unsigned __int8 *)a1) )
    return sub_1232C0((unsigned __int8 *)a1, a2, a3, a4);
  v6 = *(_DWORD *)(a1 + 4);
  if ( a3 < v6 && a3 )
    return sub_122D10(a1, a2, v6 - a3);
  else
    return 0;
}
