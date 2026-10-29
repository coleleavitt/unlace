_BYTE *__fastcall sub_B9BF50(__int64 a1, __int64 a2, int a3, __int64 a4, _BYTE *a5)
{
  int v6; // edi
  unsigned int v7; // eax
  _BYTE *v9; // [rsp+0h] [rbp-20h]
  __int64 v10[3]; // [rsp+8h] [rbp-18h] BYREF

  if ( (_BYTE *)a4 == a5 )
    return nullptr;
  while ( 1 )
  {
    if ( *(_QWORD *)(*(_QWORD *)a5 + 16LL) == a2 && a5 == *((_BYTE **)a5 + 3) )
    {
      v6 = 0;
      if ( (a5[44] & 8) == 0 )
        v6 = *(_DWORD *)(*(_QWORD *)a5 + 24LL);
      if ( a3 == v6 )
        break;
    }
    a5 = *((_BYTE **)a5 + 2);
    if ( a5 == (_BYTE *)a4 )
      return nullptr;
  }
  v7 = *(_DWORD *)(a1 + 80);
  if ( v7 < *((_DWORD *)a5 + 9) )
    v7 = *((_DWORD *)a5 + 9);
  *(_DWORD *)(a1 + 80) = v7;
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 912LL) )
    return a5;
  v10[0] = (__int64)a5;
  v9 = a5;
  v10[1] = a4;
  sub_B9BD60((__int64 **)(a1 + 128), v10);
  return v9;
}

