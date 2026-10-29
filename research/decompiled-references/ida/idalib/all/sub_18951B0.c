unsigned __int64 __fastcall sub_18951B0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __m128 a5)
{
  __int64 v5; // r8
  int v7; // r14d
  int v8; // ebx
  char *v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // r13d
  _BYTE *v12; // r9
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  int v15; // edx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v23; // rdx
  _BYTE *v24; // [rsp+0h] [rbp-258h]
  __int64 v26; // [rsp+8h] [rbp-250h]
  void *ptr; // [rsp+10h] [rbp-248h] BYREF
  __int64 v28; // [rsp+18h] [rbp-240h]
  _BYTE v29[568]; // [rsp+20h] [rbp-238h] BYREF

  v5 = a3;
  v7 = a4;
  v8 = a4;
  v28 = 0x4000000000LL;
  v9 = v29;
  ptr = v29;
  if ( a4 + 1 <= 0x40 )
  {
    if ( !(_DWORD)a4 )
      goto LABEL_18;
    a4 = 64;
    v10 = 0;
    goto LABEL_4;
  }
  sub_2237220(&ptr, v29, a4 + 1, 8);
  v10 = (unsigned int)v28;
  if ( v8 )
  {
    a4 = HIDWORD(v28);
    v5 = a3;
LABEL_4:
    v11 = 0;
    v12 = v29;
    do
    {
      v13 = *(_QWORD *)(v5 + 8LL * v11);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
          v14 = *(_QWORD *)v14;
        v15 = *(_BYTE *)(v14 + 8) & 0x7F;
        if ( !v15 || v15 == 24 )
          *(_BYTE *)(v13 + 29) |= 0x10u;
        if ( v10 + 1 > a4 )
        {
          v26 = v5;
          v24 = v12;
          sub_2237220(&ptr, v12, v10 + 1, 8);
          v10 = (unsigned int)v28;
          v5 = v26;
          v12 = v24;
        }
        *((_QWORD *)ptr + v10) = v13;
        a4 = HIDWORD(v28);
        v10 = (unsigned int)(v28 + 1);
        LODWORD(v28) = v28 + 1;
      }
      ++v11;
    }
    while ( v11 != v7 );
    v16 = v10 + 1;
    goto LABEL_16;
  }
  v16 = (unsigned int)v28 + 1LL;
  a4 = HIDWORD(v28);
LABEL_16:
  if ( v16 > a4 )
  {
    sub_2237220(&ptr, v29, v16, 8);
    v9 = (char *)ptr + 8 * (unsigned int)v28;
  }
  else
  {
    v9 = (char *)ptr + 8 * v10;
  }
LABEL_18:
  *(_QWORD *)v9 = a2;
  v17 = (unsigned int)(v28 + 1);
  v18 = *(_BYTE *)(a2 + 28);
  LODWORD(v28) = v28 + 1;
  if ( (v18 & 0x7F) != 0x15 )
    goto LABEL_22;
  v19 = sub_B8E970(a2 + 48);
  if ( v19 )
  {
    if ( (*(_BYTE *)(v19 + 28) & 0x7F) == 0x32 )
    {
LABEL_21:
      v20 = sub_168B6C0((__int64)a1);
      sub_A8C6A0(v20, *(_QWORD *)(a2 + 88));
      v17 = (unsigned int)v28;
      goto LABEL_22;
    }
    while ( 1 )
    {
      v23 = *(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v19 = v23;
      if ( !v23 )
        break;
      if ( (*(_BYTE *)(v23 + 28) & 0x7F) == 0x32 )
        goto LABEL_21;
    }
  }
  v17 = (unsigned int)v28;
LABEL_22:
  v21 = sub_17B2ED0(*a1, (__int64 *)ptr, v17, a4, v5, a5);
  if ( ptr != v29 )
    free(ptr);
  return v21;
}
