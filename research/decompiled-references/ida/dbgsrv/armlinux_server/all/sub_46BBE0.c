/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BBE0
// Address: 0x000000000046BBE0

//----- (000000000046BBE0) ----------------------------------------------------
__int64 __fastcall sub_46BBE0(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int64 *a4, __int64 a5)
{
  int v6; // w22
  int v11; // w5
  char *v12; // x4
  bool v13; // zf
  __int64 (__fastcall **v14)(); // x0
  char v15; // w6
  int v16; // [xsp+48h] [xbp-28h] BYREF
  int v17; // [xsp+4Ch] [xbp-24h] BYREF
  char *v18; // [xsp+50h] [xbp-20h] BYREF
  __int64 (__fastcall **v19)(); // [xsp+58h] [xbp-18h] BYREF
  __int16 v20; // [xsp+60h] [xbp-10h]

  v6 = a2;
  if ( *(_BYTE *)(a1 + 184) )
    sub_40A690((int)"handle_server_ioctl(fn=%d, bufsize=%zu).\n", a2, *(_QWORD *)(a5 + 8) - *(_QWORD *)a5);
  if ( v6 == 16777217 )
  {
    sub_465A50(a1, (unsigned __int8 **)&v18, (unsigned int *)&v16, &v17, (unsigned __int8 **)a5);
    v11 = v16;
    v12 = v18;
    v14 = &off_51AF38;
    v13 = v17 == 0;
  }
  else
  {
    if ( v6 != 16777218 )
      return 0xFFFFFFFFLL;
    sub_465A50(a1, (unsigned __int8 **)&v18, (unsigned int *)&v16, &v17, (unsigned __int8 **)a5);
    v20 = sub_48E500((unsigned __int64 *)a5, *(_QWORD *)(a5 + 8));
    v11 = v16;
    v12 = v18;
    v13 = v17 == 0;
    v14 = &off_51AF20;
  }
  v19 = v14;
  v15 = !v13;
  return sub_46B538(
           (__int64 (__fastcall ***)(_QWORD, void **, __int64, __int64 *, void **, void **))&v19,
           a1,
           a3,
           a4,
           v12,
           v11,
           v15);
}
// 51AF20: using guessed type __int64 (__fastcall *off_51AF20)();
// 51AF38: using guessed type __int64 (__fastcall *off_51AF38)();
