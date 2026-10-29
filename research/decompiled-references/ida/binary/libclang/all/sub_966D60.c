__int64 __fastcall sub_966D60(_QWORD *a1, __int64 a2, __int16 *a3, int *a4)
{
  unsigned int v7; // r12d
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // r14d
  unsigned __int8 **v12; // rax
  unsigned __int64 v13; // rcx
  _QWORD **v14; // rdi
  __int64 (*v15)(void); // rax
  int v16; // ecx
  __int16 v17; // cx
  int v18; // edx
  int v19; // ecx
  __int64 v20; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 **v21; // [rsp+8h] [rbp-40h] BYREF
  void *v22; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-30h]
  char v24; // [rsp+1Ch] [rbp-2Ch]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 0xFu;
    goto LABEL_3;
  }
  if ( *a4 >= 0 )
  {
LABEL_3:
    v7 = sub_952CF0((__int64)a1, a2, a3, a4, 0x10u);
    if ( !(_BYTE)v7 )
      return v7;
    v8 = *a4;
    LOWORD(v9) = *a3;
    if ( *a4 <= 15 )
    {
      v10 = (__int16)v9 << v8;
      if ( (v9 & 0x8000u) != 0 )
      {
        LOWORD(v10) = 0;
        if ( (_WORD)v9 != 0x8000 )
          v10 = -(-(__int16)v9 << v8);
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
    v16 = 16;
    if ( !(_WORD)v9 )
    {
LABEL_29:
      *a4 = v16;
      v10 = (unsigned __int16)*a3 << v16;
      goto LABEL_6;
    }
    v17 = SBYTE1(v9);
    v18 = (__int16)v9;
    if ( BYTE1(v9) )
    {
      v9 = (__int16)v9 >> 12;
      if ( v18 >> 12 )
      {
        v16 = 0;
        v9 = (unsigned __int16)v9;
        if ( (unsigned int)v18 >> 14 )
          goto LABEL_31;
        goto LABEL_32;
      }
      LOWORD(v9) = v17;
      v19 = 0;
    }
    else
    {
      if ( (int)(unsigned __int8)v9 >> 4 )
      {
        LOWORD(v9) = (int)(unsigned __int8)v9 >> 4;
        v16 = 8;
LABEL_26:
        v9 = (unsigned __int16)v9;
        if ( (int)(unsigned __int16)v9 >> 2 )
        {
          v9 = (int)(unsigned __int16)v9 >> 2;
          goto LABEL_28;
        }
LABEL_32:
        v16 |= 2u;
LABEL_28:
        if ( v9 >> 1 )
          goto LABEL_29;
LABEL_31:
        v16 |= 1u;
        goto LABEL_29;
      }
      v19 = 8;
    }
    v16 = v19 | 4;
    goto LABEL_26;
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
  return (unsigned int)sub_966B10((__int64)a1, a2, a3, a4);
}

