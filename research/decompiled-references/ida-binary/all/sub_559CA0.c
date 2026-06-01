_BOOL8 __fastcall sub_559CA0(__int64 a1)
{
  int v1; // r9d
  double v2; // xmm0_8
  int v3; // eax
  _BOOL4 v4; // ebp
  char *v6; // [rsp+0h] [rbp-8h] BYREF
  __int128 vars0; // [rsp+8h] [rbp+0h]
  _QWORD vars18[143]; // [rsp+20h] [rbp+18h] BYREF

  vars18[139] = __readfsqword(0x28u);
  v6 = nullptr;
  vars0 = 0;
  v6 = (char *)qvector_reserve(&v6, 0, 16, 1);
  *(_QWORD *)&vars0 = 16;
  strcpy(v6, "License manager");
  sub_552C60((__int64)vars18, (__int64)&v6, a1);
  if ( v6 )
  {
    *(_QWORD *)&vars0 = 0;
    qfree(v6, (const char *)&v6);
  }
  v2 = callui(203, 0, (unsigned int)vars18, (unsigned int)&v6, (unsigned int)&callui, v1, 0, 0, 0);
  v4 = v3 != -1;
  if ( v6 )
  {
    *(_QWORD *)&vars0 = 0;
    qfree(v6, nullptr, v2);
  }
  liblicui::license_dialog_t__::vfunc_0(vars18, nullptr);
  return v4;
}
