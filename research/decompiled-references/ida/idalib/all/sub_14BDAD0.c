__int64 __fastcall sub_14BDAD0(__int64 a1, __int64 a2, __m128i a3)
{
  __int16 v3; // ax
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rbp
  __int64 (__fastcall *v11)(_QWORD, __int64, _QWORD); // rax
  __int64 v12; // rax

  v3 = *(_WORD *)(a1 + 32);
  switch ( v3 )
  {
    case 3:
      v6 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v6 + 760) )
      {
        *(_BYTE *)(v6 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v6 + 48) + 6LL) = 1;
      }
      v7 = *(_QWORD *)(a1 + 96);
      v8 = 0;
      v9 = *(_BYTE *)(a1 + 56) == 0;
      *(_WORD *)(a1 + 32) = 1;
      v10 = *(_QWORD *)(v7 + 656);
      if ( !v9 && *(_DWORD *)(a1 + 16) == *(_DWORD *)(a1 + 60) )
      {
        v8 = *(_QWORD *)(a1 + 64);
        if ( (v8 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v11 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 72);
          v8 = 0;
          if ( v11 )
          {
            v12 = v11(*(_QWORD *)(a1 + 80), a2, 0);
            v7 = *(_QWORD *)(a1 + 96);
            v8 = v12;
          }
        }
      }
      sub_172C2C0(v10, *(_QWORD *)(v7 + 608), v8, 0);
      return 1;
    case 148:
      return sub_14C5FE0();
    case 170:
      return sub_14C6080();
    default:
      v4 = sub_14BDA20(a1, 0, 0, a2, 0, nullptr, a3);
      return sub_14BE680(a1, v4, 2);
  }
}
