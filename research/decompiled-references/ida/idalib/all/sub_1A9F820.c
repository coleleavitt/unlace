__int64 __fastcall sub_1A9F820(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14

  result = sub_168B6E0(a1);
  if ( (*(_BYTE *)(result + 2) & 8) != 0 )
  {
    result = *(unsigned int *)(sub_168B6E0(a1) + 368);
    if ( byte_265AEBC[result] == 1 )
    {
      if ( a3 )
      {
        result = *(_BYTE *)(a3 + 28) & 0x7F;
        if ( (_BYTE)result == 21 )
        {
          v8 = *(_QWORD *)(a3 + 88);
          if ( v8 )
          {
            result = sub_BABCD0(*(_QWORD *)(a3 + 88), a2, (__int64)byte_265AEBC, v5, v6, v7);
            if ( !result )
              return sub_1A9EE40(a1, a2, a3, v8);
          }
        }
      }
    }
  }
  return result;
}
