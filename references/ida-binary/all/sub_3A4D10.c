__int64 __fastcall type_editor_field_handler_t__::vfunc_7(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rdx
  int v4; // eax

  v3 = *a3;
  v4 = 0;
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 48);
  return (unsigned int)(v4 - *(_DWORD *)(a2 + 24) - 1);
}
