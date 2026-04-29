__int64 __fastcall sub_D1380(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // r15
  char *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r14
  char *v13; // r8
  __int64 v14; // rax
  _QWORD *v15; // r13
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  size_t v20; // rax
  char *v21; // rbp
  __int64 v22; // rax
  unsigned int v23; // r12d
  int v24; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+8h] [rbp-D0h]
  __int64 v30; // [rsp+8h] [rbp-D0h]
  __int64 v31; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+18h] [rbp-C0h]
  __int64 v33; // [rsp+20h] [rbp-B8h]
  __int64 v34; // [rsp+30h] [rbp-A8h]
  __int64 v35; // [rsp+38h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-70h]
  __int64 v37; // [rsp+70h] [rbp-68h]
  __int64 v38; // [rsp+80h] [rbp-58h]
  __int64 v39; // [rsp+88h] [rbp-50h]
  unsigned __int64 v40; // [rsp+98h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( a2 == 128 )
  {
    sub_CFF70(0x7D4u, a1, 128);
    v3 = *(_QWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 72) = 128;
    if ( !*(_BYTE *)(v3 + 144) )
    {
      v15 = (_QWORD *)(a1 + 32);
      if ( !*(_DWORD *)(get_ph() + 4) )
      {
LABEL_32:
        sub_D0DA0(a1, (__int64 *)(a1 + 88), (_QWORD *)(a1 + 8));
        sub_D0DA0(a1, (__int64 *)(a1 + 112), v15);
        return 1;
      }
      v3 = *(_QWORD *)(a1 + 80);
    }
    sub_D10B0((__int64)&v31, v3, 0x10u);
    sub_CFF70(0x7D4u, &v31, 112);
    v4 = *(_QWORD *)(a1 + 40);
    v5 = *(_QWORD *)(a1 + 32);
    v6 = 4 * v33;
    v7 = 4 * v4;
    v8 = (4 * v33) >> 2;
    if ( v8 )
    {
      v9 = (char *)(v5 + v7);
      v10 = *(_QWORD *)(a1 + 16);
      v11 = *(_QWORD *)(a1 + 8);
      v12 = v32;
      v13 = &v9[-v11];
      if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v8 + v10) )
      {
        v27 = qvector_reserve(a1 + 8, v11, v8 + v10, 4);
        v13 = &v9[-v11];
        v10 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = v27;
        v9 = &v9[v27 - v11];
      }
      memmove(&v9[v6], v9, 4 * v10 - (_QWORD)v13);
      v14 = 0;
      if ( v6 )
      {
        do
        {
          *(_DWORD *)&v9[v14] = *(_DWORD *)(v12 + v14);
          v14 += 4;
        }
        while ( v6 != v14 );
      }
      *(_QWORD *)(a1 + 16) += v8;
      v4 = *(_QWORD *)(a1 + 40);
      v5 = *(_QWORD *)(a1 + 32);
      v7 = 4 * v4;
    }
    v15 = (_QWORD *)(a1 + 32);
    v16 = 4 * v35;
    v17 = (4 * v35) >> 2;
    if ( v17 )
    {
      v18 = v34;
      v19 = v17 + v4;
      v20 = 0;
      v15 = (_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(a1 + 48) < v19 )
      {
        v30 = (4 * v35) >> 2;
        v28 = qvector_reserve(a1 + 32, v5, v19, 4);
        *(_QWORD *)(a1 + 32) = v28;
        v5 = v28;
        v17 = v30;
        v20 = 4LL * *(_QWORD *)(a1 + 40) - v7;
      }
      v21 = (char *)(v5 + v7);
      v29 = v17;
      memmove(&v21[v16], v21, v20);
      v22 = 0;
      if ( v16 )
      {
        do
        {
          *(_DWORD *)&v21[v22] = *(_DWORD *)(v18 + v22);
          v22 += 4;
        }
        while ( v16 != v22 );
      }
      *(_QWORD *)(a1 + 40) += v29;
    }
    if ( v38 )
    {
      v39 = 0;
      qfree(v38);
    }
    if ( v36 )
    {
      v37 = 0;
      qfree(v36);
    }
    if ( v34 )
    {
      v35 = 0;
      qfree(v34);
    }
    if ( v32 )
    {
      v33 = 0;
      qfree(v32);
    }
    goto LABEL_32;
  }
  if ( a2 <= 0x80 )
  {
    if ( a2 != 64 && a2 != 112 )
      goto LABEL_10;
    goto LABEL_6;
  }
  if ( a2 == 144
    || a2 == 176
    && ((unsigned __int64)getinf(88) > 0x397
     || (unsigned __int8)getinf_flag(3, 4)
     && (netnode_check(&v31, "$ golang", 0, 0), v23 = netnode_altval(v31, 0, 65), v23 > 0x74)
     && ((v24 = *(_DWORD *)(get_ph() + 4)) == 0
      || (v25 = (unsigned int)(v24 - 13), (unsigned int)v25 <= 0x3B)
      && (v26 = 0x800000000000005LL, _bittest64(&v26, v25))
      && v23 != 117)) )
  {
LABEL_6:
    sub_D1010(a1, a2);
    return 1;
  }
LABEL_10:
  sub_D0F50(a1, 1, a2);
  return 0;
}
