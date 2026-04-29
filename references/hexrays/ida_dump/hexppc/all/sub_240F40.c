_QWORD *__fastcall sub_240F40(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  *a1 = 0;
  if ( *(_DWORD *)(a2 + 8) == 57 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    v4[0] = 0;
    v4[0] = get_tinfo_property(*(_QWORD *)(v3 + 48), 10);
    copy_tinfo_t(a1, v4);
    clear_tinfo_t(v4);
  }
  return a1;
}
