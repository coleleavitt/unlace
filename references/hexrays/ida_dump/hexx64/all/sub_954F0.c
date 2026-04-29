__int64 __fastcall sub_954F0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v8; // rbx
  bool v9; // zf
  unsigned __int8 v10; // al
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r8
  int v15; // r9d
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdi
  _DWORD *v23; // rax
  __int64 v24; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r9d
  unsigned int v30; // [rsp+Ch] [rbp-64h]
  __int64 v31; // [rsp+10h] [rbp-60h] BYREF
  __int64 v32; // [rsp+18h] [rbp-58h]
  __int64 v33; // [rsp+20h] [rbp-50h]
  __int128 v34; // [rsp+28h] [rbp-48h]
  unsigned __int64 v35; // [rsp+38h] [rbp-38h]

  v4 = a1 + 32;
  v5 = a1 + 48;
  v6 = *(_QWORD *)(a1 + 8);
  v35 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 480) + 112LL);
  *(_QWORD *)(a1 + 16) = a2;
  sub_125180(a1 + 32);
  sub_125180(a1 + 48);
  v9 = a3 == 0;
  v10 = a3;
  v11 = a1 + 48;
  if ( v9 )
    v11 = a1 + 32;
  v30 = v10;
  if ( !(unsigned __int8)sub_12CD10(v11, v8, v10) )
  {
LABEL_15:
    if ( (*(_BYTE *)(a1 + 76) & 4) != 0 )
    {
      v21 = *(_QWORD *)(a1 + 16);
      v22 = *(_QWORD *)(a1 + 8);
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      sub_127FE0(v22, &v31, v21 + 64, 0);
      v23 = (_DWORD *)sub_A9D90(*(_QWORD *)(a1 + 8), &v31, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), 0, 1);
      *(_QWORD *)(a1 + 64) = v23;
      if ( !v23
        || *v23 != 4
        || !(unsigned __int8)sub_125B60(v23 + 8, *(_QWORD *)(a1 + 16) + 64LL, 0)
        || (sub_125180(v4), sub_125180(v5), !(unsigned __int8)sub_12CD10(v11, v8, v30)) )
      {
        v24 = 0;
        goto LABEL_19;
      }
      v32 = 0;
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v33);
        v33 = 0;
        *((_QWORD *)&v34 + 1) = 0;
      }
      sub_127FE0(*(_QWORD *)(a1 + 8), &v31, v11, 1);
      v26 = sub_A9AA0(*(_QWORD *)(a1 + 8), &v31, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), 0, 1);
      *(_QWORD *)(a1 + 24) = v26;
      if ( v26 )
      {
        *(_DWORD *)(a1 + 72) = 1;
        if ( (unsigned __int8)sub_952E0(a1, v26, v30, v27, v28, v29) )
        {
          v24 = *(_QWORD *)(a1 + 24);
LABEL_19:
          if ( v33 )
          {
            *(_QWORD *)&v34 = 0;
            qfree(v33);
          }
          goto LABEL_21;
        }
      }
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v33);
      }
      qfree(v31);
    }
    return 0;
  }
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(a1 + 8);
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      sub_127FE0(v17, &v31, v11, 1);
      v18 = *(_QWORD *)(a1 + 8);
      v19 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(a1 + 72) )
        break;
      v13 = sub_129150(v18, (unsigned int)&v31, *(_QWORD *)(v19 + 16), 0, 0, 0, 257);
      *(_QWORD *)(a1 + 24) = v13;
      if ( v13 )
        goto LABEL_6;
LABEL_12:
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v33);
      }
      qfree(v31);
      v20 = *(_DWORD *)(a1 + 72) + 1;
      *(_DWORD *)(a1 + 72) = v20;
      if ( v20 > 1 )
        goto LABEL_15;
    }
    v13 = sub_A9AA0(v18, &v31, *(_QWORD *)(v19 + 8), 0, 1);
    *(_QWORD *)(a1 + 24) = v13;
    if ( !v13 )
      goto LABEL_12;
LABEL_6:
    if ( (unsigned __int8)sub_952E0(a1, v13, v30, v12, v14, v15) )
      break;
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33);
    }
    qfree(v31);
    v16 = *(_DWORD *)(a1 + 72) + 1;
    *(_DWORD *)(a1 + 72) = v16;
    if ( v16 > 1 )
      goto LABEL_15;
  }
  v24 = *(_QWORD *)(a1 + 24);
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
LABEL_21:
  qfree(v31);
  return v24;
}
