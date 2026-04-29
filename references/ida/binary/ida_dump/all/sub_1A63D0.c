__int64 __fastcall sub_1A63D0(__int64 a1, __int64 *a2)
{
  bool (__fastcall *v3)(__int64); // rax
  __int64 v4; // r12
  int v5; // r14d
  int v6; // r13d
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  _DWORD *v11; // rax
  __int64 v13; // rax
  __int64 v14; // rdx

  v3 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v3 == sub_194B60 )
  {
    if ( *(_DWORD *)(a1 + 128) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
      goto LABEL_4;
    }
LABEL_25:
    if ( !under_debugger )
      sub_383060(52055);
    BUG();
  }
  if ( !((unsigned __int8 (*)(void))v3)() )
    goto LABEL_25;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  if ( *(_QWORD *)(a1 + 128) )
  {
LABEL_4:
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = sub_1A1640((_QWORD *)v4, *(_QWORD *)(a1 + 120) + (v7 << 7), -1);
      if ( v8 != -1 )
      {
        v9 = a2[1];
        v10 = (_DWORD *)(*a2 + 4 * v9);
        if ( (_DWORD *)*a2 == v10 )
          goto LABEL_15;
        v11 = (_DWORD *)*a2;
        while ( v8 != *v11 )
        {
          if ( v10 == ++v11 )
            goto LABEL_15;
        }
        if ( v11 == v10 )
        {
LABEL_15:
          if ( a2[2] < (unsigned __int64)(v9 + 1) )
          {
            v13 = qvector_reserve();
            v14 = a2[1];
            *a2 = v13;
            v10 = (_DWORD *)(v13 + 4 * v14);
          }
          *v10 = v8;
          ++a2[1];
        }
        ++v6;
      }
      v7 = ++v5;
    }
    while ( (unsigned __int64)v5 < *(_QWORD *)(a1 + 128) );
    if ( *(_BYTE *)(v4 + 320) )
      return sub_19C460(a1, *(_DWORD *)(a1 + 224));
    if ( v6 )
    {
      if ( !(unsigned __int8)sub_1A56C0(*(_QWORD *)(a1 + 16), 1, 0) )
        sub_1A5590(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 184), *(_DWORD *)(a1 + 208));
    }
    return 0xFFFFFFFFLL;
  }
  if ( *(_BYTE *)(v4 + 320) )
    return sub_19C460(a1, *(_DWORD *)(a1 + 224));
  return 0xFFFFFFFFLL;
}
