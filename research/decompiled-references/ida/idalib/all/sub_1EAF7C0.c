__int64 *__fastcall sub_1EAF7C0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // edx
  __int64 v5; // rax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  char v7; // [rsp+8h] [rbp-20h]

  *(_QWORD *)(a2 + 16) = (a3 >> 3) & 0xFFFFFFFFFFFFFFF8LL;
  *(_DWORD *)(a2 + 32) = 0;
  v3 = a3 & 0x3F;
  if ( v3 )
  {
    sub_A0B360((__int64)&v6, a2, v3);
    if ( (v7 & 1) != 0 )
    {
      v5 = v6;
      v6 = 0;
      *a1 = v5;
    }
    else
    {
      *a1 = 0;
    }
    sub_A0AE70(&v6);
    return a1;
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}
