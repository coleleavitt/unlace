__int64 __fastcall sub_3BEFF0(__int64 *a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  int v6; // r13d
  __int64 v8; // rsi
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_3FC580(a1) && (int)sub_3FC7A0(a1, v12, a3) > 0 )
  {
    *a2 = LODWORD(v12[0]);
    return 1;
  }
  v5 = a1[2];
  v6 = *(_DWORD *)(v5 + 20);
  if ( *(_DWORD *)(v5 + 16) != v6 )
  {
    v9 = sub_510230(a1, a3);
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
      a3 = sub_3B9DC0(a1, a3);
    v8 = *a1;
    v12[0] = a3;
    if ( sub_7BE950(v12, v8, -1, a2, 8, 65) > 0 )
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
  if ( (unsigned __int8)sub_3BEB30(a1, v12, a3) )
  {
    *a2 = LOBYTE(v12[0]);
    return 1;
  }
  *a2 = 255;
  return 0;
}
