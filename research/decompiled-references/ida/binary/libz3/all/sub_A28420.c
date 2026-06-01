__int64 __fastcall sub_A28420(_QWORD *a1, __int64 *a2, char a3)
{
  int *v5; // r15
  int *v6; // r12
  __int64 v7; // rax
  int *v8; // r13
  bool v9; // zf
  unsigned int v10; // r14d
  __int64 v11; // rax
  void *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rdx
  int v17; // eax
  void *v18; // rbx
  void *v19; // rbx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // [rsp+10h] [rbp-A0h]
  __int64 v32; // [rsp+10h] [rbp-A0h]
  __int64 v33; // [rsp+18h] [rbp-98h]
  __int64 v34; // [rsp+18h] [rbp-98h]
  unsigned int v36; // [rsp+2Ch] [rbp-84h]
  _QWORD v37[2]; // [rsp+40h] [rbp-70h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-60h] BYREF
  __int64 v39; // [rsp+60h] [rbp-50h] BYREF
  __int64 v40; // [rsp+68h] [rbp-48h]
  __int64 v41; // [rsp+70h] [rbp-40h] BYREF
  __int64 v42; // [rsp+78h] [rbp-38h]

  v5 = (int *)*a2;
  v37[0] = 0;
  v37[1] = 0;
  v38[0] = 1;
  v38[1] = 0;
  if ( !v5 )
    goto LABEL_8;
  v6 = &v5[10 * *(v5 - 1)];
  if ( v5 != v6 )
  {
    if ( a3 )
    {
      do
      {
        v21 = (unsigned int)v5[8];
        if ( (_DWORD)v21 != -1 )
          sub_9AEDC0((__int64)v37, (__int64)v5, *(_QWORD *)(a1[(*v5 > 0) + 77] + 8 * v21) + 16LL);
        v5 += 10;
      }
      while ( v6 != v5 );
    }
    else
    {
      do
      {
        v7 = (unsigned int)v5[8];
        if ( (_DWORD)v7 != -1 )
          sub_9AEDC0((__int64)v37, (__int64)v5, *(_QWORD *)(a1[((unsigned int)*v5 >> 31) + 77] + 8 * v7) + 16LL);
        v5 += 10;
      }
      while ( v6 != v5 );
    }
    v5 = (int *)*a2;
LABEL_8:
    v39 = 0;
    v40 = 0;
    v41 = 1;
    v42 = 0;
    if ( !v5 )
      goto LABEL_54;
    goto LABEL_9;
  }
  v39 = 0;
  v40 = 0;
  v41 = 1;
  v42 = 0;
LABEL_9:
  v8 = &v5[10 * *(v5 - 1)];
  if ( v8 != v5 )
  {
    v9 = a3 == 0;
    v36 = 0;
    v10 = 0;
    if ( v9 )
    {
      while ( 1 )
      {
        v11 = (unsigned int)v5[8];
        if ( (_DWORD)v11 == -1 || !*(_DWORD *)(a1[80] + 4 * v11) )
          goto LABEL_23;
        v12 = qword_1C7F2C0;
        v13 = *(_QWORD *)(a1[((unsigned int)*v5 >> 31) + 77] + 8 * v11) + 16LL;
        if ( (v37[0] & 0x100000000LL) != 0 )
        {
          v32 = v13;
          sub_182C690(qword_1C7F2C0, &v39, v37);
          v13 = v32;
        }
        else
        {
          BYTE4(v39) &= ~1u;
          LODWORD(v39) = v37[0];
        }
        if ( (v38[0] & 0x100000000LL) != 0 )
        {
          v34 = v13;
          sub_182C690(v12, &v41, v38);
          v13 = v34;
        }
        else
        {
          BYTE4(v41) &= ~1u;
          LODWORD(v41) = v38[0];
        }
        sub_9AF010((__int64)&v39, (__int64)v5, v13);
        sub_3ED4D0((__int64)qword_1C7F2C0, (int *)&v39, (__int64)v5, (__int64)&v39);
        v14 = (unsigned int)v5[8];
        v15 = v5[8];
        if ( *v5 <= 0 )
          break;
        v16 = *(_QWORD *)(a1[78] + 8 * v14);
        if ( !v16 )
          goto LABEL_21;
        if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v39, v16 + 16) )
        {
          v15 = v5[8];
LABEL_21:
          v17 = sub_A27D00(a1, a2, v10, 0, v15, 1, (int *)&v39);
LABEL_22:
          v36 += v17;
        }
LABEL_23:
        v5 += 10;
        ++v10;
        if ( v8 == v5 )
          goto LABEL_24;
      }
      v30 = *(_QWORD *)(a1[77] + 8 * v14);
      if ( v30 )
      {
        if ( !sub_3ED700((__int64)qword_1C7F2C0, v30 + 16, (__int64)&v39) )
          goto LABEL_23;
        v15 = v5[8];
      }
      v17 = sub_A27D00(a1, a2, v10, 0, v15, 0, (int *)&v39);
      goto LABEL_22;
    }
    while ( 1 )
    {
      v23 = (unsigned int)v5[8];
      if ( (_DWORD)v23 == -1 || !*(_DWORD *)(a1[80] + 4 * v23) )
        goto LABEL_31;
      v24 = qword_1C7F2C0;
      v25 = *(_QWORD *)(a1[(*v5 > 0) + 77] + 8 * v23) + 16LL;
      if ( (v37[0] & 0x100000000LL) != 0 )
      {
        v31 = v25;
        sub_182C690(qword_1C7F2C0, &v39, v37);
        v25 = v31;
        if ( (v38[0] & 0x100000000LL) == 0 )
        {
LABEL_36:
          BYTE4(v41) &= ~1u;
          LODWORD(v41) = v38[0];
          goto LABEL_37;
        }
      }
      else
      {
        BYTE4(v39) &= ~1u;
        LODWORD(v39) = v37[0];
        if ( (v38[0] & 0x100000000LL) == 0 )
          goto LABEL_36;
      }
      v33 = v25;
      sub_182C690(v24, &v41, v38);
      v25 = v33;
LABEL_37:
      sub_9AF010((__int64)&v39, (__int64)v5, v25);
      sub_3ED4D0((__int64)qword_1C7F2C0, (int *)&v39, (__int64)v5, (__int64)&v39);
      v26 = (unsigned int)v5[8];
      v27 = v5[8];
      if ( *v5 > 0 )
      {
        v29 = *(_QWORD *)(a1[77] + 8 * v26);
        if ( v29 )
        {
          if ( !sub_3ED700((__int64)qword_1C7F2C0, v29 + 16, (__int64)&v39) )
            goto LABEL_31;
          v27 = v5[8];
        }
        v22 = sub_A27D00(a1, a2, v10, 1, v27, 0, (int *)&v39);
      }
      else
      {
        v28 = *(_QWORD *)(a1[78] + 8 * v26);
        if ( v28 )
        {
          if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v39, v28 + 16) )
            goto LABEL_31;
          v27 = v5[8];
        }
        v22 = sub_A27D00(a1, a2, v10, 1, v27, 1, (int *)&v39);
      }
      v36 += v22;
LABEL_31:
      v5 += 10;
      ++v10;
      if ( v5 == v8 )
        goto LABEL_24;
    }
  }
LABEL_54:
  v36 = 0;
LABEL_24:
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v39);
  sub_182CBA0(v18, &v41);
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v37);
  sub_182CBA0(v19, v38);
  return v36;
}

