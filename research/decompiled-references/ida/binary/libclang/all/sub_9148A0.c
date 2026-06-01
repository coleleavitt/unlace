__int64 __fastcall sub_9148A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  _QWORD *v3; // rax
  __int64 v4; // r14
  _QWORD *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 *v16; // r13
  __int64 v18[4]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v19[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v20; // [rsp+38h] [rbp-60h]
  unsigned int v21; // [rsp+40h] [rbp-58h]
  int v22; // [rsp+50h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = (_QWORD *)sub_A1A5A0(v2, 24);
  v4 = *v3;
  v5 = v3;
  v9 = sub_2575D20(v2, 24, v6);
  if ( v4 == v9 )
    sub_257D000(v18, v5, v7, v8);
  else
    sub_2576960(v18, v5);
  sub_A1A5E0(v2, 24);
  v10 = *(_QWORD *)(a1 + 184);
  v11 = sub_A1A5A0(v10, 56);
  sub_A1C070(v19, v11);
  sub_A1A5E0(v10, 56);
  v12 = sub_9E26A0(a1, a2, v19);
  if ( !(_BYTE)v12 )
    goto LABEL_17;
  v13 = v20;
  if ( !v22 )
  {
    if ( !v20 )
    {
      v14 = 64;
      goto LABEL_8;
    }
    if ( !v21 )
    {
      v14 = *(_QWORD *)(v20 + 32);
      goto LABEL_8;
    }
    sub_A1DB00(v19);
    sub_A1C490(v19);
    v13 = v20;
    if ( !v22 )
    {
      v14 = *(_QWORD *)(v20 + 32);
      if ( *(_DWORD *)(v14 + 16) != v21 && v21 )
        v14 = *(_QWORD *)(v20 + v21 + 32);
LABEL_8:
      v15 = v19[0];
      if ( *(_BYTE *)(v14 + 51) )
      {
        v16 = (__int64 *)(v13 + v21 + 72);
        if ( v21 == v19[0] )
          goto LABEL_14;
      }
      goto LABEL_13;
    }
  }
  v15 = v19[0];
LABEL_13:
  v16 = (__int64 *)(v13 + v15 + 40);
LABEL_14:
  if ( v9 == *v16 )
  {
    if ( v9 == v18[0] )
    {
      sub_257D030(v16, v18);
      goto LABEL_17;
    }
  }
  else if ( v9 != v18[0] )
  {
    sub_2576220(v16, v18);
    goto LABEL_17;
  }
  if ( v16 != v18 )
  {
    sub_5FF3B0(v16);
    if ( v9 == v18[0] )
      sub_257CF50(v16, v18);
    else
      sub_25768A0(v16, v18);
  }
LABEL_17:
  sub_A1C0C0(v19);
  sub_5FF3B0(v18);
  return v12;
}

