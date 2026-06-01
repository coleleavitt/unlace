__int64 __fastcall sub_9C18F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  unsigned int v8; // eax
  unsigned __int8 **v9; // rax

  result = 1;
  if ( !*(_DWORD *)(a3 + 48) )
  {
    v4 = *(_QWORD *)(a3 + 24);
    if ( *(_BYTE *)(v4 + 29) )
    {
      v5 = *(_QWORD **)(v4 + 32);
      if ( (*v5 & 2) != 0 || (v6 = *v5 & 0xFFFFFFFFFFFFFFFCLL, (v7 = v6) != 0) && (*(_BYTE *)(v6 + 28) & 0x7Fu) - 38 > 6 )
      {
        v6 = 0;
        v7 = 0;
      }
      v8 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
      v9 = (unsigned __int8 **)sub_A2E1A0(a1, v8, 2301, 0);
      if ( v9 )
        sub_8356A0(v9, v6, 0xAu);
      sub_A2DD70(a1, *(unsigned int *)(v7 + 24), 105);
      return 0;
    }
  }
  return result;
}

