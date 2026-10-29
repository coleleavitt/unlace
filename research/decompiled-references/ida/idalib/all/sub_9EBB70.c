_QWORD *__fastcall sub_9EBB70(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  _WORD *v3; // rdx

  result = a1;
  v3 = *(_WORD **)(*(_QWORD *)(a2 + 16) + 16LL);
  if ( (*v3 & 0x1FF) != 0x47 )
    v3 = nullptr;
  *a1 = a1 + 2;
  a1[2] = v3;
  a1[1] = 0x100000001LL;
  return result;
}
