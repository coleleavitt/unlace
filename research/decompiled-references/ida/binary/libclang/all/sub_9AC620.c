__int64 __fastcall sub_9AC620(__int64 a1, unsigned int a2)
{
  void *v2; // r12
  __int64 result; // rax
  void *v4; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-40h]
  void *v6; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v7; // [rsp+18h] [rbp-30h]

  v2 = (void *)*(unsigned __int8 *)sub_A1A5A0(a1, 8);
  sub_A1A5E0(a1, 8);
  v7 = 8;
  v6 = v2;
  sub_2587E20(&v4, &v6, a2);
  if ( v7 > 0x40 && v6 )
    operator delete[](v6);
  v7 = v5;
  if ( v5 > 0x40 )
  {
    sub_2585B30(&v6);
    if ( v5 > 0x40 && v4 )
      operator delete[](v4);
  }
  else
  {
    v6 = v4;
  }
  result = sub_A1A4E0(a1, 16);
  *(_DWORD *)(result + 8) = v7;
  *(_QWORD *)result = v6;
  return result;
}

