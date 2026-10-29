void __fastcall sub_DF7AE0(__int64 a1)
{
  __int64 v2; // rdi
  bool v3; // zf
  __int64 v4; // r12
  void (__fastcall *v5)(__int64, _QWORD *); // r13
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, _QWORD *); // r12
  _QWORD v8[6]; // [rsp+8h] [rbp-30h] BYREF

  sub_15B10B0(a1 + 112);
  if ( *(_BYTE *)(a1 + 193) )
    *(_BYTE *)(a1 + 258) = 1;
  v2 = *(_QWORD *)(a1 + 864);
  if ( v2 )
  {
    v3 = *(_BYTE *)(a1 + 184) == 0;
    v8[0] = 0;
    if ( v3 )
    {
      sub_1862300(v8, "auto_config", 0);
      v2 = *(_QWORD *)(a1 + 864);
    }
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 88LL))(v2, v8);
    sub_18572D0(v8);
  }
  v4 = *(_QWORD *)(a1 + 880);
  if ( v4 )
  {
    v5 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 152LL);
    sub_17F9A60(v8, "opt");
    v5(v4, v8);
    sub_18572D0(v8);
  }
  v6 = *(_QWORD *)(a1 + 280);
  if ( v6 )
  {
    v7 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 48LL);
    sub_17F9A60(v8, "solver");
    v7(v6, v8);
    sub_18572D0(v8);
  }
}

