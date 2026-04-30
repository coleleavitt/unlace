__int64 __fastcall til_chooser_t__::vfunc_5(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 184);
  result = v1[2];
  if ( !result )
    return (*(int (__fastcall **)(_QWORD *))(*v1 + 32LL))(v1);
  return result;
}
