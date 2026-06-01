/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E8DB0
// Address: 0x00000000000E8DB0

//----- (00000000000E8DB0) ----------------------------------------------------
__int64 __fastcall sub_E8DB0(_QWORD *a1, _QWORD *a2)
{
  unsigned int (__fastcall *v3)(__int64, __int64, _QWORD, _QWORD *, _QWORD *, __int64); // r14
  __int64 v4; // r15
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // eax
  _BYTE v11[336]; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, _QWORD *, _QWORD *); // [rsp+150h] [rbp-68h]

  v3 = (unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD *, _QWORD *, __int64))a1[2];
  v4 = a1[3];
  while ( 1 )
  {
    v5 = sub_E891E(a2, (__int64)v11);
    v6 = v5;
    if ( v5 != 5 && v5 )
      return 2;
    v7 = 10;
    if ( v5 == 5 )
      v7 = 26;
    if ( v3(1, v7, *a1, a1, a2, v4) )
      return 2;
    if ( v6 == 5 )
      return v6;
    if ( v12 )
      break;
LABEL_9:
    sub_E88DB((__int64)a2, (__int64)v11, v8);
  }
  v9 = v12(1, 10, *a1, a1, a2);
  v6 = v9;
  if ( v9 != 7 )
  {
    if ( v9 != 8 )
      return 2;
    goto LABEL_9;
  }
  return v6;
}
// E8E2A: variable 'v8' is possibly undefined
