__int64 __fastcall sub_1837DD0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  bool v6; // al
  unsigned int v8; // r12d

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5 )
    return 1;
  v3 = sub_A72040(a1, a2);
  v4 = v3;
  if ( v3 )
  {
    while ( (unsigned int)*(unsigned __int8 *)(v3 + 16) - 2 <= 1 )
    {
      v5 = *(_QWORD *)(v4 + 40);
      if ( (*(_BYTE *)(v4 + 19) & 2) != 0 )
      {
        v8 = *(_DWORD *)(v5 + 8);
        if ( v8 <= 0x40 )
          v6 = *(_QWORD *)v5 == 0;
        else
          v6 = v8 == (unsigned int)sub_2206780(v5);
      }
      else
      {
        v6 = v5 == 0;
      }
      if ( v6 )
        return 1;
      v3 = sub_A72040(a1, *(_QWORD *)(v4 + 32));
      v4 = v3;
      if ( !v3 )
        return 0;
    }
  }
  return 0;
}
