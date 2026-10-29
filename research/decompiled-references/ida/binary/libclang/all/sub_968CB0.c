__int64 __fastcall sub_968CB0(_QWORD *a1, __int64 a2, char *a3, __int16 *a4)
{
  unsigned int v7; // r12d
  __int16 v8; // cx
  char v9; // al
  int v10; // r14d
  unsigned __int8 **v12; // rax
  unsigned __int64 v13; // rdx
  _QWORD **v14; // rdi
  __int64 (*v15)(void); // rax
  int v16; // ecx
  unsigned int v17; // eax
  __int16 v18; // dx
  int v19; // edx
  int v20; // edx
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 **v22; // [rsp+8h] [rbp-40h] BYREF
  void *v23; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-30h]
  char v25; // [rsp+1Ch] [rbp-2Ch]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 7u;
    goto LABEL_3;
  }
  if ( *a4 >= 0 )
  {
LABEL_3:
    v7 = sub_951A80((__int64)a1, a2, a3, a4, 8u);
    if ( !(_BYTE)v7 )
      return v7;
    v8 = *a4;
    v9 = *a3;
    if ( *a4 <= 7 )
    {
      v10 = v9 << v8;
      if ( v9 < 0 )
      {
        LOBYTE(v10) = 0;
        if ( v9 != (char)0x80 )
          v10 = -(-v9 << v8);
      }
      goto LABEL_6;
    }
    LOBYTE(v10) = 0;
    if ( v9 < 0 )
    {
LABEL_6:
      *(_BYTE *)sub_A1A4E0(a1[23], 8) = v10;
      return v7;
    }
    if ( v9 )
    {
      v16 = v9;
      v17 = v9 >> 4;
      if ( !v17 )
      {
        v19 = v16;
        v17 = v16;
        LOWORD(v16) = 6;
        v20 = v19 >> 2;
        if ( v20 )
        {
          v17 = v20;
          LOWORD(v16) = 4;
        }
        goto LABEL_25;
      }
      v16 >>= 6;
      v18 = 1;
      if ( !v16 )
      {
        LOWORD(v16) = 2;
LABEL_25:
        if ( !(v17 >> 1) )
          LOWORD(v16) = v16 | 1;
        v18 = v16;
      }
    }
    else
    {
      LOBYTE(v16) = 8;
      v18 = 8;
    }
    *a4 = v18;
    v10 = (unsigned __int8)*a3 << v16;
    goto LABEL_6;
  }
  v21 = sub_A16CE0(a1[25], a2);
  v12 = (unsigned __int8 **)sub_A2E1B0(a1, &v21, 2242, 0);
  v13 = (unsigned __int16)*a4;
  v25 = 0;
  v22 = v12;
  v24 = 16;
  v23 = (void *)v13;
  if ( v12 )
  {
    sub_8DF340(&v22, (__int64)&v23);
    if ( v24 > 0x40 )
    {
      if ( v23 )
        operator delete[](v23);
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
  return (unsigned int)sub_968A60((__int64)a1, a2, a3, a4);
}

