__int64 __fastcall sub_F29350(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 40);
  switch ( (_DWORD)result )
  {
    case 1:
      return sub_995540(*(_QWORD *)(a1 + 1096), " Nullable");
    case 0:
      return sub_995540(*(_QWORD *)(a1 + 1096), " NonNull");
    case 2:
      return sub_995540(*(_QWORD *)(a1 + 1096), " Unspecified");
    case 3:
      return sub_995540(*(_QWORD *)(a1 + 1096), " NullableResult");
  }
  return result;
}
