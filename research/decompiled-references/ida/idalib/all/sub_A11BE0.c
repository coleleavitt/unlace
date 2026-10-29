__int64 **__fastcall sub_A11BE0(__int64 **a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 *v5; // rbx
  _BYTE v9[25]; // [rsp+1Fh] [rbp-19h] BYREF

  v4 = *a2;
  *a2 = 0;
  v9[0] = 0;
  v5 = (__int64 *)operator new(8u);
  sub_A11580(v5, v4, a3, a4, v9);
  if ( v9[0] )
  {
    *a1 = nullptr;
    sub_A0A960((__int64 **)v5);
    operator delete(v5, 8u);
  }
  else
  {
    *a1 = v5;
  }
  return a1;
}
