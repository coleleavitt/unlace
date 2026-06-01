__int64 __fastcall sub_1AF55B0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-18h] BYREF
  __int16 v6; // [rsp+8h] [rbp-10h]
  char v7; // [rsp+Ah] [rbp-Eh]

  if ( !a3 )
    return 1;
  v3 = *a1;
  v6 = 256;
  v7 = 0;
  v5 = off_2C66CF8;
  return sub_1BF9B70(v3, a2, a3, &v5);
}
