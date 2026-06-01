__int64 __fastcall sub_8B0240(__int64 a1, unsigned int a2, char a3, __int64 *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // r12d
  __int64 *v9; // r9
  __int64 v10; // rdx
  int *v11; // rcx
  __int64 v12; // rax
  int v13; // edi
  unsigned int v14; // ebx
  unsigned int v15; // r10d
  __int64 *v16; // r12
  __int64 v17; // r15
  __int64 v18; // r14
  unsigned int v19; // r13d
  int v20; // eax
  __int64 v21; // rbp
  __int64 v22; // rsi
  signed int v23; // eax
  unsigned int v24; // r9d
  __int64 v25; // rbp
  int v26; // edx
  int v27; // edx
  __int64 v28; // rcx
  int v29; // esi
  __int64 v30; // rsi
  unsigned int v31; // eax
  signed int v33; // [rsp+0h] [rbp-68h]
  signed int v34; // [rsp+0h] [rbp-68h]
  int v36; // [rsp+8h] [rbp-60h]
  char v37; // [rsp+Fh] [rbp-59h]
  __int64 *v38; // [rsp+10h] [rbp-58h]
  unsigned int v39; // [rsp+18h] [rbp-50h]
  unsigned int v40; // [rsp+18h] [rbp-50h]
  int v41; // [rsp+1Ch] [rbp-4Ch]
  __int64 v42; // [rsp+20h] [rbp-48h]
  unsigned int v43; // [rsp+28h] [rbp-40h]
  unsigned int v44; // [rsp+2Ch] [rbp-3Ch]

  v7 = *(_QWORD *)(a1 + 1592);
  if ( v7 )
    v8 = *(_DWORD *)(v7 - 4);
  else
    v8 = 0;
  v9 = (__int64 *)(*(_QWORD *)(a1 + 1480) + 16LL * (*(_DWORD *)(v7 + 232LL * a2) & 0x1FFFFFFF));
  v10 = *v9;
  if ( *v9 )
  {
    v11 = (int *)(v10 + 32);
    v12 = 0;
    v36 = *(_DWORD *)(v10 - 4);
    while ( 1 )
    {
      if ( (_DWORD)v12 == *(_DWORD *)(v10 - 4) )
        return (unsigned int)-1;
      v13 = *v11;
      v14 = v12 + 1;
      v11 += 10;
      if ( v13 != -1 )
        break;
      v12 = v14;
    }
    v33 = 0x7FFFFFFF;
    v39 = -1;
    v41 = 0;
    v42 = a1 + 736;
    v38 = v9;
    v37 = a3;
    v44 = v8;
    v43 = v8;
    v16 = a4;
    v17 = a1;
    while ( 1 )
    {
      v18 = v10 + 40 * v12;
      v19 = *(_DWORD *)(v18 + 32);
      if ( a2 == v19 )
        goto LABEL_22;
      v20 = *(_DWORD *)v18;
      if ( v37 )
      {
        if ( v20 < 0 )
          goto LABEL_13;
      }
      else if ( v20 > 0 )
      {
LABEL_13:
        v21 = v19;
        v22 = *(_QWORD *)(v17 + 1592) + 232LL * v19;
        if ( *(char *)(v22 + 3) < 0 && !sub_8AEDF0(v17 + 736, v22 + 8, v22 + 136) )
          goto LABEL_32;
        goto LABEL_14;
      }
      v21 = v19;
      v30 = *(_QWORD *)(v17 + 1592) + 232LL * v19;
      if ( (*(_BYTE *)(v30 + 3) & 0x40) != 0 && !sub_8AEDF0(v42, v30 + 72, v30 + 8) )
      {
LABEL_32:
        v10 = *v38;
        goto LABEL_22;
      }
LABEL_14:
      v23 = sub_898B40((_QWORD *)v17, v19, v33);
      v24 = *(_DWORD *)(*(_QWORD *)(v17 + 1496) + 24 * v21 + 8);
      if ( v23 < v33 || v24 < v39 && v23 == v33 )
      {
        v25 = *v16;
        if ( (*(_BYTE *)(v18 + 4) & 1) != 0 )
        {
          v40 = v24;
          v34 = v23;
          sub_182EA00(*v16, v16 + 1, v18);
          v24 = v40;
          v23 = v34;
        }
        else
        {
          v26 = *(_DWORD *)v18;
          *((_BYTE *)v16 + 12) &= ~1u;
          *((_DWORD *)v16 + 2) = v26;
        }
        if ( (*(_BYTE *)(v18 + 20) & 1) != 0 )
        {
          v33 = v23;
          v39 = v24;
          sub_182EA00(v25, v16 + 3, v18 + 16);
          v43 = v19;
          v41 = 1;
        }
        else
        {
          v27 = *(_DWORD *)(v18 + 16);
          v43 = v19;
          *((_BYTE *)v16 + 28) &= ~1u;
          v33 = v23;
          v39 = v24;
          v41 = 1;
          *((_DWORD *)v16 + 6) = v27;
        }
        v10 = *v38;
      }
      else
      {
        if ( v24 != v39 )
          goto LABEL_32;
        if ( v23 != v33 )
          goto LABEL_32;
        ++v41;
        v31 = 214013 * *(_DWORD *)(v17 + 1616) + 2531011;
        *(_DWORD *)(v17 + 1616) = v31;
        if ( (int)(HIWORD(v31) & 0x7FFF) % v41 )
          goto LABEL_32;
        sub_8ADE80(*v16, (__int64)(v16 + 1), (int *)v18);
        v43 = v19;
        v10 = *v38;
      }
LABEL_22:
      v12 = v14;
      if ( v10 )
      {
        v28 = v10 + 40LL * v14;
        while ( v14 < *(_DWORD *)(v10 - 4) )
        {
          v29 = *(_DWORD *)(v28 + 32);
          ++v14;
          v28 += 40;
          if ( v29 != -1 )
            break;
          v12 = v14;
        }
      }
      if ( (_DWORD)v12 == v36 )
      {
        v15 = v43;
        if ( v43 < v44 )
          return v15;
        return (unsigned int)-1;
      }
      v14 = v12 + 1;
    }
  }
  return (unsigned int)-1;
}

