__int64 __fastcall sub_21FA1B0(__int64 a1, __int64 a2, char a3)
{
  char v4; // al
  int v5; // esi
  signed int v6; // r13d
  __int64 v7; // rsi
  unsigned int v8; // r13d
  int v9; // eax
  __int64 v10; // rdx
  bool v11; // r12
  int v12; // eax
  unsigned int v14; // r13d
  __int64 v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_BYTE *)(a2 + 20) ^ *(_BYTE *)(a1 + 20);
  v5 = *(_DWORD *)(a2 + 16);
  v6 = *(_DWORD *)(a1 + 16) - v5;
  if ( ((v4 & 8) != 0) != a3 )
  {
    v7 = *(_QWORD *)a2;
    if ( v6 >= 0 )
    {
      sub_21F9140(v15, v7);
      sub_21F9190((__int64)v15, a2);
      if ( v6 )
      {
        v8 = sub_21F9D00(v15, v6 - 1);
        sub_21F8BF0((_DWORD *)a1, 1);
        v11 = v8 != 0;
        v12 = sub_21F9DB0(a1, (__int64)v15);
        if ( !v12 )
          goto LABEL_24;
      }
      else
      {
        v11 = 0;
        v8 = 0;
        v12 = sub_21F9DB0(a1, (__int64)v15);
        if ( !v12 )
          goto LABEL_24;
      }
      if ( v12 != 2 )
      {
        sub_21F9860((_QWORD *)a1);
        if ( !v11 )
          goto LABEL_20;
        goto LABEL_9;
      }
      if ( v11 )
      {
        if ( v8 == 1 )
        {
          v8 = 3;
        }
        else if ( v8 == 3 )
        {
          v8 = 1;
        }
      }
    }
    else
    {
      sub_21F9140(v15, v7);
      sub_21F9190((__int64)v15, a2);
      v8 = sub_21F9D00((__int64 *)a1, ~v6);
      sub_21F8BF0(v15, 1);
      v9 = sub_21F9DB0(a1, (__int64)v15);
      if ( !v9 )
      {
        if ( v8 )
        {
          v10 = 1;
          if ( v8 == 1 )
          {
            v8 = 3;
          }
          else if ( v8 == 3 )
          {
            v8 = 1;
          }
          goto LABEL_8;
        }
LABEL_24:
        v10 = 0;
LABEL_8:
        sub_21F9920(v15, (_QWORD *)a1, v10);
        sub_21F9220((_QWORD *)a1, (__int64)v15);
LABEL_9:
        *(_BYTE *)(a1 + 20) = ~*(_BYTE *)(a1 + 20) & 8 | *(_BYTE *)(a1 + 20) & 0xF7;
LABEL_20:
        sub_21F9170(v15);
        return v8;
      }
      v11 = 0;
      if ( v9 != 2 )
      {
        sub_21F9860((_QWORD *)a1);
        goto LABEL_20;
      }
    }
    sub_21F9920((__int64 *)a1, v15, v11);
    goto LABEL_20;
  }
  if ( v6 > 0 )
  {
    sub_21F9140(v15, *(_QWORD *)a2);
    sub_21F9190((__int64)v15, a2);
    v8 = sub_21F9D00(v15, v6);
    sub_21F98D0((__int64 *)a1, v15);
    goto LABEL_20;
  }
  v14 = sub_21F9D00((__int64 *)a1, v5 - *(_DWORD *)(a1 + 16));
  sub_21F98D0((__int64 *)a1, (_QWORD *)a2);
  return v14;
}
