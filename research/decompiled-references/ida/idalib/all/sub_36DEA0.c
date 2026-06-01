__int64 __fastcall sub_36DEA0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 flags; // rax
  __int16 v4; // dx
  __int64 v5; // rbx
  __int64 data; // rax
  __int64 v7; // rdx
  __int64 opinfo; // rax
  _QWORD v10[41]; // [rsp+0h] [rbp-148h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v10[35] = __readfsqword(0x28u);
  flags = get_flags_ex(v2, 0);
  v4 = flags;
  v5 = flags;
  data = 0;
  v7 = v4 & 0x600;
  if ( v7 != 1536 )
  {
    if ( v7 == 1024 )
    {
      if ( (v5 & 0xF0000000) == 0xB0000000LL )
        goto LABEL_4;
    }
    else if ( v7 == 512 )
    {
      goto LABEL_4;
    }
    opinfo = get_opinfo(v10, v2, 0, v5);
    get_data_elsize(v2, v5, opinfo);
    data = (unsigned __int8)create_data(v2);
  }
LABEL_4:
  *(_QWORD *)(a2 + 8) = data;
  return 0;
}
