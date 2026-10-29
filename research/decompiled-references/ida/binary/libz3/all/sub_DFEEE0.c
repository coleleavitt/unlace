__int64 __fastcall sub_DFEEE0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *exception; // rbx
  __int64 v4; // rax
  unsigned int v5; // r12d
  bool v6; // zf

  if ( *(_QWORD *)(a1 + 248) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "the logic has already been set");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v4 = *(_QWORD *)(a1 + 760);
  if ( v4 && *(_DWORD *)(v4 - 4) && *(_BYTE *)(a1 + 240) )
  {
    v2 = __cxa_allocate_exception(0x30u);
    sub_305660(v2, "logic must be set before initialization");
    __cxa_throw(v2, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v5 = sub_E3B030((int)a2);
  if ( (_BYTE)v5 )
  {
    v6 = *(_QWORD *)(a1 + 864) == 0;
    *(_QWORD *)(a1 + 248) = *a2;
    if ( !v6 )
      sub_DFED30((_QWORD *)a1);
    if ( (unsigned __int8)sub_E39D20((int)a2) )
      *(_BYTE *)(a1 + 272) = 1;
  }
  return v5;
}

