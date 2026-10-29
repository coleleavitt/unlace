__int64 __fastcall sub_A223D0(_QWORD *a1, __int64 *a2, char a3)
{
  int *v5; // r15
  int *v6; // r13
  __int64 v7; // rax
  unsigned int v8; // r13d
  __int64 v9; // rsi
  unsigned int v10; // r8d
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r14
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned int v21; // r8d
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r14
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdi
  void *v31; // [rsp+8h] [rbp-128h]
  void *v32; // [rsp+8h] [rbp-128h]
  void *v33; // [rsp+8h] [rbp-128h]
  unsigned int v35; // [rsp+1Ch] [rbp-114h]
  void *v36; // [rsp+20h] [rbp-110h]
  void *v37; // [rsp+20h] [rbp-110h]
  void *v38; // [rsp+20h] [rbp-110h]
  int *v39; // [rsp+30h] [rbp-100h]
  __int64 v40; // [rsp+38h] [rbp-F8h]
  __int64 v41; // [rsp+38h] [rbp-F8h]
  _QWORD v42[2]; // [rsp+40h] [rbp-F0h] BYREF
  _QWORD v43[2]; // [rsp+50h] [rbp-E0h] BYREF
  _QWORD v44[2]; // [rsp+60h] [rbp-D0h] BYREF
  _QWORD v45[2]; // [rsp+70h] [rbp-C0h] BYREF
  _QWORD v46[2]; // [rsp+80h] [rbp-B0h] BYREF
  _QWORD v47[2]; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v48[2]; // [rsp+A0h] [rbp-90h] BYREF
  _QWORD v49[2]; // [rsp+B0h] [rbp-80h] BYREF
  _QWORD v50[2]; // [rsp+C0h] [rbp-70h] BYREF
  _QWORD v51[2]; // [rsp+D0h] [rbp-60h] BYREF
  _QWORD v52[2]; // [rsp+E0h] [rbp-50h] BYREF
  _QWORD v53[8]; // [rsp+F0h] [rbp-40h] BYREF

  v5 = (int *)*a2;
  v42[0] = 0;
  v42[1] = 0;
  v43[0] = 1;
  v43[1] = 0;
  v44[0] = 0;
  v44[1] = 0;
  v45[0] = 1;
  v45[1] = 0;
  v46[0] = 0;
  v46[1] = 0;
  v47[0] = 1;
  v47[1] = 0;
  if ( v5 )
  {
    v6 = &v5[10 * *(v5 - 1)];
    if ( v5 != v6 )
    {
      if ( a3 )
      {
        do
        {
          v19 = (unsigned int)v5[8];
          if ( (_DWORD)v19 != -1 )
          {
            v41 = *(_QWORD *)(a1[(*v5 > 0) + 93] + 8 * v19);
            sub_9AEDC0((__int64)v42, (__int64)v5, v41 + 16);
            sub_9AEDC0((__int64)v44, (__int64)v5, v41 + 48);
            sub_9AEDC0((__int64)v46, (__int64)v5, v41 + 80);
          }
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
          {
            v40 = *(_QWORD *)(a1[((unsigned int)*v5 >> 31) + 93] + 8 * v7);
            sub_9AEDC0((__int64)v42, (__int64)v5, v40 + 16);
            sub_9AEDC0((__int64)v44, (__int64)v5, v40 + 48);
            sub_9AEDC0((__int64)v46, (__int64)v5, v40 + 80);
          }
          v5 += 10;
        }
        while ( v6 != v5 );
      }
      v5 = (int *)*a2;
    }
  }
  v48[0] = 0;
  v48[1] = 0;
  v49[0] = 1;
  v49[1] = 0;
  v50[0] = 0;
  v50[1] = 0;
  v51[0] = 1;
  v51[1] = 0;
  v52[0] = 0;
  v52[1] = 0;
  v53[0] = 1;
  v53[1] = 0;
  if ( v5 )
  {
    v39 = &v5[10 * *(v5 - 1)];
    if ( v39 != v5 )
    {
      v35 = 0;
      v8 = 0;
      if ( !a3 )
      {
        while ( 1 )
        {
          v12 = (unsigned int)v5[8];
          if ( (_DWORD)v12 == -1 || !*(_DWORD *)(a1[96] + 4 * v12) )
            goto LABEL_17;
          v13 = *(_QWORD *)(a1[((unsigned int)*v5 >> 31) + 93] + 8 * v12);
          v14 = qword_1C7F2C0;
          if ( (v42[0] & 0x100000000LL) != 0 )
          {
            v38 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v48, v42);
            v14 = v38;
          }
          else
          {
            BYTE4(v48[0]) &= ~1u;
            LODWORD(v48[0]) = v42[0];
          }
          if ( (v43[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v14, v49, v43);
          }
          else
          {
            BYTE4(v49[0]) &= ~1u;
            LODWORD(v49[0]) = v43[0];
          }
          v15 = qword_1C7F2C0;
          if ( (v44[0] & 0x100000000LL) != 0 )
          {
            v37 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v50, v44);
            v15 = v37;
          }
          else
          {
            BYTE4(v50[0]) &= ~1u;
            LODWORD(v50[0]) = v44[0];
          }
          if ( (v45[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v15, v51, v45);
          }
          else
          {
            BYTE4(v51[0]) &= ~1u;
            LODWORD(v51[0]) = v45[0];
          }
          v16 = qword_1C7F2C0;
          if ( (v46[0] & 0x100000000LL) != 0 )
          {
            v36 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v52, v46);
            v16 = v36;
          }
          else
          {
            BYTE4(v52[0]) &= ~1u;
            LODWORD(v52[0]) = v46[0];
          }
          if ( (v47[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v16, v53, v47);
          }
          else
          {
            BYTE4(v53[0]) &= ~1u;
            LODWORD(v53[0]) = v47[0];
          }
          sub_9AF010((__int64)v48, (__int64)v5, v13 + 16);
          sub_9AF010((__int64)v50, (__int64)v5, v13 + 48);
          sub_9AF010((__int64)v52, (__int64)v5, v13 + 80);
          sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v48, (__int64)v5, (__int64)v48);
          sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v50, (__int64)v5, (__int64)v50);
          sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v52, (__int64)v5, (__int64)v52);
          v17 = (unsigned int)v5[8];
          v10 = v5[8];
          if ( *v5 <= 0 )
            break;
          v9 = *(_QWORD *)(a1[94] + 8 * v17);
          if ( !v9 )
            goto LABEL_15;
          if ( sub_33D280((__int64)v48, v9 + 16) )
          {
            v10 = v5[8];
LABEL_15:
            v11 = sub_A21980(a1, a2, v8, 0, v10, 1, (int *)v48);
LABEL_16:
            v35 += v11;
          }
LABEL_17:
          v5 += 10;
          ++v8;
          if ( v5 == v39 )
            goto LABEL_67;
        }
        v18 = *(_QWORD *)(a1[93] + 8 * v17);
        if ( v18 )
        {
          if ( !sub_33D280(v18 + 16, (__int64)v48) )
            goto LABEL_17;
          v10 = v5[8];
        }
        v11 = sub_A21980(a1, a2, v8, 0, v10, 0, (int *)v48);
        goto LABEL_16;
      }
      while ( 1 )
      {
        v23 = (unsigned int)v5[8];
        if ( (_DWORD)v23 == -1 || !*(_DWORD *)(a1[96] + 4 * v23) )
          goto LABEL_47;
        v24 = *(_QWORD *)(a1[(*v5 > 0) + 93] + 8 * v23);
        v25 = qword_1C7F2C0;
        if ( (v42[0] & 0x100000000LL) != 0 )
        {
          v32 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v48, v42);
          v25 = v32;
        }
        else
        {
          BYTE4(v48[0]) &= ~1u;
          LODWORD(v48[0]) = v42[0];
        }
        if ( (v43[0] & 0x100000000LL) != 0 )
        {
          sub_182C690(v25, v49, v43);
        }
        else
        {
          BYTE4(v49[0]) &= ~1u;
          LODWORD(v49[0]) = v43[0];
        }
        v26 = qword_1C7F2C0;
        if ( (v44[0] & 0x100000000LL) != 0 )
        {
          v31 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v50, v44);
          v26 = v31;
          if ( (v45[0] & 0x100000000LL) == 0 )
          {
LABEL_56:
            BYTE4(v51[0]) &= ~1u;
            LODWORD(v51[0]) = v45[0];
            goto LABEL_57;
          }
        }
        else
        {
          BYTE4(v50[0]) &= ~1u;
          LODWORD(v50[0]) = v44[0];
          if ( (v45[0] & 0x100000000LL) == 0 )
            goto LABEL_56;
        }
        sub_182C690(v26, v51, v45);
