void __fastcall sub_13646B0(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 (*v3)(); // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  unsigned int v8; // esi
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // [rsp+8h] [rbp-20h]

  v1 = (_QWORD *)a1[12];
  if ( v1[12] )
  {
    sub_1029110(0);
    v3 = *(__int64 (**)())(*a1 + 120LL);
    if ( v3 != sub_6EECA0
      && ((unsigned __int8 (__fastcall *)(_QWORD *))v3)(a1)
      && *(_QWORD *)(*(_QWORD *)(v1[2] + 160LL) + 176LL) )
    {
      sub_12ED120(v1);
    }
    v4 = v1[18];
    if ( !v4 )
    {
      v5 = v1[17];
      v6 = *(__int64 (__fastcall **)(__int64))(*a1 + 88LL);
      if ( v6 == sub_6EEC50 )
      {
        v7 = a1[12];
        v8 = 0;
        if ( v7 )
        {
          v9 = *(_QWORD *)(v7 + 112);
          if ( v9 )
            v8 = *(_DWORD *)(v9 + 17528);
        }
      }
      else
      {
        v11 = v1[17];
        v10 = v6((__int64)a1);
        v5 = v11;
        v8 = v10;
      }
      sub_12EA240(v1, v8, v5);
      v4 = v1[18];
    }
    sub_1469FA0(v4, (**(_BYTE **)(v1[2] + 160LL) & 8) != 0, (*(_BYTE *)(*(_QWORD *)(v1[2] + 160LL) + 1LL) & 0x20) != 0);
  }
}
