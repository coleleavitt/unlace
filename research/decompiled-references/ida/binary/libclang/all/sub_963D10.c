__int64 __fastcall sub_963D10(_QWORD *a1, __int64 a2, unsigned __int64 *a3, __int16 *a4)
{
  unsigned int v7; // r12d
  __int16 v8; // cx
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int8 **v12; // rax
  unsigned __int64 v13; // rdx
  _QWORD **v14; // rdi
  __int64 (*v15)(void); // rax
  unsigned __int64 v16; // rcx
  __int16 v17; // cx
  __int16 v18; // ax
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 **v20; // [rsp+8h] [rbp-40h] BYREF
  void *v21; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-30h]
  char v23; // [rsp+1Ch] [rbp-2Ch]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 0x3Fu;
    goto LABEL_3;
  }
  if ( *a4 >= 0 )
  {
LABEL_3:
    v7 = sub_954760((__int64)a1, a2, a3, a4, 0x40u);
    if ( (_BYTE)v7 )
    {
      v8 = *a4;
      v9 = *a3;
      if ( *a4 > 63 )
      {
        v10 = 0;
        if ( v9 >= 0 )
        {
          if ( v9 )
          {
            _BitScanReverse64(&v16, v9);
            v17 = v16 ^ 0x3F;
            v18 = v17;
          }
          else
          {
            LOBYTE(v17) = 64;
            v18 = 64;
          }
          *a4 = v18;
          v10 = *a3 << v17;
        }
      }
      else
      {
        v10 = v9 << v8;
        if ( v9 < 0 )
        {
          v10 = v9 << v8;
          if ( v9 == 0x8000000000000000LL )
            v10 = 0;
        }
      }
      *(_QWORD *)sub_A1A4E0(a1[23], 8) = v10;
    }
    return v7;
  }
  v19 = sub_A16CE0(a1[25], a2);
  v12 = (unsigned __int8 **)sub_A2E1B0(a1, &v19, 2242, 0);
  v13 = (unsigned __int16)*a4;
  v23 = 0;
  v20 = v12;
  v22 = 16;
  v21 = (void *)v13;
  if ( v12 )
  {
    sub_8DF340(&v20, (__int64)&v21);
    if ( v22 > 0x40 )
    {
      if ( v21 )
        operator delete[](v21);
    }
  }
  v14 = (_QWORD **)a1[3];
  v15 = (__int64 (*)(void))(*v14)[4];
  if ( (char *)v15 == (char *)sub_8D7FC0 )
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v14[3] + 32LL))(v14[3]);
  else
    v7 = v15();
  if ( !(_BYTE)v7 )
    return v7;
  *a4 = -*a4;
  return (unsigned int)sub_963AC0((__int64)a1, a2, (__int64 *)a3, a4);
}

