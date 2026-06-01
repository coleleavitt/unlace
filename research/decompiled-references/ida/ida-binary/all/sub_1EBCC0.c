__int64 __fastcall sub_1EBCC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  _DWORD *v5; // rdi
  _DWORD **v6; // rax
  _DWORD **v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64); // rax

  nullsub_66(a1 + 104);
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 8LL))(a2, *(_QWORD *)(a1 + 728));
  v3 = sub_277DF0();
  v4 = *(_QWORD *)(a1 + 112);
  v5 = *(_DWORD **)(v3 + 112);
  if ( v5 )
  {
    v6 = (_DWORD **)(v5 + 14);
    v7 = (_DWORD **)(v5 + 20);
    while ( 1 )
    {
      v5 = *v6;
      if ( *v6 )
      {
        if ( (_DWORD)v4 == v5[2] )
          break;
      }
      if ( ++v6 == v7 )
      {
        v5 = nullptr;
        break;
      }
    }
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 152LL);
  if ( v8 == desktops_diff_source_t__::vfunc_19 )
    return v2;
  else
    return v8((__int64)v5, v2);
}
