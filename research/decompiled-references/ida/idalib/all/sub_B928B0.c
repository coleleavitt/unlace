unsigned __int64 __fastcall sub_B928B0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // r13
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 *v17; // r15
  __int64 v18; // rdx
  __int64 *i; // rbx
  __int64 *j; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdi
  int v23; // esi
  unsigned int v24; // edx
  __int64 *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  int v32; // eax
  unsigned __int64 *v33; // rsi
  unsigned __int64 *v34; // r12
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  int v41; // r9d
  __int64 *v42; // r10
  unsigned __int64 v43[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v44; // [rsp+10h] [rbp-68h] BYREF

  LODWORD(v7) = a2;
  v8 = *(_BYTE *)a1 & 1;
  if ( a2 <= 4 )
  {
    if ( !(_BYTE)v8 )
    {
      v14 = *(__int64 **)(a1 + 8);
      v12 = *(unsigned int *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v7 = (unsigned int)v12;
      v11 = v14;
      goto LABEL_8;
    }
    v33 = (unsigned __int64 *)(a1 + 8);
    v9 = a1 + 72;
    goto LABEL_29;
  }
  v9 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
     | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
     | (a2 - 1)
     | ((unsigned __int64)(a2 - 1) >> 1)
     | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
  v10 = (v9 | (v9 >> 16)) + 1;
  v7 = (unsigned int)v10;
  if ( (unsigned int)v10 > 0x40 )
  {
    v33 = (unsigned __int64 *)(a1 + 8);
    v9 = a1 + 72;
    if ( !(_BYTE)v8 )
    {
      v11 = *(__int64 **)(a1 + 8);
      v12 = *(unsigned int *)(a1 + 16);
      v13 = 16LL * (unsigned int)v10;
      goto LABEL_5;
    }
LABEL_29:
    v34 = v43;
    v35 = *v33 + 2;
    if ( v35 > 1 )
    {
      v43[0] = *v33;
      v34 = (unsigned __int64 *)&v44;
      v43[1] = v33[1];
    }
    if ( (unsigned __int64 *)v9 != v33 + 2 )
    {
      v36 = v33[2];
      v35 = v36 + 2;
      if ( v36 + 2 > 1 )
      {
        *v34 = v36;
        v34 += 2;
        *(v34 - 1) = v33[3];
      }
      if ( (unsigned __int64 *)v9 != v33 + 4 )
      {
        v37 = v33[4];
        v35 = v37 + 2;
        if ( v37 + 2 > 1 )
        {
          *v34 = v37;
          v34 += 2;
          *(v34 - 1) = v33[5];
        }
        if ( (unsigned __int64 *)v9 != v33 + 6 )
        {
          v38 = v33[6];
          v35 = v38 + 2;
          if ( v38 + 2 > 1 )
          {
            *v34 = v38;
            v34 += 2;
            *(v34 - 1) = v33[7];
          }
          if ( (unsigned __int64 *)v9 != v33 + 8 )
          {
            v39 = v33[8];
            v9 = v39 + 2;
            if ( v39 + 2 > 1 )
            {
              *v34 = v39;
              v34 += 2;
              *(v34 - 1) = v33[9];
            }
          }
        }
      }
    }
    if ( (unsigned int)v7 > 4 )
    {
      *(_BYTE *)a1 &= ~1u;
      v40 = sub_22300B0(16LL * (unsigned int)v7, 8, v9, v35, a5, a6);
      *(_DWORD *)(a1 + 16) = v7;
      *(_QWORD *)(a1 + 8) = v40;
    }
    return sub_B92690(a1, v43, v34);
  }
  if ( (_BYTE)v8 )
  {
    v33 = (unsigned __int64 *)(a1 + 8);
    v9 = a1 + 72;
    LODWORD(v7) = 64;
    goto LABEL_29;
  }
  v11 = *(__int64 **)(a1 + 8);
  v12 = *(unsigned int *)(a1 + 16);
  v7 = 64;
  v13 = 1024;
LABEL_5:
  v14 = (__int64 *)sub_22300B0(v13, 8, v9, v8, a5, a6);
  *(_DWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
  v15 = 16 * v12;
  v16 = 2 * v7;
  v17 = &v11[(unsigned __int64)v15 / 8];
  v18 = *(_QWORD *)a1 & 1LL;
  *(_QWORD *)a1 = v18;
  if ( v18 )
  {
    v14 = (__int64 *)(a1 + 8);
    v16 = 8;
  }
  for ( i = &v14[v16]; i != v14; v14 += 2 )
    *v14 = -1;
  for ( j = v11; v17 != j; j += 2 )
  {
LABEL_15:
    v21 = *j;
    if ( (unsigned __int64)(*j + 2) > 1 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v22 = a1 + 8;
        v23 = 3;
      }
      else
      {
        v32 = *(_DWORD *)(a1 + 16);
        v22 = *(_QWORD *)(a1 + 8);
        if ( !v32 )
        {
          *(_QWORD *)&dword_0 = *j;
          BUG();
        }
        v23 = v32 - 1;
      }
      v24 = v23 & (((unsigned int)v21 >> 9) ^ ((unsigned int)v21 >> 4));
      v25 = (__int64 *)(v22 + 16LL * v24);
      v26 = *v25;
      if ( v21 != *v25 )
      {
        v41 = 1;
        v42 = nullptr;
        if ( v26 != -1 )
        {
          while ( 1 )
          {
            if ( !v42 && v26 == -2 )
              v42 = v25;
            v24 = v23 & (v41 + v24);
            v25 = (__int64 *)(v22 + 16LL * v24);
            v26 = *v25;
            if ( v21 == *v25 )
              break;
            if ( v26 == -1 )
            {
              if ( v42 )
                v25 = v42;
              break;
            }
            ++v41;
          }
        }
      }
      *v25 = *j;
      v25[1] = j[1];
      j[1] &= 1uLL;
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
      v27 = j[1];
      if ( (v27 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v28 = sub_B8C360(j + 1);
        v29 = v27 & 0xFFFFFFFFFFFFFFFCLL;
        while ( (v29 & 4) != 0 )
        {
          v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v29 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            break;
          v29 = *(_QWORD *)(v30 + 8);
          *(_QWORD *)(v30 + 8) = *(_QWORD *)(v28 + 17496) | 4LL;
          *(_QWORD *)(v28 + 17496) = v30;
          if ( !v29 )
          {
            j += 2;
            if ( v17 != j )
              goto LABEL_15;
            return operator delete(v11, v15, 8);
          }
        }
      }
    }
  }
  return operator delete(v11, v15, 8);
}
