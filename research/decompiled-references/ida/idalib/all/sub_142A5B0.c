__int64 __fastcall sub_142A5B0(_QWORD *a1, unsigned int a2, int *a3)
{
  const char *v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned int v7[4]; // [rsp+0h] [rbp-68h] BYREF
  __int16 v8; // [rsp+10h] [rbp-58h]

  v4 = sub_1020040(a1[11], *a3, nullptr);
  if ( v5 == 10 && *(_QWORD *)v4 == 0x692D746C6975623CLL && *((_WORD *)v4 + 4) == 15982 )
  {
    sub_142A3D0(a1, a2, (__int64)a3, 0, 0, 0);
    do
      result = sub_14634E0(a1, v7);
    while ( v8 != 68 );
  }
  else
  {
    sub_FC70B0((__int64)v7, a1[6], *a3, 1288);
    sub_AEA040((__int64)v7);
    return sub_141A820((__int64)a1, v7);
  }
  return result;
}
