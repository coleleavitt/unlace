__int64 __fastcall sub_16B6120(__int64 a1, unsigned __int64 a2, _QWORD *a3, double a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // al
  __int64 v6; // r14
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 *v9; // rsi
  unsigned int v10; // ecx
  unsigned int v11; // edx
  __int64 result; // rax
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 *v20; // r12
  unsigned int v21; // eax
  unsigned int v22; // eax
  _QWORD *v23; // [rsp+8h] [rbp-C0h]
  _BYTE v24[184]; // [rsp+10h] [rbp-B8h] BYREF

  v4 = *(_QWORD *)(a1 + 544);
  v5 = *(_BYTE *)(v4 + 8) & 0x7F;
  if ( v5 != 8 )
  {
    v13 = (unsigned int)v5 - 34;
    if ( (unsigned int)v13 > 5 )
    {
      if ( v5 == 18 )
      {
        if ( v4 == 48 )
          goto LABEL_17;
        goto LABEL_20;
      }
    }
    else
    {
      if ( v4 != 72 )
      {
        v23 = a3;
        v14 = sub_B748A0(v4 - 72, a2, (__int64)a3, v13);
        v6 = *(_QWORD *)(v4 + 48);
        LOBYTE(v15) = v14;
        v18 = sub_B76070(v4 - 72, a2, v16, v17);
        a3 = v23;
        v7 = v18;
        goto LABEL_9;
      }
      if ( v5 == 18 )
      {
LABEL_20:
        v6 = *(_QWORD *)(v4 + 48);
        v7 = *(unsigned int *)(v4 + 56);
        v15 = (*(_QWORD *)(v4 + 8) >> 18) & 1LL;
LABEL_9:
        if ( !(_BYTE)v15 )
          goto LABEL_4;
        goto LABEL_10;
      }
    }
    v20 = (__int64 *)(a1 + 8);
    if ( v5 == 7 )
    {
      v22 = sub_EEB7E0(a2, a2, a4);
      v10 = 5422;
      v9 = (__int64 *)(a1 + 8);
      v11 = v22;
      goto LABEL_5;
    }
    goto LABEL_18;
  }
  if ( v4 == 40 )
  {
LABEL_17:
    v20 = (__int64 *)(a1 + 8);
LABEL_18:
    v21 = sub_EEB7E0(a2, a2, a4);
    v10 = 5424;
    v9 = v20;
    v11 = v21;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 32);
  v7 = *(unsigned int *)(v4 + 40);
  if ( (*(_BYTE *)(v4 + 9) & 0x20) == 0 )
  {
LABEL_4:
    v8 = sub_EEB7E0(a2, a2, a4);
    v9 = (__int64 *)(a1 + 8);
    v10 = 5423;
    v11 = v8;
LABEL_5:
    sub_168B9F0((__int64)v24, v9, v11, v10, 0);
    sub_15F7200(v24);
    return 1;
  }
LABEL_10:
  result = 0;
  if ( a3 )
  {
    v19 = 0;
    if ( v7 )
      v19 = *(_QWORD *)(v6 + 8 * v7 - 8);
    *a3 = v19;
    return 0;
  }
  return result;
}
