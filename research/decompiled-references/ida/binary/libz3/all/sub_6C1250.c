__int64 __fastcall sub_6C1250(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  int v13; // edx
  int v14; // eax
  __int64 *v15; // rcx
  int v16; // esi
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 *v21; // r8
  __int64 *v22; // rax
  unsigned __int64 v23; // rdx
  _QWORD *v24; // r12
  unsigned int v25; // r13d
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // r13d
  __int64 v29; // r15
  __int64 v30; // rdx
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 result; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+8h] [rbp-50h]

  v8 = *a2;
  v9 = *a4;
  v10 = *(_DWORD *)(*a2 + 12);
  v11 = (*(_DWORD *)(v9 + 12) - v10) ^ (v10 << 8);
  v12 = (v10 - v11) << 10;
  v13 = v11 ^ ((v10 - v11) << 16);
  v14 = v11 - v10;
  v15 = *(__int64 **)(a1 + 32);
  v16 = (v13 + v14) ^ v12;
  v17 = *(unsigned int *)(a1 + 40);
  v18 = v17 - 1;
  v17 *= 32;
  v19 = (__int64 *)((char *)v15 + v17);
  v20 = 32LL * (v16 & v18);
  v21 = &v15[(unsigned __int64)v20 / 8];
  if ( v20 == v17 )
  {
LABEL_19:
    while ( v21 != v15 )
    {
      v38 = *v15;
      if ( (unsigned __int64)*v15 > 1 )
      {
        if ( *((_DWORD *)v15 + 6) == v16 && v8 == v38 && v9 == v15[1] )
        {
          v22 = v15;
          goto LABEL_10;
        }
      }
      else if ( !v38 )
      {
        break;
      }
      v15 += 4;
    }
LABEL_8:
    sub_1872CE0("");
    sub_1873130(114, 2518);
  }
  v22 = &v15[(unsigned __int64)v20 / 8];
  while ( 1 )
  {
    v23 = *v22;
    if ( (unsigned __int64)*v22 > 1 )
      break;
    if ( !v23 )
      goto LABEL_8;
LABEL_5:
    v22 += 4;
    if ( v19 == v22 )
      goto LABEL_19;
  }
  if ( *((_DWORD *)v22 + 6) != v16 || v8 != v23 || v9 != v22[1] )
    goto LABEL_5;
LABEL_10:
  v24 = (_QWORD *)v22[2];
  v25 = sub_182D020(qword_1C7F2C0, a3);
  sub_14E9CE0(a1 + 104);
  v26 = v24[3];
  v27 = v25;
  v39 = v25;
  if ( v26 )
  {
    v28 = 0;
    v29 = 16 * v27;
    do
    {
      if ( v28 >= *(_DWORD *)(v26 - 4) )
        break;
      v30 = v28++;
      sub_14EA0D0(a1 + 104, *(_QWORD *)(v26 + 8 * v30), *(_QWORD *)(*(_QWORD *)(v24[4] + v29 + 8) + 8 * v30));
      v26 = v24[3];
    }
    while ( v26 );
  }
  sub_14EA2A0(a1 + 104, *a4, a4);
  v31 = *(_QWORD *)(a1 + 8);
  v32 = sub_15E1B70(v31);
  v33 = v32;
  if ( v32 )
  {
    ++*(_DWORD *)(v32 + 8);
    v34 = a1 + 256;
    v35 = a1 + 752;
    result = sub_1472F40(v34, v32, a4, v35);
    if ( a5 )
      goto LABEL_16;
LABEL_17:
    if ( (*(_DWORD *)(v33 + 8))-- == 1 )
      return sub_15D7BC0(v31, v33);
  }
  else
  {
    v34 = a1 + 256;
    v35 = a1 + 752;
    result = sub_1472F40(v34, 0, a4, v35);
    if ( a5 )
    {
LABEL_16:
      result = sub_1472F40(v34, *(_QWORD *)(v24[8] + 8 * v39), a5, v35);
      if ( v33 )
        goto LABEL_17;
    }
  }
  return result;
}

