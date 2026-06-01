_QWORD *__fastcall sub_E46800(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 (__fastcall *v2)(__int64); // rax
  _QWORD *result; // rax

  v1 = *(_DWORD **)(a1 + 8);
  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 184LL);
  if ( v2 == sub_E1B790 )
  {
    result = (_QWORD *)sub_186B270(0x10u);
    *result = &off_1C5CDC8;
    result[1] = v1;
LABEL_3:
    ++v1[2];
    return result;
  }
  v1 = (_DWORD *)v2(*(_QWORD *)(a1 + 8));
  result = (_QWORD *)sub_186B270(0x10u);
  *result = &off_1C5CDC8;
  result[1] = v1;
  if ( v1 )
    goto LABEL_3;
  return result;
}

