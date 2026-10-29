__int64 __fastcall sub_968430(_QWORD *a1, __int64 a2, char *a3, void **a4)
{
  unsigned int v7; // r12d
  void *v8; // rcx
  char v9; // al
  int v10; // r14d
  unsigned __int8 **v12; // rax
  void *v13; // rdx
  _QWORD **v14; // rdi
  __int64 (*v15)(void); // rax
  int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  int v20; // edx
  int v21; // edx
  __int64 v22; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 **v23; // [rsp+8h] [rbp-40h] BYREF
  void *v24; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+18h] [rbp-30h]
  char v26; // [rsp+1Ch] [rbp-2Ch]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    *a4 = (void *)((unsigned __int64)*a4 & 7);
    goto LABEL_3;
  }
  if ( (__int64)*a4 >= 0 )
  {
LABEL_3:
    v7 = sub_952000((__int64)a1, a2, a3, a4, 8u);
    if ( !(_BYTE)v7 )
      return v7;
    v8 = *a4;
    v9 = *a3;
    if ( (__int64)*a4 <= 7 )
    {
      v10 = v9 << (char)v8;
      if ( v9 < 0 )
      {
        LOBYTE(v10) = 0;
        if ( v9 != (char)0x80 )
          v10 = -(-v9 << (char)v8);
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
        v20 = v16;
        v17 = v16;
        v18 = 6;
        v21 = v20 >> 2;
        if ( v21 )
        {
          v17 = v21;
          v18 = 4;
        }
        goto LABEL_25;
      }
      v18 = v16 >> 6;
      v19 = 1;
      if ( !v18 )
      {
        v18 = 2;
LABEL_25:
        if ( !(v17 >> 1) )
          v18 |= 1u;
        v19 = v18;
      }
    }
    else
    {
      LOBYTE(v18) = 8;
      v19 = 8;
    }
    *a4 = (void *)v19;
    v10 = (unsigned __int8)*a3 << v18;
    goto LABEL_6;
  }
  v22 = sub_A16CE0(a1[25], a2);
  v12 = (unsigned __int8 **)sub_A2E1B0(a1, &v22, 2242, 0);
  v13 = *a4;
  v26 = 0;
  v23 = v12;
  v25 = 64;
  v24 = v13;
  if ( v12 )
  {
    sub_8DF340(&v23, (__int64)&v24);
    if ( v25 > 0x40 )
    {
      if ( v24 )
        operator delete[](v24);
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
  return (unsigned int)sub_9681E0((__int64)a1, a2, a3, (__int64 *)a4);
}

