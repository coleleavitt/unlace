__int64 __fastcall sub_A9CA00(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  void *v6; // r14
  __int64 *v7; // rax
  unsigned int v8; // eax
  int v9; // r14d
  int v10; // r8d
  __int64 v11; // rax
  int v12; // r8d
  _DWORD *v13; // r14
  unsigned int v14; // edx
  _DWORD *v15; // r10
  __int64 v16; // rdx
  _DWORD *v17; // r15
  int v18; // eax
  bool v19; // al
  void *v20; // rbp
  unsigned int v21; // r13d
  unsigned int v22; // eax
  _QWORD *v23; // r12
  __int64 v24; // rbp
  __int64 result; // rax
  void *v26; // r13
  __int64 v27; // rbp
  unsigned __int8 v28; // al
  unsigned int *v29; // rdx
  unsigned __int8 v30; // cl
  unsigned int v31; // esi
  int v32; // eax
  bool v33; // al
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // rdi
  unsigned __int8 v40; // al
  unsigned int v41; // eax
  _DWORD *v42; // [rsp+10h] [rbp-88h]
  int v43; // [rsp+10h] [rbp-88h]
  __int64 *v44; // [rsp+18h] [rbp-80h]
  int v45; // [rsp+20h] [rbp-78h]
  _QWORD v48[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v49[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = qword_1C7F2C0;
  v7 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 8LL * a2);
  v48[0] = 0;
  v48[1] = 0;
  v44 = v7;
  v49[0] = 1;
  v49[1] = 0;
  v49[2] = 0;
  if ( (a4[1] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v48, a4);
  else
    LODWORD(v48[0]) = *a4;
  if ( (a4[5] & 1) != 0 )
  {
    sub_182C690(v6, v49, a4 + 4);
  }
  else
  {
    v8 = a4[4];
    BYTE4(v49[0]) &= ~1u;
    LODWORD(v49[0]) = v8;
  }
  v9 = sub_182DB30(v48);
  v10 = 3 * sub_182DB30(v49);
  v11 = *(unsigned int *)(a1 + 744);
  v12 = v9 + v10;
  v13 = *(_DWORD **)(a1 + 736);
  v14 = v11 - 1;
  v11 *= 48;
  v15 = (_DWORD *)((char *)v13 + v11);
  v16 = 48LL * (v12 & v14);
  v17 = &v13[(unsigned __int64)v16 / 4];
  if ( v16 != v11 )
  {
    v13 = (_DWORD *)((char *)v13 + v16);
    do
    {
      v18 = v13[1];
      if ( v18 == 2 )
      {
        if ( *v13 == v12 )
        {
          v45 = v12;
          v42 = v15;
          v19 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(v13 + 2), (__int64)v48);
          v15 = v42;
          v12 = v45;
          if ( v19 )
          {
LABEL_12:
            v20 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v48);
            sub_182CBA0(v20, v49);
            v21 = v13[10];
            v22 = v21;
            goto LABEL_13;
          }
        }
      }
      else if ( !v18 )
      {
        goto LABEL_15;
      }
      v13 += 12;
    }
    while ( v15 != v13 );
    v13 = *(_DWORD **)(a1 + 736);
  }
  for ( ; v17 != v13; v13 += 12 )
  {
    v32 = v13[1];
    if ( v32 == 2 )
    {
      if ( *v13 == v12 )
      {
        v43 = v12;
        v33 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(v13 + 2), (__int64)v48);
        v12 = v43;
        if ( v33 )
          goto LABEL_12;
      }
    }
    else if ( !v32 )
    {
      break;
    }
  }
LABEL_15:
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v48);
  sub_182CBA0(v26, v49);
  result = *a4;
  if ( (_DWORD)result )
  {
    if ( (a4[1] & 1) != 0 || (_DWORD)result != 1 || (a4[5] & 1) != 0 || a4[4] != 1 )
      return result;
    v27 = *(_QWORD *)(a1 + 504);
    v28 = sub_A72E00(*v44);
    v29 = (unsigned int *)(a1 + 136);
    v30 = v28;
    if ( v28 )
      v29 = (unsigned int *)(a1 + 128);
    v31 = 1;
  }
  else
  {
    v27 = *(_QWORD *)(a1 + 504);
    v40 = sub_A72E00(*v44);
    v29 = (unsigned int *)(a1 + 140);
    v30 = v40;
    if ( v40 )
      v29 = (unsigned int *)(a1 + 132);
    v31 = 0;
  }
  v41 = sub_A98420((__int64 *)a1, v31, v29, v30);
  v22 = sub_FF9E10(v27, v41);
  v21 = v22;
LABEL_13:
  v23 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 8LL * v22);
  v24 = sub_15D1F10(*v44);
  result = sub_15D1F10(*v23);
  if ( v24 == result )
  {
    result = v23[1];
    if ( v44[1] != result )
    {
      v34 = *(_QWORD *)(a1 + 848);
      if ( v34 )
        *(_DWORD *)(v34 - 4) = 0;
      v35 = *(_QWORD *)(a1 + 856);
      if ( v35 )
        *(_DWORD *)(v35 - 4) = 0;
      v36 = *(_QWORD *)(a1 + 864);
      if ( v36 )
      {
        v37 = *(unsigned int *)(v36 - 4);
        if ( (_DWORD)v37 )
        {
          v38 = v36 + 16 * v37;
          do
          {
            v39 = v36;
            v36 += 16;
            sub_15D0DF0(v39);
          }
          while ( v36 != v38 );
          v36 = *(_QWORD *)(a1 + 864);
        }
        *(_DWORD *)(v36 - 4) = 0;
      }
      sub_A74EB0((_QWORD *)a1, a3, (_QWORD *)(a1 + 848));
      ++*(_DWORD *)(a1 + 456);
      return sub_A97610((__int64 *)a1, a2, v21);
    }
  }
  return result;
}

