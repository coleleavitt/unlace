__int64 __fastcall sub_E1CCA0(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  __int64 v7; // rbp
  char v8; // al
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r13
  void *v17; // r13
  __int64 v18; // r14
  __int16 v19; // ax
  char v20; // r12
  __int64 result; // rax
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned __int8 **v24; // rbx
  unsigned __int64 v25; // rax
  __int16 v26; // [rsp+20h] [rbp-38h]

  v6 = a4;
  v7 = a3;
  v8 = *(_BYTE *)(a3 + 504);
  if ( (v8 & 4) != 0 )
  {
    v9 = (unsigned int)(*(_DWORD *)(a3 + 28) + a4);
    if ( (v8 & 8) != 0 )
      v9 -= sub_E29180(13);
    v10 = sub_E21760(*(_QWORD *)(a1 + 176), v9);
    a4 = *(unsigned int *)(v10 + 24);
    v11 = v10;
    if ( !(_DWORD)a4 )
    {
      v12 = *(_QWORD *)(v10 + 32);
      if ( v12 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(v12 + 32) + 61LL) && *(char *)(v7 + 504) < 0 )
          return 0;
      }
    }
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 400) + 32LL);
    if ( v13 && *(_DWORD *)(v13 + 8) == 3 && *(_DWORD *)(v7 + 8) == 4 )
      goto LABEL_20;
    if ( !(unsigned __int8)sub_DCA0D0(a1, a2, v11) )
    {
LABEL_35:
      sub_DC79D0((_QWORD *)a1, (__int64)a2, v7);
      return 0;
    }
    v14 = *(_DWORD *)(v7 + 8);
    a3 = (unsigned int)(v14 - 1);
    if ( (unsigned int)a3 > 1 && v14 != 5 )
    {
      if ( !(unsigned __int8)sub_DC7E40(a1, (__int64)a2, v11, 5) )
        return 0;
      v14 = *(_DWORD *)(v7 + 8);
    }
    if ( v14 == 1 )
    {
      if ( *(char *)(sub_DC2F40(v7) + 28) < 0 )
        return 0;
      v22 = *(_QWORD *)(sub_CFDF60(v11) + 32);
      if ( v22 )
      {
        a3 = *(unsigned int *)(v22 + 496);
        if ( (_DWORD)a3 )
        {
          v23 = sub_E206C0(*(_QWORD *)(a1 + 400));
          v24 = (unsigned __int8 **)sub_E33C80(a1, v23, 2504, 0);
          v25 = sub_DC2F40(v7);
          if ( v24 )
          {
            sub_AE9DF0(v24, v25, 0xAu);
            return 0;
          }
          return 0;
        }
      }
      v14 = *(_DWORD *)(v7 + 8);
    }
    if ( v14 != 2 )
      goto LABEL_16;
    if ( (unsigned __int8)sub_DCC8F0(a1, (__int64)a2, v11) )
    {
      v14 = *(_DWORD *)(v7 + 8);
LABEL_16:
      if ( (unsigned int)(v14 - 1) <= 1 )
      {
        v15 = *(unsigned int *)(a1 + 512);
        a4 = *(unsigned int *)(a1 + 516);
        v16 = *(_QWORD *)(v11 + 32);
        if ( v15 + 1 > a4 )
        {
          sub_2237220(a1 + 504, a1 + 520, v15 + 1, 8);
          v15 = *(unsigned int *)(a1 + 512);
        }
        a3 = *(_QWORD *)(a1 + 504);
        *(_QWORD *)(a3 + 8 * v15) = v16;
        ++*(_DWORD *)(a1 + 512);
      }
LABEL_20:
      v8 = *(_BYTE *)(v7 + 504);
      goto LABEL_21;
    }
    return 0;
  }
LABEL_21:
  if ( (v8 & 2) == 0 )
    sub_DEED30(a1, v7, a3, a4, a5, a6);
  if ( !(unsigned __int8)sub_DCA180(a1, (__int64)a2, v7)
    || (*(_BYTE *)(v7 + 504) & 4) != 0
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24))
    && *(_DWORD *)(v7 + 8) != 1
    || !(unsigned __int8)sub_DCA680(a1, (__int64)a2) )
  {
    goto LABEL_35;
  }
  v17 = (void *)operator new(0xD0u);
  sub_E1EA30(v17, a1, v7, a2, v6);
  v18 = *(_QWORD *)(a1 + 400);
  v19 = *(_WORD *)(a1 + 436);
  *(_QWORD *)(a1 + 400) = v17;
  v26 = v19;
  v20 = *(_BYTE *)(v7 + 505) & 1;
  if ( v20 )
    *(_WORD *)(a1 + 436) = 257;
  result = sub_E0F910(a1);
  if ( (unsigned int)(*(_DWORD *)(v7 + 8) - 1) <= 1 )
    --*(_DWORD *)(a1 + 512);
  if ( (_BYTE)result )
  {
    if ( v20 )
      *(_WORD *)(a1 + 436) = v26;
  }
  else
  {
    *(_QWORD *)(a1 + 400) = v18;
    if ( v20 )
      *(_WORD *)(a1 + 436) = v26;
    sub_E20A70(v17);
    return 0;
  }
  return result;
}
