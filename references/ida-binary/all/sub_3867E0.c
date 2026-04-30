__int64 __fastcall sra_chooser_t__::vfunc_11(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r13
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int128 v7; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v2 = getinf_flag(2, 1);
  setinf_flag(2, 1, 0);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_DWORD *)(v3 + 68) + **(unsigned __int16 **)(a1 + 192);
  if ( (signed int)v4 >= *(_DWORD *)(v3 + 80) )
    ++v4;
  do
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8) - 8);
      v7 = 0;
      if ( (unsigned __int8)getn_sreg_range(&v7, v4, v5) )
      {
        if ( (unsigned __int8)del_sreg_range(v7, v4) )
          break;
      }
      if ( !(unsigned __int8)sub_49F220(a2) )
        goto LABEL_8;
    }
    auto_mark_range(v7, v7 + 1, 40);
  }
  while ( (unsigned __int8)sub_49F220(a2) );
LABEL_8:
  setinf_flag(2, 1, v2);
  sub_49F270(a1, a2, **(_QWORD **)a2);
  return 1;
}
