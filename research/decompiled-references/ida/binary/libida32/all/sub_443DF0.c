void __fastcall __noreturn sub_443DF0(__int64 a1, _DWORD *a2)
{
  _QWORD *v2; // r14
  unsigned int v3; // eax
  _QWORD v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD **)(a1 + 1480);
  v4[1] = __readfsqword(0x28u);
  v4[0] = 0;
  sub_6141A0(*v2, 26, v4, 8);
  v3 = a2[1] - *a2;
  if ( v3 < HIDWORD(v4[0]) - LODWORD(v4[0]) )
    sub_615AB0(*v2, 28, v3 + LODWORD(v4[0]));
  sub_443D70();
}

