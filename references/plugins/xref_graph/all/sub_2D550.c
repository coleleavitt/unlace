__int64 __fastcall toggle_bottom_line_ah_t__::vfunc_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // dl
  _QWORD v11[3]; // [rsp+0h] [rbp-18h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( a3 )
  {
    if ( *(_BYTE *)(a3 + 104) )
    {
      v6 = *(_QWORD *)(a3 + 40);
      v7 = *(_QWORD *)(a3 + 48);
      if ( v6 )
      {
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 32);
          v9 = 0;
          if ( *(char *)(v8 + 9) < 0 )
            v9 = *(_BYTE *)(*(_QWORD *)(v6 + 32) + 9LL) >> 7;
          HIBYTE(v11[0]) = v9;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
            140,
            a2,
            7,
            (char *)v11 + 7,
            &callui,
            a6,
            v11[0]);
        }
      }
    }
  }
  return 3;
}
