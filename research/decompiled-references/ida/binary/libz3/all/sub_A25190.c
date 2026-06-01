__int64 __fastcall sub_A25190(_QWORD *a1, __int64 *a2, char a3)
{
  int *v4; // r15
  int *v5; // r12
  __int64 v6; // rax
  __int64 v7; // r14
  int *v8; // r13
  unsigned int v9; // r14d
  __int64 v10; // rsi
  unsigned int v11; // r8d
  int v12; // eax
  __int64 v13; // rax
  void *v14; // rdi
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rsi
  unsigned int v21; // r8d
  int v22; // eax
  __int64 v23; // rax
  void *v24; // rdi
  void *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  void *v28; // rbx
  void *v29; // rbx
  void *v30; // rbx
  void *v31; // rbx
  void *v33; // [rsp+10h] [rbp-F0h]
  void *v34; // [rsp+10h] [rbp-F0h]
  void *v35; // [rsp+10h] [rbp-F0h]
  void *v36; // [rsp+10h] [rbp-F0h]
  unsigned int v38; // [rsp+24h] [rbp-DCh]
  __int64 v39; // [rsp+28h] [rbp-D8h]
  __int64 v40; // [rsp+28h] [rbp-D8h]
  _QWORD v42[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v43[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v44[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v45[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v46[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v47[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v48[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v49[8]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = (int *)*a2;
  v42[0] = 0;
  v42[1] = 0;
  v43[0] = 1;
  v43[1] = 0;
  v44[0] = 0;
  v44[1] = 0;
  v45[0] = 1;
  v45[1] = 0;
  if ( v4 )
  {
    v5 = &v4[10 * *(v4 - 1)];
    if ( v4 != v5 )
    {
      if ( a3 )
      {
        do
        {
          v18 = (unsigned int)v4[8];
          if ( (_DWORD)v18 != -1 )
          {
            v19 = *(_QWORD *)(a1[(*v4 > 0) + 85] + 8 * v18);
            sub_9AEDC0((__int64)v42, (__int64)v4, v19 + 16);
            sub_9AEDC0((__int64)v44, (__int64)v4, v19 + 48);
          }
          v4 += 10;
        }
        while ( v5 != v4 );
      }
      else
      {
        do
        {
          v6 = (unsigned int)v4[8];
          if ( (_DWORD)v6 != -1 )
          {
            v7 = *(_QWORD *)(a1[((unsigned int)*v4 >> 31) + 85] + 8 * v6);
            sub_9AEDC0((__int64)v42, (__int64)v4, v7 + 16);
            sub_9AEDC0((__int64)v44, (__int64)v4, v7 + 48);
          }
          v4 += 10;
        }
        while ( v5 != v4 );
      }
      v4 = (int *)*a2;
    }
  }
  v46[0] = 0;
  v46[1] = 0;
  v47[0] = 1;
  v47[1] = 0;
  v48[0] = 0;
  v48[1] = 0;
  v49[0] = 1;
  v49[1] = 0;
  if ( v4 )
  {
    v8 = &v4[10 * *(v4 - 1)];
    if ( v8 != v4 )
    {
      v9 = 0;
      v38 = 0;
      if ( !a3 )
      {
        while ( 1 )
        {
          v13 = (unsigned int)v4[8];
          if ( (_DWORD)v13 == -1 || !*(_DWORD *)(a1[88] + 4 * v13) )
            goto LABEL_17;
          v39 = *(_QWORD *)(a1[((unsigned int)*v4 >> 31) + 85] + 8 * v13);
          v14 = qword_1C7F2C0;
          if ( (v42[0] & 0x100000000LL) != 0 )
          {
            v34 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v46, v42);
            v14 = v34;
          }
          else
          {
            BYTE4(v46[0]) &= ~1u;
            LODWORD(v46[0]) = v42[0];
          }
          if ( (v43[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v14, v47, v43);
          }
          else
          {
            BYTE4(v47[0]) &= ~1u;
            LODWORD(v47[0]) = v43[0];
          }
          v15 = qword_1C7F2C0;
          if ( (v44[0] & 0x100000000LL) != 0 )
          {
            v33 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v48, v44);
            v15 = v33;
          }
          else
          {
            BYTE4(v48[0]) &= ~1u;
            LODWORD(v48[0]) = v44[0];
          }
          if ( (v45[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v15, v49, v45);
          }
          else
          {
            BYTE4(v49[0]) &= ~1u;
            LODWORD(v49[0]) = v45[0];
          }
          sub_9AF010((__int64)v46, (__int64)v4, v39 + 16);
          sub_9AF010((__int64)v48, (__int64)v4, v39 + 48);
          sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v46, (__int64)v4, (__int64)v46);
          sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v48, (__int64)v4, (__int64)v48);
          v16 = (unsigned int)v4[8];
          v11 = v4[8];
          if ( *v4 <= 0 )
            break;
          v10 = *(_QWORD *)(a1[86] + 8 * v16);
          if ( !v10 )
            goto LABEL_15;
          if ( sub_927C80((__int64)v46, v10 + 16) )
          {
            v11 = v4[8];
LABEL_15:
            v12 = sub_A24800(a1, a2, v9, 0, v11, 1, (int *)v46);
LABEL_16:
            v38 += v12;
          }
LABEL_17:
          v4 += 10;
          ++v9;
          if ( v8 == v4 )
            goto LABEL_59;
        }
        v17 = *(_QWORD *)(a1[85] + 8 * v16);
        if ( v17 )
        {
          if ( !sub_927C80(v17 + 16, (__int64)v46) )
            goto LABEL_17;
          v11 = v4[8];
        }
        v12 = sub_A24800(a1, a2, v9, 0, v11, 0, (int *)v46);
        goto LABEL_16;
      }
      while ( 1 )
      {
        v23 = (unsigned int)v4[8];
        if ( (_DWORD)v23 == -1 || !*(_DWORD *)(a1[88] + 4 * v23) )
          goto LABEL_43;
        v40 = *(_QWORD *)(a1[(*v4 > 0) + 85] + 8 * v23);
        v24 = qword_1C7F2C0;
        if ( (v42[0] & 0x100000000LL) != 0 )
        {
          v35 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v46, v42);
          v24 = v35;
          if ( (v43[0] & 0x100000000LL) == 0 )
          {
LABEL_48:
            BYTE4(v47[0]) &= ~1u;
            LODWORD(v47[0]) = v43[0];
            goto LABEL_49;
          }
        }
        else
        {
          BYTE4(v46[0]) &= ~1u;
          LODWORD(v46[0]) = v42[0];
          if ( (v43[0] & 0x100000000LL) == 0 )
            goto LABEL_48;
        }
        sub_182C690(v24, v47, v43);
LABEL_49:
        v25 = qword_1C7F2C0;
        if ( (v44[0] & 0x100000000LL) != 0 )
        {
          v36 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v48, v44);
          v25 = v36;
        }
        else
        {
          BYTE4(v48[0]) &= ~1u;
          LODWORD(v48[0]) = v44[0];
        }
        if ( (v45[0] & 0x100000000LL) != 0 )
        {
          sub_182C690(v25, v49, v45);
        }
        else
        {
          BYTE4(v49[0]) &= ~1u;
          LODWORD(v49[0]) = v45[0];
        }
        sub_9AF010((__int64)v46, (__int64)v4, v40 + 16);
        sub_9AF010((__int64)v48, (__int64)v4, v40 + 48);
        sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v46, (__int64)v4, (__int64)v46);
        sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v48, (__int64)v4, (__int64)v48);
        v26 = (unsigned int)v4[8];
        v21 = v4[8];
        if ( *v4 > 0 )
        {
          v27 = *(_QWORD *)(a1[85] + 8 * v26);
          if ( v27 )
          {
            if ( !sub_927C80(v27 + 16, (__int64)v46) )
              goto LABEL_43;
            v21 = v4[8];
          }
          v22 = sub_A24800(a1, a2, v9, 1, v21, 0, (int *)v46);
          goto LABEL_42;
        }
        v20 = *(_QWORD *)(a1[86] + 8 * v26);
        if ( !v20 )
          goto LABEL_41;
        if ( sub_927C80((__int64)v46, v20 + 16) )
        {
          v21 = v4[8];
LABEL_41:
          v22 = sub_A24800(a1, a2, v9, 1, v21, 1, (int *)v46);
LABEL_42:
          v38 += v22;
        }
LABEL_43:
        v4 += 10;
        ++v9;
        if ( v4 == v8 )
          goto LABEL_59;
      }
    }
  }
  v38 = 0;
LABEL_59:
  v28 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v48);
  sub_182CBA0(v28, v49);
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v46);
  sub_182CBA0(v29, v47);
  v30 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v44);
  sub_182CBA0(v30, v45);
  v31 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v42);
  sub_182CBA0(v31, v43);
  return v38;
}

