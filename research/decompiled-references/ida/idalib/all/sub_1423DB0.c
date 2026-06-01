__int64 __fastcall sub_1423DB0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  unsigned int v10; // esi
  __int64 v11; // rbp
  unsigned int v12; // edx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 *v15; // r15
  __int64 v16; // rax
  unsigned __int64 *v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r14
  __int64 v23; // rbp
  __int64 v24; // r14
  __int64 v25; // rax
  int v26; // edx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  int v36; // r10d
  int v37; // edi
  bool v38; // zf
  __int64 v39; // rax
  unsigned __int64 v40; // [rsp+0h] [rbp-58h]
  unsigned __int64 v41; // [rsp+0h] [rbp-58h]
  unsigned __int64 v42; // [rsp+0h] [rbp-58h]
  __int64 v43; // [rsp+8h] [rbp-50h] BYREF
  _QWORD *v44; // [rsp+18h] [rbp-40h] BYREF

  v43 = a3;
  if ( (*(_BYTE *)(a3 + 3) & 2) == 0 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  v8 = a2[213];
  v10 = *(_DWORD *)(v8 + 16);
  if ( !v10 )
  {
    v44 = nullptr;
    goto LABEL_61;
  }
  v11 = a3;
  a5 = v10 - 1;
  v12 = a5 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  v13 = (_QWORD *)(*(_QWORD *)v8 + 16LL * v12);
  v14 = *v13;
  if ( v11 != *v13 )
  {
    v36 = 1;
    a6 = 0;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( !a6 && v14 == -8192 )
          a6 = (__int64)v13;
        v12 = a5 & (v36 + v12);
        v13 = (_QWORD *)(*(_QWORD *)v8 + 16LL * v12);
        v14 = *v13;
        if ( v11 == *v13 )
          goto LABEL_6;
        if ( v14 == -4096 )
        {
          if ( a6 )
            v13 = (_QWORD *)a6;
          break;
        }
        ++v36;
      }
    }
    v37 = *(_DWORD *)(v8 + 8);
    a4 = 3 * v10;
    v44 = v13;
    a3 = (unsigned int)(v37 + 1);
    if ( 4 * (int)a3 < (unsigned int)a4 )
    {
      a4 = v10 - *(_DWORD *)(v8 + 12) - (unsigned int)a3;
      if ( (unsigned int)a4 > v10 >> 3 )
      {
LABEL_57:
        v38 = *v13 == -4096;
        *(_DWORD *)(v8 + 8) = a3;
        if ( !v38 )
          --*(_DWORD *)(v8 + 12);
        *v13 = v11;
        v15 = v13 + 1;
        v11 = v43;
        v18 = 0;
        v13[1] = 0;
        goto LABEL_13;
      }
LABEL_62:
      sub_12F12D0(v8, v10, a3, a4, a5, a6);
      sub_12EC520((__int64 *)v8, &v43, &v44);
      v11 = v43;
      LODWORD(a3) = *(_DWORD *)(v8 + 8) + 1;
      v13 = v44;
      goto LABEL_57;
    }
LABEL_61:
    v10 *= 2;
    goto LABEL_62;
  }
LABEL_6:
  v15 = v13 + 1;
  v16 = v13[1];
  v17 = (unsigned __int64 *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
  v18 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v16 && (v16 & 4) != 0 )
  {
    v18 = 0;
    if ( !v17 )
      goto LABEL_13;
    v18 = *v17;
  }
  while ( v18 && (*(_BYTE *)(v18 + 12) & 3) == 2 )
    v18 = *(_QWORD *)v18;
