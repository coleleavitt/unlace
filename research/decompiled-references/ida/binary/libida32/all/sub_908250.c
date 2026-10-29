unsigned __int64 __fastcall sub_908250(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v4; // r14
  unsigned int v5; // ebp
  __int64 v6; // r10
  unsigned int v7; // r15d
  __int64 v8; // r13
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // r11d
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  int v14; // r8d
  unsigned int v15; // ecx
  bool v16; // cf
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // edx
  int v20; // ecx
  unsigned int *v21; // r9
  unsigned int v22; // eax
  __int64 *v23; // r9
  __int64 v24; // r8
  _DWORD *v25; // r8
  unsigned int v26; // ecx
  unsigned __int64 result; // rax
  _QWORD *v28; // rdi
  unsigned int v29; // r9d
  int v30; // ebx
  _QWORD *v31; // r12
  _QWORD *v32; // r15
  _QWORD *v33; // rdi
  unsigned __int64 v36; // r8
  _DWORD *v37; // r8
  __int64 v38; // r13
  __int64 v39; // rdi
  _QWORD *v42; // r10
  __int64 v43; // rdi
  unsigned __int64 v44; // [rsp+0h] [rbp-60h]
  unsigned int v45; // [rsp+8h] [rbp-58h]
  unsigned __int64 v46; // [rsp+8h] [rbp-58h]
  unsigned __int64 v48; // [rsp+10h] [rbp-50h]
  _QWORD *v50; // [rsp+18h] [rbp-48h]
  __int64 v51; // [rsp+20h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 28);
  v6 = *(_QWORD *)(a1 + 128);
  v7 = (_DWORD)a2 - v4;
  v8 = *(_QWORD *)(a1 + 112);
  v9 = (_DWORD)a2 - v4;
  v10 = 1 << *(_DWORD *)(a1 + 260);
  v11 = v10 - 1;
  v12 = 1 << *(_DWORD *)(a1 + 256);
  v13 = (_DWORD)a2 - v4 - v12;
  if ( v12 >= (_DWORD)a2 - (_DWORD)v4 - v5 )
    v13 = *(_DWORD *)(a1 + 28);
  v14 = *(_DWORD *)(a1 + 300);
  if ( !*(_DWORD *)(a1 + 40) )
    v5 = v13;
  v15 = v7 - v10;
  v16 = v10 < v7;
  v17 = 0;
  if ( v16 )
    v17 = v15;
  v45 = v17;
  v18 = *(_DWORD *)(a1 + 44);
  v19 = 1 << *(_DWORD *)(a1 + 268);
  v20 = 64 - *(_DWORD *)(a1 + 264);
  if ( v7 > v18 )
  {
    v21 = (unsigned int *)(v8 + 4 * ((0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v4 + v18)) >> v20));
    *(_DWORD *)(v6 + 4LL * (v18 & v11)) = *v21;
    *v21 = v18;
    v22 = v18 + 1;
    if ( !v14 )
    {
      v23 = (__int64 *)(v4 + v22);
      while ( v9 != v22 )
      {
        v24 = *v23;
        v23 = (__int64 *)((char *)v23 + 1);
        v25 = (_DWORD *)(v8 + 4 * ((0xCF1BBCDCBF9B0000LL * v24) >> v20));
        *(_DWORD *)(v6 + 4LL * (v22 & v11)) = *v25;
        *v25 = v22++;
      }
    }
  }
  *(_DWORD *)(a1 + 44) = (_DWORD)a2 - v4;
  v26 = *(_DWORD *)(v8 + 4 * ((0xCF1BBCDCBF9B0000LL * *a2) >> v20));
  result = 3;
  if ( v19 && v26 >= v5 )
  {
    v28 = a3;
    v29 = v45;
    v30 = v9 + 3;
    v46 = (unsigned __int64)a3 - 3;
    v31 = a4;
    v48 = (unsigned __int64)a3 - 1;
    v32 = v28;
    v44 = (unsigned __int64)v28 - 7;
    while ( 1 )
    {
      v33 = (_QWORD *)(v4 + v26);
      if ( *(_DWORD *)((char *)a2 + result - 3) != *(_DWORD *)((char *)v33 + result - 3) )
        goto LABEL_15;
      if ( (unsigned __int64)a2 >= v44 )
        break;
      if ( *v33 != *a2 )
      {
        _R8 = *a2 ^ *v33;
        __asm { tzcnt   r8, r8 }
        v36 = (unsigned int)_R8 >> 3;
        goto LABEL_22;
      }
      v37 = a2 + 1;
      v50 = v33 + 1;
      if ( v44 <= (unsigned __int64)(a2 + 1) )
      {
        ++v33;
LABEL_26:
        if ( (unsigned __int64)v37 < v46 && *(_DWORD *)v33 == *v37 )
        {
          ++v37;
          v33 = (_QWORD *)((char *)v33 + 4);
        }
        if ( (unsigned __int64)v37 < v48 && *(_WORD *)v33 == *(_WORD *)v37 )
        {
          v37 = (_DWORD *)((char *)v37 + 2);
          v33 = (_QWORD *)((char *)v33 + 2);
        }
        if ( v32 > (_QWORD *)v37 )
          v37 = (_DWORD *)((char *)v37 + (*(_BYTE *)v33 == *(_BYTE *)v37));
        v36 = (char *)v37 - (char *)a2;
        goto LABEL_22;
      }
      v38 = v33[1];
      v39 = a2[1];
      if ( v39 == v38 )
      {
        v51 = v6;
        v42 = v50;
        while ( 1 )
        {
          v37 += 2;
          ++v42;
          if ( v44 <= (unsigned __int64)v37 )
            break;
          v43 = *v42;
          if ( *v42 != *(_QWORD *)v37 )
          {
            v6 = v51;
            _RDI = *(_QWORD *)v37 ^ v43;
            goto LABEL_38;
          }
        }
        v33 = v42;
        v6 = v51;
        goto LABEL_26;
      }
      _RDI = v38 ^ v39;
LABEL_38:
      __asm { tzcnt   rdi, rdi }
      v36 = (char *)v37 + ((unsigned int)_RDI >> 3) - (char *)a2;
LABEL_22:
      if ( v36 > result )
      {
        *v31 = v30 - v26;
        result = v36;
        if ( v32 == (_QWORD *)((char *)a2 + v36) )
          return result;
      }
LABEL_15:
      if ( v26 > v29 )
      {
        --v19;
        v26 = *(_DWORD *)(v6 + 4LL * (v11 & v26));
        if ( v26 >= v5 )
        {
          if ( v19 )
            continue;
        }
      }
      return result;
    }
    v37 = a2;
    goto LABEL_26;
  }
  return result;
}

