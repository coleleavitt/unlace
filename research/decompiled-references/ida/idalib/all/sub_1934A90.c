__int64 __fastcall sub_1934A90(
        __int64 *a1,
        __int64 a2,
        unsigned __int8 a3,
        __m128 a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v9; // rbx
  unsigned __int16 v10; // ax
  __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 *v16; // rsi
  int v17; // edx
  __int64 v18; // r9
  _BYTE *v19; // r13
  int v20; // esi
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v23; // r14
  unsigned int v24; // r15d
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // [rsp+0h] [rbp-B0h]
  __int64 v28; // [rsp+0h] [rbp-B0h]
  char v29; // [rsp+17h] [rbp-99h] BYREF
  __int64 v30; // [rsp+18h] [rbp-98h] BYREF
  char v31; // [rsp+20h] [rbp-90h]
  void *ptr; // [rsp+28h] [rbp-88h] BYREF
  __int64 v33; // [rsp+30h] [rbp-80h]
  _BYTE v34[120]; // [rsp+38h] [rbp-78h] BYREF

  if ( !a2 )
    return 0;
  v9 = a2;
  v10 = *(_WORD *)a2 & 0x1FF;
  if ( ((v10 + 452) & 0x1FFu) <= 1 )
  {
    v9 = *(_QWORD *)(a2 + 16);
    v10 = *(_WORD *)v9 & 0x1FF;
  }
  if ( v10 == 125 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
    v10 = *(_WORD *)v9 & 0x1FF;
  }
  if ( v10 != 48 )
    goto LABEL_11;
  v11 = *(_QWORD *)(v9 + 16);
  v9 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v11 & 4) != 0 )
    v9 = *(_QWORD *)(v9 + 40);
  while ( 1 )
  {
    v10 = *(_WORD *)v9 & 0x1FF;
LABEL_11:
    if ( v10 != 116 )
      break;
    v9 = *(_QWORD *)(v9 + 24);
  }
  if ( v10 == 79 )
  {
    v9 = sub_BFA3B0(v9);
    v10 = *(_WORD *)v9 & 0x1FF;
  }
  if ( v10 == 99 )
    return sub_1934A90(a1, *(_QWORD *)(v9 + 16), a3);
  if ( (unsigned int)v10 - 113 > 1 )
  {
    if ( !a3 )
      return sub_1933BC0(a1, v9, *(double *)a4.m128_u64, a5);
    if ( v10 == 100 )
      goto LABEL_20;
    if ( v10 != 54 )
      return sub_1933BC0(a1, v9, *(double *)a4.m128_u64, a5);
    return sub_C08D70(*(_QWORD **)(*a1 + 248), 0, nullptr, 0, 0, a8);
  }
  if ( !a3 && (*(_QWORD *)v9 & 0x200000LL) == 0 )
    return sub_1933BC0(a1, v9, *(double *)a4.m128_u64, a5);
  switch ( v10 )
  {
    case 'd':
LABEL_20:
      v13 = sub_EEC8C0(v9, a2, *(double *)a4.m128_u64);
      return sub_C08D70(*(_QWORD **)(*a1 + 248), v13, nullptr, 0, HIDWORD(v13), v14);
    case '6':
      return sub_C08D70(*(_QWORD **)(*a1 + 248), 0, nullptr, 0, 0, a8);
    case 'r':
      return sub_1933BC0(a1, v9, *(double *)a4.m128_u64, a5);
  }
  if ( (*(_QWORD *)v9 & 0x400000LL) != 0 )
    return sub_1934A90(a1, *(_QWORD *)(v9 + 40), a3);
  sub_14EE070((__int64)&v30, *a1, 0, (*(_QWORD *)v9 & 0x200000LL) != 0);
  v15 = *a1;
  v16 = (unsigned __int64 *)(v9 + 40);
  v29 = 0;
  *(_BYTE *)(*(_QWORD *)(v15 + 4616) + 640LL * *(unsigned int *)(v15 + 4624) - 39) = *(_BYTE *)(*(_QWORD *)(v15 + 4616)
                                                                                              + ((5LL
                                                                                                * *(unsigned int *)(v15 + 4624)
                                                                                                - 10) << 7)
                                                                                              + 601);
  *(_BYTE *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 37) = *(_BYTE *)(*(_QWORD *)(*a1 + 4616)
                                                                                              + ((5LL
                                                                                                * *(unsigned int *)(*a1 + 4624)
                                                                                                - 10) << 7)
                                                                                              + 603);
  v17 = *(_DWORD *)(v9 + 32);
  ptr = v34;
  v33 = 0x800000000LL;
  if ( (*(_WORD *)v9 & 0x1FF) == 0x72 )
    v16 = (unsigned __int64 *)(v9 + 48);
  if ( (unsigned __int8)sub_19347F0(a1, v16, v17, 1, (__int64)&ptr, &v29, *(double *)a4.m128_u64, a5) )
  {
    v19 = ptr;
    result = 1;
  }
  else
  {
    v19 = ptr;
    if ( (*(_QWORD *)v9 & 0x200000LL) != 0 )
    {
      v22 = sub_C94490(v9);
      v23 = (unsigned int)v33;
      v24 = v22;
      v25 = sub_C94450(v9);
      result = sub_1909BB0(*a1, v25, (__int64)v19, v23, v24, v26, (__m128i)a4, a5);
      v19 = ptr;
    }
    else
    {
      v20 = *(_DWORD *)(v9 + 24);
      v21 = *(unsigned int *)(v9 + 28);
      if ( v20 && (_DWORD)v21 )
      {
        result = sub_C08D70(*(_QWORD **)(*a1 + 248), v20, ptr, (unsigned int)v33, v21, v18);
        v19 = ptr;
      }
      else
      {
        result = 0;
      }
    }
  }
  if ( v19 != v34 )
  {
    v27 = result;
    free(v19);
    result = v27;
  }
  if ( v31 )
  {
    v28 = result;
    sub_190D5E0(v30, a4);
    return v28;
  }
  return result;
}
