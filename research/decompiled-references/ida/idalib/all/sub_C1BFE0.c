__int64 __fastcall sub_C1BFE0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  __int64 *v8; // r14
  unsigned int v10; // eax
  unsigned int v11; // r13d
  int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // edi
  unsigned __int64 v15; // rsi
  unsigned int v16; // esi
  unsigned __int64 v17; // rdx
  unsigned int v18; // r13d
  _QWORD *v19; // rsi
  unsigned __int8 **v20; // rax
  unsigned int v22; // ebx
  unsigned int v23; // eax
  void *v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  void *v27; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v28; // [rsp+18h] [rbp-80h]
  char v29; // [rsp+1Ch] [rbp-7Ch]
  unsigned __int64 v30; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-70h]

  v7 = a3 & 1;
  if ( (_DWORD)v7 || (v8 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL), (byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0) )
  {
    v20 = (unsigned __int8 **)sub_E33C10(*a1, a1[1], 2442, 0);
    if ( v20 )
      sub_AE9DF0(v20, a3, 8u);
    return 0;
  }
  LOBYTE(v10) = sub_9EC890(*v8, a2, v7, a4, a5);
  v11 = v10;
  if ( !(_BYTE)v10 )
  {
    sub_E33C10(*a1, a1[1], 108, 0);
    return v11;
  }
  if ( a1[3] )
  {
    v28 = *(_DWORD *)(a2 + 8);
    if ( v28 > 0x40 )
      sub_2205510(&v27);
    else
      v27 = *(void **)a2;
    v29 = *(_BYTE *)(a2 + 12);
    sub_B96770((__int64)&v30, (__int64 *)&v27);
    sub_A4FD20(a1[3], (__int64)&v30);
    if ( (unsigned int)v30 > 1 )
      sub_A4F8E0((int *)&v30);
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
  }
  v12 = *((_DWORD *)a1 + 4);
  v13 = *(_QWORD *)(*(_QWORD *)(*v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) == 13 && ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) == 0x1B4 )
  {
    v22 = *(_DWORD *)(a2 + 8);
    if ( v12 == 3 )
    {
      if ( v22 <= 0x40 )
      {
        v26 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v22;
        if ( !v22 )
          LOBYTE(v26) = 0;
        *(_QWORD *)a2 = v26 & 1;
        return v11;
      }
      **(_QWORD **)a2 = 1;
    }
    else
    {
      if ( v22 <= 0x40 )
      {
        v25 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v22) & (*(_QWORD *)a2 == 0);
        if ( !v22 )
          v25 = 0;
        *(_QWORD *)a2 = v25;
        return v11;
      }
      **(_QWORD **)a2 = (unsigned int)sub_2206780(a2) == v22;
    }
    memset((void *)(*(_QWORD *)a2 + 8LL), 0, 8 * ((unsigned int)(((unsigned __int64)v22 + 63) >> 6) + 0x1FFFFFFF));
    return v11;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    if ( v12 != 3 )
    {
      v11 = *(unsigned __int8 *)(a2 + 12);
      sub_2205950(a2);
      return v11;
    }
    goto LABEL_41;
  }
  v14 = *(_DWORD *)(a2 + 8);
  v15 = *(_QWORD *)a2;
  if ( v14 > 0x40 )
    v15 = *(_QWORD *)(v15 + 8LL * ((v14 - 1) >> 6));
  if ( (v15 & (1LL << ((unsigned __int8)v14 - 1))) == 0 )
  {
    if ( v12 != 3 )
    {
      sub_2205950(a2);
      return v11;
    }
LABEL_41:
    sub_2205900(a2);
    if ( *(_BYTE *)(a2 + 12) )
      return v11;
    if ( !sub_C103B0((__int64 *)a2) )
      return v11;
    v19 = (_QWORD *)a1[1];
    if ( (*v19 & 0x1000000LL) == 0 )
      return v11;
    v23 = *(_DWORD *)(a2 + 8);
    v31 = v23;
    if ( v23 > 0x40 )
    {
      sub_2205510(&v30);
      v19 = (_QWORD *)a1[1];
      v23 = v31;
      v24 = (void *)v30;
    }
    else
    {
      v24 = *(void **)a2;
    }
    v28 = v23;
    v29 = 1;
    v27 = v24;
    goto LABEL_47;
  }
  if ( v12 == 3 )
  {
    sub_2205900(a2);
    return v11;
  }
  sub_2205950(a2);
  if ( *(_BYTE *)(a2 + 12) )
    goto LABEL_23;
  v16 = *(_DWORD *)(a2 + 8);
  v17 = *(_QWORD *)a2;
  if ( v16 > 0x40 )
    v17 = *(_QWORD *)(v17 + 8LL * ((v16 - 1) >> 6));
  if ( (v17 & (1LL << ((unsigned __int8)v16 - 1))) == 0 )
  {
LABEL_23:
    if ( (*(_QWORD *)a1[1] & 0x1000000) != 0 )
    {
      v18 = *(_DWORD *)(a2 + 8);
      sub_2206B70(&v30, a2, v18 + 1);
      v29 = 0;
      v28 = v31;
      v27 = (void *)v30;
      if ( v31 > 0x40 )
        *(_QWORD *)(v30 + 8LL * (v18 >> 6)) |= 1LL << v18;
      else
        v27 = (void *)(v30 | (1LL << v18));
      v19 = (_QWORD *)a1[1];
LABEL_47:
      v11 = sub_C1B140(*a1, (__int64)v19, (__int64)&v27, a3);
      if ( v28 > 0x40 && v27 )
        operator delete[](v27);
    }
  }
  return v11;
}
