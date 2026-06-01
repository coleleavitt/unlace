/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E574
// Address: 0x000000000008E574

//----- (000000000008E574) ----------------------------------------------------
__int64 __fastcall sub_8E574(__int64 a1, int a2, __int64 *a3, unsigned __int64 *a4, unsigned __int64 *a5)
{
  unsigned __int64 v10; // x1
  const char *v11; // x23
  unsigned __int8 *v12; // x8
  unsigned __int64 v14; // x1
  unsigned __int8 *v15; // x8
  int v18; // w24
  int v19; // w0
  int v20; // w22
  bool v21; // zf
  int v22; // w0
  int v23; // w25
  __int16 v24; // w0
  char v25; // w6
  __int64 (__fastcall **v26)(_QWORD, pthread_mutex_t *, __int64, char **, __int64 *, void **); // [xsp+8h] [xbp-68h] BYREF
  __int16 v27; // [xsp+10h] [xbp-60h]
  __int64 v28; // [xsp+18h] [xbp-58h]

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(a1 + 184) )
    sub_39FA0((__int64)"handle_server_ioctl(fn=%d, bufsize=%zu).\n", a2, a5[1] - *a5);
  if ( a2 == 16777218 )
  {
    v11 = (const char *)*a5;
    v14 = a5[1];
    v15 = (unsigned __int8 *)*a5;
    while ( (unsigned __int64)v15 < v14 )
    {
      if ( !*v15++ )
      {
        *a5 = (unsigned __int64)v15;
        goto LABEL_19;
      }
    }
    v11 = nullptr;
LABEL_19:
    v18 = unpack_dd(a5, v14);
    v22 = unpack_dd(a5, a5[1]);
    v23 = v22;
    if ( *(_BYTE *)(a1 + 184) )
      sub_39FA0((__int64)"file_path = %s; arch = %d; is_be = %d.\n", v11, v18, v22);
    v24 = unpack_dw(a5, a5[1]);
    v21 = v23 == 0;
    v26 = (__int64 (__fastcall **)(_QWORD, pthread_mutex_t *, __int64, char **, __int64 *, void **))&off_15E068;
    v27 = v24;
  }
  else
  {
    if ( a2 != 16777217 )
      return 0xFFFFFFFFLL;
    v11 = (const char *)*a5;
    v10 = a5[1];
    v12 = (unsigned __int8 *)*a5;
    while ( (unsigned __int64)v12 < v10 )
    {
      if ( !*v12++ )
      {
        *a5 = (unsigned __int64)v12;
        goto LABEL_15;
      }
    }
    v11 = nullptr;
LABEL_15:
    v18 = unpack_dd(a5, v10);
    v19 = unpack_dd(a5, a5[1]);
    v20 = v19;
    if ( *(_BYTE *)(a1 + 184) )
      sub_39FA0((__int64)"file_path = %s; arch = %d; is_be = %d.\n", v11, v18, v19);
    v21 = v20 == 0;
    v26 = (__int64 (__fastcall **)(_QWORD, pthread_mutex_t *, __int64, char **, __int64 *, void **))&off_15E050;
  }
  v25 = !v21;
  return sub_8E738(&v26, a1, a3, a4, v11, v18, v25);
}
// 15E050: using guessed type _UNKNOWN *off_15E050;
// 15E068: using guessed type _UNKNOWN *off_15E068;
