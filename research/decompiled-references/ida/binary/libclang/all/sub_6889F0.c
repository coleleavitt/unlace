char __fastcall sub_6889F0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int (__fastcall *v4)(_QWORD, _QWORD); // rax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+8h] [rbp-20h]
  __int64 v8; // [rsp+10h] [rbp-18h]

  if ( (a4 & 1) != 0 )
  {
    v6 = a1;
    v7 = 0;
    v8 = 0;
    sub_688810((__int64)&v6, a2);
    v4 = **(unsigned int (__fastcall ***)(_QWORD, _QWORD))(a1 + 24);
    if ( v4 )
      return v4(*(_QWORD *)(a1 + 16), 0) == 0;
  }
  else
  {
    v4 = **(unsigned int (__fastcall ***)(_QWORD, _QWORD))(a1 + 24);
    if ( v4 )
      return v4(*(_QWORD *)(a1 + 16), 0) == 0;
  }
  return 1;
}

