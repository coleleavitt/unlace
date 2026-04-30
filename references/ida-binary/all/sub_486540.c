__int64 __fastcall folder_data_t__::vfunc_5(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  __int64 v3; // rdx

  v2 = (_BYTE *)(*(_QWORD *)(a1 + 8) + 9 * a2);
  v3 = -1;
  if ( !v2[8] )
    return *(_QWORD *)v2;
  return v3;
}
