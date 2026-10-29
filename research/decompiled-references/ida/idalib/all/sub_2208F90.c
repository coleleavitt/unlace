__int64 __fastcall sub_2208F90(__int64 a1, __int64 a2, __int64 *a3, bool *a4)
{
  const void *v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-30h]

  v8 = *(_DWORD *)(a2 + 8);
  if ( v8 > 0x40 )
    sub_2205510((__int64)&v7, (const void **)a2);
  else
    v7 = *(const void **)a2;
  sub_22059A0((unsigned __int64 *)&v7, a3);
  *(_DWORD *)(a1 + 8) = v8;
  *(_QWORD *)a1 = v7;
  *a4 = (int)sub_2205DB0((unsigned __int64 *)a1, (unsigned __int64 *)a3) < 0;
  return a1;
}
