unsigned __int64 __fastcall sub_3EB180(__int64 *a1, int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // r15d
  __int64 v7; // rax
  _QWORD v9[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v10[2]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v11[6]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( a3 )
  {
    v4 = a3;
    do
    {
      v5 = round_down_power2(v4);
      v11[2] = a2;
      v6 = v5;
      v7 = *a1;
      v11[0] = 1;
      v10[0] = 0xFFFFFFFF00000000LL;
      v9[0] = 0xFFFFFFFF00000000LL;
      v11[1] = v6;
      v10[1] = 0;
      v9[1] = 0;
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, _DWORD *, _QWORD))(v7 + 64))(
        a1,
        61,
        v9,
        v10,
        v11,
        0);
      a2 += v6;
      sub_1166E0((__int64)v9);
      sub_1166E0((__int64)v10);
      sub_1166E0((__int64)v11);
      v4 -= v6;
    }
    while ( v4 );
  }
  return v12 - __readfsqword(0x28u);
}
