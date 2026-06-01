__int64 __fastcall sub_C37040(__int64 **a1, int a2, __int64 a3)
{
  unsigned __int8 v3; // bl
  __int64 v4; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 result; // rax
  unsigned __int8 v9; // [rsp+Fh] [rbp-B9h]
  __int64 v10[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v11[3]; // [rsp+20h] [rbp-A8h] BYREF
  char v12; // [rsp+38h] [rbp-90h]
  __int64 v13; // [rsp+48h] [rbp-80h]
  void *ptr; // [rsp+50h] [rbp-78h]
  __int64 v15; // [rsp+58h] [rbp-70h]
  _BYTE v16[104]; // [rsp+60h] [rbp-68h] BYREF

  v4 = (unsigned int)(a2 - 1);
  if ( (unsigned int)v4 <= 3 )
    v3 = byte_23EC18C[v4];
  v6 = sub_B62340((__int64 *)(*(_QWORD *)(**a1 + 16) + 22888LL), *(_QWORD *)(a3 + 8));
  if ( *(_BYTE *)(v6 + 112) != 2 && !v3 )
    v3 = 1;
  memset(v11, 0, sizeof(v11));
  v7 = *((_QWORD *)sub_B614A0(v6, v3) + 1);
  ptr = v16;
  v15 = 0x800000000LL;
  v12 |= 1u;
  v13 = 0;
  v16[65] = 0;
  sub_A4F2A0((__int64)v10, v7, 0, 0);
  sub_C24210((__int64)v11, v10[0], (__int64 *)v10[1], 0);
  result = sub_C36570(**a1, (_DWORD *)a3, *(_QWORD *)(a3 + 8), (__int64)v11, (*a1)[2], 0);
  if ( (_BYTE)result )
    result = sub_C2BA60(**a1, *(_DWORD *)(a3 + 4), *(_QWORD *)(a3 + 8), (unsigned int *)(*a1)[2], 0);
  if ( ptr != v16 )
  {
    v9 = result;
    free(ptr);
    return v9;
  }
  return result;
}
