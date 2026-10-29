unsigned __int64 __fastcall sub_208D820(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // r13
  __int64 v3; // rdx
  __int64 v4; // r15
  __int64 i; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  _BYTE v8[32]; // [rsp+10h] [rbp-68h] BYREF
  __int16 v9; // [rsp+30h] [rbp-48h]

  result = *(_QWORD *)(a1 + 104);
  if ( result )
  {
    if ( result > 0x666666666666666LL )
      std::__throw_bad_alloc();
    v2 = *(_QWORD *)(a1 + 24);
    result = operator new(40 * result);
    v3 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 96) = result;
    if ( (_DWORD)v3 )
    {
      v4 = (unsigned int)(v3 - 1);
      for ( i = 0; ; ++i )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 8 * (i + 1));
        v9 = 257;
        v7 = result + 40 * i;
        sub_20CA190(v7, v6, 22);
        *(_DWORD *)(v7 + 32) = i;
        *(_QWORD *)(v7 + 24) = a1;
        result = sub_20CC090(v7, v8);
        if ( v4 == i )
          break;
        result = *(_QWORD *)(a1 + 96);
      }
    }
  }
  *(_WORD *)(a1 + 2) &= ~1u;
  return result;
}
