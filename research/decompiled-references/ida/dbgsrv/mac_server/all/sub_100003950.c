/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100003950
// Address: 0x0000000100003950

//----- (0000000100003950) ----------------------------------------------------
bool __fastcall sub_100003950(_QWORD *a1, __int64 a2, double a3, double a4)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  double v6; // xmm0_8
  int v8; // [rsp+4h] [rbp-3Ch] BYREF
  __int64 v9; // [rsp+8h] [rbp-38h] BYREF
  int v10; // [rsp+14h] [rbp-2Ch] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v5 = a1[121];
  if ( v4 == v5 )
  {
    sub_100060FA0((__int64)a1, "dyld bpt, ea=%a\n", a3);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, int *, int *, __int64 *))(*a1 + 696LL))(
           a1,
           *(unsigned int *)(a2 + 4),
           &v8,
           &v10,
           &v9) )
    {
      sub_100060FA0((__int64)a1, "notify args: mode=%d num_info=%d info_array=%a\n", v8, v10, a3);
      if ( v8 == 3 )
      {
        sub_100060FA0((__int64)a1, "detected DYLD_IMAGE_DYLD_MOVED, reinitializing dyld...\n");
        sub_100003A50((__int64)a1);
        sub_100003D20((__int64)a1, a3);
      }
    }
    v6 = (*(double (__fastcall **)(_QWORD *, __int64))(*a1 + 664LL))(a1, a2);
    sub_100003FF0((__int64)a1, v6, a4);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 168LL))(a1, a2);
  }
  return v4 == v5;
}
