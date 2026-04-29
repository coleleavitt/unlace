__int64 __fastcall sub_189980(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // r13
  int v10; // eax
  _DWORD *v11; // rax
  unsigned __int8 *v12; // rsi
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // r14d
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r14
  unsigned int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // eax
  int v26; // eax
  int v27; // [rsp+Ch] [rbp-B4h]
  __int64 v28; // [rsp+10h] [rbp-B0h]
  __int64 v29; // [rsp+10h] [rbp-B0h]
  unsigned __int8 *v30; // [rsp+18h] [rbp-A8h]
  int v31; // [rsp+20h] [rbp-A0h]
  _DWORD *v32; // [rsp+28h] [rbp-98h]
  unsigned __int8 v34[16]; // [rsp+40h] [rbp-80h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-70h] BYREF
  _QWORD v36[2]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v37; // [rsp+70h] [rbp-50h] BYREF
  int v38; // [rsp+78h] [rbp-48h]
  unsigned __int64 v39; // [rsp+88h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(v5 + 1344);
  v39 = __readfsqword(0x28u);
  v7 = a3;
  if ( !*(_QWORD *)(v6 + 8)
    || (v14 = *(_QWORD *)(a2 + 24), v38 = 0, v37 = v14, (sub_137670(v5, (__int64)&v37) & 7) == 0)
    && ((v15 = *(_QWORD *)(a1 + 64), !*(_QWORD *)(*(_QWORD *)(v15 + 1344) + 8LL))
     || (v16 = *(_QWORD *)(v7 + 24), v38 = 0, v37 = v16, (sub_137670(v15, (__int64)&v37) & 7) == 0)) )
  {
    sub_123A40((__int64)v34, (unsigned __int8 *)(v7 + 64), a3, a4);
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
    v10 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 == 2 )
    {
      if ( (unsigned __int8)(v34[0] - 5) > 1u && v34[0] != 9 )
        goto LABEL_16;
      v13 = *(_DWORD *)(v7 + 68);
      sub_11C950(v34, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), (unsigned int)v34[0] - 5, v8);
      v32 = (_DWORD *)v7;
    }
    else
    {
      if ( v10 == 1 )
      {
        v13 = *(_DWORD *)(v7 + 36);
        v12 = nullptr;
      }
      else
      {
        if ( v10 != 12 )
          goto LABEL_16;
        v11 = *(_DWORD **)(v7 + 8);
        if ( !v11 || *v11 != 1 || !sub_125B60((unsigned __int8 *)(v7 + 64), (__int64)(v11 + 16), 0) )
          goto LABEL_16;
        sub_11CDA0((__int64)v34);
        v12 = (unsigned __int8 *)v7;
        v13 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 36LL);
        v7 = *(_QWORD *)(v7 + 8);
      }
      if ( *(_BYTE *)(v7 + 32) != 4 || (v32 = *(_DWORD **)(v7 + 40), *v32 != 2) )
      {
LABEL_16:
        v17 = 0;
LABEL_17:
        sub_11CDA0((__int64)v34);
        return v17;
      }
      if ( !v34[0] )
        sub_1262E0((__int64)v34, v12);
    }
    v19 = 0;
    if ( *(_BYTE *)(a2 + 64) == 8 )
      v19 = *(unsigned int *)(*(_QWORD *)(a2 + 72) + 284LL);
    v20 = sub_32FB00(*(_QWORD *)(a1 + 480), v19);
    if ( v20 != -1 )
    {
      if ( (unsigned int)(v20 - 1) > 1 && v20 != 4 )
      {
        if ( !under_debugger )
          sub_383060(52493);
        BUG();
      }
      v31 = v20;
      v21 = (unsigned int)(v13 >> 31);
      LODWORD(v21) = v13 % v20;
      v27 = v13 / v20;
      if ( !(v13 % v20) )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 24LL);
        v28 = *(_QWORD *)(a2 + 72);
        v30 = (unsigned __int8 *)(v22 + 160);
        sub_123A40((__int64)&v37, (unsigned __int8 *)(v22 + 160), v21, (__int64)&v37);
        sub_183B80(v35, v9, *(_QWORD *)(a2 + 24), v22, (__int64)&v37, v31, 1);
        sub_11CDA0((__int64)&v37);
        LOBYTE(v23) = sub_1255D0((unsigned __int8 *)v35, v9, (__int64)v34, 8);
        v17 = v23;
        if ( (_BYTE)v23 )
        {
          v29 = *(_QWORD *)(v28 + 24) + 80LL;
          sub_123A40((__int64)&v37, v30, v24, v29);
          sub_183B80(v36, v9, *(_QWORD *)(a2 + 24), v29, (__int64)&v37, v31, 1);
          sub_11CDA0((__int64)&v37);
          LOBYTE(v25) = sub_1255D0((unsigned __int8 *)v36, v9, (__int64)(v32 + 12), 8);
          v17 = v25;
          if ( (_BYTE)v25 )
          {
            sub_A2B00((__int64)&v37, v9, *(_QWORD *)(a2 + 24), (__int64)v30, v27, 1);
            sub_125180((__int64)v30, (unsigned __int8 *)&v37);
            sub_11CDA0((__int64)&v37);
            sub_11D5A0(v7);
            v26 = *(_DWORD *)(a1 + 24);
            BYTE1(v26) &= ~2u;
            LOBYTE(v26) = v26 | 0x80;
            *(_DWORD *)(a1 + 24) = v26;
          }
          sub_11CDA0((__int64)v36);
        }
        sub_11CDA0((__int64)v35);
        goto LABEL_17;
      }
    }
    goto LABEL_16;
  }
  return 0;
}
