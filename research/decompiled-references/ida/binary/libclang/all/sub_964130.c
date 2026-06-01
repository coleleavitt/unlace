__int64 __fastcall sub_964130(_QWORD *a1, __int64 a2, unsigned __int64 *a3, char *a4)
{
  __int64 v7; // rdx
  char v8; // al
  unsigned int v9; // r12d
  char v10; // cl
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned __int8 **v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD **v16; // rdi
  __int64 (*v17)(void); // rax
  unsigned __int64 v18; // rcx
  char v19; // cl
  char v20; // al
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 **v22; // [rsp+8h] [rbp-40h] BYREF
  void *v23; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-30h]
  char v25; // [rsp+1Ch] [rbp-2Ch]

  v7 = sub_A2CB40(a1);
  v8 = *a4;
  if ( (*(_BYTE *)(v7 + 47) & 0x20) != 0 )
  {
    *a4 = v8 & 0x3F;
    goto LABEL_3;
  }
  if ( v8 >= 0 )
  {
LABEL_3:
    v9 = sub_9544E0((__int64)a1, a2, a3, a4, 0x40u);
    if ( (_BYTE)v9 )
    {
      v10 = *a4;
      v11 = *a3;
      if ( *a4 > 63 )
      {
        v12 = 0;
        if ( v11 >= 0 )
        {
          if ( v11 )
          {
            _BitScanReverse64(&v18, v11);
            v19 = v18 ^ 0x3F;
            v20 = v19;
          }
          else
          {
            v19 = 64;
            v20 = 64;
          }
          *a4 = v20;
          v12 = *a3 << v19;
        }
      }
      else
      {
        v12 = v11 << v10;
        if ( v11 < 0 )
        {
          v12 = v11 << v10;
          if ( v11 == 0x8000000000000000LL )
            v12 = 0;
        }
      }
      *(_QWORD *)sub_A1A4E0(a1[23], 8) = v12;
    }
    return v9;
  }
  v21 = sub_A16CE0(a1[25], a2);
  v14 = (unsigned __int8 **)sub_A2E1B0(a1, &v21, 2242, 0);
  v15 = (unsigned __int8)*a4;
  v25 = 0;
  v22 = v14;
  v24 = 8;
  v23 = (void *)v15;
  if ( v14 )
  {
    sub_8DF340(&v22, (__int64)&v23);
    if ( v24 > 0x40 )
    {
      if ( v23 )
        operator delete[](v23);
    }
  }
  v16 = (_QWORD **)a1[3];
  v17 = (__int64 (*)(void))(*v16)[4];
  if ( (char *)v17 == (char *)sub_8D7FC0 )
    v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v16[3] + 32LL))(v16[3]);
  else
    v9 = v17();
  if ( !(_BYTE)v9 )
    return v9;
  *a4 = -*a4;
  return (unsigned int)sub_963EE0((__int64)a1, a2, (__int64 *)a3, a4);
}

