__int64 __fastcall sub_85F8D0(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  unsigned int v3; // ebp
  _QWORD *v7; // rsi
  __int64 v8; // r14
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned int v13; // eax
  unsigned __int8 **v14; // rax
  __int64 v15; // rsi
  char v16; // bl
  void *v17; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+8h] [rbp-C0h]
  __int64 v19; // [rsp+10h] [rbp-B8h]
  char v20; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+30h] [rbp-98h]
  __int64 v23; // [rsp+38h] [rbp-90h]
  _BYTE v24[136]; // [rsp+40h] [rbp-88h] BYREF

  if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return 0;
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 2) & 1) == 0
    && (*(_BYTE *)(a2 + 1) & 6) == 0
    && !(unsigned __int8)sub_B19540(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_QWORD *)(a1 + 16)) )
  {
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
    {
      v14 = (unsigned __int8 **)sub_A2E130(a1, a2, 2256, 0);
      v15 = *(_QWORD *)(a2 + 8);
      if ( v14 )
        sub_8356A0(v14, v15, 8u);
    }
    else
    {
      sub_A2E130(a1, a2, 110, 0);
    }
    return 0;
  }
  if ( !*(_BYTE *)(a1 + 52) )
  {
    v3 = sub_856400((__int64)a3, a1, a2);
    if ( (_BYTE)v3 )
    {
      if ( (*(_BYTE *)(a2 + 1) & 6) != 0 )
      {
        v7 = *(_QWORD **)(a1 + 16);
        v20 |= 1u;
        v17 = nullptr;
        v23 = 0x800000000LL;
        v18 = 0;
        v19 = 0;
        v21 = 0;
        ptr = v24;
        v24[65] = 0;
        sub_824D00((__int64)&v17, v7, (__int64)a3);
        if ( !(unsigned __int8)sub_85F440(a1, (_DWORD *)a2, *(_QWORD *)(a2 + 8), (__int64)&v17, (__int64)a3, 0) )
        {
          if ( ptr != v24 )
            free(ptr);
          return 0;
        }
        if ( ptr != v24 )
          free(ptr);
      }
      v8 = *(_QWORD *)(a2 + 8);
      v9 = sub_8124E0(a2);
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v10 + 16) == 13 && ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) == 0x1B2 )
        goto LABEL_31;
      BYTE4(v19) = 1;
      v17 = &v20;
      v18 = 8;
      LODWORD(v19) = 0;
      v16 = sub_849100(0, a1, v9, v8, a3, 0, 0, (__int64)&v17);
      if ( !BYTE4(v19) )
        free(v17);
      if ( v16 )
      {
LABEL_31:
        if ( *(_QWORD *)(a1 + 936) )
          sub_824030(a1);
        return v3;
      }
    }
    return 0;
  }
  v11 = sub_6B4C60(*(_QWORD *)(a1 + 16));
  if ( !(unsigned __int8)sub_8C9C50(v11, a1, a2, a3) )
    return 0;
  v12 = *(_QWORD *)(a2 + 8);
  v13 = sub_8124E0(a2);
  return sub_849950(a1, v13, v12, a3, 0);
}

