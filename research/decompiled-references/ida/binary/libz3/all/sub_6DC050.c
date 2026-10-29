_QWORD *__fastcall sub_6DC050(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4, _QWORD *a5)
{
  __int64 v9; // r10
  __int64 v10; // r11
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // edx
  int v15; // eax
  __int64 *v16; // rcx
  int v17; // esi
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 *v22; // r8
  __int64 *v23; // rax
  unsigned __int64 v24; // rdx
  _QWORD *v25; // r15
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // edx
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r13
  bool v35; // zf
  _QWORD *result; // rax
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rax
  unsigned int v40; // r13d
  __int64 v41; // rsi
  __int64 v42; // rdx
  unsigned int v43; // r13d
  __int64 v44; // rcx
  unsigned int v46; // [rsp+8h] [rbp-50h]
  unsigned __int64 v47[8]; // [rsp+18h] [rbp-40h] BYREF

  v9 = *a2;
  v10 = *a4;
  v11 = *(_DWORD *)(*a2 + 12LL);
  v12 = (*(_DWORD *)(v10 + 12) - v11) ^ (v11 << 8);
  v13 = (v11 - v12) << 10;
  v14 = v12 ^ ((v11 - v12) << 16);
  v15 = v12 - v11;
  v16 = *(__int64 **)(a1 + 216);
  v17 = (v14 + v15) ^ v13;
  v18 = *(unsigned int *)(a1 + 224);
  v19 = v18 - 1;
  v18 *= 32;
  v20 = (__int64 *)((char *)v16 + v18);
  v21 = 32LL * (v17 & v19);
  v22 = &v16[(unsigned __int64)v21 / 8];
  if ( v21 == v18 )
  {
LABEL_23:
    while ( v22 != v16 )
    {
      v39 = *v16;
      if ( (unsigned __int64)*v16 > 1 )
      {
        if ( *((_DWORD *)v16 + 6) == v17 && v9 == v39 && v10 == v16[1] )
        {
          v23 = v16;
          goto LABEL_10;
        }
      }
      else if ( !v39 )
      {
        break;
      }
      v16 += 4;
    }
LABEL_8:
    sub_1872CE0("");
    sub_1873130(114, 173);
  }
  v23 = &v16[(unsigned __int64)v21 / 8];
  while ( 1 )
  {
    v24 = *v23;
    if ( (unsigned __int64)*v23 > 1 )
      break;
    if ( !v24 )
      goto LABEL_8;
LABEL_5:
    v23 += 4;
    if ( v20 == v23 )
      goto LABEL_23;
  }
  if ( *((_DWORD *)v23 + 6) != v17 || v9 != v24 || v10 != v23[1] )
    goto LABEL_5;
LABEL_10:
  v25 = (_QWORD *)v23[2];
  v46 = sub_182D020(qword_1C7F2C0, a3);
  v26 = sub_15D1F10(*a2);
  if ( !(unsigned __int8)sub_16256D0(a1 + 168, v26, v47) )
  {
    sub_1872CE0("");
    sub_1873130(114, 119);
  }
  v27 = v25[1];
  v28 = v25[3];
  if ( !v27 )
  {
    if ( !v28 )
      goto LABEL_17;
    if ( v47[0] < *(unsigned int *)(v28 - 4) )
      goto LABEL_14;
    goto LABEL_38;
  }
  v29 = *(_DWORD *)(v27 - 4);
  if ( v28 )
  {
    if ( v47[0] < *(_DWORD *)(v28 - 4) + v29 )
    {
LABEL_14:
      v30 = *(_QWORD *)(a1 + 8);
      v31 = sub_15D1F10(*a2);
      v32 = sub_1625BE0(a1 + 168, v46, v31);
      v33 = *a2;
      v34 = v32;
      if ( v32 )
      {
        ++*(_DWORD *)(v32 + 8);
        sub_14EC390(a1 + 32, v33, v32, a4);
        v35 = (*(_DWORD *)(v34 + 8))-- == 1;
        if ( v35 )
          sub_15D7BC0(v30, v34);
      }
      else
      {
        sub_14EC390(a1 + 32, v33, 0, a4);
      }
      goto LABEL_17;
    }
  }
  else if ( v47[0] < v29 )
  {
    goto LABEL_14;
  }
  v40 = 0;
  if ( v46 < v29 )
  {
    sub_14EC390(a1 + 32, *a2, *(_QWORD *)(v27 + 8LL * v46), a4);
    goto LABEL_17;
  }
  while ( v40 < v29 )
  {
    v41 = v40++;
    sub_14EC390(a1 + 32, *(_QWORD *)(v25[5] + 8 * v41), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL), a4);
    v42 = v25[1];
    if ( !v42 )
      break;
    v29 = *(_DWORD *)(v42 - 4);
  }
  v28 = v25[3];
  if ( v28 )
  {
LABEL_38:
    v43 = 0;
    do
    {
      if ( v43 >= *(_DWORD *)(v28 - 4) )
        break;
      v44 = v43++;
      sub_14EC390(a1 + 32, *(_QWORD *)(v25[7] + 8 * v44), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL), a4);
      v28 = v25[3];
    }
    while ( v28 );
  }
LABEL_17:
  result = a5;
  if ( a5 )
  {
    v37 = *a5;
    if ( *a5 )
    {
      v38 = a5[1];
      v35 = (*(_DWORD *)(v37 + 8))-- == 1;
      if ( v35 )
        sub_15D7BC0(v38, v37);
    }
    result = a5;
    *a5 = 0;
  }
  return result;
}

