__int64 __fastcall sub_10212A0(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edx
  __int64 v4; // rax
  unsigned int v5; // esi
  unsigned __int64 v7; // rsi
  __int64 v8; // rax

  do
  {
    while ( 1 )
    {
      v5 = a2 & 0x7FFFFFFF;
      if ( v5 >= *(_DWORD *)(a1 + 476) && v5 < *(_DWORD *)(a1 + 480) )
      {
        v2 = *(_DWORD *)(a1 + 472);
        v3 = v2 + 1;
        goto LABEL_3;
      }
      if ( !v5 )
        goto LABEL_13;
      if ( v5 >= *(_DWORD *)(a1 + 312) )
        break;
      v2 = sub_101D3D0(a1, v5);
      v3 = v2 + 1;
LABEL_3:
      if ( v3 > 1 )
        goto LABEL_4;
LABEL_13:
      a2 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 12LL);
      if ( a2 >= 0 )
        return (unsigned int)a2;
    }
    if ( v5 < *(_DWORD *)(a1 + 316) )
      goto LABEL_13;
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 24LL))(*(_QWORD *)(a1 + 464));
    if ( (unsigned int)(v2 + 1) <= 1 )
      goto LABEL_13;
LABEL_4:
    if ( v2 < 0 )
    {
      v7 = (unsigned int)(-2 - v2);
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8LL * ((unsigned int)(-2 - v2) >> 6));
      if ( _bittest64(&v8, v7) )
        v4 = sub_101F8A0(a1 + 264, (int)v7);
      else
        v4 = sub_101F930(a1, v7, nullptr);
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 184) + 24LL * (unsigned int)v2;
    }
    a2 = *(_DWORD *)(v4 + 12);
  }
  while ( a2 < 0 );
  return (unsigned int)a2;
}
