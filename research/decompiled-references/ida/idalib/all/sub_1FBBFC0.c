__int64 __fastcall sub_1FBBFC0(__int64 a1, _DWORD *a2)
{
  unsigned __int64 (__fastcall *v2)(__int64); // rax
  int v3; // esi
  __int64 result; // rax

  sub_1FBBC70((__int64 *)a1, (__int64)a2);
  v2 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
  if ( v2 == sub_AE9D30 )
    v3 = a2[19];
  else
    v3 = v2((__int64)a2);
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), v3, *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 86;
  return result;
}
