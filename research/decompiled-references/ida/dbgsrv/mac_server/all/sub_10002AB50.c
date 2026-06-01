/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002AB50
// Address: 0x000000010002AB50

//----- (000000010002AB50) ----------------------------------------------------
_BOOL8 __fastcall sub_10002AB50(__int64 *a1)
{
  const char *v1; // rsi
  unsigned __int16 v2; // ax
  int v3; // ecx
  _BOOL8 result; // rax
  __int64 v5; // rax
  int *v6; // r14
  int v7; // [rsp+4h] [rbp-1Ch] BYREF

  if ( a1[6] )
    v1 = (const char *)a1[5];
  else
    v1 = _s1;
  v2 = sub_10002A980(a1, v1, &v7);
  if ( (unsigned int)(v7 - 1) > 2 )
  {
    v3 = set_qerrno();
    result = 1;
    if ( v3 )
      return result;
  }
  else
  {
    sub_100026BD0((__int64)a1, 0xDBC2C0u >> (8 * (v7 - 1)), v2);
  }
  sub_10002AC50((__int64)a1);
  v5 = a1[44];
  v6 = *(int **)(a1[43] + 8 * v5 - 8);
  if ( v5 )
    a1[44] = v5 - 1;
  ((void (__fastcall *)(__int64 *, int *, _QWORD, _QWORD))loc_10002C5D0)(a1, v6, 0, 0);
  if ( v6 )
  {
    sub_10002AE90(v6);
    operator delete(v6);
  }
  return (unsigned int)set_qerrno() != 0;
}
