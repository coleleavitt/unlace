bool __fastcall sub_B8D850(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  __int64 (*v7)(); // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  __int64 (*v11)(); // rax

  v2 = *(_QWORD *)(a1 + 8) & 7LL;
  if ( *(char *)(a1 + 29) < 0 )
  {
    if ( v2 )
    {
      v5 = a1;
      if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
        v5 = sub_B8C2C0(a1);
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 88) + 18360LL);
      v7 = *(__int64 (**)())(*(_QWORD *)v6 + 104LL);
      if ( v7 != sub_6EE8B0 )
      {
        if ( ((__int64 (__fastcall *)(__int64, _QWORD))v7)(v6, *(unsigned __int16 *)(a1 - 2)) )
        {
          v8 = *(_QWORD *)(a1 + 8) & 7LL;
          if ( *(char *)(a1 + 29) >= 0 )
          {
            if ( v8 )
            {
LABEL_4:
              v3 = *(_QWORD *)(a1 - 8);
              return *(_DWORD *)(v3 + 36) == 6;
            }
          }
          else if ( v8 )
          {
            v9 = a1;
            if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
              v9 = sub_B8C2C0(a1);
            v10 = *(_QWORD *)(*(_QWORD *)(v9 + 88) + 18360LL);
            v11 = *(__int64 (**)())(*(_QWORD *)v10 + 104LL);
            if ( v11 != sub_6EE8B0 )
            {
              v3 = ((__int64 (__fastcall *)(__int64, _QWORD))v11)(v10, *(unsigned __int16 *)(a1 - 2));
              return *(_DWORD *)(v3 + 36) == 6;
            }
          }
          BUG();
        }
      }
    }
  }
  else if ( v2 && *(_QWORD *)(a1 - 8) )
  {
    goto LABEL_4;
  }
  return 0;
}
