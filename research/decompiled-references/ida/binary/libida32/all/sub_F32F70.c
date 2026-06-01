__int64 __fastcall sub_F32F70(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned int v6; // ebp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned int v9; // ebp
  int v11; // ebp
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // eax
  char v15; // r14
  unsigned int v16; // ebp
  void *v17; // r15
  unsigned int v18; // ebp
  unsigned __int64 v19; // rax
  void *v20; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+8h] [rbp-60h]
  char v22; // [rsp+Ch] [rbp-5Ch]
  void *v23; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-50h]
  char v25; // [rsp+1Ch] [rbp-4Ch]
  void *v26; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-40h]

  v4 = sub_A8AC40((__int64)a1, a2);
  v5 = v4;
  if ( !v4 )
    goto LABEL_2;
  v6 = *(_DWORD *)(a3 + 8);
  if ( (v4 & (v4 - 1)) != 0 )
  {
    if ( HIDWORD(v4) )
    {
      v27 = *(_DWORD *)(a3 + 8);
      if ( v6 <= 0x40 )
      {
        v7 = *(_QWORD *)a3;
LABEL_15:
        v21 = v6;
        v20 = (void *)v7;
        v22 = 1;
        v13 = sub_A3FFA0(a1);
        v14 = sub_A73FE0((__int64)a1, *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v6 >= v14 )
          v14 = v21;
        v15 = v22;
        sub_21E2F90(&v26, &v20, 2 * v14);
        v16 = v27;
        v17 = v26;
        if ( v21 > 0x40 && v20 )
          operator delete[](v20);
        v20 = v17;
        v21 = v16;
        v22 = v15;
        v27 = v16;
        if ( v16 > 0x40 )
        {
          sub_21E1730(&v26, v5, 0);
          v16 = v27;
          v5 = (unsigned __int64)v26;
        }
        v23 = (void *)v5;
        v24 = v16;
        v25 = 1;
        sub_21E60A0(&v23, &v20);
        v18 = v24;
        if ( v24 > 0x40 )
        {
          v9 = v18 - sub_21E2A40(&v23);
          if ( v23 )
            operator delete[](v23);
        }
        else
        {
          v9 = 0;
          if ( v23 )
          {
            _BitScanReverse64(&v19, (unsigned __int64)v23);
            v9 = 64 - (v19 ^ 0x3F);
          }
        }
        if ( v21 > 0x40 && v20 )
          operator delete[](v20);
        return v9;
      }
LABEL_31:
      sub_21E17D0(&v26);
      v6 = v27;
      v7 = (unsigned __int64)v26;
      goto LABEL_15;
    }
LABEL_2:
    v6 = *(_DWORD *)(a3 + 8);
    if ( v6 <= 0x40 )
    {
      v7 = *(_QWORD *)a3;
      if ( !HIDWORD(*(_QWORD *)a3) )
      {
        v8 = v5 * v7;
        v9 = 0;
        if ( v8 )
        {
          _BitScanReverse64(&v8, v8);
          return 64 - ((unsigned int)v8 ^ 0x3F);
        }
        return v9;
      }
      goto LABEL_15;
    }
    v27 = *(_DWORD *)(a3 + 8);
    goto LABEL_31;
  }
  if ( v6 > 0x40 )
  {
    v11 = v6 - sub_21E2A40(a3);
  }
  else
  {
    v11 = 0;
    if ( *(_QWORD *)a3 )
    {
      _BitScanReverse64(&v12, *(_QWORD *)a3);
      v11 = 64 - (v12 ^ 0x3F);
    }
  }
  _BitScanReverse64(&v5, v5);
  return v11 - ((unsigned int)v5 ^ 0x3F) + 63;
}

