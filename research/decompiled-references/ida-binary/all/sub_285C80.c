__int128 *__fastcall sub_285C80(QT::QCoreApplication *a1, int a2, int a3)
{
  __int128 *result; // rax
  int v4; // [rsp+8h] [rbp-10h] BYREF
  int v5[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v5[0] = a2;
  v4 = a3;
  sub_176E70(a1);
  sub_2857B0((__int64)a1, v5, &v4, 0);
  result = (__int128 *)sub_284860((__int64)a1, v4);
  if ( !result )
    return &xmmword_8C95C0;
  return result;
}
