__int64 __fastcall navstack_t_get_stack_entry(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v6; // r13
  int v7; // eax
  __int64 v8; // rsi
  unsigned int v9; // eax
  int v10; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    return 0;
  v6 = *(__int64 **)(qword_2CA1698 + 1480);
  v7 = *(_DWORD *)a2;
  v8 = *v6;
  v10 = v7;
  v9 = sub_79B3A0(&v10, v8, 1, 65);
  if ( !a1 || a3 >= v9 )
    return 0;
  else
    return sub_4A36C0(*v6, a1, *(_DWORD *)a2, a3, 0);
}

