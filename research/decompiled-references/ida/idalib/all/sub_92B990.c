unsigned __int64 __fastcall sub_92B990(__int64 a1, _DWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // r10
  unsigned int v7; // r14d
  __int64 v8; // r13
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // r11d
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  bool v15; // cf
  unsigned int v16; // eax
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // eax
  unsigned int *v20; // r9
  unsigned int v21; // eax
  _DWORD *v22; // r9
  unsigned int v23; // r8d
  _DWORD *v24; // r8
  int v25; // r8d
  unsigned int v26; // ecx
  unsigned __int64 result; // rax
  unsigned __int64 v28; // rdi
  unsigned int v29; // r9d
  int v30; // ebx
  unsigned __int64 v31; // r15
  _QWORD *v32; // r13
  _QWORD *v33; // rdi
  unsigned __int64 v36; // r8
  _DWORD *v37; // r8
  __int64 v38; // r14
  __int64 v39; // rdi
  _QWORD *v42; // r10
  __int64 v43; // rdi
  unsigned int v44; // [rsp+0h] [rbp-60h]
  unsigned __int64 v45; // [rsp+0h] [rbp-60h]
  unsigned __int64 v47; // [rsp+8h] [rbp-58h]
  int v48; // [rsp+10h] [rbp-50h]
  unsigned __int64 v49; // [rsp+10h] [rbp-50h]
  _QWORD *v51; // [rsp+18h] [rbp-48h]
  __int64 v52; // [rsp+20h] [rbp-40h]

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
  if ( !*(_DWORD *)(a1 + 40) )
    v5 = v13;
  v14 = v7 - v10;
  v15 = v10 < v7;
  v16 = 0;
  if ( v15 )
    v16 = v14;
  v44 = v16;
  v17 = 1 << *(_DWORD *)(a1 + 268);
  v18 = 32 - *(_DWORD *)(a1 + 264);
  v48 = *(_DWORD *)(a1 + 300);
  v19 = *(_DWORD *)(a1 + 44);
  if ( v7 > v19 )
  {
    v20 = (unsigned int *)(v8 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)(v4 + v19)) >> v18));
    *(_DWORD *)(v6 + 4LL * (v19 & v11)) = *v20;
    *v20 = v19;
    v21 = v19 + 1;
    if ( !v48 )
    {
      v22 = (_DWORD *)(v4 + v21);
      while ( v9 != v21 )
      {
        v23 = -1640531535 * *v22;
        v22 = (_DWORD *)((char *)v22 + 1);
        v24 = (_DWORD *)(v8 + 4LL * (v23 >> v18));
        *(_DWORD *)(v6 + 4LL * (v21 & v11)) = *v24;
        *v24 = v21++;
      }
    }
  }
  *(_DWORD *)(a1 + 44) = v7;
  v25 = *a2;
  v26 = *(_DWORD *)(v8 + 4LL * ((unsigned int)(-1640531535 * *a2) >> v18));
  result = 3;
  if ( v17 && v26 >= v5 )
  {
    v28 = a3;
    v29 = v44;
    v30 = v9 + 3;
    v47 = a3 - 3;
    v31 = v28;
    v49 = v28 - 1;
    v32 = a4;
    v45 = v28 - 7;
    while ( 1 )
    {
      v33 = (_QWORD *)(v4 + v26);
      if ( *(_DWORD *)((char *)v33 + result - 3) != v25 )
        goto LABEL_15;
      if ( (unsigned __int64)a2 >= v45 )
        break;
      if ( *v33 != *(_QWORD *)a2 )
      {
        _R8 = *(_QWORD *)a2 ^ *v33;
        __asm { tzcnt   r8, r8 }
        v36 = (unsigned int)_R8 >> 3;
        goto LABEL_23;
      }
      v37 = a2 + 2;
      v51 = v33 + 1;
      if ( v45 <= (unsigned __int64)(a2 + 2) )
      {
        ++v33;
LABEL_27:
        if ( (unsigned __int64)v37 < v47 && *(_DWORD *)v33 == *v37 )
        {
          ++v37;
          v33 = (_QWORD *)((char *)v33 + 4);
        }
        if ( (unsigned __int64)v37 < v49 && *(_WORD *)v33 == *(_WORD *)v37 )
        {
          v37 = (_DWORD *)((char *)v37 + 2);
          v33 = (_QWORD *)((char *)v33 + 2);
        }
        if ( v31 > (unsigned __int64)v37 )
          v37 = (_DWORD *)((char *)v37 + (*(_BYTE *)v33 == *(_BYTE *)v37));
        v36 = (char *)v37 - (char *)a2;
        goto LABEL_23;
      }
      v38 = v33[1];
      v39 = *((_QWORD *)a2 + 1);
      if ( v39 == v38 )
      {
        v52 = v6;
        v42 = v51;
        while ( 1 )
        {
          v37 += 2;
          ++v42;
          if ( v45 <= (unsigned __int64)v37 )
            break;
          v43 = *v42;
          if ( *v42 != *(_QWORD *)v37 )
          {
            v6 = v52;
            _RDI = *(_QWORD *)v37 ^ v43;
            goto LABEL_39;
          }
        }
        v33 = v42;
        v6 = v52;
        goto LABEL_27;
      }
      _RDI = v38 ^ v39;
LABEL_39:
      __asm { tzcnt   rdi, rdi }
      v36 = (char *)v37 + ((unsigned int)_RDI >> 3) - (char *)a2;
LABEL_23:
      if ( v36 > result )
      {
        *v32 = v30 - v26;
        result = v36;
        if ( (_DWORD *)v31 == (_DWORD *)((char *)a2 + v36) )
          return result;
      }
LABEL_15:
      if ( v29 >= v26 )
        return result;
      --v17;
      v26 = *(_DWORD *)(v6 + 4LL * (v11 & v26));
      if ( v26 < v5 || !v17 )
        return result;
      v25 = *(_DWORD *)((char *)a2 + result - 3);
    }
    v37 = a2;
    goto LABEL_27;
  }
  return result;
}
