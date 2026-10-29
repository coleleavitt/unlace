__int64 __fastcall sub_5B1E60(_QWORD *a1, __int64 a2)
{
  unsigned int *v3; // rbp
  unsigned int v4; // esi
  unsigned int v5; // ebp
  unsigned int *v7; // rax

  lock_func_range(a2, 1);
  if ( !a2 )
    goto LABEL_15;
  if ( *(char *)(a2 + 9) >= 0 )
  {
    v3 = (unsigned int *)a2;
    goto LABEL_4;
  }
  v7 = sub_4EE820((__int64)(a1 + 203), *(unsigned int *)(a2 + 16));
  v3 = v7;
  if ( v7 )
  {
    if ( *((char *)v7 + 9) < 0 )
      v3 = sub_4EE820((__int64)(a1 + 203), v7[4]);
  }
  else
  {
LABEL_15:
    v3 = nullptr;
  }
LABEL_4:
  if ( (unsigned __int8)sub_5ACDD0(a1, (__int64)v3, 1) )
  {
    v4 = v3[1];
    if ( v3[26] && v4 < *(_DWORD *)(*((_QWORD *)v3 + 14) + 8LL * (int)v3[26] - 4) )
      v4 = *(_DWORD *)(*((_QWORD *)v3 + 14) + 8LL * (int)v3[26] - 4);
    if ( v4 != -1 )
    {
      v5 = sub_3BCA60(a1, v4, *v3, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_39AFB0, nullptr);
      if ( (unsigned int)sub_39CC50((__int64)a1) == 25 )
        sub_3A0420(v5);
      else
        sub_3A1A90(a1, v5, v5 + 1, 0x28u);
    }
  }
  return lock_func_range(a2, 0);
}

