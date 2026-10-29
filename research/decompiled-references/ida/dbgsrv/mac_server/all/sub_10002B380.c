/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B380
// Address: 0x000000010002B380

//----- (000000010002B380) ----------------------------------------------------
__int64 __fastcall sub_10002B380(__int64 a1, const char *a2)
{
  _QWORD *v2; // r14
  _DWORD *v3; // rax
  __int64 v4; // rax
  int *v5; // r14
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 40);
  sub_100002D00(a1 + 40, "%s.%s", a2, a2);
  sub_10002AC50(a1);
  sub_10002B180(a1);
  v3 = *(_DWORD **)(a1 + 40);
  if ( *(_QWORD *)(a1 + 56) <= 4u )
  {
    v3 = qvector_reserve((__int64)v2, *(void **)(a1 + 40), 5u, 1u);
    *v2 = v3;
  }
  *(_QWORD *)(a1 + 48) = 5;
  *v3 = 1936287860;
  *(_BYTE *)(*(_QWORD *)(a1 + 40) + 4LL) = 0;
  sub_10002AC50(a1);
  v4 = *(_QWORD *)(a1 + 352);
  v5 = *(int **)(*(_QWORD *)(a1 + 344) + 8 * v4 - 8);
  if ( v4 )
    *(_QWORD *)(a1 + 352) = v4 - 1;
  ((void (__fastcall *)(__int64, int *, _QWORD, _QWORD))loc_10002C5D0)(a1, v5, 0, 0);
  if ( v5 )
  {
    sub_10002AE90(v5);
    operator delete(v5);
  }
  result = set_qerrno();
  if ( !(_DWORD)result )
    return sub_10002B470(a1);
  return result;
}
