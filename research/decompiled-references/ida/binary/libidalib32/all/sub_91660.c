unsigned __int64 __fastcall sub_91660(__int64 a1, __int16 a2)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v5; // rdi
  int v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( a2 != (__int16)0x8000 )
  {
    if ( *(_BYTE *)(a1 + 21) )
    {
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, 0);
      v3 = sub_915A0(a1, v2, a2);
      if ( v3 >= 0 )
      {
        v5 = *(_QWORD *)(a1 + 8);
        v6 = v3;
        sub_16ACA0(v5, &v6, 0);
      }
    }
  }
  return v7 - __readfsqword(0x28u);
}

