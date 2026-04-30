__int64 __fastcall sub_3C61E0(__int64 a1, __int64 a2, __int64 a3)
{
  double v3; // xmm0_8
  unsigned int v4; // r12d
  __int64 v6; // rsi
  __int64 v7; // rdx
  const char *v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  const char *v11; // rsi
  __int64 v12; // rdx
  const char *v13; // rsi
  int v14; // eax
  const char *v16; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v17; // [rsp+8h] [rbp-A0h]
  const char *v18; // [rsp+18h] [rbp-90h]
  __int128 v19; // [rsp+20h] [rbp-88h]
  const char *v20; // [rsp+30h] [rbp-78h]
  __int128 v21; // [rsp+38h] [rbp-70h]
  __int64 v22; // [rsp+48h] [rbp-60h]
  __int16 v23; // [rsp+50h] [rbp-58h]
  _BYTE v24[24]; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp-30h]

  v3 = 0.0;
  v4 = a3;
  v25 = __readfsqword(0x28u);
  v16 = nullptr;
  v23 = 0;
  v6 = *(_QWORD *)(a1 + 2488);
  v18 = nullptr;
  v20 = nullptr;
  v22 = -1;
  v17 = 0;
  v19 = 0;
  v21 = 0;
  describe_tlc_ordinal(&v16, v6, a3);
  v7 = v17;
  v8 = &s1;
  if ( (_QWORD)v17 )
  {
    v8 = v16;
    v7 = v17 - 1;
  }
  sub_4DC370(a2, v8, v7);
  if ( HIBYTE(v23) )
  {
    sub_4DC370(a2, "Error", 5);
  }
  else
  {
    if ( v22 == -1 )
    {
      sub_4DC3D0(a2);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2488) + 112LL) & 2) == 0 )
        goto LABEL_7;
      goto LABEL_22;
    }
    v3 = qsnprintf(v24, 16, "%08X", v22);
    sub_4DC370(a2, v24, v9);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2488) + 112LL) & 2) == 0 )
  {
LABEL_7:
    sub_4DC490(a2, v4);
    goto LABEL_8;
  }
LABEL_22:
  sub_4DC3D0(a2);
LABEL_8:
  v10 = v19;
  v11 = &s1;
  if ( (_QWORD)v19 )
  {
    v11 = v18;
    v10 = v19 - 1;
  }
  sub_4DC370(a2, v11, v10);
  v12 = v21;
  v13 = &s1;
  if ( (_QWORD)v21 )
  {
    v13 = v20;
    v12 = v21 - 1;
  }
  sub_4DC370(a2, v13, v12);
  v14 = sub_3A4200((__int64)&v16);
  if ( v14 >= 0 )
    *(_DWORD *)(a2 + 124) = v14;
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    v3 = qfree(v20, v13, v3);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    v3 = qfree(v18, v13, v3);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, v13, v3);
  }
  return 1;
}
