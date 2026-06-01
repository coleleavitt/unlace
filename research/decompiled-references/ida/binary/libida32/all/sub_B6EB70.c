unsigned __int64 __fastcall sub_B6EB70(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // r13
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // r15
  __int64 v17; // rdx
  __int64 *i; // rbx
  __int64 *j; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdi
  int v22; // esi
  unsigned int v23; // edx
  __int64 *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  int v31; // eax
  unsigned __int64 *v32; // rsi
  unsigned __int64 *v33; // r12
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r9d
  __int64 *v41; // r10
  unsigned __int64 v42[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v43; // [rsp+10h] [rbp-68h] BYREF

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
    v32 = (unsigned __int64 *)(a1 + 8);
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
    v32 = (unsigned __int64 *)(a1 + 8);
    v9 = a1 + 72;
    if ( !(_BYTE)v8 )
    {
      v11 = *(__int64 **)(a1 + 8);
      v12 = *(unsigned int *)(a1 + 16);
      v13 = 16LL * (unsigned int)v10;
      goto LABEL_5;
    }
LABEL_29:
    v33 = v42;
    v34 = *v32 + 2;
    if ( v34 > 1 )
    {
      v42[0] = *v32;
      v33 = (unsigned __int64 *)&v43;
      v42[1] = v32[1];
    }
    if ( (unsigned __int64 *)v9 != v32 + 2 )
    {
      v35 = v32[2];
      v34 = v35 + 2;
      if ( v35 + 2 > 1 )
      {
        *v33 = v35;
        v33 += 2;
        *(v33 - 1) = v32[3];
      }
      if ( (unsigned __int64 *)v9 != v32 + 4 )
      {
        v36 = v32[4];
        v34 = v36 + 2;
        if ( v36 + 2 > 1 )
        {
          *v33 = v36;
          v33 += 2;
          *(v33 - 1) = v32[5];
        }
        if ( (unsigned __int64 *)v9 != v32 + 6 )
        {
          v37 = v32[6];
          v34 = v37 + 2;
          if ( v37 + 2 > 1 )
          {
            *v33 = v37;
            v33 += 2;
            *(v33 - 1) = v32[7];
          }
          if ( (unsigned __int64 *)v9 != v32 + 8 )
          {
            v38 = v32[8];
            v9 = v38 + 2;
            if ( v38 + 2 > 1 )
            {
              *v33 = v38;
              v33 += 2;
              *(v33 - 1) = v32[9];
            }
          }
        }
      }
    }
    if ( (unsigned int)v7 > 4 )
    {
      *(_BYTE *)a1 &= ~1u;
      v39 = sub_220C370(16LL * (unsigned int)v7, 8, v9, v34, a5, a6);
      *(_DWORD *)(a1 + 16) = v7;
      *(_QWORD *)(a1 + 8) = v39;
    }
    return sub_B6E950(a1, v42, v33);
  }
  if ( (_BYTE)v8 )
  {
    v32 = (unsigned __int64 *)(a1 + 8);
    v9 = a1 + 72;
    LODWORD(v7) = 64;
    goto LABEL_29;
  }
  v11 = *(__int64 **)(a1 + 8);
  v12 = *(unsigned int *)(a1 + 16);
  v7 = 64;
  v13 = 1024;
LABEL_5:
  v14 = (__int64 *)sub_220C370(v13, 8, v9, v8, a5, a6);
  *(_DWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
  v15 = 2 * v7;
  v16 = &v11[2 * v12];
  v17 = *(_QWORD *)a1 & 1LL;
  *(_QWORD *)a1 = v17;
  if ( v17 )
  {
    v14 = (__int64 *)(a1 + 8);
    v15 = 8;
  }
  for ( i = &v14[v15]; i != v14; v14 += 2 )
    *v14 = -1;
  for ( j = v11; v16 != j; j += 2 )
  {
LABEL_15:
    v20 = *j;
    if ( (unsigned __int64)(*j + 2) > 1 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v21 = a1 + 8;
        v22 = 3;
      }
      else
      {
        v31 = *(_DWORD *)(a1 + 16);
        v21 = *(_QWORD *)(a1 + 8);
        if ( !v31 )
        {
          *(_QWORD *)&dword_0 = *j;
          BUG();
        }
        v22 = v31 - 1;
      }
      v23 = v22 & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
      v24 = (__int64 *)(v21 + 16LL * v23);
      v25 = *v24;
      if ( v20 != *v24 )
      {
        v40 = 1;
        v41 = nullptr;
        if ( v25 != -1 )
        {
          while ( 1 )
          {
            if ( !v41 && v25 == -2 )
              v41 = v24;
            v23 = v22 & (v40 + v23);
            v24 = (__int64 *)(v21 + 16LL * v23);
            v25 = *v24;
            if ( v20 == *v24 )
              break;
            if ( v25 == -1 )
            {
              if ( v41 )
                v24 = v41;
              break;
            }
            ++v40;
          }
        }
      }
      *v24 = *j;
      v24[1] = j[1];
      j[1] &= 1uLL;
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
      v26 = j[1];
      if ( (v26 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v27 = sub_B68620(j + 1);
        v28 = v26 & 0xFFFFFFFFFFFFFFFCLL;
        while ( (v28 & 4) != 0 )
        {
          v29 = v28 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v28 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            break;
          v28 = *(_QWORD *)(v29 + 8);
          *(_QWORD *)(v29 + 8) = *(_QWORD *)(v27 + 17496) | 4LL;
          *(_QWORD *)(v27 + 17496) = v29;
          if ( !v28 )
          {
            j += 2;
            if ( v16 != j )
              goto LABEL_15;
            return operator delete();
          }
        }
      }
    }
  }
  return operator delete();
}

