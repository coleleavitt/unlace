__int64 __fastcall sub_863D20(__int64 a1, __int64 *a2, __int64 a3, int a4, unsigned __int8 a5)
{
  unsigned int v8; // ebx
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // [rsp+8h] [rbp-90h]
  _QWORD v15[2]; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v16; // [rsp+20h] [rbp-78h] BYREF
  char v17; // [rsp+24h] [rbp-74h]
  _QWORD v18[14]; // [rsp+28h] [rbp-70h] BYREF

  v8 = sub_B080B0(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  if ( !(_BYTE)v8 )
    return v8;
  v15[0] = a1;
  v14 = sub_25E8DD0("EvaluateAsFloat", 0xFu);
  v17 &= ~1u;
  LOWORD(v15[0]) = 0;
  v15[1] = 0;
  v16 = 0;
  v8 = sub_863720((__int64 (__fastcall ***)())a1, (__int64)v15, a3, a5);
  v11 = v16;
  if ( !(_BYTE)v8 )
    goto LABEL_9;
  if ( v16 != 3 )
  {
    v8 = 0;
    goto LABEL_9;
  }
  if ( a4 > 1 )
  {
LABEL_6:
    v12 = sub_2575D20(a1, v15, v10);
    v13 = v12;
    if ( *a2 == v12 )
    {
      if ( *a2 == v18[0] )
      {
        sub_257D030(a2, v18);
        v11 = v16;
        goto LABEL_9;
      }
    }
    else if ( v12 != v18[0] )
    {
      sub_2576220(a2, v18);
      v11 = v16;
      goto LABEL_9;
    }
    sub_5FF3B0(a2);
    if ( v13 == v18[0] )
      sub_257CF50(a2, v18);
    else
      sub_25768A0(a2, v18);
    v11 = v16;
LABEL_9:
    if ( v11 <= 1 )
      goto LABEL_10;
    goto LABEL_14;
  }
  if ( LOBYTE(v15[0]) )
  {
    v8 = 0;
  }
  else
  {
    if ( a4 == 1 || !BYTE1(v15[0]) )
      goto LABEL_6;
    v8 = 0;
  }
LABEL_14:
  sub_69F740((__int64)&v16);
LABEL_10:
  if ( v14 )
    sub_25EA250(v14);
  return v8;
}

