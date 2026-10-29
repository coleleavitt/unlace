__int64 __fastcall sub_9668F0(_QWORD *a1, __int64 a2, __int16 *a3, void **a4)
{
  unsigned int v7; // r12d
  void *v8; // rcx
  unsigned int v9; // eax
  int v10; // r14d
  unsigned __int8 **v12; // rax
  void *v13; // rdx
  _QWORD **v14; // rdi
  __int64 (*v15)(void); // rax
  __int16 v16; // cx
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 **v22; // [rsp+8h] [rbp-40h] BYREF
  void *v23; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-30h]
  char v25; // [rsp+1Ch] [rbp-2Ch]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    *a4 = (void *)((unsigned __int64)*a4 & 0xF);
    goto LABEL_3;
  }
  if ( (__int64)*a4 >= 0 )
  {
LABEL_3:
    v7 = sub_952FF0((__int64)a1, a2, a3, a4, 0x10u);
    if ( !(_BYTE)v7 )
      return v7;
    v8 = *a4;
    LOWORD(v9) = *a3;
    if ( (__int64)*a4 <= 15 )
    {
      v10 = (__int16)v9 << (char)v8;
      if ( (v9 & 0x8000u) != 0 )
      {
        LOWORD(v10) = 0;
        if ( (_WORD)v9 != 0x8000 )
          v10 = -(-(__int16)v9 << (char)v8);
      }
      goto LABEL_6;
    }
    LOWORD(v10) = 0;
    if ( (v9 & 0x8000u) != 0 )
    {
LABEL_6:
      *(_WORD *)sub_A1A4E0(a1[23], 8) = v10;
      return v7;
    }
    if ( !(_WORD)v9 )
    {
      LOBYTE(v19) = 16;
      v20 = 16;
      goto LABEL_30;
    }
    v16 = SBYTE1(v9);
    v17 = (__int16)v9;
    if ( BYTE1(v9) )
    {
      v9 = (__int16)v9 >> 12;
      if ( v17 >> 12 )
      {
        v19 = 0;
        v9 = (unsigned __int16)v9;
        if ( (unsigned int)v17 >> 14 )
          goto LABEL_32;
        goto LABEL_33;
      }
      LOWORD(v9) = v16;
      v18 = 0;
    }
    else
    {
      if ( (int)(unsigned __int8)v9 >> 4 )
      {
        LOWORD(v9) = (int)(unsigned __int8)v9 >> 4;
        v19 = 8;
LABEL_26:
        v9 = (unsigned __int16)v9;
        if ( (int)(unsigned __int16)v9 >> 2 )
        {
          v9 = (int)(unsigned __int16)v9 >> 2;
          goto LABEL_28;
        }
LABEL_33:
        v19 |= 2u;
LABEL_28:
        if ( v9 >> 1 )
        {
LABEL_29:
          v20 = v19;
LABEL_30:
          *a4 = (void *)v20;
          v10 = (unsigned __int16)*a3 << v19;
          goto LABEL_6;
        }
LABEL_32:
        v19 |= 1u;
        goto LABEL_29;
      }
      v18 = 8;
    }
    v19 = v18 | 4;
    goto LABEL_26;
  }
  v21 = sub_A16CE0(a1[25], a2);
  v12 = (unsigned __int8 **)sub_A2E1B0(a1, &v21, 2242, 0);
  v13 = *a4;
  v25 = 0;
  v22 = v12;
  v24 = 64;
  v23 = v13;
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
  *a4 = (void *)-(__int64)*a4;
  return (unsigned int)sub_9666A0((__int64)a1, a2, a3, (__int64 *)a4);
}

