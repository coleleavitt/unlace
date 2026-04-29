__int64 __fastcall sub_8FAC0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  char v3; // al
  __int64 v5; // r12
  _DWORD *v6; // rdx
  __int64 v7; // r15
  int v8; // edx
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  __int64 v11; // r8
  unsigned __int8 v12; // al
  _DWORD *v13; // rax
  __int64 v14; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v15; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v16; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v17; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v18; // [rsp+8h] [rbp-C0h]
  __int64 v19; // [rsp+10h] [rbp-B8h]
  unsigned __int8 v20; // [rsp+1Fh] [rbp-A9h]
  unsigned __int8 v21; // [rsp+1Fh] [rbp-A9h]
  _BYTE v22[4]; // [rsp+20h] [rbp-A8h] BYREF
  int v23; // [rsp+24h] [rbp-A4h]
  _QWORD v24[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v25; // [rsp+40h] [rbp-88h]
  __int64 v26; // [rsp+48h] [rbp-80h]
  __int64 v27; // [rsp+60h] [rbp-68h] BYREF
  __int64 v28; // [rsp+68h] [rbp-60h]
  __int64 v29; // [rsp+70h] [rbp-58h]
  __int128 v30; // [rsp+78h] [rbp-50h]
  unsigned __int64 v31; // [rsp+88h] [rbp-40h]

  v2 = *(_BYTE *)(a2 + 32) == 4;
  v3 = *(_BYTE *)(a2 + 48);
  v31 = __readfsqword(0x28u);
  if ( !v2 || (v6 = *(_DWORD **)(a2 + 40), *v6 != 9) )
  {
    if ( v3 != 4 || **(_DWORD **)(a2 + 56) != 9 )
      return 0;
    goto LABEL_5;
  }
  if ( v3 == 4 )
  {
    v13 = *(_DWORD **)(a2 + 56);
    if ( *v13 == 9 && v13[9] > v6[9] )
    {
LABEL_5:
      v5 = a2 + 48;
      goto LABEL_9;
    }
  }
  v5 = a2 + 32;
LABEL_9:
  v30 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  sub_121920(a1, &v27, a2 + 64, 0);
  v7 = sub_A33E0(a1, &v27, *(_QWORD *)(a2 + 8), 0, 1);
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  qfree(v27);
  if ( !v7 )
    return 0;
  if ( *(_DWORD *)v7 != 12 )
    return 0;
  v8 = *(_DWORD *)(v7 + 68);
  if ( v8 != *(_DWORD *)(*(_QWORD *)(v5 + 8) + 36LL) )
    return 0;
  if ( v8 != *(_DWORD *)(a2 + 68) / 2 )
    return 0;
  v14 = v7 + 64;
  if ( !(unsigned __int8)sub_129B30(a1, *(_QWORD *)(v7 + 8), v7 + 64, *(_QWORD *)(a2 + 8), a2 + 64) )
    return 0;
  sub_11DFC0(v24, a1, v7, 1);
  if ( !sub_A33E0(a1, v24, *(_QWORD *)(a2 + 8), v7, 1) )
  {
    v19 = v7 + 32;
    if ( (unsigned __int8)sub_11F4A0(v7 + 32, v14, 0) )
    {
      v19 = v7 + 48;
    }
    else if ( !(unsigned __int8)sub_11F4A0(v7 + 48, v14, 0) )
    {
      goto LABEL_17;
    }
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    sub_11D7E0(a1, &v27, v19, 1, 4294901760LL);
    if ( sub_A33E0(a1, &v27, a2, *(_QWORD *)(a2 + 8), 1) || (v20 = sub_150B80(a1, *(_QWORD *)(v5 + 8) + 32LL, v19)) == 0 )
    {
      v10 = 0;
    }
    else
    {
      sub_11D380(v22, *(_QWORD *)(v5 + 8) + 32LL);
      v11 = *(unsigned int *)(v19 + 4);
      v12 = v20;
      if ( v23 != (_DWORD)v11 )
      {
        sub_11A120(v22, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 9, *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL), v11);
        v12 = v20;
      }
      v21 = v12;
      sub_150B30(a1, a2, v22, v7, v19, 0);
      sub_116350(v5, v22);
      sub_116EE0(v7);
      sub_1166E0(v22);
      v10 = v21;
    }
    if ( v29 )
    {
      v17 = v10;
      *(_QWORD *)&v30 = 0;
      qfree(v29);
      v10 = v17;
    }
    v18 = v10;
    qfree(v27);
    v9 = v18;
    goto LABEL_18;
  }
LABEL_17:
  v9 = 0;
LABEL_18:
  if ( v25 )
  {
    v15 = v9;
    v26 = 0;
    qfree(v25);
    v9 = v15;
  }
  v16 = v9;
  qfree(v24[0]);
  return v16;
}
