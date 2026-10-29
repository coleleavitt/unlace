unsigned __int64 __fastcall sub_61F570(__int64 a1)
{
  __int64 v1; // rsi
  _DWORD *v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v8; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v9; // [rsp+1008h] [rbp-20h]

  v1 = 4096;
  v2 = *(_DWORD **)(a1 + 1472);
  v9 = __readfsqword(0x28u);
  v3 = getsysfile(&v8, 4096, "ida32.int", 0);
  if ( (unsigned int)sub_7970F0(v3) || (v1 = v3, v6 = sub_79ADB0(a1, v3, 10, 0), (*v2 = v6) == 0) )
    sub_384000(1245, v1, v4, v5);
  return v9 - __readfsqword(0x28u);
}

