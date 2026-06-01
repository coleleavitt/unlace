__int64 __fastcall sub_6DC3F0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r10
  int v9; // ecx
  int v10; // eax
  int v11; // esi
  int v12; // edx
  int v13; // eax
  __int64 *v14; // rcx
  int v15; // esi
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 *v18; // rdi
  __int64 v19; // rdx
  __int64 *v20; // r8
  __int64 *v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // r12
  unsigned int v24; // r13d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 result; // rax
  unsigned int v28; // edx
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // rbx
  bool v36; // zf
  __int64 v37; // rax
  unsigned int v38; // r13d
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rbx
  unsigned int v42; // r13d
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // rax
  __int64 v46; // rbx
  unsigned __int64 v47[8]; // [rsp+8h] [rbp-40h] BYREF

  v8 = *a2;
  v9 = *(_DWORD *)(*a2 + 12LL);
  v10 = (*(_DWORD *)(a3 + 12) - v9) ^ (v9 << 8);
  v11 = (v9 - v10) << 10;
  v12 = v10 ^ ((v9 - v10) << 16);
  v13 = v10 - v9;
  v14 = *(__int64 **)(a1 + 216);
  v15 = (v12 + v13) ^ v11;
  v16 = *(unsigned int *)(a1 + 224);
  v17 = v16 - 1;
  v16 *= 32;
  v18 = (__int64 *)((char *)v14 + v16);
  v19 = 32LL * (v15 & v17);
  v20 = &v14[(unsigned __int64)v19 / 8];
  if ( v19 == v16 )
  {
LABEL_23:
    while ( v20 != v14 )
    {
      v37 = *v14;
      if ( (unsigned __int64)*v14 > 1 )
      {
        if ( *((_DWORD *)v14 + 6) == v15 && v8 == v37 && a3 == v14[1] )
        {
          v21 = v14;
          goto LABEL_10;
        }
      }
      else if ( !v37 )
      {
        break;
      }
      v14 += 4;
    }
LABEL_8:
    sub_1872CE0("");
    sub_1873130(114, 173);
  }
  v21 = &v14[(unsigned __int64)v19 / 8];
  while ( 1 )
  {
    v22 = *v21;
    if ( (unsigned __int64)*v21 > 1 )
      break;
    if ( !v22 )
      goto LABEL_8;
LABEL_5:
    v21 += 4;
    if ( v18 == v21 )
      goto LABEL_23;
  }
  if ( *((_DWORD *)v21 + 6) != v15 || v8 != v22 || a3 != v21[1] )
    goto LABEL_5;
LABEL_10:
  v23 = (_QWORD *)v21[2];
  v24 = sub_182D020(qword_1C7F2C0, a4);
  v25 = sub_15D1F10(*a2);
  if ( !(unsigned __int8)sub_16256D0(a1 + 168, v25, v47) )
  {
    sub_1872CE0("");
    sub_1873130(114, 119);
  }
  v26 = v23[1];
  result = v23[3];
  if ( v26 )
  {
    v28 = *(_DWORD *)(v26 - 4);
    if ( result )
    {
      if ( v47[0] < *(_DWORD *)(result - 4) + v28 )
        goto LABEL_14;
LABEL_32:
      if ( v24 < v28 )
        return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
                 *(_QWORD *)(a1 + 24),
                 1,
                 *(_QWORD *)(v23[5] + 8LL * v24),
                 0,
                 0);
      v42 = 0;
      while ( v42 < v28 )
      {
        v44 = *(_QWORD *)(a1 + 8);
        v45 = sub_15E1A70(v44);
        v46 = v45;
        if ( v45 )
          ++*(_DWORD *)(v45 + 8);
        (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
          *(_QWORD *)(a1 + 24),
          1,
          v45,
          0,
          0);
        if ( v46 && (v36 = *(_DWORD *)(v46 + 8) == 1, --*(_DWORD *)(v46 + 8), v36) )
        {
          ++v42;
          sub_15D7BC0(v44, v46);
          v43 = v23[1];
          if ( !v43 )
            break;
        }
        else
        {
          v43 = v23[1];
          ++v42;
          if ( !v43 )
            break;
        }
        v28 = *(_DWORD *)(v43 - 4);
      }
      result = v23[3];
      if ( !result )
        return result;
LABEL_42:
      v38 = 0;
      do
      {
        if ( v38 >= *(_DWORD *)(result - 4) )
          break;
        v39 = *(_QWORD *)(a1 + 8);
        v40 = sub_15E1A70(v39);
        v41 = v40;
        if ( v40 )
          ++*(_DWORD *)(v40 + 8);
        (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
          *(_QWORD *)(a1 + 24),
          1,
          v40,
          0,
          0);
        if ( v41 )
        {
          v36 = (*(_DWORD *)(v41 + 8))-- == 1;
          if ( v36 )
            sub_15D7BC0(v39, v41);
        }
        result = v23[3];
        ++v38;
      }
      while ( result );
      return result;
    }
    if ( v47[0] >= v28 )
      goto LABEL_32;
  }
  else
  {
    if ( !result )
      return result;
    if ( v47[0] >= *(unsigned int *)(result - 4) )
      goto LABEL_42;
  }
LABEL_14:
  v29 = *(_QWORD *)(a1 + 8);
  v30 = sub_15D1F10(*a2);
  v31 = sub_1625BE0(a1 + 168, v24, v30);
  v32 = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  v33 = *(_QWORD *)(a1 + 8);
  v34 = sub_15E1B70(v33);
  v35 = v34;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
             *(_QWORD *)(a1 + 24),
             1,
             v34,
             0,
             0);
  if ( v35 && (v36 = *(_DWORD *)(v35 + 8) == 1, --*(_DWORD *)(v35 + 8), v36) )
  {
    result = sub_15D7BC0(v33, v35);
    if ( !v32 )
      return result;
  }
  else if ( !v32 )
  {
    return result;
  }
  v36 = (*(_DWORD *)(v32 + 8))-- == 1;
  if ( v36 )
    return sub_15D7BC0(v29, v32);
  return result;
}

