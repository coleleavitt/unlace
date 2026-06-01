__int64 __fastcall sub_1CE94F0(
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
  int v10; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int16 **v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r9
  _BYTE *v21; // r13
  int v22; // esi
  unsigned int v23; // edx
  unsigned int v24; // eax
  __int64 v25; // r14
  unsigned int v26; // r15d
  int v27; // eax
  __int64 v28; // r9
  __int64 v29; // [rsp+0h] [rbp-B0h]
  __int64 v30; // [rsp+0h] [rbp-B0h]
  char v31; // [rsp+17h] [rbp-99h] BYREF
  __int64 v32; // [rsp+18h] [rbp-98h] BYREF
  char v33; // [rsp+20h] [rbp-90h]
  void *ptr; // [rsp+28h] [rbp-88h] BYREF
  __int64 v35; // [rsp+30h] [rbp-80h]
  _BYTE v36[120]; // [rsp+38h] [rbp-78h] BYREF

  if ( !a2 )
    return 0;
  v9 = a2;
  v10 = *(_WORD *)a2 & 0x1FF;
  v11 = (unsigned int)(v10 + 452);
  LOWORD(v11) = (v10 + 452) & 0x1FF;
  if ( (unsigned __int16)v11 <= 1u )
  {
    v9 = *(_QWORD *)(a2 + 16);
    LOWORD(v10) = *(_WORD *)v9 & 0x1FF;
  }
  if ( (_WORD)v10 == 125 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
    LOWORD(v10) = *(_WORD *)v9 & 0x1FF;
  }
  if ( (_WORD)v10 != 48 )
    goto LABEL_11;
  v12 = *(_QWORD *)(v9 + 16);
  v9 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v12 & 4) != 0 )
    v9 = *(_QWORD *)(v9 + 40);
  while ( 1 )
  {
    LOWORD(v10) = *(_WORD *)v9 & 0x1FF;
LABEL_11:
    if ( (_WORD)v10 != 116 )
      break;
    v9 = *(_QWORD *)(v9 + 24);
  }
  if ( (_WORD)v10 == 79 )
  {
    v9 = sub_BFA3B0(v9);
    LOWORD(v10) = *(_WORD *)v9 & 0x1FF;
  }
  if ( (_WORD)v10 == 99 )
    return sub_1CE94F0(a1, *(_QWORD *)(v9 + 16), a3);
  v14 = (unsigned int)(unsigned __int16)v10 - 113;
  if ( (unsigned int)v14 > 1 )
  {
    if ( !a3 )
      return sub_1CE88F0(a1, (unsigned __int16 *)v9, a4, a5, v14, v11, a7);
    if ( (_WORD)v10 == 100 )
      goto LABEL_20;
    if ( (_WORD)v10 != 54 )
      return sub_1CE88F0(a1, (unsigned __int16 *)v9, a4, a5, v14, v11, a7);
    return sub_18C2A90(*a1, 0, 0, nullptr, 0, a8);
  }
  if ( !a3 && (*(_QWORD *)v9 & 0x200000LL) == 0 )
    return sub_1CE88F0(a1, (unsigned __int16 *)v9, a4, a5, v14, v11, a7);
  switch ( (_WORD)v10 )
  {
    case 'd':
LABEL_20:
      v15 = sub_EEC8C0(v9, a2, *(double *)a4.m128_u64);
      return sub_18C2A90(*a1, v15, HIDWORD(v15), nullptr, 0, v16);
    case '6':
      return sub_18C2A90(*a1, 0, 0, nullptr, 0, a8);
    case 'r':
      return sub_1CE88F0(a1, (unsigned __int16 *)v9, a4, a5, v14, v11, a7);
  }
  if ( (*(_QWORD *)v9 & 0x400000LL) != 0 )
    return sub_1CE94F0(a1, *(_QWORD *)(v9 + 40), a3);
  sub_14EE070((__int64)&v32, *a1, 0, (*(_QWORD *)v9 & 0x200000LL) != 0);
  v17 = *a1;
  v18 = (unsigned __int16 **)(v9 + 40);
  v31 = 0;
  *(_BYTE *)(*(_QWORD *)(v17 + 4616) + 640LL * *(unsigned int *)(v17 + 4624) - 39) = *(_BYTE *)(*(_QWORD *)(v17 + 4616)
                                                                                              + ((5LL
                                                                                                * *(unsigned int *)(v17 + 4624)
                                                                                                - 10) << 7)
                                                                                              + 601);
  *(_BYTE *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 37) = *(_BYTE *)(*(_QWORD *)(*a1 + 4616)
                                                                                              + ((5LL
                                                                                                * *(unsigned int *)(*a1 + 4624)
                                                                                                - 10) << 7)
                                                                                              + 603);
  v19 = *(unsigned int *)(v9 + 32);
  ptr = v36;
  v35 = 0x800000000LL;
  if ( (*(_WORD *)v9 & 0x1FF) == 0x72 )
    v18 = (unsigned __int16 **)(v9 + 48);
  if ( (unsigned __int8)sub_1CE9250(a1, v18, v19, 1u, (__int64)&ptr, &v31, a4, a5) )
  {
    v21 = ptr;
    result = 1;
  }
  else
  {
    v21 = ptr;
    if ( (*(_QWORD *)v9 & 0x200000LL) != 0 )
    {
      v24 = sub_C94490(v9);
      v25 = (unsigned int)v35;
      v26 = v24;
      v27 = sub_C94450(v9);
      result = sub_1909BB0(*a1, v27, (__int64)v21, v25, v26, v28, (__m128i)a4, a5);
      v21 = ptr;
    }
    else
    {
      v22 = *(_DWORD *)(v9 + 24);
      v23 = *(_DWORD *)(v9 + 28);
      if ( v22 && v23 )
      {
        result = sub_18C2A90(*a1, v22, v23, ptr, (unsigned int)v35, v20);
        v21 = ptr;
      }
      else
      {
        result = 0;
      }
    }
  }
  if ( v21 != v36 )
  {
    v29 = result;
    free(v21);
    result = v29;
  }
  if ( v33 )
  {
    v30 = result;
    sub_190D5E0(v32, a4);
    return v30;
  }
  return result;
}
