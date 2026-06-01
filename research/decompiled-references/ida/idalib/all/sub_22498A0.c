__int64 __fastcall sub_22498A0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+8h] [rbp-10h] BYREF

  v3 = (_QWORD *)(a1 + 96);
  *((_OWORD *)v3 - 4) = 0;
  *(v3 - 11) = 0;
  *(v3 - 10) = 0;
  *(v3 - 12) = off_2BEB2D0;
  *(v3 - 9) = 0;
  *(v3 - 2) = 0;
  *(v3 - 1) = 0;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  v3[9] = 0;
  *((_OWORD *)v3 - 3) = 0;
  *((_OWORD *)v3 - 2) = 0;
  v6 = a2;
  sub_2249750((__int64)v3, 0);
  *(_QWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  std::condition_variable::condition_variable((std::condition_variable *)(a1 + 216));
  std::condition_variable::condition_variable((std::condition_variable *)(a1 + 264));
  v4 = v6;
  *(_DWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 336) = 0;
  *(_BYTE *)(a1 + 344) = 1;
  *(_QWORD *)(a1 + 348) = v4;
  result = sub_2297870(&v6);
  *(_DWORD *)(a1 + 356) = result;
  return result;
}
