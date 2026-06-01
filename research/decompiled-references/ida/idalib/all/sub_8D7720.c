_WORD *__fastcall sub_8D7720(char *a1, __int64 a2)
{
  _WORD *v2; // rbx
  void (__fastcall *v4)(void *); // rax
  char *v5; // [rsp+8h] [rbp-30h] BYREF

  v5 = a1;
  v2 = (_WORD *)operator new(0x18u);
  *(_QWORD *)v2 = off_2B3F1D8;
  v2[4] = 101;
  *((_QWORD *)v2 + 2) = 0;
  if ( !a1 || (unsigned __int8)sub_8D7690((__int64)v2, &v5, a2) )
    return v2;
  if ( v2 )
  {
    v4 = *(void (__fastcall **)(void *))(*(_QWORD *)v2 + 8LL);
    if ( v4 == sub_8D5FA0 )
      operator delete(v2, 0x18u);
    else
      v4(v2);
  }
  return nullptr;
}
