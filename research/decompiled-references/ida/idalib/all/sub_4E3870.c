__int64 __fastcall sub_4E3870(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 custom_refinfo; // rax
  __int64 v7; // r12
  void (__fastcall *v8)(__int64); // rax
  unsigned int v9; // r12d
  __int64 (__fastcall *v11)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, __int64, _QWORD); // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 v19; // rax

  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
  if ( (v4 & 0x40) == 0 || (custom_refinfo = get_custom_refinfo(v4 & 0x4F), (v7 = custom_refinfo) == 0) )
  {
    if ( (debug & 2) != 0 )
      sub_3879F0();
    return 0;
  }
  if ( !(unsigned __int8)sub_4E3350((__int64 *)a1, custom_refinfo) )
    return 0;
  v8 = *(void (__fastcall **)(__int64))(v7 + 48);
  if ( v8 )
  {
    v8(a3);
    goto LABEL_6;
  }
  v11 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, __int64, _QWORD))(v7 + 32);
  if ( !v11 )
  {
    if ( (debug & 2) != 0 )
      sub_3879F0();
    return 0;
  }
  v12 = v11(
          a2,
          a3,
          *(_QWORD *)(a1 + 8),
          *(unsigned int *)(a1 + 32),
          *(_QWORD *)(a1 + 16),
          *(_QWORD *)(a1 + 24),
          a1 + 40,
          a1 + 56,
          a1 + 72,
          *(unsigned int *)(a1 + 52));
  v9 = v12;
  if ( v12 == 3 )
  {
    v13 = *(_QWORD *)(a1 + 72);
    if ( v13 == -1 )
    {
      if ( (debug & 2) != 0 )
        sub_3879F0();
      return 0;
    }
    v14 = *(_QWORD *)(a1 + 16);
    v15 = *(_QWORD *)(a1 + 56) + *(_QWORD *)(v14 + 16);
    v16 = v15 - v13;
    *(_QWORD *)(a1 + 64) = v15 - v13;
    if ( (*(_BYTE *)(v14 + 25) & 1) != 0 )
    {
      v17 = v13 - v15;
      *(_QWORD *)(a1 + 64) = v17;
      v16 = v17;
    }
    v18 = *(_QWORD *)(*(_QWORD *)a1 + 1672LL);
    v19 = sub_505D70(v18 + 1624, *(_QWORD *)(a1 + 24));
    *(_QWORD *)(a1 + 64) = sub_510880(v18, v19, v16);
    goto LABEL_6;
  }
  if ( v12 > 3 )
  {
    if ( v12 == 4 )
    {
LABEL_6:
      if ( *(_QWORD *)(a1 + 56) == -1 )
      {
        if ( (debug & 2) != 0 )
          sub_3879F0();
      }
      else if ( *(_QWORD *)(a1 + 64) == -1 )
      {
        if ( (debug & 2) != 0 )
          sub_3879F0();
      }
      else
      {
        if ( *(_QWORD *)(a3 + 8) > 1u )
        {
          if ( (debug & 2) != 0 )
            sub_3879F0();
          return 3;
        }
        if ( (debug & 2) != 0 )
          sub_3879F0();
      }
      return 0;
    }
LABEL_28:
    if ( (debug & 2) != 0 )
      sub_3879F0();
    return 0;
  }
  if ( (unsigned int)(v12 - 1) > 1 )
    goto LABEL_28;
  if ( (debug & 2) != 0 )
    sub_3879F0();
  return v9;
}
