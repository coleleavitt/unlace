__int64 __fastcall sub_96180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  bool v6; // zf
  char v7; // al
  __int64 v9; // r12
  _DWORD *v10; // rdx
  __int64 v11; // r15
  int v12; // edx
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al
  __int64 v15; // r8
  unsigned __int8 v16; // al
  _DWORD *v17; // rax
  int v18; // [rsp+0h] [rbp-C8h]
  int v19; // [rsp+8h] [rbp-C0h]
  __int64 v20; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v21; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v22; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v23; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v24; // [rsp+8h] [rbp-C0h]
  int v25; // [rsp+10h] [rbp-B8h]
  __int64 v26; // [rsp+10h] [rbp-B8h]
  int v27; // [rsp+18h] [rbp-B0h]
  unsigned __int8 v28; // [rsp+1Fh] [rbp-A9h]
  unsigned __int8 v29; // [rsp+1Fh] [rbp-A9h]
  __int64 v30[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v31[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v32; // [rsp+40h] [rbp-88h]
  __int64 v33; // [rsp+48h] [rbp-80h]
  __int64 v34; // [rsp+60h] [rbp-68h] BYREF
  __int64 v35; // [rsp+68h] [rbp-60h]
  __int64 v36; // [rsp+70h] [rbp-58h]
  __int128 v37; // [rsp+78h] [rbp-50h]
  unsigned __int64 v38; // [rsp+88h] [rbp-40h]

  v6 = *(_BYTE *)(a2 + 32) == 4;
  v7 = *(_BYTE *)(a2 + 48);
  v38 = __readfsqword(0x28u);
  if ( !v6 || (v10 = *(_DWORD **)(a2 + 40), *v10 != 9) )
  {
    if ( v7 != 4 || **(_DWORD **)(a2 + 56) != 9 )
      return 0;
    goto LABEL_5;
  }
  if ( v7 == 4 )
  {
    v17 = *(_DWORD **)(a2 + 56);
    if ( *v17 == 9 && v17[9] > v10[9] )
    {
LABEL_5:
      v9 = a2 + 48;
      goto LABEL_9;
    }
  }
  v9 = a2 + 32;
LABEL_9:
  v37 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  sub_127FE0(a1, (__int64)&v34, a2 + 64, 0, a5, a6, v18, v19, v25, v27, v30[0]);
  v11 = sub_A9AA0(a1, &v34, *(_QWORD *)(a2 + 8), 0, 1);
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  qfree(v34);
  if ( !v11 )
    return 0;
  if ( *(_DWORD *)v11 != 12 )
    return 0;
  v12 = *(_DWORD *)(v11 + 68);
  if ( v12 != *(_DWORD *)(*(_QWORD *)(v9 + 8) + 36LL) )
    return 0;
  if ( v12 != *(_DWORD *)(a2 + 68) / 2 )
    return 0;
  v20 = v11 + 64;
  if ( !(unsigned __int8)sub_1301F0(a1, *(_QWORD *)(v11 + 8), v11 + 64, *(_QWORD *)(a2 + 8), a2 + 64) )
    return 0;
  sub_124680(v31, a1, v11, 1);
  if ( !sub_A9AA0(a1, v31, *(_QWORD *)(a2 + 8), v11, 1) )
  {
    v26 = v11 + 32;
    if ( (unsigned __int8)sub_125B60(v11 + 32, v20, 0) )
    {
      v26 = v11 + 48;
    }
    else if ( !(unsigned __int8)sub_125B60(v11 + 48, v20, 0) )
    {
      goto LABEL_17;
    }
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    sub_123EA0(a1, &v34, v26, 1, 4294901760LL);
    if ( sub_A9AA0(a1, &v34, a2, *(_QWORD *)(a2 + 8), 1) || (v28 = sub_157240(a1, *(_QWORD *)(v9 + 8) + 32LL, v26)) == 0 )
    {
      v14 = 0;
    }
    else
    {
      sub_123A40(v30);
      v15 = *(unsigned int *)(v26 + 4);
      v16 = v28;
      if ( HIDWORD(v30[0]) != (_DWORD)v15 )
      {
        sub_1207E0(v30, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 9, *(_QWORD *)(*(_QWORD *)(v9 + 8) + 24LL), v15);
        v16 = v28;
      }
      v29 = v16;
      sub_1571F0(a1, a2, v30, v11, v26, 0);
      sub_11CA10(v9, v30);
      sub_11D5A0(v11);
      sub_11CDA0(v30);
      v14 = v29;
    }
    if ( v36 )
    {
      v23 = v14;
      *(_QWORD *)&v37 = 0;
      qfree(v36);
      v14 = v23;
    }
    v24 = v14;
    qfree(v34);
    v13 = v24;
    goto LABEL_18;
  }
LABEL_17:
  v13 = 0;
LABEL_18:
  if ( v32 )
  {
    v21 = v13;
    v33 = 0;
    qfree(v32);
    v13 = v21;
  }
  v22 = v13;
  qfree(v31[0]);
  return v22;
}
