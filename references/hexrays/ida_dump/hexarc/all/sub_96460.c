__int64 __fastcall sub_96460(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v6; // rsi
  _DWORD *v7; // rax
  unsigned int v8; // r15d
  _DWORD *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  _DWORD *v13; // r15
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r12
  char v19; // r10
  char v20; // al
  char v21; // al
  char v22; // r10
  _QWORD *v23; // rdi
  char v24; // r10
  int v25; // eax
  char v26; // al
  char v27; // [rsp+8h] [rbp-100h]
  char v28; // [rsp+18h] [rbp-F0h]
  char v29; // [rsp+18h] [rbp-F0h]
  __int64 v30; // [rsp+20h] [rbp-E8h]
  char v31; // [rsp+20h] [rbp-E8h]
  __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C8h]
  __int64 v34; // [rsp+48h] [rbp-C0h]
  _DWORD *v35; // [rsp+50h] [rbp-B8h]
  __int64 v36; // [rsp+58h] [rbp-B0h] BYREF
  int v37; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v38; // [rsp+68h] [rbp-A0h]
  __int64 v39; // [rsp+78h] [rbp-90h]
  _QWORD v40[2]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v41[2]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v42[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v43[11]; // [rsp+B0h] [rbp-58h]

  v2 = 0;
  v3 = a1;
  v43[3] = __readfsqword(0x28u);
  v33 = a1;
  v35 = nullptr;
  v34 = a2;
  v43[0] = a2 + 32;
  v43[1] = a2 + 48;
  v5 = a2;
  while ( 1 )
  {
    v6 = v43[v2];
    v36 = v5;
    v7 = (_DWORD *)sub_122D80(a1, v6, &v36, 0);
    if ( v7 )
    {
      if ( *v7 == 9 )
      {
        v10 = (_DWORD *)sub_122D80(v33, v7 + 8, &v36, 0);
        v35 = v10;
        v11 = (__int64)v10;
        if ( v10 )
        {
          v12 = *v10;
          if ( v12 == 25 )
            goto LABEL_15;
          if ( v12 == 35 && *(_BYTE *)(v11 + 32) == 4 )
          {
            v13 = *(_DWORD **)(v11 + 40);
            if ( *v13 == 12
              && ((unsigned __int8)sub_11F4A0(v13 + 8, v11 + 48, 0) || (unsigned __int8)sub_11F4A0(
                                                                                          v13 + 12,
                                                                                          v35 + 12,
                                                                                          0)) )
            {
              break;
            }
          }
        }
      }
    }
    if ( v2 )
      return 0;
    v5 = v34;
    a1 = v33;
    v2 = 1;
  }
  v35 = v13;
  v11 = (__int64)v13;
LABEL_15:
  v14 = *(_QWORD *)(v3 + 480);
  v15 = v43[v2 ^ 1];
  v32 = a2;
  v16 = *(_QWORD *)(v14 + 112);
  v17 = sub_8DBA0(v3, &v32, v36, v11);
  v18 = v17;
  if ( !v17 )
    return 0;
  v40[0] = 0xFFFFFFFF00000000LL;
  v40[1] = 0;
  v41[0] = 0xFFFFFFFF00000000LL;
  v41[1] = 0;
  v42[0] = 0xFFFFFFFF00000000LL;
  v42[1] = 0;
  v38 = 0;
  sub_11ECE0(&v37, v17);
  v19 = sub_8D0A0(v16, &v37);
  if ( !v19 )
    goto LABEL_17;
  if ( HIDWORD(v40[0]) != *(_DWORD *)(a2 + 36) )
    goto LABEL_17;
  if ( SHIDWORD(v40[0]) >= *(_DWORD *)(v16 + 88) )
  {
    if ( HIDWORD(v40[0]) != *(_DWORD *)(v16 + 88) )
      goto LABEL_17;
    v27 = v19;
    v20 = sub_1164F0(v16, 12);
    v19 = v27;
    if ( !v20 )
      goto LABEL_17;
  }
  v28 = v19;
  v30 = v32;
  v21 = sub_12C760(v3, v32, (unsigned int)v40, a2, v15, 0);
  v22 = v28;
  v23 = v41;
  if ( !v21 )
  {
    v26 = sub_12C760(v3, v30, (unsigned int)v41, a2, v15, 0);
    v22 = v28;
    if ( !v26 )
      goto LABEL_17;
    v23 = v40;
  }
  v29 = v22;
  if ( *(_BYTE *)v23 )
  {
    sub_11A120(v23, v16, 9, v39, (unsigned int)(2 * HIDWORD(v42[0])));
    if ( LOBYTE(v42[0]) )
    {
      sub_150B30(v3, *(_QWORD *)(v30 + 8), v42, *(_QWORD *)(a2 + 8), a2 + 64, 5);
      v24 = v29;
    }
    else
    {
      sub_11EAC0(v42);
      v24 = 0;
    }
    v31 = v24;
    v8 = sub_8E7E0(v3, v18, a2, &v37, 0);
    if ( (_BYTE)v8 )
    {
      sub_124490(v42, v16, HIDWORD(v42[0]), 2);
      sub_8D550(v3, a2, (__int64)&v37);
      sub_1171D0(a2, &v37);
      if ( v31 )
        sub_116EE0(v18);
      v25 = *(_DWORD *)(v3 + 24);
      BYTE1(v25) &= ~2u;
      LOBYTE(v25) = v25 | 0x80;
      *(_DWORD *)(v3 + 24) = v25;
      sub_116F10(a2, *(_QWORD *)(*(_QWORD *)(v3 + 480) + 112LL));
      sub_92C10(v3, a2);
      goto LABEL_18;
    }
  }
LABEL_17:
  v8 = 0;
LABEL_18:
  sub_1166E0(v42);
  sub_1166E0(v41);
  sub_1166E0(v40);
  return v8;
}
