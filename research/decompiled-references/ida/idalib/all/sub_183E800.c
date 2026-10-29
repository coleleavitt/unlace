__int64 __fastcall sub_183E800(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 *v12; // r12
  __int64 v13; // rax
  __int16 v14; // dx
  __int64 v15; // rsi
  int v17; // r14d
  __int64 *v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 (__fastcall **v21)(); // [rsp+0h] [rbp-48h] BYREF
  int v22; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+10h] [rbp-38h]

  v22 = 16777472;
  v21 = off_2C54F08;
  v23 = a1;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return 0;
  v6 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v10 = *((unsigned int *)v6 + 2);
  v11 = *v6 + 8 * v10;
  v12 = (*(_BYTE *)(a2 + 29) & 1) != 0 ? (__int64 *)*sub_B8C3D0(a2, a2, v10, v7, v8, v9) : nullptr;
  if ( (__int64 *)v11 == v12 )
    return 0;
  while ( 1 )
  {
LABEL_5:
    v13 = *v12;
    v14 = *(_WORD *)(*v12 + 36);
    switch ( v14 )
    {
      case 222:
      case 336:
        goto LABEL_6;
      case 122:
      case 123:
LABEL_14:
        v17 = *(_DWORD *)(v13 + 40);
        v18 = *(__int64 **)(v13 + 48);
        goto LABEL_15;
      case 242:
LABEL_6:
        v15 = *(_QWORD *)(v13 + 40);
        if ( v15 && !(unsigned __int8)sub_BC97E0((__int64 *)&v21, v15) )
          return 1;
        goto LABEL_10;
      case 243:
      case 347:
      case 121:
        goto LABEL_14;
    }
    if ( v14 == 383 )
      break;
    if ( v14 == 344 )
      goto LABEL_14;
LABEL_10:
    if ( (__int64 *)v11 == ++v12 )
      return 0;
  }
  v20 = *(_QWORD *)(v13 + 40);
  v17 = *(_DWORD *)(v13 + 48);
  v18 = *(__int64 **)(v13 + 56);
  if ( v20 && !(unsigned __int8)sub_BC97E0((__int64 *)&v21, v20) )
    return 1;
LABEL_15:
  if ( !v17 )
    goto LABEL_10;
  v19 = (__int64)&v18[(unsigned int)(v17 - 1) + 1];
  while ( (unsigned __int8)sub_BC97E0((__int64 *)&v21, *v18) )
  {
    if ( (__int64 *)v19 == ++v18 )
    {
      if ( (__int64 *)v11 != ++v12 )
        goto LABEL_5;
      return 0;
    }
  }
  return 1;
}
