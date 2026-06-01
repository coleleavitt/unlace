__int64 __fastcall sub_97770(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  _DWORD *v9; // rax
  unsigned int v10; // r15d
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // rsi
  _DWORD *v15; // [rsp+0h] [rbp-C0h]
  int v16; // [rsp+0h] [rbp-C0h]
  __int64 v17; // [rsp+8h] [rbp-B8h]
  int v18; // [rsp+8h] [rbp-B8h]
  __int64 *v19; // [rsp+10h] [rbp-B0h]
  int v20; // [rsp+18h] [rbp-A8h]
  __int64 v21; // [rsp+18h] [rbp-A8h]
  __int64 v22; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+28h] [rbp-98h] BYREF
  _DWORD *v24; // [rsp+30h] [rbp-90h] BYREF
  __int64 v25; // [rsp+38h] [rbp-88h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-80h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-70h] BYREF
  __int64 v28; // [rsp+60h] [rbp-60h] BYREF
  __int64 v29; // [rsp+68h] [rbp-58h]
  __int64 v30; // [rsp+70h] [rbp-50h]
  __int128 v31; // [rsp+78h] [rbp-48h]
  unsigned __int64 v32; // [rsp+88h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  v3 = sub_11C8E0(a2, &v22, 14);
  if ( !v3 )
    return 0;
  v4 = sub_11C8A0(v3, &v23);
  v20 = v4;
  if ( !v4 )
    return 0;
  v5 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL), *(unsigned int *)(v4 + 4), 0);
  if ( (v5 & (v5 - 1)) != 0 )
    return 0;
  v24 = a2;
  v6 = sub_129440(a1, v22, &v24, 0);
  v7 = v6;
  if ( !v6 )
    return 0;
  if ( v24 == (_DWORD *)v6
    && *(_DWORD *)v6 == 14
    && *(_BYTE *)(v6 + 64) == 14
    && (unsigned __int8)sub_125B60(*(_QWORD *)(v6 + 72) + 16LL, v22, 0)
    && (v17 = *(_QWORD *)(v7 + 72), (v8 = sub_11C8A0(v7, &v25)) != 0)
    && (v19 = &v28, (unsigned __int8)sub_11FD80(v8, &v28, 1))
    && v5 == v28
    && *(_BYTE *)v25 == 4
    && (v9 = *(_DWORD **)(v25 + 8), *v9 == 9)
    && (v15 = v9 + 8, v10 = sub_130BC0(a1, v7, v9 + 8, a2, v23, 0), (_BYTE)v10) )
  {
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    sub_123EA0(a1, &v28, v15, 1, 4294901760LL);
    if ( sub_A9AA0(a1, &v28, *(_QWORD *)(v7 + 8), a2, 1) )
      goto LABEL_16;
    v29 = 0;
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v30);
      v12 = 0;
      v30 = 0;
      *((_QWORD *)&v31 + 1) = 0;
    }
    sub_127FE0(a1, (__int64)&v28, v17, 1u, v11, v12, (int)v15, v17, (int)&v28, v20, v22);
    if ( sub_A9AA0(a1, v19, *(_QWORD *)(v7 + 8), a2, 1) || sub_A9D90(a1, v19, *(_QWORD *)(v7 + 8), a2, 1) )
    {
LABEL_16:
      v10 = 0;
    }
    else
    {
      v26[1] = 0;
      v26[0] = 0xFFFFFFFF00000000LL;
      sub_B1520(a1, (_DWORD)a2, (unsigned int)v26, v7, v16, (_DWORD)a2, v23, 0);
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      *a2 = 14;
      sub_120A10(a2 + 8, v14, v5, HIDWORD(v26[0]), **(_QWORD **)(v21 + 8), 0);
      sub_11CA10(a2 + 12, v26);
      sub_B1520(a1, (_DWORD)a2, (_DWORD)a2 + 64, v7, v18, (_DWORD)a2, (__int64)(a2 + 16), 1);
      sub_12B6F0(v7, v14, 11, 0xFFFFFFFFLL, 1);
      v27[0] = 0xFFFFFFFF00000000LL;
      v27[1] = 0;
      sub_11CA10(v27, *(_QWORD *)(v7 + 72) + 16LL);
      sub_11CA10(v7 + 64, v27);
      sub_11CDA0(v27);
      sub_11CDA0(v26);
    }
    sub_93B40(v19);
  }
  else
  {
    return 0;
  }
  return v10;
}
