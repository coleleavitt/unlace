__int64 __fastcall sub_954F0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v8; // rbx
  bool v9; // zf
  unsigned __int8 v10; // al
  __int64 v11; // r12
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r8
  int v17; // r9d
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdi
  _DWORD *v25; // rax
  __int64 v26; // rbx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // r9d
  int v34; // [rsp+0h] [rbp-70h]
  __int64 v35; // [rsp+0h] [rbp-70h]
  int v36; // [rsp+8h] [rbp-68h]
  int v37; // [rsp+8h] [rbp-68h]
  char v38; // [rsp+Ch] [rbp-64h]
  unsigned int v39; // [rsp+Ch] [rbp-64h]
  char v40; // [rsp+Ch] [rbp-64h]
  __int64 v41; // [rsp+10h] [rbp-60h] BYREF
  __int64 v42; // [rsp+18h] [rbp-58h]
  __int64 v43; // [rsp+20h] [rbp-50h]
  __int128 v44; // [rsp+28h] [rbp-48h]
  unsigned __int64 v45; // [rsp+38h] [rbp-38h]

  v4 = a1 + 32;
  v5 = a1 + 48;
  v6 = *(_QWORD *)(a1 + 8);
  v45 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 480) + 112LL);
  *(_QWORD *)(a1 + 16) = a2;
  v34 = v8;
  sub_125180(a1 + 32);
  sub_125180(a1 + 48);
  v9 = a3 == 0;
  v10 = a3;
  v11 = a1 + 48;
  if ( v9 )
    v11 = a1 + 32;
  if ( !(unsigned __int8)sub_12CD10(v11, v8, v10) )
  {
LABEL_15:
    if ( (*(_BYTE *)(a1 + 76) & 4) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 16);
      v24 = *(_QWORD *)(a1 + 8);
      v44 = 0;
      sub_127FE0(v24, (__int64)&v41, v23 + 64, 0, v12, v13, v34, v36, 0, 0, 0);
      v25 = (_DWORD *)sub_A9D90(*(_QWORD *)(a1 + 8), &v41, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), 0, 1);
      *(_QWORD *)(a1 + 64) = v25;
      if ( !v25
        || *v25 != 4
        || !(unsigned __int8)sub_125B60(v25 + 8, *(_QWORD *)(a1 + 16) + 64LL, 0)
        || (sub_125180(v4), sub_125180(v5), !(unsigned __int8)sub_12CD10(v11, v35, v39)) )
      {
        v26 = 0;
        goto LABEL_19;
      }
      v42 = 0;
      if ( v43 )
      {
        *(_QWORD *)&v44 = 0;
        qfree(v43);
        v43 = 0;
        *((_QWORD *)&v44 + 1) = 0;
      }
      sub_127FE0(*(_QWORD *)(a1 + 8), (__int64)&v41, v11, 1u, v28, v29, v35, v37, v41, v42, v43);
      v30 = sub_A9AA0(*(_QWORD *)(a1 + 8), &v41, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), 0, 1);
      *(_QWORD *)(a1 + 24) = v30;
      if ( v30 )
      {
        *(_DWORD *)(a1 + 72) = 1;
        if ( (unsigned __int8)sub_952E0(a1, v30, v40, v31, v32, v33) )
        {
          v26 = *(_QWORD *)(a1 + 24);
LABEL_19:
          if ( v43 )
          {
            *(_QWORD *)&v44 = 0;
            qfree(v43);
          }
          goto LABEL_21;
        }
      }
      if ( v43 )
      {
        *(_QWORD *)&v44 = 0;
        qfree(v43);
      }
      qfree(v41);
    }
    return 0;
  }
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)(a1 + 8);
      v44 = 0;
      sub_127FE0(v19, (__int64)&v41, v11, 1u, v12, v13, v34, v36, 0, 0, 0);
      v20 = *(_QWORD *)(a1 + 8);
      v21 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(a1 + 72) )
        break;
      v15 = sub_129150(v20, (unsigned int)&v41, *(_QWORD *)(v21 + 16), 0, 0, 0, 257);
      *(_QWORD *)(a1 + 24) = v15;
      if ( v15 )
        goto LABEL_6;
LABEL_12:
      if ( v43 )
      {
        *(_QWORD *)&v44 = 0;
        qfree(v43);
      }
      qfree(v41);
      v22 = *(_DWORD *)(a1 + 72) + 1;
      *(_DWORD *)(a1 + 72) = v22;
      if ( v22 > 1 )
        goto LABEL_15;
    }
    v15 = sub_A9AA0(v20, &v41, *(_QWORD *)(v21 + 8), 0, 1);
    *(_QWORD *)(a1 + 24) = v15;
    if ( !v15 )
      goto LABEL_12;
LABEL_6:
    if ( (unsigned __int8)sub_952E0(a1, v15, v38, v14, v16, v17) )
      break;
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
    }
    qfree(v41);
    v18 = *(_DWORD *)(a1 + 72) + 1;
    *(_DWORD *)(a1 + 72) = v18;
    if ( v18 > 1 )
      goto LABEL_15;
  }
  v26 = *(_QWORD *)(a1 + 24);
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
LABEL_21:
  qfree(v41);
  return v26;
}
