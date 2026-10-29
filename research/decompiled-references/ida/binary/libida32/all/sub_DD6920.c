__int64 __fastcall sub_DD6920(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rax
  void *v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-20h]
  char v8; // [rsp+Ch] [rbp-1Ch]

  if ( (unsigned __int8)sub_DFDF30(a1) )
  {
    v5 = (void *)*(unsigned __int16 *)sub_DFDA20(*(_QWORD *)(a1 + 176), 8);
    v7 = 16;
    v8 = 0;
    v6 = v5;
    sub_DD6060(a1, a2, a3, (__int64)&v6);
    if ( v7 > 0x40 )
    {
      if ( v6 )
        operator delete[](v6);
    }
  }
  return 1;
}

