__int64 __fastcall sub_969100(_QWORD *a1, __int64 a2, char *a3, char *a4)
{
  __int64 v7; // rdx
  char v8; // al
  unsigned int v9; // r12d
  char v10; // cl
  char v11; // al
  int v12; // r14d
  unsigned __int8 **v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD **v16; // rdi
  __int64 (*v17)(void); // rax
  int v18; // ecx
  unsigned int v19; // eax
  char v20; // dl
  int v21; // edx
  int v22; // edx
  __int64 v23; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 **v24; // [rsp+8h] [rbp-40h] BYREF
  void *v25; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-30h]
  char v27; // [rsp+1Ch] [rbp-2Ch]

  v7 = sub_A2CB40(a1);
  v8 = *a4;
  if ( (*(_BYTE *)(v7 + 47) & 0x20) != 0 )
  {
    *a4 = v8 & 7;
    goto LABEL_3;
  }
  if ( v8 >= 0 )
  {
LABEL_3:
    v9 = sub_9517C0((__int64)a1, a2, a3, a4, 8u);
    if ( !(_BYTE)v9 )
      return v9;
    v10 = *a4;
    v11 = *a3;
    if ( *a4 <= 7 )
    {
      v12 = v11 << v10;
      if ( v11 < 0 )
      {
        LOBYTE(v12) = 0;
        if ( v11 != (char)0x80 )
          v12 = -(-v11 << v10);
      }
      goto LABEL_6;
    }
    LOBYTE(v12) = 0;
    if ( v11 < 0 )
    {
LABEL_6:
      *(_BYTE *)sub_A1A4E0(a1[23], 8) = v12;
      return v9;
    }
    if ( v11 )
    {
      v18 = v11;
      v19 = v11 >> 4;
      if ( !v19 )
      {
        v21 = v18;
        v19 = v18;
        LOBYTE(v18) = 6;
        v22 = v21 >> 2;
        if ( v22 )
        {
          v19 = v22;
          LOBYTE(v18) = 4;
        }
        goto LABEL_25;
      }
      v18 >>= 6;
      v20 = 1;
      if ( !v18 )
      {
        LOBYTE(v18) = 2;
LABEL_25:
        if ( !(v19 >> 1) )
          LOBYTE(v18) = v18 | 1;
        v20 = v18;
      }
    }
    else
    {
      LOBYTE(v18) = 8;
      v20 = 8;
    }
    *a4 = v20;
    v12 = (unsigned __int8)*a3 << v18;
    goto LABEL_6;
  }
  v23 = sub_A16CE0(a1[25], a2);
  v14 = (unsigned __int8 **)sub_A2E1B0(a1, &v23, 2242, 0);
  v15 = (unsigned __int8)*a4;
  v27 = 0;
  v24 = v14;
  v26 = 8;
  v25 = (void *)v15;
  if ( v14 )
  {
    sub_8DF340(&v24, (__int64)&v25);
    if ( v26 > 0x40 )
    {
      if ( v25 )
        operator delete[](v25);
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
  return (unsigned int)sub_968EB0((__int64)a1, a2, a3, a4);
}

