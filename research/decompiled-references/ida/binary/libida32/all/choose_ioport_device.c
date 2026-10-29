__int64 __fastcall choose_ioport_device(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rcx
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[3] = __readfsqword(0x28u);
  v3 = nullptr;
  v5[1] = a3;
  v5[0] = off_2B12ED0;
  if ( a3 )
    v3 = v5;
  return choose_ioport_device2(a1, a2, v3);
}

