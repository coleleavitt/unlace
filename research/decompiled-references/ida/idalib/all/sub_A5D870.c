char __fastcall sub_A5D870(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  char result; // al
  char v5; // [rsp+Fh] [rbp-29h]
  void *v6; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(unsigned int *)(a2 + 8);
  if ( v2 == (_DWORD)v3 )
  {
    if ( v2 <= 0x40 )
      return *(_QWORD *)a2 == *(_QWORD *)a1;
    else
      return sub_2205D70(a1, a2);
  }
  else
  {
    if ( v2 <= (unsigned int)v3 )
    {
      sub_2206CD0(&v6, a1, v3);
      if ( v7 <= 0x40 )
        return v6 == *(void **)a2;
      result = sub_2205D70(&v6, a2);
      goto LABEL_5;
    }
    sub_2206CD0(&v6, a2, v2);
    if ( *(_DWORD *)(a1 + 8) <= 0x40u )
      result = *(_QWORD *)a1 == (_QWORD)v6;
    else
      result = sub_2205D70(a1, &v6);
    if ( v7 > 0x40 )
    {
LABEL_5:
      if ( v6 )
      {
        v5 = result;
        operator delete[](v6);
        return v5;
      }
    }
  }
  return result;
}
