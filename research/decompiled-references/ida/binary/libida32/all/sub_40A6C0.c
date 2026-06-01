unsigned __int64 __fastcall sub_40A6C0(__int64 a1)
{
  __int64 v1; // r13
  unsigned int first_fixup_ea; // eax
  unsigned int next_fixup_ea; // ebx
  char v5; // bp
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rdi
  unsigned int v10; // [rsp+1Ch] [rbp-5Ch] BYREF
  char v11; // [rsp+22h] [rbp-56h] BYREF
  __int64 v12; // [rsp+23h] [rbp-55h]
  __int16 v13; // [rsp+2Bh] [rbp-4Dh]
  char v14; // [rsp+2Dh] [rbp-4Bh] BYREF
  __int64 v15; // [rsp+2Eh] [rbp-4Ah]
  __int16 v16; // [rsp+36h] [rbp-42h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 1480);
  v17 = __readfsqword(0x28u);
  first_fixup_ea = get_first_fixup_ea();
  if ( first_fixup_ea != -1 )
  {
    next_fixup_ea = first_fixup_ea;
    v5 = 0;
    v6 = v1 + 2356;
    do
    {
      if ( !++v5 )
        show_auto(next_fixup_ea, 0);
      if ( sub_79B5C0(v6, a1, next_fixup_ea, &v11, 11, 339) == 11 )
      {
        v7 = *(_QWORD *)(a1 + 1480);
        if ( (v11 & 8) != 0 )
        {
          v14 = v11 & 0xE7 | 0x10;
          v15 = v12;
          v10 = next_fixup_ea;
          v16 = v13;
          sub_79B440(v7 + 2356, a1, next_fixup_ea, &v10, 4, 321);
          v8 = v7 + 2356;
        }
        else
        {
          v14 = v11 & 0xEF;
          v8 = v7 + 2356;
          v15 = v12;
          v16 = v13;
        }
        sub_79B440(v8, a1, next_fixup_ea, &v14, 11, 339);
      }
      next_fixup_ea = get_next_fixup_ea(next_fixup_ea);
    }
    while ( next_fixup_ea != -1 );
  }
  return v17 - __readfsqword(0x28u);
}

