__int64 __fastcall sub_6CC3F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v5; // r12
  unsigned int v6; // eax
  __int64 v7; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 89LL) & 1) != 0 )
  {
    if ( (unsigned int)sub_77F000(a2, 0) )
    {
      v5 = *(_QWORD *)(a1 + 17360);
      v6 = sub_77F000(a2, 0);
      v7 = sub_C63970(v5, v6);
      if ( strchr(*(const char **)(v7 + 24), 116) )
        return 1;
    }
  }
  v2 = *(_QWORD *)(a1 + 17360);
  v3 = sub_77F000(a2, 0);
  return sub_C64A00(v2, v3);
}

