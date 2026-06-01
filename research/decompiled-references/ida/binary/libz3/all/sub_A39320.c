__int64 __fastcall sub_A39320(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r15d
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rsi
  int v11[8]; // [rsp+10h] [rbp-98h] BYREF
  char v12[16]; // [rsp+30h] [rbp-78h] BYREF
  int v13; // [rsp+40h] [rbp-68h]
  char v14; // [rsp+44h] [rbp-64h]
  char v15[88]; // [rsp+50h] [rbp-58h] BYREF

  v3 = 0;
  if ( *(_DWORD *)(a3 + 8) != 1 )
  {
    if ( *(_DWORD *)(a3 + 48) != 1 )
      return v3;
    goto LABEL_12;
  }
  sub_894960((__int64)v12, a3 + 16);
  if ( *(_BYTE *)(a3 + 88) )
  {
    if ( (*(_BYTE *)(a1[82] + 4LL * a2 + 3) & 0x40) != 0 )
    {
      if ( (v14 & 1) != 0 || v13 != 1 || *(_DWORD *)v15 )
      {
        sub_992CA0((__int64)v11, (__int64)v12);
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v12, v11);
        sub_992B50((__int64)v15);
        sub_25A130((char *)v11);
      }
      else
      {
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v12, (__int64)&qword_1C7F280, (__int64)v12);
      }
    }
    else
    {
      sub_9AC520((__int64)v12, (__int64)(a1 + 16));
    }
  }
  v8 = *(_QWORD *)(a1[85] + 8LL * a2);
  if ( !v8 || (LOBYTE(v9) = sub_927C80(v8 + 16, (__int64)v12), v3 = v9, (_BYTE)v9) )
  {
    sub_A38880((__int64)a1, a2, (__int64)v12, 0, *(_QWORD *)(a3 + 96));
    v3 = 1;
  }
  sub_25A130(v15);
  sub_25A130(v12);
  if ( *(_DWORD *)(a3 + 48) == 1 )
  {
LABEL_12:
    sub_894960((__int64)v12, a3 + 56);
    if ( *(_BYTE *)(a3 + 89) )
    {
      if ( (*(_BYTE *)(a1[82] + 4LL * a2 + 3) & 0x40) != 0 )
      {
        if ( (v14 & 1) != 0 || v13 != 1 || *(_DWORD *)v15 )
        {
          sub_992C20((__int64)v11, (__int64)v12);
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v12, v11);
          sub_992B50((__int64)v15);
          sub_25A130((char *)v11);
        }
        else
        {
          sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v12, (__int64)&qword_1C7F280, (__int64)v12);
        }
      }
      else
      {
        sub_992DA0((__int64)v12, (__int64)(a1 + 16));
      }
    }
    v10 = *(_QWORD *)(a1[86] + 8LL * a2);
    if ( !v10 || sub_927C80((__int64)v12, v10 + 16) )
    {
      sub_A38880((__int64)a1, a2, (__int64)v12, 1, *(_QWORD *)(a3 + 104));
      v3 = 1;
    }
    sub_25A130(v15);
    sub_25A130(v12);
  }
  return v3;
}