LABEL_57:
        v27 = qword_1C7F2C0;
        if ( (v46[0] & 0x100000000LL) != 0 )
        {
          v33 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v52, v46);
          v27 = v33;
        }
        else
        {
          BYTE4(v52[0]) &= ~1u;
          LODWORD(v52[0]) = v46[0];
        }
        if ( (v47[0] & 0x100000000LL) != 0 )
        {
          sub_182C690(v27, v53, v47);
        }
        else
        {
          BYTE4(v53[0]) &= ~1u;
          LODWORD(v53[0]) = v47[0];
        }
        sub_9AF010((__int64)v48, (__int64)v5, v24 + 16);
        sub_9AF010((__int64)v50, (__int64)v5, v24 + 48);
        sub_9AF010((__int64)v52, (__int64)v5, v24 + 80);
        sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v48, (__int64)v5, (__int64)v48);
        sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v50, (__int64)v5, (__int64)v50);
        sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v52, (__int64)v5, (__int64)v52);
        v28 = (unsigned int)v5[8];
        v21 = v5[8];
        if ( *v5 > 0 )
        {
          v29 = *(_QWORD *)(a1[93] + 8 * v28);
          if ( v29 )
          {
            if ( !sub_33D280(v29 + 16, (__int64)v48) )
              goto LABEL_47;
            v21 = v5[8];
          }
          v22 = sub_A21980(a1, a2, v8, 1, v21, 0, (int *)v48);
          goto LABEL_46;
        }
        v20 = *(_QWORD *)(a1[94] + 8 * v28);
        if ( !v20 )
          goto LABEL_45;
        if ( sub_33D280((__int64)v48, v20 + 16) )
        {
          v21 = v5[8];
LABEL_45:
          v22 = sub_A21980(a1, a2, v8, 1, v21, 1, (int *)v48);
LABEL_46:
          v35 += v22;
        }
LABEL_47:
        v5 += 10;
        ++v8;
        if ( v5 == v39 )
          goto LABEL_67;
      }
    }
  }
  v35 = 0;
LABEL_67:
  sub_2A6060((__int64)v48);
  sub_2A6060((__int64)v42);
  return v35;
}

