__int64 __fastcall sub_967620(_QWORD *a1, __int64 a2, __int16 *a3, char *a4)
{
  __int64 v7; // rdx
  char v8; // al
  unsigned int v9; // r12d
  char v10; // cl
  unsigned int v11; // eax
  int v12; // r14d
  unsigned __int8 **v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD **v16; // rdi
  __int64 (*v17)(void); // rax
  __int16 v18; // cx
  int v19; // edx
  char v20; // cl
  char v21; // cl
  char v22; // al
  __int64 v23; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 **v24; // [rsp+8h] [rbp-40h] BYREF
  void *v25; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-30h]
  char v27; // [rsp+1Ch] [rbp-2Ch]

  v7 = sub_A2CB40(a1);
  v8 = *a4;
  if ( (*(_BYTE *)(v7 + 47) & 0x20) != 0 )
  {
    *a4 = v8 & 0xF;
    goto LABEL_3;
  }
  if ( v8 >= 0 )
  {
LABEL_3:
    v9 = sub_9526F0((__int64)a1, a2, a3, a4, 0x10u);
    if ( !(_BYTE)v9 )
      return v9;
    v10 = *a4;
    LOWORD(v11) = *a3;
    if ( *a4 <= 15 )
    {
      v12 = (__int16)v11 << v10;
      if ( (v11 & 0x8000u) != 0 )
      {
        LOWORD(v12) = 0;
        if ( (_WORD)v11 != 0x8000 )
          v12 = -(-(__int16)v11 << v10);
      }
      goto LABEL_6;
    }
    LOWORD(v12) = 0;
    if ( (v11 & 0x8000u) != 0 )
    {
LABEL_6:
      *(_WORD *)sub_A1A4E0(a1[23], 8) = v12;
      return v9;
    }
    if ( !(_WORD)v11 )
    {
      v21 = 16;
      v22 = 16;
      goto LABEL_30;
    }
    v18 = SBYTE1(v11);
    v19 = (__int16)v11;
    if ( BYTE1(v11) )
    {
      v11 = (__int16)v11 >> 12;
      if ( v19 >> 12 )
      {
        v21 = 0;
        v11 = (unsigned __int16)v11;
        if ( (unsigned int)v19 >> 14 )
          goto LABEL_32;
        goto LABEL_33;
      }
      LOWORD(v11) = v18;
      v20 = 0;
    }
    else
    {
      if ( (int)(unsigned __int8)v11 >> 4 )
      {
        LOWORD(v11) = (int)(unsigned __int8)v11 >> 4;
        v21 = 8;
LABEL_26:
        v11 = (unsigned __int16)v11;
        if ( (int)(unsigned __int16)v11 >> 2 )
        {
          v11 = (int)(unsigned __int16)v11 >> 2;
          goto LABEL_28;
        }
LABEL_33:
        v21 |= 2u;
LABEL_28:
        if ( v11 >> 1 )
        {
LABEL_29:
          v22 = v21;
LABEL_30:
          *a4 = v22;
          v12 = (unsigned __int16)*a3 << v21;
          goto LABEL_6;
        }
LABEL_32:
        v21 |= 1u;
        goto LABEL_29;
      }
      v20 = 8;
    }
    v21 = v20 | 4;
    goto LABEL_26;
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
  return (unsigned int)sub_9673D0((__int64)a1, a2, a3, a4);
}

