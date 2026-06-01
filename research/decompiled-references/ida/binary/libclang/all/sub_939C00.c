__int64 __fastcall sub_939C00(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // r15
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  __int16 v7; // r12
  int v8; // r13d
  int v10; // eax
  int v11; // r13d
  char v12; // cl
  char v13; // cl
  __int16 v14; // [rsp+6h] [rbp-42h] BYREF
  void *v15[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = (__int64)(a1 + 48);
  a1[100] = a2;
  v3 = a1[71];
  v4 = a1[99];
  v5 = *(_QWORD *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  v6 = a1[71];
  v7 = *(_WORD *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
  v14 = v7;
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 48) + 47) & 0x20) == 0 )
  {
    v15[0] = (void *)v5;
    if ( !(unsigned __int8)sub_939990(v2, v4, &v14, v15, 0x10u) )
      return 0;
    if ( v5 <= 0xF )
      goto LABEL_3;
    if ( v7 < 0 )
      goto LABEL_19;
    v10 = (unsigned __int16)v7;
    if ( !v7 )
    {
      v12 = 16;
      v11 = 0;
      goto LABEL_15;
    }
    v11 = v7;
    if ( HIBYTE(v7) )
    {
      v10 = v7 >> 12;
      if ( v10 )
      {
        if ( (unsigned int)v7 >> 14 )
        {
          v12 = 0;
          goto LABEL_23;
        }
        v12 = 0;
        v10 = (unsigned __int16)v10;
        goto LABEL_25;
      }
      v10 = (unsigned __int16)SHIBYTE(v7);
      v13 = 0;
    }
    else
    {
      if ( (int)(unsigned __int8)v7 >> 4 )
      {
        v10 = (unsigned __int16)(v7 >> 4);
        v12 = 8;
        goto LABEL_12;
      }
      v13 = 8;
    }
    v12 = v13 | 4;
LABEL_12:
    if ( v10 >> 2 )
    {
      v10 >>= 2;
      goto LABEL_14;
    }
LABEL_25:
    v12 |= 2u;
LABEL_14:
    if ( (unsigned int)v10 >> 1 )
    {
LABEL_15:
      v8 = v11 << v12;
      goto LABEL_4;
    }
LABEL_23:
    v12 |= 1u;
    goto LABEL_15;
  }
  LODWORD(v5) = v5 & 0xF;
  v15[0] = (void *)(unsigned int)v5;
  if ( (unsigned __int8)sub_939990(v2, v4, &v14, v15, 0x10u) )
  {
LABEL_3:
    v8 = v7 << v5;
    if ( v7 >= 0 )
    {
LABEL_4:
      *(_WORD *)sub_A1A4E0(a1[71], 8) = v8;
      return 1;
    }
    if ( v7 != (__int16)0x8000 )
    {
      v8 = -(-v7 << v5);
      goto LABEL_4;
    }
LABEL_19:
    LOWORD(v8) = 0;
    goto LABEL_4;
  }
  return 0;
}

