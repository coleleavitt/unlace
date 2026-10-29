__int64 __fastcall sub_6180E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  int v7; // eax
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  int v10; // [rsp+8h] [rbp-20h]
  __int64 v11; // [rsp+10h] [rbp-18h]
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a1 + 1480);
  v9 = a1;
  if ( a1 )
    v10 = *(_DWORD *)(a1 + 1332);
  else
    v10 = -1;
  v11 = a1 + 552;
  v7 = sub_614CE0((__int64)&v9, (__int64)&off_2B0B420, 0, a4, a5, a6);
  return sub_3B90A0(v6, v7);
}

