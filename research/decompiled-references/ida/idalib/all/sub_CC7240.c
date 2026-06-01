__int64 __fastcall sub_CC7240(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v5; // rbx
  unsigned __int64 *v6; // r13
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r15d
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 *v17; // rcx
  __int64 result; // rax
  __int64 v19; // rax
  unsigned __int64 *v20; // [rsp+8h] [rbp-E0h]
  unsigned __int8 v21; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v22; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v23; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v24; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v25; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v26; // [rsp+58h] [rbp-90h] BYREF
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v28; // [rsp+70h] [rbp-78h] BYREF

  v5 = a2;
  v6 = &a2[a3];
  sub_E341D0(&ptr, a4, a2, a3);
  if ( v6 == a2 )
  {
LABEL_23:
    result = 1;
    goto LABEL_17;
  }
  v7 = 0;
  v20 = v6;
  while ( 1 )
  {
    v9 = *v5;
    if ( (*(_BYTE *)(*v5 + 1) & 6) == 0
      && !(unsigned __int8)((unsigned __int64)sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(v9 + 8)) >> 32) )
    {
      break;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v9) )
      goto LABEL_25;
LABEL_4:
    if ( !a4 )
      goto LABEL_6;
    v8 = *((_QWORD *)ptr + ((unsigned int)v7 >> 6));
    if ( !_bittest64(&v8, v7) )
      goto LABEL_6;
    if ( (*(_BYTE *)(v9 + 1) & 6) != 0
      || (v19 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(v9 + 8)), !BYTE4(v19))
      || (_DWORD)v19 == 13 )
    {
      v26 = v9 | 4;
      result = sub_CA0D60(a1, 13, (__int64 *)&v26);
      if ( !(_BYTE)result )
        goto LABEL_17;
LABEL_6:
      v7 = (unsigned int)(v7 + 1);
      if ( v20 == ++v5 )
        goto LABEL_23;
    }
    else
    {
      v7 = (unsigned int)(v7 + 1);
      if ( v20 == ++v5 )
        goto LABEL_23;
    }
  }
  v10 = *(_QWORD *)(v9 + 8);
  v26 = v9 | 2;
  v11 = sub_CBC410(a1, (__int64 *)&v26, v10, 0, 0, 0);
  v12 = v11;
  if ( !BYTE4(v11) )
    goto LABEL_25;
  v26 = v9 | 4;
  if ( !(unsigned __int8)sub_CA4BA0(a1, v11, (__int64 *)&v26) )
    goto LABEL_25;
  v13 = v12 | v23 & 0xFFFFFFFF00000000LL;
  v14 = *(unsigned int *)(a1 + 608);
  v15 = v22 & 0xFFFFFFFF00000000LL | 2;
  v22 = v15;
  v16 = v14 + 1;
  v23 = v13;
  if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 612) )
  {
    v25 = v13;
    v24 = v15;
    sub_2237220(a1 + 600, a1 + 616, v16, 16);
    v13 = v25;
    v15 = v24;
    v14 = *(unsigned int *)(a1 + 608);
  }
  v17 = (unsigned __int64 *)(*(_QWORD *)(a1 + 600) + 16 * v14);
  *v17 = v15;
  v17[1] = v13;
  ++*(_DWORD *)(a1 + 608);
  if ( (unsigned __int8)sub_CC3960(a1, v9, v16, (__int64)v17, v15) )
  {
    --*(_DWORD *)(a1 + 608);
    goto LABEL_4;
  }
  --*(_DWORD *)(a1 + 608);
LABEL_25:
  result = 0;
LABEL_17:
  if ( ptr != &v28 )
  {
    v21 = result;
    free(ptr);
    return v21;
  }
  return result;
}
