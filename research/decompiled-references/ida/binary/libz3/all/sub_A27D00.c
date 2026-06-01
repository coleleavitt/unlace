__int64 __fastcall sub_A27D00(_QWORD *a1, __int64 *a2, unsigned int a3, char a4, unsigned int a5, int a6, int *a7)
{
  __int64 v7; // rax
  _QWORD *v8; // rdx
  bool v9; // zf
  __int64 *v10; // rbx
  __int64 *v11; // r12
  void *v12; // r15
  void *v13; // rbx
  __int64 v15; // r13
  unsigned int v16; // r15d
  __int64 v17; // r13
  __int64 v18; // r13
  unsigned int v19; // r15d
  int *v20; // r13
  __int64 v21; // r13
  __int64 v22; // r13
  int *v23; // rdx
  _QWORD *v24; // r13
  unsigned int v25; // [rsp+14h] [rbp-84h]
  void *v26; // [rsp+18h] [rbp-80h]
  void *v27; // [rsp+18h] [rbp-80h]
  __int64 v30; // [rsp+38h] [rbp-60h]
  _QWORD v31[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v32[9]; // [rsp+50h] [rbp-48h] BYREF

  v7 = a1[79];
  v8 = a1 + 12;
  v9 = (*(_BYTE *)(a1[74] + 4LL * a5 + 3) & 0x40) == 0;
  v31[0] = 0;
  if ( !v9 )
    v8 = a1 + 8;
  v32[0] = 1;
  v10 = *(__int64 **)(v7 + 8LL * a5);
  v30 = (__int64)v8;
  v31[1] = 0;
  v32[1] = 0;
  if ( !v10 || (v11 = &v10[*((unsigned int *)v10 - 1)], v10 == v11) )
  {
    v25 = 0;
    goto LABEL_12;
  }
  if ( !a6 )
  {
    v25 = 0;
    while ( 1 )
    {
      v15 = *v10;
      v16 = 2 * *(_DWORD *)(*v10 + 52);
      if ( !*(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + v16) )
      {
        v26 = qword_1C7F2C0;
        sub_182CEF0(qword_1C7F2C0, v31);
        sub_182CBA0(v26, v32);
        BYTE4(v32[0]) &= ~1u;
        LODWORD(v32[0]) = 1;
        if ( (*(_BYTE *)(v15 + 88) & 3) != 0 )
        {
          v21 = v15 + 56;
          if ( !sub_3ED700((__int64)qword_1C7F2C0, v21, (__int64)a7) )
            goto LABEL_14;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v31, a7);
          sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v31, v21, (__int64)v31);
          sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v31, v30, (__int64)v31);
          if ( SLODWORD(v31[0]) < 0 )
            goto LABEL_14;
          sub_A27440((__int64)a1, v16 ^ 1, a2, a3, a4, v31);
          goto LABEL_21;
        }
        v17 = v15 + 56;
        if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)a7, v17) )
        {
          if ( *(_BYTE *)(a1[42] + 24LL) )
          {
            sub_27B950((__int64)qword_1C7F2C0, (__int64)v31, a7);
            sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v31, v17, (__int64)v31);
          }
          sub_A27440((__int64)a1, v16, a2, a3, a4, v31);
LABEL_21:
          ++v25;
        }
      }
LABEL_14:
      if ( v11 == ++v10 )
        goto LABEL_12;
    }
  }
  if ( a6 == 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      v18 = *v10;
      v19 = 2 * *(_DWORD *)(*v10 + 52);
      if ( !*(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + v19) )
      {
        v27 = qword_1C7F2C0;
        sub_182CEF0(qword_1C7F2C0, v31);
        sub_182CBA0(v27, v32);
        BYTE4(v32[0]) &= ~1u;
        LODWORD(v32[0]) = 1;
        if ( (*(_BYTE *)(v18 + 88) & 3) == 0 )
        {
          v22 = v18 + 56;
          if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)a7, v22) )
            goto LABEL_24;
          v23 = (int *)v22;
          v24 = v31;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v31, v23);
          sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v24, (__int64)a7, (__int64)v24);
          sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v24, v30, (__int64)v24);
          if ( SLODWORD(v31[0]) < 0 )
            goto LABEL_24;
          sub_A27440((__int64)a1, v19 ^ 1, a2, a3, a4, v31);
          goto LABEL_31;
        }
        v20 = (int *)(v18 + 56);
        if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)v20, (__int64)a7) )
        {
          if ( *(_BYTE *)(a1[42] + 24LL) )
          {
            sub_27B950((__int64)qword_1C7F2C0, (__int64)v31, v20);
            sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v31, (__int64)a7, (__int64)v31);
          }
          sub_A27440((__int64)a1, v19, a2, a3, a4, v31);
LABEL_31:
          ++v25;
        }
      }
LABEL_24:
      if ( v11 == ++v10 )
        goto LABEL_12;
    }
  }
  do
  {
    while ( *(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + (unsigned int)(2 * *(_DWORD *)(*v10 + 52))) )
    {
      if ( v11 == ++v10 )
        goto LABEL_11;
    }
    v12 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v31);
    sub_182CBA0(v12, v32);
    ++v10;
    BYTE4(v32[0]) &= ~1u;
    LODWORD(v32[0]) = 1;
  }
  while ( v11 != v10 );
LABEL_11:
  v25 = 0;
LABEL_12:
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v31);
  sub_182CBA0(v13, v32);
  return v25;
}

