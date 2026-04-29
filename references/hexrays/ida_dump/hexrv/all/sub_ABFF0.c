__int64 __fastcall sub_ABFF0(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // bp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // eax
  int v9; // edx
  unsigned int v10; // ebx
  __int64 v12; // [rsp-8h] [rbp-E8h]
  __int64 v13; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v14[2]; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+18h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+20h] [rbp-C0h]
  _QWORD v17[5]; // [rsp+38h] [rbp-A8h] BYREF
  char v18; // [rsp+60h] [rbp-80h]
  __int64 v19[2]; // [rsp+68h] [rbp-78h] BYREF
  __int64 v20; // [rsp+78h] [rbp-68h] BYREF
  __int128 v21; // [rsp+80h] [rbp-60h]
  unsigned int v22; // [rsp+90h] [rbp-50h]
  unsigned __int64 v23; // [rsp+A0h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 48);
  v23 = __readfsqword(0x28u);
  v18 = 0;
  v17[1] = 0;
  v17[3] = 0;
  v17[4] = 0;
  v17[0] = &off_4AEA48;
  v19[0] = 0;
  v19[1] = 0;
  v20 = 0;
  v22 = 0;
  v17[2] = a1;
  v21 = 0;
  if ( v1 )
  {
    do
    {
      sub_123560(v14, a1, v1, 1);
      if ( (*(_DWORD *)v1 == 4 || *(_DWORD *)v1 == 67 && *(_DWORD *)(v1 + 36) == *(_DWORD *)(v1 + 68))
        && (v2 = sub_11B8C0(v1 + 32, &v13, 0)) != 0
        && !v13
        && *(_BYTE *)(v1 + 64) != 6 )
      {
        sub_5FF00(v19, v14);
        sub_311BB0(&v20, &v15);
      }
      else
      {
        v2 = 0;
      }
      if ( (!(unsigned __int8)sub_60500(v19) || (_QWORD)v21) && *(_DWORD *)v1 != 62 )
        sub_11A440(v1, v17, v3, v4, v5, v6, v12, v13, v14[0], v14[1], v15, v16);
      if ( !v2 )
      {
        sub_602C0(v19, v14, v3, v4, v5, v6);
        sub_312B60(&v20, &v15);
      }
      if ( v15 )
      {
        v16 = 0;
        qfree(v15);
      }
      qfree(v14[0]);
      v1 = *(_QWORD *)(v1 + 8);
    }
    while ( v1 );
    v7 = *(_DWORD *)(a1 + 24);
    if ( v22 )
    {
      v8 = v7 & 0xFFFFFDDF;
      v9 = *(_DWORD *)(a1 + 72);
      LOBYTE(v8) = v8 | 0x80;
      *(_DWORD *)(a1 + 24) = v8;
      sub_9E060(a1, (__int64)"DEMOTE64 %d", v9);
      v10 = v22;
      goto LABEL_16;
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 24);
  }
  v10 = 0;
  *(_DWORD *)(a1 + 24) = v7 & 0xFFFFFFDF;
LABEL_16:
  v17[0] = &off_4AEA48;
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  qfree(v19[0]);
  return v10;
}
