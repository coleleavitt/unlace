__int64 __fastcall sub_88F1A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx

  if ( !(unsigned __int8)sub_88C130(a2, (__int64)"machine id", a2 + 32, *(_QWORD *)(a1 + 8) + 512LL) )
    return 0;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v2 + 128);
  v4 = v3 + 152LL * *(_QWORD *)(v2 + 136);
  if ( v3 != v4 )
  {
    while ( *(_DWORD *)v3 != *(_DWORD *)(a2 + 2) || *(_WORD *)(v3 + 4) != *(_WORD *)(a2 + 6) )
    {
      v3 += 152;
      if ( v4 == v3 )
        goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  sub_88A410(v2, a2);
  return 0;
}

