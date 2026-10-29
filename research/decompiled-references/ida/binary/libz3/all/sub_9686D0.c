__int64 __fastcall sub_9686D0(__int64 a1, _BYTE *a2)
{
  int v2; // eax
  __int64 v3; // rbp
  int v4; // r15d
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 i; // rbx
  int v11; // eax
  int v13; // eax

  v2 = sub_967A60((__int64 **)(a1 + 56), (unsigned __int64)a2);
  v3 = *(_QWORD *)(a1 + 88);
  v4 = v2;
  v5 = *(unsigned int *)(a1 + 96);
  v6 = v5 - 1;
  v5 *= 24;
  v7 = v3 + v5;
  v8 = 24LL * (v4 & v6);
  v9 = v3 + v8;
  if ( v8 != v5 )
  {
    for ( i = v3 + v8; v7 != i; i += 24 )
    {
      v11 = *(_DWORD *)(i + 4);
      if ( v11 == 2 )
      {
        if ( v4 == *(_DWORD *)i && (unsigned __int8)sub_967EF0((__int64 **)(a1 + 72), *(__int64 **)(i + 8), a2) )
          return *(_QWORD *)(i + 16);
      }
      else if ( !v11 )
      {
        return 0;
      }
    }
  }
  for ( ; v9 != v3; v3 += 24 )
  {
    v13 = *(_DWORD *)(v3 + 4);
    if ( v13 == 2 )
    {
      if ( v4 == *(_DWORD *)v3 && (unsigned __int8)sub_967EF0((__int64 **)(a1 + 72), *(__int64 **)(v3 + 8), a2) )
      {
        i = v3;
        return *(_QWORD *)(i + 16);
      }
    }
    else if ( !v13 )
    {
      return 0;
    }
  }
  return 0;
}

