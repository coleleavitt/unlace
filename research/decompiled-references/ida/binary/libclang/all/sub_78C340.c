unsigned __int64 *__fastcall sub_78C340(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  char v4; // cl
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // r12
  unsigned int v7; // r13d
  unsigned __int64 *v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdi
  unsigned __int64 *v11; // rcx
  unsigned __int64 *v12; // rbp
  unsigned __int64 *i; // rax
  __int64 v14; // r10
  int v15; // r11d
  int v16; // r14d
  __int64 *v17; // r13
  __int64 v18; // rdi
  __int64 *v19; // rdx
  __int64 v20; // rbp
  unsigned __int64 v21; // r9
  int v22; // edx
  __int64 v23; // rax
  __int64 *v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  bool v32; // zf
  _QWORD *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rdx
  unsigned __int64 *result; // rax
  __int64 v37; // rdi
  int v38; // r8d
  int v39; // r11d
  __int64 *v40; // r10
  __int64 v41; // rsi
  __int64 *v42; // rdx
  __int64 v43; // r9
  unsigned __int64 v44; // rcx
  int v45; // edx
  __int64 v46; // rax
  __int64 v47; // [rsp+0h] [rbp-B8h] BYREF
  char v48; // [rsp+8h] [rbp-B0h]
  char v49; // [rsp+10h] [rbp-A8h] BYREF

  LODWORD(v2) = a2;
  v4 = *(_BYTE *)a1 & 1;
  if ( a2 <= 8 )
  {
    if ( !v4 )
    {
      v8 = *(unsigned __int64 **)(a1 + 8);
      v7 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      LODWORD(v2) = v7;
      v6 = v8;
      goto LABEL_8;
    }
  }
  else
  {
    v5 = (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1) | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)) >> 4);
    v2 = (v5 | (v5 >> 8) | ((v5 | (v5 >> 8)) >> 16)) + 1;
    if ( (unsigned int)v2 < 0x40 )
      LODWORD(v2) = 64;
    if ( !v4 )
    {
      v6 = *(unsigned __int64 **)(a1 + 8);
      v7 = *(_DWORD *)(a1 + 16);
      v8 = (unsigned __int64 *)sub_25CC9C0(16LL * (unsigned int)v2, 8);
      *(_DWORD *)(a1 + 16) = v2;
      *(_QWORD *)(a1 + 8) = v8;
LABEL_8:
      v9 = 2LL * (unsigned int)v2;
      v10 = *(_QWORD *)a1 & 1LL;
      v11 = &v6[2 * v7];
      *(_QWORD *)a1 = v10;
      if ( v10 )
      {
        v8 = (unsigned __int64 *)(a1 + 8);
        v9 = 16;
      }
      v12 = &v8[v9];
      if ( v8 != v12 )
      {
        if ( (((_BYTE)v12 - (_BYTE)v8) & 0x10) == 0 || (*v8 = -1, v8 += 2, v12 != v8) )
        {
          do
          {
            *v8 = -1;
            v8 += 4;
            *(v8 - 2) = -1;
          }
          while ( v12 != v8 );
        }
      }
      for ( i = v6; v11 != i; i += 2 )
      {
        v21 = *i;
        if ( *i != -1 && v21 != -16 )
        {
          if ( (*(_BYTE *)a1 & 1) != 0 )
          {
            v14 = a1 + 8;
            v15 = 7;
          }
          else
          {
            v22 = *(_DWORD *)(a1 + 16);
            v14 = *(_QWORD *)(a1 + 8);
            if ( !v22 )
            {
              *(_QWORD *)&dword_0 = *i;
              BUG();
            }
            v15 = v22 - 1;
          }
          v16 = 1;
          v17 = nullptr;
          LODWORD(v18) = v15 & (v21 ^ (v21 >> 9));
          v19 = (__int64 *)(v14 + 16LL * (unsigned int)v18);
          v20 = *v19;
          if ( v21 != *v19 )
          {
            while ( v20 != -1 )
            {
              if ( v20 == -16 && !v17 )
                v17 = v19;
              v18 = v15 & (unsigned int)(v18 + v16);
              v19 = (__int64 *)(v14 + 16 * v18);
              v20 = *v19;
              if ( v21 == *v19 )
                goto LABEL_18;
              ++v16;
            }
            if ( v17 )
              v19 = v17;
          }
LABEL_18:
          *v19 = *i;
          *((_BYTE *)v19 + 8) = *((_BYTE *)i + 8);
          *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
        }
      }
      return (unsigned __int64 *)operator delete();
    }
  }
  v23 = *(_QWORD *)(a1 + 8);
  if ( v23 == -1 || v23 == -16 )
  {
    v24 = &v47;
  }
  else
  {
    v47 = *(_QWORD *)(a1 + 8);
    v24 = (__int64 *)&v49;
    v48 = *(_BYTE *)(a1 + 16);
  }
  v25 = *(_QWORD *)(a1 + 24);
  if ( v25 != -1 && v25 != -16 )
  {
    *v24 = v25;
    v24 += 2;
    *((_BYTE *)v24 - 8) = *(_BYTE *)(a1 + 32);
  }
  v26 = *(_QWORD *)(a1 + 40);
  if ( v26 != -1 && v26 != -16 )
  {
    *v24 = v26;
    v24 += 2;
    *((_BYTE *)v24 - 8) = *(_BYTE *)(a1 + 48);
  }
  v27 = *(_QWORD *)(a1 + 56);
  if ( v27 != -1 && v27 != -16 )
  {
    *v24 = v27;
    v24 += 2;
    *((_BYTE *)v24 - 8) = *(_BYTE *)(a1 + 64);
  }
  v28 = *(_QWORD *)(a1 + 72);
  if ( v28 != -1 && v28 != -16 )
  {
    *v24 = v28;
    v24 += 2;
    *((_BYTE *)v24 - 8) = *(_BYTE *)(a1 + 80);
  }
  v29 = *(_QWORD *)(a1 + 88);
  if ( v29 != -1 && v29 != -16 )
  {
    *v24 = v29;
    v24 += 2;
    *((_BYTE *)v24 - 8) = *(_BYTE *)(a1 + 96);
  }
  v30 = *(_QWORD *)(a1 + 104);
  if ( v30 != -1 && v30 != -16 )
  {
    *v24 = v30;
    v24 += 2;
    *((_BYTE *)v24 - 8) = *(_BYTE *)(a1 + 112);
  }
  v31 = *(_QWORD *)(a1 + 120);
  if ( v31 != -1 && v31 != -16 )
  {
    *v24 = v31;
    v24 += 2;
    *((_BYTE *)v24 - 8) = *(_BYTE *)(a1 + 128);
  }
  if ( (unsigned int)v2 > 8 )
  {
    *(_BYTE *)a1 &= ~1u;
    v46 = sub_25CC9C0(16LL * (unsigned int)v2, 8);
    *(_DWORD *)(a1 + 16) = v2;
    *(_QWORD *)(a1 + 8) = v46;
  }
  v32 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v32 )
  {
    v33 = *(_QWORD **)(a1 + 8);
    v34 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v33 = (_QWORD *)(a1 + 8);
    v34 = 16;
  }
  v35 = &v33[v34];
  if ( v33 != v35 )
  {
    if ( (((_BYTE)v35 - (_BYTE)v33) & 0x10) == 0 || (*v33 = -1, v33 += 2, v35 != v33) )
    {
      do
      {
        *v33 = -1;
        v33 += 4;
        *(v33 - 2) = -1;
      }
      while ( v35 != v33 );
    }
  }
  result = (unsigned __int64 *)&v47;
  if ( v24 != &v47 )
  {
    do
    {
      v44 = *result;
      if ( *result != -1 && v44 != -16 )
      {
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v37 = a1 + 8;
          v38 = 7;
        }
        else
        {
          v45 = *(_DWORD *)(a1 + 16);
          v37 = *(_QWORD *)(a1 + 8);
          if ( !v45 )
          {
            *(_QWORD *)&dword_0 = *result;
            BUG();
          }
          v38 = v45 - 1;
        }
        v39 = 1;
        v40 = nullptr;
        LODWORD(v41) = v38 & (v44 ^ (v44 >> 9));
        v42 = (__int64 *)(v37 + 16LL * (unsigned int)v41);
        v43 = *v42;
        if ( v44 != *v42 )
        {
          while ( v43 != -1 )
          {
            if ( !v40 && v43 == -16 )
              v40 = v42;
            v41 = v38 & (unsigned int)(v41 + v39);
            v42 = (__int64 *)(v37 + 16 * v41);
            v43 = *v42;
            if ( v44 == *v42 )
              goto LABEL_61;
            ++v39;
          }
          if ( v40 )
            v42 = v40;
        }
LABEL_61:
        *v42 = *result;
        *((_BYTE *)v42 + 8) = *((_BYTE *)result + 8);
        *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
      }
      result += 2;
    }
    while ( v24 != (__int64 *)result );
  }
  return result;
}

