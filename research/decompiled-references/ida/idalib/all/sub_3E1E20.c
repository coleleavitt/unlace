__int64 __fastcall sub_3E1E20(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  _QWORD *v4; // rdi
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  char v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v3 = *(_BYTE *)(a1 + 72) == 100;
  v6 = -1;
  v7 = 0;
  v4 = *(_QWORD **)(a2 + 1672);
  if ( v3 )
    return sub_40F780(v4, &v6);
  else
    return sub_3E1CA0(v4, (__int64)&v6, a3);
}
