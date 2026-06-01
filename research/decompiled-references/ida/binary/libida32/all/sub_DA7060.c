__int64 __fastcall sub_DA7060(__int64 a1, __int64 a2, __int64 a3, int a4, __int16 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // rdx
  char v12; // bp
  unsigned __int8 **v13; // rax
  __int64 *v14; // rbp
  __int64 v15; // rax
  unsigned int v16; // ebp
  unsigned __int8 v18; // al
  int v19; // r14d
  int v20; // eax
  __int64 v21; // [rsp+8h] [rbp-60h] BYREF
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v23; // [rsp+18h] [rbp-50h]

  sub_CDADA0((__int64)&v22, a3);
  v10 = sub_21D5390(&v22, a3, v9);
  v11 = v23;
  if ( v22 != v10 )
    v11 = &v22;
  v12 = *((_BYTE *)v11 + 20) & 7;
  sub_971860(&v22);
  if ( v12 != 1 )
  {
    v16 = sub_DFDF30(a1);
    if ( (_BYTE)v16 )
      return v16;
    if ( (a4 & 0x10) != 0 )
    {
      if ( (((unsigned __int8)a5 ^ 0x38) & 0x38) == 0 && (a5 & 0x104) != 0 )
      {
        v22 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
        sub_E0FE60(a1, &v22, 2410, 0);
        return v16;
      }
    }
    else
    {
      if ( !a4 )
        return 1;
      if ( (((unsigned __int8)a5 ^ 0x38) & 0x38) == 0 && (a5 & 0x104) != 0 )
        goto LABEL_14;
    }
    v18 = a5;
    v19 = a5 & 0x100;
    v20 = v18 >> 6;
    if ( v20 == 3 )
    {
      if ( v19 )
        goto LABEL_14;
    }
    else if ( v19 | v20 )
    {
LABEL_14:
      v22 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
      sub_E0FE60(a1, &v22, 2412, 0);
      return v16;
    }
    return 1;
  }
  v21 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v13 = (unsigned __int8 **)sub_E0FFE0(a1, &v21, 2411, 0);
  v14 = (__int64 *)v13;
  if ( v13 )
  {
    sub_AC60B0(v13, 1, 2u);
    v15 = sub_DFC9E0(*(_QWORD *)(a1 + 400), a2);
    LOBYTE(v23) = 1;
    v22 = v15;
    sub_AC88D0(v14, &v22);
  }
  else
  {
    sub_DFC9E0(*(_QWORD *)(a1 + 400), a2);
  }
  return (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
}

