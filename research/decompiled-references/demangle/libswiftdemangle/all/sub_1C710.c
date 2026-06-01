__int64 __fastcall sub_1C710(_QWORD *a1)
{
  __int64 v1; // rax
  char *v2; // rdx
  char v3; // cl
  _QWORD *v4; // r12
  __int64 v5; // rdx
  char *v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // r12
  _QWORD *v12; // rdx
  __int64 v13; // rsi
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdx
  _BYTE *v18; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r13
  _QWORD *v22; // rax
  char *v23; // r13
  _QWORD v24[7]; // [rsp+0h] [rbp-38h] BYREF

  v24[1] = __readfsqword(0x28u);
  v1 = a1[4];
  if ( !v1 )
    return 0;
  v2 = (char *)a1[3];
  v3 = *v2;
  if ( *v2 == 81 )
  {
    a1[3] = v2 + 1;
    a1[4] = v1 - 1;
    v14 = sub_1C710((int)a1);
    if ( !v14 )
      return 0;
  }
  else
  {
    if ( v3 != 83 )
    {
      if ( v3 == 115 )
      {
        v4 = (_QWORD *)a1[5];
        a1[3] = v2 + 1;
        a1[4] = v1 - 1;
        v5 = v4[1];
        if ( !v5 || (v6 = (char *)(v5 + 5), (unsigned __int64)(v5 + 5) > v4[2]) )
        {
          v20 = 2LL * v4[4];
          if ( v20 < 6 )
            v20 = 6;
          v4[4] = v20;
          v21 = v20 + 8;
          v22 = malloc(v20 + 8);
          v23 = (char *)v22 + v21;
          *v22 = v4[3];
          v5 = (__int64)(v22 + 1);
          v4[3] = v22;
          v6 = (char *)v22 + 13;
          v4[2] = v23;
        }
        v4[1] = v6;
        *(_DWORD *)v5 = 1718187859;
        *(_BYTE *)(v5 + 4) = 116;
        v7 = sub_C510(v4, 143, v5, 5);
        v8 = sub_1B300(a1, 0, 0);
        if ( v8 )
        {
          v9 = sub_C400((_QWORD *)a1[5], 5);
          v10 = (_QWORD *)a1[5];
          v24[0] = v9;
          v11 = v9;
          sub_C080(v9, v7, v10);
          v12 = (_QWORD *)a1[5];
          v13 = v8;
          goto LABEL_12;
        }
      }
      return 0;
    }
    a1[3] = v2 + 1;
    a1[4] = v1 - 1;
    v14 = sub_1BFA0(a1);
    if ( !v14 )
      return 0;
  }
  v15 = sub_1B300(a1, 0, 0);
  if ( !v15 )
    return 0;
  v16 = sub_C400((_QWORD *)a1[5], 5);
  v17 = (_QWORD *)a1[5];
  v24[0] = v16;
  v11 = v16;
  sub_C080(v16, v14, v17);
  v12 = (_QWORD *)a1[5];
  v13 = v15;
LABEL_12:
  sub_C080(v11, v13, v12);
  v18 = (_BYTE *)a1[1];
  if ( v18 == (_BYTE *)a1[2] )
  {
    sub_18710((__int64)a1, v18, v24);
    return v24[0];
  }
  else
  {
    *(_QWORD *)v18 = v11;
    a1[1] += 8LL;
  }
  return v11;
}
