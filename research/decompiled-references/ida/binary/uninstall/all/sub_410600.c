__int64 __fastcall sub_410600(_DWORD *a1, int a2)
{
  int v2; // eax
  __int64 result; // rax
  _DWORD v4[22]; // [rsp+0h] [rbp-58h] BYREF

  v2 = a1[9];
  v4[13] = 1;
  v4[14] = 4;
  v4[9] = v2;
  v4[11] = a1[15];
  sub_410150(v4, a2);
  result = (unsigned int)(a1[17] + 7 * (v4[8] / 7) + 7 * a1[16] - 8);
  a1[8] = result;
  return result;
}

