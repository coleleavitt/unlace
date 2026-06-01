__int64 __fastcall sub_C16A00(__int64 *a1, void *a2)
{
  unsigned int v2; // ebx
  void *v4; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-10h]
  char v6; // [rsp+Ch] [rbp-Ch]

  v4 = a2;
  v5 = 64;
  v6 = 0;
  LOBYTE(v2) = (int)sub_98E2D0(a1, (__int64 *)&v4) <= 0;
  if ( v5 > 0x40 && v4 )
    operator delete[](v4);
  return v2;
}
