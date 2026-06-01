__int64 __fastcall sub_A33A00(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rsi
  char v11[32]; // [rsp+20h] [rbp-F8h] BYREF
  int v12[8]; // [rsp+40h] [rbp-D8h] BYREF
  char v13[32]; // [rsp+60h] [rbp-B8h] BYREF
  _DWORD v14[8]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE v15[16]; // [rsp+A0h] [rbp-78h] BYREF
  int v16; // [rsp+B0h] [rbp-68h]
  char v17; // [rsp+B4h] [rbp-64h]
  int v18; // [rsp+C0h] [rbp-58h]

  v3 = 0;
  if ( *(_DWORD *)(a3 + 8) != 1 )
  {
    if ( *(_DWORD *)(a3 + 48) != 1 )
      return v3;
    goto LABEL_12;
  }
  sub_894960((__int64)v12, a3 + 16);
  sub_9D4F70((__int64)v14, (__int64)v12);
  sub_25A130(v13);
  sub_25A130((char *)v12);
  if ( *(_BYTE *)(a3 + 88) )
  {
    if ( (*(_BYTE *)(a1[90] + 4LL * a2 + 3) & 0x40) != 0 )
    {
      if ( (v17 & 1) != 0 || v16 != 1 || v14[0] | v18 )
      {
        sub_992CA0((__int64)v11, (__int64)v15);
        sub_894960((__int64)v12, (__int64)v11);
        sub_992B50((__int64)v14);
        sub_98B520((__int64)v15, v12);
        sub_25A130(v13);
        sub_25A130((char *)v12);
        sub_25A130(v11);
      }
      else
      {
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v15, (__int64)&qword_1C7F280, (__int64)v15);
      }
    }
    else
    {
      sub_9F2C20((__int64)v14, (__int64)(a1 + 20));
    }
  }
  v8 = *(_QWORD *)(a1[93] + 8LL * a2);
  if ( !v8 || (LOBYTE(v9) = sub_33D280(v8 + 16, (__int64)v14), v3 = v9, (_BYTE)v9) )
  {
    sub_A32F60((__int64)a1, a2, (__int64)v14, 0, *(_QWORD *)(a3 + 96));
    v3 = 1;
  }
  sub_2A6060((__int64)v14);
  if ( *(_DWORD *)(a3 + 48) == 1 )
  {
LABEL_12:
    sub_894960((__int64)v12, a3 + 56);
    sub_9D4F70((__int64)v14, (__int64)v12);
    sub_25A130(v13);
    sub_25A130((char *)v12);
    if ( *(_BYTE *)(a3 + 89) )
    {
      if ( (*(_BYTE *)(a1[90] + 4LL * a2 + 3) & 0x40) != 0 )
      {
        if ( (v17 & 1) != 0 || v16 != 1 || v18 | v14[0] )
        {
          sub_992C20((__int64)v11, (__int64)v15);
          sub_894960((__int64)v12, (__int64)v11);
          sub_992B50((__int64)v14);
          sub_98B520((__int64)v15, v12);
          sub_25A130(v13);
          sub_25A130((char *)v12);
          sub_25A130(v11);
        }
        else
        {
          sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v15, (__int64)&qword_1C7F280, (__int64)v15);
        }
      }
      else
      {
        sub_9FF170((__int64)v14, (__int64)(a1 + 20));
      }
    }
    v10 = *(_QWORD *)(a1[94] + 8LL * a2);
    if ( !v10 || sub_33D280((__int64)v14, v10 + 16) )
    {
      sub_A32F60((__int64)a1, a2, (__int64)v14, 1, *(_QWORD *)(a3 + 104));
      v3 = 1;
    }
    sub_2A6060((__int64)v14);
  }
  return v3;
}

