__int64 __fastcall sub_29BB40(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 tinfo_size; // rax
  unsigned __int64 v7; // r13
  unsigned int v8; // ebx
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size(0, *a4, 0);
  v10[0] = 0;
  v7 = tinfo_size;
  if ( (unsigned __int8)sub_29B3C0(*(_QWORD *)a3 + 32LL, a2, v10) && !get_tinfo_property(v10[0], 5) && (int)v7 > 0 )
  {
    if ( (get_tinfo_property(v10[0], 2) & 0x3F) != 1 )
    {
      if ( (get_tinfo_property(*a4, 2) & 0x2F) == 0xD )
      {
        if ( !sub_29B010(*(_QWORD *)(a2 + 1504), a4, *(_QWORD *)(*(_QWORD *)a3 + 24LL) % v7, v10) )
        {
LABEL_9:
          v8 = -1;
          goto LABEL_3;
        }
        if ( (get_tinfo_property(*a4, 2) & 0x2F) != 0xD )
        {
          v8 = lexcompare_tinfo(*a4, v10[0], 0) == 0;
          goto LABEL_3;
        }
      }
      else if ( !(unsigned __int8)compare_tinfo(*a4, v10[0], 0) )
      {
        goto LABEL_9;
      }
    }
    v8 = 1;
    goto LABEL_3;
  }
  v8 = 0;
LABEL_3:
  clear_tinfo_t(v10);
  return v8;
}
