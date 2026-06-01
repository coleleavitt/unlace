__int64 __fastcall sub_1E885A0(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 *a4,
        unsigned __int64 a5,
        int a6,
        __m128 a7,
        __m128 a8)
{
  __int64 i; // rbp
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r15
  __int16 v14; // ax
  unsigned __int8 v15; // al
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  unsigned int v20; // edx
  __int64 v21; // rax
  int j; // ebp
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // r15d
  __int64 v29; // [rsp+8h] [rbp-100h]
  __int64 v30; // [rsp+8h] [rbp-100h]
  unsigned int v31; // [rsp+8h] [rbp-100h]
  __int64 v32; // [rsp+28h] [rbp-E0h] BYREF
  void *v33; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-D0h]
  char v35; // [rsp+3Ch] [rbp-CCh]
  _BYTE v36[200]; // [rsp+40h] [rbp-C8h] BYREF

  i = 0;
  v11 = *a4;
  v12 = *(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v12 + 17) & 4) != 0 )
    goto LABEL_2;
  if ( !a2 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
    {
      for ( i = 0; ; i = (unsigned int)(i + 1) )
      {
        v17 = sub_A72040(*(_QWORD **)(a1 + 248), v11);
        if ( !v17 )
          break;
        v11 = *(_QWORD *)(v17 + 32);
      }
    }
    goto LABEL_2;
  }
  v34 = 1;
  v33 = nullptr;
  v35 = 0;
  v18 = sub_1915C50((__int64 *)a1, a5, (__int64)&v33, 3701, 0, a7, a8);
  v19 = v11 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v18 == 1 )
  {
LABEL_36:
    v20 = v34;
    goto LABEL_24;
  }
  v20 = v34;
  if ( v35 )
  {
    if ( v34 <= 0x40 )
    {
      v30 = (__int64)v33;
      goto LABEL_18;
    }
LABEL_28:
    v31 = v34;
    v24 = sub_2206780(&v33);
    v20 = v31;
    v19 = v11 & 0xFFFFFFFFFFFFFFF0LL;
    v30 = -1;
    if ( v20 - v24 <= 0x40 )
      v30 = *(_QWORD *)v33;
    goto LABEL_18;
  }
  v21 = 1LL << ((unsigned __int8)v34 - 1);
  v30 = (__int64)v33;
  if ( v34 > 0x40 )
  {
    if ( (v21 & *((_QWORD *)v33 + ((v34 - 1) >> 6))) != 0 )
      goto LABEL_15;
    goto LABEL_28;
  }
  if ( (v21 & (unsigned __int64)v33) == 0 )
  {
LABEL_18:
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v19 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
    {
      i = 0;
      goto LABEL_24;
    }
    for ( j = 0; ; ++j )
    {
      v23 = sub_A72040(*(_QWORD **)(a1 + 248), v11);
      if ( !v23 )
        goto LABEL_23;
      if ( j == v30 )
        break;
      v11 = *(_QWORD *)(v23 + 32);
    }
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 2) > 4u
      || (v25 = sub_A72040(*(_QWORD **)(a1 + 248), v11)) == 0
      || (unsigned int)*(unsigned __int8 *)(v25 + 16) - 2 > 1 )
    {
LABEL_23:
      v20 = v34;
      i = 0;
      goto LABEL_24;
    }
    i = *(_QWORD *)(v25 + 40);
    if ( (*(_BYTE *)(v25 + 19) & 2) != 0 )
    {
      v26 = *(_DWORD *)(i + 8);
      if ( v26 > 0x40 )
      {
        if ( v26 - (unsigned int)sub_2206780(*(_QWORD *)(v25 + 40)) <= 0x40 )
          i = **(_QWORD **)i;
        else
          i = -1;
      }
      else
      {
        i = *(_QWORD *)i;
      }
    }
    goto LABEL_36;
  }
LABEL_15:
  sub_168B9F0((__int64)v36, (__int64 *)(a1 + 8), a3, 0xE75u, 0);
  v32 = sub_EEC8C0(a5, a1 + 8, *(double *)a7.m128_u64);
  sub_1587DB0((__int64)v36, &v32);
  i = 0;
  sub_15F7200(v36);
  v20 = v34;
LABEL_24:
  if ( v20 > 0x40 && v33 )
    operator delete[](v33);
LABEL_2:
  v29 = sub_A63CE0(*(_QWORD **)(a1 + 248));
  v13 = sub_EEE9A0(48, *(_QWORD **)(a1 + 248), 8u);
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x7A;
  if ( unk_2CD7484 )
    sub_EE9B50(122);
  v14 = *(_WORD *)(v13 + 1);
  *(_QWORD *)(v13 + 16) = i;
  *(_QWORD *)(v13 + 8) = v29;
  v14 &= 0xF801u;
  *(_WORD *)(v13 + 1) = v14;
  *(_DWORD *)(v13 + 32) = a3;
  *(_QWORD *)(v13 + 24) = a5;
  *(_QWORD *)(v13 + 40) = a4;
  *(_DWORD *)(v13 + 36) = a6;
  *(_BYTE *)(v13 + 2) = (8 * (a2 & 3)) | HIBYTE(v14) & 0xE7;
  v15 = sub_B63730(v13);
  *(_BYTE *)(v13 + 1) = (v15 << 6) | *(_BYTE *)(v13 + 1) & 0x3F;
  *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & 0xF8 | (v15 >> 2) & 7;
  return v13;
}
