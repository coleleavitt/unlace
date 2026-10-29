__int64 __fastcall sub_863ED0(__int64 (__fastcall ***a1)(), _BYTE *a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned int v8; // ebx
  _QWORD v10[2]; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v11; // [rsp+10h] [rbp-78h] BYREF
  char v12; // [rsp+14h] [rbp-74h]

  v10[0] = a1;
  v6 = sub_25E8DD0("EvaluateAsBooleanCondition", 0x1Au);
  v12 &= ~1u;
  LOWORD(v10[0]) = 0;
  v10[1] = 0;
  v11 = 0;
  v8 = sub_863720(a1, (__int64)v10, a3, a4);
  if ( (_BYTE)v8 )
    v8 = sub_81FDC0((__int64)&v11, a2, v7);
  if ( v11 > 1 )
    sub_69F740((__int64)&v11);
  if ( v6 )
    sub_25EA250(v6);
  return v8;
}