LABEL_13:
  if ( (*(_BYTE *)(v11 + 4) & 0x10) != 0 )
  {
    sub_145CD30(a2, v11);
    if ( (*(_BYTE *)(v11 + 3) & 2) == 0 )
    {
LABEL_53:
      v23 = 0;
      goto LABEL_24;
    }
  }
  else if ( (*(_BYTE *)(v11 + 3) & 2) == 0 )
  {
    v23 = 0;
    goto LABEL_50;
  }
  v19 = a2[7];
  if ( (*(_BYTE *)(v19 + 21) & 2) == 0 && *(char *)(v19 + 22) >= 0 )
    goto LABEL_53;
  v20 = *(_DWORD *)(a2[213] + 48LL);
  if ( !v20 )
    goto LABEL_53;
  v21 = *v15 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !*v15 || (*v15 & 4) == 0 || (v22 = *v15 & 0xFFFFFFFFFFFFFFF8LL, !v21) )
  {
    v34 = a2[16];
    a2[26] += 32LL;
    v35 = (v34 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( a2[17] >= v35 + 32 && v34 )
    {
      a2[16] = v35 + 32;
      v22 = (v34 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v41 = v21;
      v39 = sub_986170((__int64)(a2 + 16), 32, 32, 4, v21, a6);
      v21 = v41;
      v22 = v39;
      v35 = v39 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)(v22 + 8) = 0;
    *(_DWORD *)(v22 + 16) = 0;
    *(_QWORD *)(v22 + 24) = 0;
    *(_QWORD *)v22 = v21;
    *(_BYTE *)(v22 + 20) = 0;
    *v15 = v35 | 4;
    v20 = *(_DWORD *)(a2[213] + 48LL);
  }
  if ( *(_DWORD *)(v22 + 16) != v20 )
    sub_14476F0(a2, v11, v22);
  v23 = 4LL * *(unsigned __int8 *)(v22 + 20);
LABEL_24:
  v24 = v43;
  if ( (*(_BYTE *)(v43 + 4) & 0x10) != 0 )
    sub_145CD30(a2, v43);
  if ( (*(_BYTE *)(v24 + 3) & 2) != 0 )
  {
    v25 = a2[7];
    if ( (*(_BYTE *)(v25 + 21) & 2) != 0 || *(char *)(v25 + 22) < 0 )
    {
      v26 = *(_DWORD *)(a2[213] + 48LL);
      if ( v26 )
      {
        v27 = *v15 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !*v15 || (*v15 & 4) == 0 || (v28 = *v15 & 0xFFFFFFFFFFFFFFF8LL, !v27) )
        {
          v32 = a2[16];
          a2[26] += 32LL;
          v33 = (v32 + 15) & 0xFFFFFFFFFFFFFFF0LL;
          if ( a2[17] >= v33 + 32 && v32 )
          {
            a2[16] = v33 + 32;
            v28 = (v32 + 15) & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v42 = v27;
            v28 = sub_986170((__int64)(a2 + 16), 32, 32, 4, v27, a6);
            v27 = v42;
            v33 = v28 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)(v28 + 8) = 0;
          *(_DWORD *)(v28 + 16) = 0;
          *(_QWORD *)(v28 + 24) = 0;
          *(_QWORD *)v28 = v27;
          *(_BYTE *)(v28 + 20) = 0;
          *v15 = v33 | 4;
          v26 = *(_DWORD *)(a2[213] + 48LL);
        }
        if ( *(_DWORD *)(v28 + 16) != v26 )
        {
          v40 = v28;
          sub_14476F0(a2, v24, v28);
          v28 = v40;
        }
        v29 = *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v28 + 8) & 4) != 0 )
        {
          v30 = *(_QWORD *)v29;
          v31 = *(unsigned int *)(v29 + 8);
        }
        else
        {
          v30 = v28 + 8;
          v31 = v29 != 0;
        }
        goto LABEL_37;
      }
    }
  }
LABEL_50:
  v31 = 0;
  v30 = 0;
LABEL_37:
  if ( v18 && (*(_BYTE *)(v18 + 12) & 3) == 0 )
    v23 |= v18 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)a1 = v23;
  *(_QWORD *)(a1 + 8) = v30;
  *(_QWORD *)(a1 + 16) = v31;
  return a1;
}
