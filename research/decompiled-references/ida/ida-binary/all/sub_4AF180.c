__int64 __fastcall sub_4AF180(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v2 + 104LL))(v2, *a2 != 0);
  return result;
}
