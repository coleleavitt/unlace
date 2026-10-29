__int64 __fastcall sub_7CB0A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // r12
  _DWORD *v6; // rdi

  if ( !*(_QWORD *)(a2 + 24) )
    return 0;
  v2 = a1 + 1592;
  sub_13D4540(a1 + 1592);
  v3 = *(_QWORD *)(a1 + 2336);
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  sub_13DBC80(v2);
  sub_13D4550(v2, a1 + 2336);
  if ( *(_BYTE *)(a1 + 1928) )
    return 0;
  v4 = *(_QWORD **)(a1 + 2336);
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v5 != v4 )
    {
      while ( (*v4 & 7LL) != 1 )
      {
        v6 = *(_DWORD **)(*v4 & 0xFFFFFFFFFFFFFFF8LL);
        if ( *(_DWORD *)a2 != v6[3] || (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 352LL))(v6) )
          break;
        if ( v5 == ++v4 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}

