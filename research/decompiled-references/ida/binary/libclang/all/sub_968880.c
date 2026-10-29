__int64 __fastcall sub_968880(_QWORD *a1, __int64 a2, char *a3, int *a4)
{
  unsigned int v7; // r12d
  int v8; // ecx
  char v9; // al
  int v10; // r14d
  unsigned __int8 **v12; // rax
  unsigned __int64 v13; // rcx
  _QWORD **v14; // rdi
  __int64 (*v15)(void); // rax
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // edx
  __int64 v20; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 **v21; // [rsp+8h] [rbp-40h] BYREF
  void *v22; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-30h]
  char v24; // [rsp+1Ch] [rbp-2Ch]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 7u;
    goto LABEL_3;
  }
  if ( *a4 >= 0 )
  {
LABEL_3:
    v7 = sub_951D40((__int64)a1, a2, a3, a4, 8u);
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
    v16 = 8;
    if ( v9 )
    {
      v17 = v9;
      v18 = v9 >> 4;
      if ( !v18 )
      {
        v18 = v17;
        if ( v17 >> 2 )
        {
          v18 = v17 >> 2;
          v19 = 4;
        }
        else
        {
          v19 = 6;
        }
LABEL_24:
        v16 = v19 | 1;
        if ( v18 >> 1 )
          v16 = v19;
        goto LABEL_26;
      }
      v16 = v17 >> 6;
      v19 = 2;
      if ( !v16 )
        goto LABEL_24;
    }
LABEL_26:
    *a4 = v16;
    v10 = (unsigned __int8)*a3 << v16;
    goto LABEL_6;
  }
  v20 = sub_A16CE0(a1[25], a2);
  v12 = (unsigned __int8 **)sub_A2E1B0(a1, &v20, 2242, 0);
  v13 = (unsigned int)*a4;
  v24 = 0;
  v21 = v12;
  v23 = 32;
  v22 = (void *)v13;
  if ( v12 )
  {
    sub_8DF340(&v21, (__int64)&v22);
    if ( v23 > 0x40 )
    {
      if ( v22 )
        operator delete[](v22);
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
  return (unsigned int)sub_968630((__int64)a1, a2, a3, a4);
}

