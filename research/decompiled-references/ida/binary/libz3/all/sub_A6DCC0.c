_QWORD *__fastcall sub_A6DCC0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  _DWORD *v3; // rax
  __int64 v4; // rax
  _QWORD *result; // rax

  v2 = *a2;
  if ( *(_WORD *)(*a2 + 4) || (v3 = *(_DWORD **)(*(_QWORD *)(v2 + 16) + 24LL)) == nullptr || *v3 != 3 || v3[1] )
  {
    v4 = sub_15D1F10(*a2);
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 48LL))(*(_QWORD *)(a1 + 72), v4);
  }
  result = (_QWORD *)sub_186B270(0x10u);
  *result = off_1C559A8;
  result[1] = v2;
  return result;
}

