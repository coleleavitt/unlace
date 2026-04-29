unsigned __int64 __fastcall sub_3EB1B0(__int64 a1, __int16 a2, __int16 a3)
{
  int v3; // r15d
  int v4; // r14d
  __int64 v5; // rax
  __int64 v7; // [rsp+10h] [rbp-68h] BYREF
  int v8; // [rsp+18h] [rbp-60h]
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  int v10; // [rsp+28h] [rbp-50h]
  unsigned __int64 v11; // [rsp+38h] [rbp-40h]

  v3 = (unsigned __int16)(4 * a3);
  v4 = 0;
  v11 = __readfsqword(0x28u);
  do
  {
    v5 = *(_QWORD *)(a1 + 832);
    v7 = 0x100000001LL;
    v9 = 0x100000001LL;
    LODWORD(v5) = *(_DWORD *)(v5 + 472);
    v8 = v4 + v5 + v3;
    v10 = v4 + (unsigned __int16)(4 * a2) + (_DWORD)v5;
    sub_1D2850(a1, 4, (unsigned __int8 *)&v7, nullptr, (unsigned __int8 *)&v9);
    ++v4;
    sub_119360((__int64)&v9);
    sub_119360((__int64)&v7);
  }
  while ( v4 != 4 );
  return v11 - __readfsqword(0x28u);
}
