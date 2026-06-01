__int64 __fastcall sub_C134E0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        __int64 *a7,
        _BYTE *a8,
        _BYTE *a9)
{
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r14d
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 i; // rsi
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  int v26; // edi
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v31; // [rsp+18h] [rbp-50h]
  _QWORD v32[9]; // [rsp+20h] [rbp-48h] BYREF

  v32[1] = a3;
  v32[0] = a2;
  v11 = sub_A4F310(v32);
  v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = (unsigned int)*(unsigned __int8 *)(v12 + 16) - 43;
  if ( (unsigned int)v13 <= 1
    || (v13 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v13 <= 1)
    && (v31 = v11, v12 = sub_F63050(v12, a2, v11, v13), v11 = v31, v12) )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v12 + 32);
      if ( (*(_BYTE *)(v12 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
        v14 = (unsigned int)*(unsigned __int8 *)(v12 + 16) - 43;
        if ( (unsigned int)v14 <= 1 )
          break;
        v15 = sub_F63050(v12, a2, v14, v13);
        v11 = *(_QWORD *)(v15 + 32);
        if ( (*(_BYTE *)(v15 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
  }
LABEL_5:
  *a7 = v11;
  v16 = a5;
  if ( a5 )
  {
    v17 = a5 - 1;
    v18 = 0;
    for ( i = 0; ; i = v16 )
    {
      v16 = v18 + 1;
      v22 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
      v23 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned __int8)(v23 - 2) > 4u )
        break;
      v24 = sub_A72040(a1, *a7);
      *a7 = *(_QWORD *)(v24 + 32);
      *a8 = 1;
      if ( (unsigned int)*(unsigned __int8 *)(v24 + 16) - 2 <= 1 )
      {
        v20 = *(_QWORD **)(v24 + 40);
        if ( (*(_BYTE *)(v24 + 19) & 2) != 0 )
        {
          if ( *((_DWORD *)v20 + 2) <= 0x40u )
            v20 = (_QWORD *)*v20;
          else
            v20 = *(_QWORD **)*v20;
        }
        *a6 = v20;
        goto LABEL_11;
      }
      *a9 = 1;
      *a6 = 0x7FFFFFFFFFFFFFFFLL;
      v21 = v18 + 1;
      if ( v17 == v18 )
        return v16;
LABEL_12:
      v11 = *a7;
      v18 = v21;
    }
    v26 = *(unsigned __int8 *)(v22 + 16);
    if ( (_BYTE)v23 == 14 )
    {
      if ( (_BYTE)v26 != 14 )
        v22 = sub_F63050(v22, i, v23, v13);
      *a7 = *(_QWORD *)(v22 + 32);
      *a6 = 2;
      *a8 = 1;
    }
    else if ( (unsigned int)(v26 - 57) <= 1
           || (v27 = (unsigned int)(v23 - 57), (unsigned int)v27 <= 1) && (v22 = sub_F63050(v22, i, v27, v13)) != 0 )
    {
      *a7 = *(_QWORD *)(v22 + 32);
      *a6 = *(unsigned int *)(v22 + 20);
      *a8 = 1;
    }
    else
    {
      v28 = *(_QWORD *)(a4 + 8 * v18) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v28 && (*(_BYTE *)(v28 + 28) & 0x7Fu) - 49 <= 2 )
      {
        *a7 = *(_QWORD *)(v28 + 48);
        *a6 = 0;
        *a8 = 0;
      }
      else
      {
        *a6 = 0;
        v16 = i;
        *a8 = 0;
      }
    }
LABEL_11:
    v21 = v18 + 1;
    if ( v17 == v18 )
      return v16;
    goto LABEL_12;
  }
  return v16;
}
