unsigned __int64 __fastcall sub_41DB90(__int64 a1)
{
  __int64 v1; // r13
  __int64 first_fixup_ea; // rax
  __int64 next_fixup_ea; // rbx
  char v5; // bp
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v11; // [rsp+18h] [rbp-80h] BYREF
  char v12; // [rsp+25h] [rbp-73h] BYREF
  unsigned __int16 v13; // [rsp+26h] [rbp-72h]
  unsigned int v14; // [rsp+28h] [rbp-70h]
  int v15; // [rsp+2Ch] [rbp-6Ch]
  char v16; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17; // [rsp+31h] [rbp-67h]
  __int64 v18; // [rsp+39h] [rbp-5Fh]
  __int64 v19; // [rsp+41h] [rbp-57h]
  unsigned __int64 v20; // [rsp+58h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 1672);
  v20 = __readfsqword(0x28u);
  first_fixup_ea = get_first_fixup_ea();
  if ( first_fixup_ea != -1 )
  {
    next_fixup_ea = first_fixup_ea;
    v5 = 0;
    v6 = v1 + 2464;
    do
    {
      if ( !++v5 )
        show_auto(next_fixup_ea, 0);
      if ( sub_7BE950(v6, a1, next_fixup_ea, &v12, 11, 339) == 11 )
      {
        if ( (v12 & 8) != 0 )
        {
          v16 = v12 & 0xE7 | 0x10;
          if ( v13 == 0xFFFF )
            v17 = -1;
          else
            v17 = v13;
          v9 = *(_QWORD *)(a1 + 1672);
          v11 = next_fixup_ea;
          v18 = v14;
          v19 = v15;
          sub_7BE7C0(v9 + 2464, a1, next_fixup_ea, &v11, 8, 321);
          v8 = v9 + 2464;
        }
        else
        {
          v16 = v12 & 0xEF;
          if ( v13 == 0xFFFF )
            v17 = -1;
          else
            v17 = v13;
          v7 = *(_QWORD *)(a1 + 1672);
          v18 = v14;
          v8 = v7 + 2464;
          v19 = v15;
        }
        sub_7BE7C0(v8, a1, next_fixup_ea, &v16, 25, 339);
      }
      next_fixup_ea = get_next_fixup_ea(next_fixup_ea);
    }
    while ( next_fixup_ea != -1 );
  }
  return v20 - __readfsqword(0x28u);
}
