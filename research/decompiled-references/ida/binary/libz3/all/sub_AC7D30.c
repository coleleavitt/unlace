__int64 __fastcall sub_AC7D30(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+0h] [rbp-38h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  v8 = *(_QWORD *)(a1 + 8);
  v10[2] = a1;
  v10[1] = v8;
  v10[3] = 0;
  v10[0] = &off_1C61148;
  v10[4] = a1 + 72;
  v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) + 232LL);
  return sub_1352AB0((unsigned int)v10, a4, a2, a3, a5, a6, (unsigned int)&off_1C61148, v8);
}

