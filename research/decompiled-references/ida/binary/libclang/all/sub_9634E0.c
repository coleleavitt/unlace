__int64 __fastcall sub_9634E0(_QWORD *a1, __int64 a2, unsigned __int64 *a3, void **a4)
{
  unsigned int v7; // r12d
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int8 **v12; // rax
  void *v13; // rdx
  _QWORD **v14; // rdi
  __int64 (*v15)(void); // rax
  char v16; // cl
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 **v19; // [rsp+8h] [rbp-40h] BYREF
  void *v20; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-30h]
  char v22; // [rsp+1Ch] [rbp-2Ch]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    *a4 = (void *)((unsigned __int64)*a4 & 0x3F);
    goto LABEL_3;
  }
  if ( (__int64)*a4 >= 0 )
  {
LABEL_3:
    v7 = sub_954C60((__int64)a1, a2, a3, a4, 0x40u);
    if ( (_BYTE)v7 )
    {
      v8 = *a4;
      v9 = *a3;
      if ( (__int64)*a4 > 63 )
      {
        v10 = 0;
        if ( v9 >= 0 )
        {
          if ( v9 )
          {
            _BitScanReverse64((unsigned __int64 *)&v9, v9);
            LODWORD(v17) = v9 ^ 0x3F;
            v16 = v17;
            v17 = (int)v17;
          }
          else
          {
            v17 = 64;
            v16 = 64;
          }
          *a4 = (void *)v17;
          v10 = *a3 << v16;
        }
      }
      else
      {
        v10 = v9 << (char)v8;
        if ( v9 < 0 )
        {
          v10 = v9 << (char)v8;
          if ( v9 == 0x8000000000000000LL )
            v10 = 0;
        }
      }
      *(_QWORD *)sub_A1A4E0(a1[23], 8) = v10;
    }
    return v7;
  }
  v18 = sub_A16CE0(a1[25], a2);
  v12 = (unsigned __int8 **)sub_A2E1B0(a1, &v18, 2242, 0);
  v13 = *a4;
  v22 = 0;
  v19 = v12;
  v21 = 64;
  v20 = v13;
  if ( v12 )
  {
    sub_8DF340(&v19, (__int64)&v20);
    if ( v21 > 0x40 )
    {
      if ( v20 )
        operator delete[](v20);
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
  *a4 = (void *)-(__int64)*a4;
  return (unsigned int)sub_963290((__int64)a1, a2, (__int64 *)a3, (__int64 *)a4);
}

