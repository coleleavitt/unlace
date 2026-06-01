__int64 __fastcall sub_409860(int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned __int8 a5)
{
  __int64 fixup_handler; // rax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD *); // rax
  _QWORD v13[11]; // [rsp+0h] [rbp-58h] BYREF

  v13[3] = __readfsqword(0x28u);
  v13[0] = 0;
  v13[1] = 0xFFFFFFFF00000000LL;
  v13[2] = 0;
  if ( !(unsigned __int8)get_fixup(v13, a3) )
    return 0;
  if ( (v13[0] & 0x400000000LL) != 0 )
    return 0;
  fixup_handler = get_fixup_handler(LOWORD(v13[0]));
  v11 = fixup_handler;
  if ( !fixup_handler )
    return 0;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD *))(fixup_handler + 32);
  if ( v12 )
    return v12(v11, a2, a3, a4, a5, v13);
  else
    return sub_408920(a1, (__int64)v13);
}

