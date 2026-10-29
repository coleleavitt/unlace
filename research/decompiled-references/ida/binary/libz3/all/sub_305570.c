void __fastcall sub_305570(__int64 a1, __int64 a2)
{
  void *v2; // rbp
  void (__fastcall *v3)(void *, __int64); // r12
  __int64 (__fastcall *v4)(__int64); // rax
  const void *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp

  if ( !*(_BYTE *)(a2 + 273) )
  {
    v2 = *(void **)(a1 + 24);
    if ( !v2 )
    {
      if ( !sub_DF79D0(a2) )
      {
        v7 = sub_186B270(0x328u);
        sub_DFBCB0(a2);
        sub_2F7E40(v7, *(_QWORD *)(a2 + 296));
        sub_DF79E0(a2, v7);
      }
      v5 = (const void *)sub_DF79D0(a2);
      v2 = __dynamic_cast(
             v5,
             (const struct __class_type_info *)&`typeinfo for'opt_wrapper,
             (const struct __class_type_info *)&`typeinfo for'opt::context,
             0);
      if ( !v2 )
        __cxa_bad_cast();
    }
    v3 = *(void (__fastcall **)(void *, __int64))(*(_QWORD *)v2 + 120LL);
    v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v4 == sub_305010 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v2 + 120LL))(v2, *(_QWORD *)(a2 + 408));
    }
    else
    {
      v6 = v4(a2);
      v3(v2, v6);
    }
  }
}

