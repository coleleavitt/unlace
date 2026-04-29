__int64 __fastcall sub_3A36D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v10[1] = __readfsqword(0x28u);
  v9 = 0;
  copy_tinfo_t(&v9, a2);
  v3 = v9;
  if ( (_BYTE)v9 )
  {
    while ( (v3 & 0x100) == 0 )
    {
      v10[0] = 0;
      v10[0] = get_tinfo_property(v3, 13);
      copy_tinfo_t(&v9, v10);
      clear_tinfo_t(v10);
      v3 = v9;
      if ( !(_BYTE)v9 )
        goto LABEL_12;
    }
    while ( 1 )
    {
      v10[0] = 0;
      v10[0] = get_tinfo_property(v3, 13);
      if ( !(unsigned int)lexcompare_tinfo(v10[0], v9, 0) || (v10[0] & 0x100LL) == 0 )
        break;
      v4 = v9;
      v9 = v10[0];
      v10[0] = v4;
      clear_tinfo_t(v10);
      v3 = v9;
    }
    clear_tinfo_t(v10);
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      v6 = v9;
      *(_QWORD *)a1 = 0;
      *(_BYTE *)(a1 + 16) = 1;
      *(_QWORD *)(a1 + 8) = v6;
      v9 = v5;
    }
    v7 = 1;
  }
  else
  {
LABEL_12:
    v7 = 0;
  }
  clear_tinfo_t(&v9);
  return v7;
}
