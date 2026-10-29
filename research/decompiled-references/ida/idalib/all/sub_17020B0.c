__int64 __fastcall sub_17020B0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rdx
  unsigned __int64 v4; // rax
  unsigned int v5; // r9d
  __int64 v6; // rdi
  __int64 result; // rax
  _DWORD *v8; // rdi
  __int64 v9; // r8
  unsigned int v10; // ecx
  __int64 v11; // r8

  v2 = *(_QWORD *)(a1 + 8);
  v3 = nullptr;
  if ( *(_QWORD *)a1 != v2 )
    v3 = *(_DWORD **)a1;
  v4 = 0xAAAAAAAAAAAAAAABLL * ((v2 - *(_QWORD *)a1) >> 5);
  if ( !(_DWORD)v4 )
    return 0;
  v5 = 160;
  v6 = 3LL * (unsigned int)(v4 - 1) + 3;
  result = 0;
  v8 = &v3[8 * v6];
  while ( 1 )
  {
    if ( !v3[6] )
    {
      v9 = *(_QWORD *)v3;
      if ( (*(_BYTE *)(*(_QWORD *)v3 + 28LL) & 0x7F) == 0x12 )
      {
        v10 = v3[4];
        if ( v10 <= 0xA0 && a2 <= *(_DWORD *)(v9 + 104) )
          break;
      }
    }
    v3 += 24;
    if ( v8 == v3 )
      return result;
  }
LABEL_10:
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 96) + 8LL * (a2 - 1)) + 48LL);
  if ( v10 >= v5 && (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v10 = v5;
    if ( *(_QWORD *)(*(_QWORD *)&byte_8[result & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
      result = 0;
    v11 = result;
  }
  result = v11;
  v5 = v10;
  while ( 1 )
  {
    v3 += 24;
    if ( v8 == v3 )
      return result;
    while ( !v3[6] )
    {
      v9 = *(_QWORD *)v3;
      if ( (*(_BYTE *)(*(_QWORD *)v3 + 28LL) & 0x7F) != 0x12 )
        break;
      v10 = v3[4];
      if ( v10 > v5 )
        break;
      if ( a2 <= *(_DWORD *)(v9 + 104) )
        goto LABEL_10;
      v3 += 24;
      if ( v8 == v3 )
        return result;
    }
  }
}
