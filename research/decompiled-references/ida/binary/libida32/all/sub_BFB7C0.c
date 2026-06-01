__int64 __fastcall sub_BFB7C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // ebp
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rsi
  unsigned __int8 **v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rbp
  int v20; // ecx
  unsigned __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // r8
  void *v24; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+8h] [rbp-70h]
  void *v26; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-50h]
  char v28; // [rsp+2Ch] [rbp-4Ch]

  v7 = a3 & 1;
  if ( (_DWORD)v7 || (byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
  {
    v16 = (unsigned __int8 **)sub_E0FED0(*a1, a1[1], 2442, 0);
    if ( v16 )
      sub_AC60B0(v16, a3, 8u);
    return 0;
  }
  LOBYTE(v9) = sub_9C8B50(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, v7, a4, a5);
  v11 = v9;
  if ( !(_BYTE)v9 )
  {
    sub_E0FED0(*a1, a1[1], 108, 0);
    return v11;
  }
  v12 = *a1;
  v13 = *(_DWORD *)a1[4];
  if ( v13 == 2 )
  {
    sub_BF20A0((__int64)&v24, *(_QWORD *)(v12 + 16), a1[2], a2, v10);
    v19 = a1[4];
    v27 = *(_DWORD *)(v19 + 16);
    if ( v27 > 0x40 )
      sub_21E17D0(&v26);
    else
      v26 = *(void **)(v19 + 8);
    v20 = *((_DWORD *)a1 + 6);
    v21 = a1[1];
    v22 = *a1;
    v28 = *(_BYTE *)(v19 + 20);
    v11 = sub_BFA6A0(v22, v21, (__int64)&v24, v20, (__int64)&v26, (__int64)&v24);
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
    if ( (_BYTE)v11 )
    {
      sub_BF20A0((__int64)&v26, *(_QWORD *)(*a1 + 16LL), a3, (__int64)&v24, v23);
      sub_BF5070(a2, (__int64)&v26);
      if ( v27 > 0x40 )
      {
        if ( v26 )
          operator delete[](v26);
      }
    }
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
  }
  else
  {
    v14 = a1[1];
    if ( v13 != 3 )
    {
      sub_E0FED0(v12, v14, 108, 0);
      return 0;
    }
    v17 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v14 + 3) & 2) != 0 )
      sub_BD2F40((unsigned int *)&v26, *(_QWORD *)(v17 + 2320));
    else
      sub_FC7050(*(_QWORD *)(v17 + 2320));
    v18 = sub_21D5370();
    sub_21D8290(&v26, 0.0);
    sub_21DE690(&v24, &v26, v18);
    sub_21D5AF0(&v26);
    if ( (unsigned __int8)sub_BF4310(*a1, a1[1], a2, a1[2], &v24)
      && (unsigned __int8)sub_BEE430(*a1, a1[1], &v24, *((_DWORD *)a1 + 6), (_QWORD *)(a1[4] + 8LL)) )
    {
      v11 = sub_BF6C00(*a1, a1[1], &v24, a3, a2);
    }
    else
    {
      v11 = 0;
    }
    sub_971860(&v24);
  }
  return v11;
}

