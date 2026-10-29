__int64 __fastcall sub_3BA160(_QWORD *a1, __int64 *a2, unsigned int a3)
{
  __int64 v5; // rax
  int v6; // r13d
  __int64 v8; // rsi
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_3E9640(a1) && (int)sub_3E9860(a1, &v12, a3) > 0 )
  {
    *a2 = v12;
    return 1;
  }
  v5 = a1[2];
  v6 = *(_DWORD *)(v5 + 20);
  if ( *(_DWORD *)(v5 + 16) != v6 )
  {
    v9 = sub_4F8910(a1, a3);
    v10 = a1[2];
    if ( v9 == 2 )
    {
      v6 = *(_DWORD *)(v10 + 16);
      if ( v6 <= 8 )
        goto LABEL_5;
    }
    else
    {
      v6 = *(_DWORD *)(v10 + 20);
      if ( v6 <= 8 )
        goto LABEL_5;
    }
LABEL_8:
    if ( a3 != -1 )
      a3 += sub_614FB0(*a1, 29);
    v8 = *a1;
    v12 = a3;
    if ( sub_79B5C0(&v12, v8, 0xFFFFFFFFLL, a2, 8, 65) > 0 )
    {
      v11 = *a2 - 1;
      if ( (unsigned __int64)v6 <= 0x3F )
        v11 &= ~(-1LL << v6);
      *a2 = v11;
      return 1;
    }
    *a2 = -1;
    return 0;
  }
  if ( v6 > 8 )
    goto LABEL_8;
LABEL_5:
  if ( (unsigned __int8)sub_3B9CB0((__int64)a1, &v12, a3) )
  {
    *a2 = (unsigned __int8)v12;
    return 1;
  }
  *a2 = 255;
  return 0;
}

