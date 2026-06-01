char __fastcall sub_8181A0(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax

  result = *(_BYTE *)(sub_7E4EB0(a1) + 414);
  if ( !result )
  {
    v3 = *(_QWORD *)(a2 + 24);
    v4 = *(_QWORD *)(a2 + 8);
    if ( v3 )
    {
      v5 = *(_DWORD *)(v3 - 4);
      if ( !v4 )
        return v5 != 0;
LABEL_4:
      v5 += 2 * *(_DWORD *)(v4 - 4);
      return v5 != 0;
    }
    if ( v4 )
    {
      v5 = 0;
      goto LABEL_4;
    }
  }
  return result;
}

