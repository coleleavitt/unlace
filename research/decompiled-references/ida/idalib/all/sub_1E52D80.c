__int64 __fastcall sub_1E52D80(
        __int64 a1,
        int *a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 result; // rax
  unsigned int v12; // ebp
  __int64 v13; // r9
  void *v14; // r14
  __int64 v15; // r13
  __int64 v16; // rsi
  unsigned __int8 v17; // [rsp+Fh] [rbp-79h]
  __int64 (__fastcall **v18)(); // [rsp+10h] [rbp-78h] BYREF
  int v19; // [rsp+18h] [rbp-70h]
  void **p_ptr; // [rsp+20h] [rbp-68h]
  char v21; // [rsp+28h] [rbp-60h]
  int v22; // [rsp+2Ch] [rbp-5Ch]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-50h]
  _BYTE v25[72]; // [rsp+40h] [rbp-48h] BYREF

  if ( (a8 & 0x7FFFFFFF) == 0 )
    return 0;
  v12 = (unsigned int)a2;
  if ( !(unsigned __int8)sub_F1D5E0((__int64)&a8) )
    return 0;
  v21 = 0;
  p_ptr = &ptr;
  ptr = v25;
  v24 = 0x200000000LL;
  v18 = off_2C6ECE0;
  v22 = -1;
  v19 = 16842752;
  if ( !sub_F1D570((__int64)&a8) )
  {
    a2 = &a8;
    sub_BC86F0((__int64 *)&v18, (__int64)&a8);
  }
  v14 = ptr;
  v15 = (unsigned int)v24;
  if ( ((a8 + 2147483642) & 0x7FFFFFFFu) <= 1 )
    v16 = *(unsigned int *)((a11 & 0xFFFFFFFFFFFFFFFCLL) + 16);
  else
    v16 = (unsigned int)sub_F1E510((__int64)&a8, (__int64)a2, a3);
  result = sub_1E50B50(a1, v16, v12, (__int64)v14, v15, v13);
  if ( ptr != v25 )
  {
    v17 = result;
    free(ptr);
    return v17;
  }
  return result;
}
