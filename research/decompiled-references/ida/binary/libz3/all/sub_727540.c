__int64 *__fastcall sub_727540(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 *v8; // rsi
  int v9; // r9d
  unsigned int v10; // edx
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 *v13; // r10
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r10
  __int64 v18; // rax
  _QWORD *v19; // rdx
  int v20; // edi
  unsigned int v21; // r11d
  _QWORD *v22; // rsi
  unsigned __int64 v23; // r11
  _QWORD *v24; // r9
  _QWORD *i; // rax
  _QWORD *v26; // r14
  __int64 v27; // r12
  __int64 v28; // rbx
  void *v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rbx
  bool v33; // zf
  __int64 v35; // [rsp+8h] [rbp-80h]
  __int64 v37; // [rsp+18h] [rbp-70h]
  void *v38; // [rsp+28h] [rbp-60h]
  void *v39; // [rsp+28h] [rbp-60h]
  _QWORD v40[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v41[9]; // [rsp+40h] [rbp-48h] BYREF

  v35 = sub_186B270(0xA0u);
  sub_1373200(v35, *a2);
  v3 = a2[24];
  ++*(_DWORD *)(v35 + 16);
  *a1 = v35;
  if ( !v3 )
    return a1;
  v4 = *(unsigned int *)(v3 - 4);
  if ( !(_DWORD)v4 )
    return a1;
  v5 = 0;
  v37 = 8 * v4;
  while ( 2 )
  {
    v6 = *(_QWORD *)(v3 + v5);
    v7 = *((unsigned int *)a2 + 44);
    v8 = (__int64 *)a2[21];
    v9 = *(_DWORD *)(v6 + 12);
    v10 = v7 - 1;
    v7 *= 16;
    v11 = (__int64 *)((char *)v8 + v7);
    v12 = 16LL * (v9 & v10);
    v13 = &v8[(unsigned __int64)v12 / 8];
    if ( v12 == v7 )
    {
LABEL_12:
      while ( v13 != v8 )
      {
        v16 = *v8;
        if ( (unsigned __int64)*v8 > 1 )
        {
          if ( *(_DWORD *)(v16 + 12) == v9 && v6 == v16 )
          {
            v14 = v8;
            goto LABEL_21;
          }
        }
        else if ( !v16 )
        {
          break;
        }
        v8 += 2;
      }
LABEL_11:
      BUG();
    }
    v14 = &v8[(unsigned __int64)v12 / 8];
    while ( 1 )
    {
      v15 = *v14;
      if ( (unsigned __int64)*v14 > 1 )
        break;
      if ( !v15 )
        goto LABEL_11;
LABEL_8:
      v14 += 2;
      if ( v11 == v14 )
        goto LABEL_12;
    }
    if ( *(_DWORD *)(v15 + 12) != v9 || v6 != v15 )
      goto LABEL_8;
LABEL_21:
    v17 = v14[1];
    v18 = *((unsigned int *)a2 + 32);
    v19 = (_QWORD *)a2[15];
    v20 = *(_DWORD *)(v17 + 12);
    v21 = v18 - 1;
    v18 <<= 6;
    v22 = (_QWORD *)((char *)v19 + v18);
    v23 = (unsigned __int64)(v20 & v21) << 6;
    v24 = (_QWORD *)((char *)v19 + v23);
    if ( v23 != v18 )
    {
      for ( i = (_QWORD *)((char *)v19 + v23); v22 != i; i += 8 )
      {
        v26 = (_QWORD *)*i;
        if ( *i > 1u )
        {
          if ( *((_DWORD *)v26 + 3) == v20 && (_QWORD *)v17 == v26 )
          {
            v26 = i;
            goto LABEL_28;
          }
        }
        else if ( !v26 )
        {
          goto LABEL_28;
        }
      }
    }
    if ( v19 == v24 )
    {
LABEL_46:
      v26 = nullptr;
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = (_QWORD *)*v19;
          if ( *v19 > 1u )
            break;
          if ( !v26 )
            goto LABEL_28;
          v19 += 8;
          if ( v24 == v19 )
            goto LABEL_46;
        }
        if ( *((_DWORD *)v26 + 3) == v20 && (_QWORD *)v17 == v26 )
          break;
        v19 += 8;
        if ( v24 == v19 )
          goto LABEL_46;
      }
      v26 = v19;
    }
LABEL_28:
    v27 = *a2;
    v28 = *(_QWORD *)(v6 + 40);
    if ( v28 == *(_QWORD *)(*a2 + 840) )
    {
      v32 = *(_QWORD *)(v27 + 864);
      if ( *((_DWORD *)v26 + 4) )
        v32 = *(_QWORD *)(v27 + 856);
      if ( v32 )
      {
        ++*(_DWORD *)(v32 + 8);
        sub_135F9B0(v35, v6, v32);
        v33 = (*(_DWORD *)(v32 + 8))-- == 1;
        if ( v33 )
          goto LABEL_51;
      }
      else
      {
        sub_135F9B0(v35, v6, 0);
      }
LABEL_36:
      v5 += 8;
      if ( v5 != v37 )
        goto LABEL_37;
    }
    else
    {
      if ( !(unsigned __int8)sub_1673B10(a2[2], *(_QWORD *)(v6 + 40)) )
      {
        sub_1872CE0("");
        sub_1873130(107, 926);
      }
      v40[0] = 0;
      v40[1] = 0;
      v41[0] = 1;
      v29 = qword_1C7F2C0;
      v41[1] = 0;
      if ( (*((_BYTE *)v26 + 20) & 1) != 0 )
      {
        v39 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v40, v26 + 2);
        v29 = v39;
      }
      else
      {
        LODWORD(v40[0]) = *((_DWORD *)v26 + 4);
      }
      sub_182CBA0(v29, v41);
      v30 = a2[2];
      BYTE4(v41[0]) &= ~1u;
      LODWORD(v41[0]) = 1;
      v31 = sub_16746C0(v30, v40, v28);
      v32 = v31;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      v38 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v40);
      sub_182CBA0(v38, v41);
      sub_135F9B0(v35, v6, v32);
      if ( !v32 )
        goto LABEL_36;
      v33 = (*(_DWORD *)(v32 + 8))-- == 1;
      if ( !v33 )
        goto LABEL_36;
LABEL_51:
      v5 += 8;
      sub_15D7BC0(v27, v32);
      if ( v5 != v37 )
      {
LABEL_37:
        v3 = a2[24];
        v35 = *a1;
        continue;
      }
    }
    return a1;
  }
}

