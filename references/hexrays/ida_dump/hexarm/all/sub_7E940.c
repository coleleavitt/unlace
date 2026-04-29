__int64 __fastcall sub_7E940(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdi
  __int64 result; // rax

  *(_QWORD *)a1 = sub_7CA60((__int64)a2, 1u);
  v3 = a2;
  *(_QWORD *)(a1 + 8) = sub_7CA60((__int64)a2, 1u);
  *(_QWORD *)(a1 + 16) = sub_7CA60((__int64)a2, 1u);
  if ( *v3 >= v3[1] || (v3 = a2, *(_DWORD *)(a1 + 24) = unpack_dd(a2) - 1, *a2 >= a2[1]) )
    sub_79F50(v3);
  result = (unsigned int)unpack_dd(a2) - 1;
  *(_DWORD *)(a1 + 28) = result;
  return result;
}
