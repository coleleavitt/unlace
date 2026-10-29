void __fastcall sub_145CA20(__int64 a1)
{
  char v1; // al
  __int64 v2; // rax
  void (__fastcall *v3)(__int64, unsigned __int8 **); // rdx
  __int64 v4; // rax
  void (*v5)(void); // rdx
  __int64 v6; // rax
  void (__fastcall *v7)(__int64, unsigned __int8 **); // rdx
  __int64 v8; // rax
  void (*v9)(void); // rdx
  unsigned __int8 *_0[2]; // [rsp+0h] [rbp+0h] BYREF
  __int16 vars10; // [rsp+10h] [rbp+10h]
  _BYTE vars20[104]; // [rsp+20h] [rbp+20h] BYREF

  v1 = *(_BYTE *)(a1 + 2401);
  if ( *(_BYTE *)(a1 + 2400) )
  {
    if ( v1 )
    {
      do
      {
        v2 = *(_QWORD *)(a1 + 1112);
        v3 = *(void (__fastcall **)(__int64, unsigned __int8 **))(a1 + 1152);
        if ( v2 && *(_DWORD *)(a1 + 2392) == *(_DWORD *)(v2 + 16) )
        {
          v3(a1, _0);
        }
        else
        {
          v3(a1, _0);
          if ( vars10 == 1 )
            goto LABEL_28;
        }
      }
      while ( *(_BYTE *)(a1 + 2401) && *(_BYTE *)(a1 + 2400) );
      return;
    }
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 + 1112);
      v5 = *(void (**)(void))(a1 + 1152);
      if ( v4 && *(_DWORD *)(a1 + 2392) == *(_DWORD *)(v4 + 16) )
      {
        v5();
      }
      else
      {
        ((void (__fastcall *)(__int64, unsigned __int8 **))v5)(a1, _0);
        if ( vars10 == 1 )
        {
          if ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 77LL) )
            goto LABEL_15;
          return;
        }
      }
      if ( !*(_BYTE *)(a1 + 2400) )
        return;
    }
  }
  if ( v1 )
  {
    do
    {
      v8 = *(_QWORD *)(a1 + 1112);
      v9 = *(void (**)(void))(a1 + 1152);
      if ( v8 && *(_DWORD *)(v8 + 16) == *(_DWORD *)(a1 + 2392) )
      {
        v9();
      }
      else
      {
        ((void (__fastcall *)(__int64, unsigned __int8 **))v9)(a1, _0);
        if ( vars10 == 1 )
        {
LABEL_28:
          sub_FC70B0((__int64)vars20, *(_QWORD *)(a1 + 48), 0, 1171);
          sub_AEC220(_0, *(_BYTE **)(*(_QWORD *)(a1 + 40) + 80LL), *(_QWORD *)(*(_QWORD *)(a1 + 40) + 88LL));
          sub_AE9DF0(_0, 1, 2u);
          sub_AEA040((__int64)_0);
          return;
        }
      }
    }
    while ( *(_BYTE *)(a1 + 2401) );
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(a1 + 1112);
        v7 = *(void (__fastcall **)(__int64, unsigned __int8 **))(a1 + 1152);
        if ( !v6 || *(_DWORD *)(a1 + 2392) != *(_DWORD *)(v6 + 16) )
          break;
        v7(a1, _0);
      }
      v7(a1, _0);
    }
    while ( vars10 != 1 );
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 77LL) )
    {
LABEL_15:
      sub_FC70B0((__int64)vars20, *(_QWORD *)(a1 + 48), 0, 1166);
      sub_AEA040((__int64)vars20);
    }
  }
}
