__int64 __fastcall sub_37D290(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 idc_class; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx

  v2 = *(_QWORD *)(qword_2CCB598 + 624);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 32) & 0x40) != 0 )
      callui();
    if ( *(_QWORD *)(a1 + 40) )
    {
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 8) = 0;
      *(_OWORD *)(a2 + 16) = 0;
      v5 = *(_QWORD *)(a1 + 40);
      if ( v5 )
      {
        v6 = 0;
        v7 = v5 + 1;
        if ( v5 != -1 )
        {
          v8 = qvector_reserve(a2 + 8, 0, v5 + 1, 1);
          v9 = *(_QWORD *)(a2 + 16);
          *(_QWORD *)(a2 + 8) = v8;
          memset((void *)(v8 + v9), 0, v7 - v9);
          *(_QWORD *)(a2 + 16) = v7;
          v6 = *(_QWORD *)(a2 + 8);
        }
        *(_BYTE *)(v6 + v5) = 0;
      }
      callui();
    }
    return 0;
  }
  else
  {
    idc_class = find_idc_class("exception");
    idcv_object(a2, idc_class);
    return throw_idc_exception(a2, "Debugger not present");
  }
}
