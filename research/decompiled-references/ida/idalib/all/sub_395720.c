__int64 __fastcall sub_395720(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // edx
  _BOOL8 (__fastcall *v8)(__int64, int); // rax
  char v10; // al

  v7 = a4;
  v8 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 24LL);
  if ( v8 == sub_3955B0 )
  {
    if ( a2 <= 1 && (debug & 0x200) == 0 )
      return 0;
LABEL_3:
    callui(23, a3, v7, (int)&callui, a5, a6);
  }
  v10 = ((__int64 (*)(void))v8)();
  v7 = a4;
  if ( v10 )
    goto LABEL_3;
  return 0;
}
