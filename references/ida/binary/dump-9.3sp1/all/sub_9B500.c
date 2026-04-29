__int64 __fastcall sub_9B500(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  __int64 v6; // rdi
  int v7; // r9d
  _DWORD *v8; // rax
  __int64 v9; // r15
  unsigned __int8 v10; // al
  __int64 v11; // rax
  unsigned int v12; // r9d
  int v13; // edx
  __int64 v14; // r11
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  __int64 v17; // [rsp+0h] [rbp-100h]
  unsigned int v18; // [rsp+8h] [rbp-F8h]
  int v19; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v20; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v21; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v22; // [rsp+28h] [rbp-D8h]
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v27; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v30[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v31[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v32; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v35; // [rsp+C8h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  v3 = (_DWORD *)sub_11C8E0(a2, &v25, 0);
  if ( !v3 )
    return 0;
  v4 = v3;
  if ( *v3 != 23 )
    return 0;
  if ( !(unsigned __int8)sub_152630(v3, &v23) )
    return 0;
  v26 = a2;
  v6 = sub_129440(a1, v25, &v26, 0);
  if ( !v6 )
    return 0;
  if ( !(unsigned __int8)sub_1227B0(v6, &v24, &v27, 1) )
    return 0;
  v7 = 8 * *(_DWORD *)(v25 + 4) - v24;
  if ( v7 != v23 )
    return 0;
  v27 = sub_96A30(a1, &v26, v27, a2, (__int64)(v4 + 8), v7);
  if ( !v27 )
    return 0;
  v30[1] = a1;
  v31[0] = 0xFFFFFFFF00000000LL;
  v32 = 0xFFFFFFFF00000000LL;
  v30[0] = &off_4DBDF0;
  v30[2] = 0;
  v30[3] = 0;
  v31[1] = 0;
  v34 = 0xFFFFFFFFLL;
  v33 = 0;
  v8 = (_DWORD *)sub_954F0((__int64)v30, a2, 1u);
  v9 = (__int64)v8;
  if ( v8 )
  {
    if ( (unsigned int)(*v8 - 23) <= 1 )
    {
      v19 = v23;
      if ( (unsigned __int8)sub_11FD80(v8 + 12, v29, 1) )
      {
        if ( v19 == v29[0] )
        {
          v11 = *(_QWORD *)(a1 + 480);
          v12 = (unsigned int)v27;
          v28[1] = 0;
          v13 = *(_DWORD *)(v9 + 36);
          v14 = *(_QWORD *)(v11 + 112);
          v28[0] = 0xFFFFFFFF00000000LL;
          if ( v13 > v27[1] )
          {
            v17 = v14;
            v18 = v13;
            sub_125180(v28);
            if ( (unsigned __int8)sub_131780(v28, v17, v18, 0, 0) )
            {
              LODWORD(v14) = v17;
              v27 = v28;
              v12 = (unsigned int)v28;
              goto LABEL_17;
            }
            v27 = nullptr;
          }
          else if ( v27 )
          {
LABEL_17:
            v15 = sub_12EA80(v14, a1, v9, (int)v9 + 32, v26, v12, 0);
            if ( v15 )
            {
              sub_123A40(v29);
              v16 = sub_132E20(a1, a2, (unsigned int)v29, v26, (_DWORD)v27, 0);
              if ( v16 )
                v16 = sub_9AD50(a1, (__int64)v30, v9, a2);
              v21 = v16;
              sub_11CDA0(v29);
              v15 = v21;
            }
            v22 = v15;
            sub_11CDA0(v28);
            v10 = v22;
            goto LABEL_12;
          }
          if ( !under_debugger )
            sub_383060(51880);
          BUG();
        }
      }
    }
  }
  v10 = 0;
LABEL_12:
  v20 = v10;
  v30[0] = &off_4DBDF0;
  sub_11CDA0(&v32);
  sub_11CDA0(v31);
  return v20;
}
