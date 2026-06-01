_BYTE *__fastcall sub_1BC6610(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r13
  char v7; // dl
  _BYTE *result; // rax
  __int64 v9; // rcx
  _BYTE *v10; // rbx
  __int64 v11; // rdx
  _WORD *v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  int v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+10h] [rbp-58h]
  void *v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF

  v2 = sub_BFBC70(*(_QWORD *)(a2 + 32));
  if ( v2 && (*(_BYTE *)(v2 + 28) & 0x7Fu) - 34 <= 5 )
  {
    v3 = *(_DWORD *)(v2 + 24);
    v4 = *(_QWORD *)(v2 + 40);
    v5 = *(_QWORD *)(v2 + 160);
    v13 = v4;
    v14 = v3;
    v15 = v5;
    sub_B87650((__int64)&v16, &v13);
    v6 = sub_9983C0((__int64 *)&v16, "omp_", 0, 4u);
    if ( v16 != &v18 )
      operator delete(v16);
    if ( !v6 )
      goto LABEL_6;
  }
  result = *(_BYTE **)(*(_QWORD *)a1 + 232LL);
  if ( (result[88] & 0x10) != 0 )
  {
LABEL_6:
    a1[8] = 1;
    v7 = *(_BYTE *)(a2 + 2);
    result = (_BYTE *)(a2 + 32);
    v9 = *(unsigned int *)(a2 + 16);
    v16 = (void *)(a2 + 32);
    v17 = 0;
    v10 = (_BYTE *)(a2 + 8 * (((v7 & 8) != 0) + v9 + 1) + 32);
    v11 = 0;
    while ( 1 )
    {
LABEL_7:
      if ( result == v10 )
      {
LABEL_14:
        if ( !v11 )
          return result;
      }
      while ( 1 )
      {
        if ( (v11 & 3) == 0 )
        {
          v12 = *(_WORD **)result;
          if ( !*(_QWORD *)result )
            goto LABEL_19;
LABEL_10:
          sub_1B68D30((__int64)a1, v12);
          goto LABEL_11;
        }
        v12 = *(_WORD **)sub_EF2B30((__int64)&v16);
        if ( v12 )
          goto LABEL_10;
LABEL_11:
        v11 = v17;
        if ( (v17 & 3) == 0 )
          break;
        if ( (v17 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        {
          sub_EF2750((unsigned __int64 *)&v16, 1);
          result = v16;
          v11 = v17;
          goto LABEL_7;
        }
        sub_EF2960((__int64)&v16);
        result = v16;
        v11 = v17;
        if ( v16 == v10 )
          goto LABEL_14;
      }
      result = v16;
LABEL_19:
      result += 8;
      v16 = result;
    }
  }
  a1[8] = 0;
  return result;
}
