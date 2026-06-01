__int64 __fastcall link_chooser_t__::vfunc_5(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rdx

  v1 = *(__int64 **)(*(_QWORD *)(a1 + 184) + 440LL);
  if ( v1 )
    v1 = (__int64 *)v1[1];
  v2 = *(unsigned int *)(a1 + 192);
  v3 = *v1;
  if ( *(_BYTE *)(a1 + 196) )
    return (*(int (__fastcall **)(__int64 *, __int64))(v3 + 104))(v1, v2);
  else
    return (*(int (__fastcall **)(__int64 *, __int64))(v3 + 96))(v1, v2);
}
