__int64 __fastcall sub_3D0400(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rcx
  int v6; // edi
  unsigned int v7; // edx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // r9
  __int64 *i; // rax
  __int64 v12; // rdx
  __int64 v14; // rax

  v2 = *(unsigned int *)(a1 + 568);
  v3 = *(__int64 **)(a1 + 560);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = v2 - 1;
  v2 *= 16;
  v8 = (__int64 *)((char *)v3 + v2);
  v9 = 16LL * (v6 & v7);
  v10 = &v3[(unsigned __int64)v9 / 8];
  if ( v9 != v2 )
  {
    for ( i = &v3[(unsigned __int64)v9 / 8]; v8 != i; i += 2 )
    {
      v12 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v12 + 12) == v6 && a2 == v12 )
          return sub_3FFBB0(*(_QWORD *)(a1 + 552), i[1]);
      }
      else if ( !v12 )
      {
        return sub_3FFBB0(*(_QWORD *)(a1 + 552), a2);
      }
    }
  }
  for ( ; v10 != v3; v3 += 2 )
  {
    v14 = *v3;
    if ( (unsigned __int64)*v3 > 1 )
    {
      if ( *(_DWORD *)(v14 + 12) == v6 && a2 == v14 )
      {
        i = v3;
        return sub_3FFBB0(*(_QWORD *)(a1 + 552), i[1]);
      }
    }
    else if ( !v14 )
    {
      return sub_3FFBB0(*(_QWORD *)(a1 + 552), a2);
    }
  }
  return sub_3FFBB0(*(_QWORD *)(a1 + 552), a2);
}

