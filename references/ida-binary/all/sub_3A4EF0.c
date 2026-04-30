__int64 __fastcall type_editor_field_handler_t__::vfunc_6(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v5; // eax
  __int64 *v6; // rdx
  __int64 result; // rax

  *(_DWORD *)(a2 + 8) = sub_509A20(a3) + 2;
  v5 = *a4;
  if ( *a4 > 0x2F )
  {
    v6 = *((__int64 **)a4 + 1);
    *((_QWORD *)a4 + 1) = v6 + 1;
  }
  else
  {
    v6 = (__int64 *)(*((_QWORD *)a4 + 2) + v5);
    *a4 = v5 + 8;
  }
  result = *v6;
  *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 40) = result;
  return result;
}
