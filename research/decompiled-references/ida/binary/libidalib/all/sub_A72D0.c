unsigned __int64 __fastcall sub_A72D0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax
  int v7; // ebp
  int v8; // eax
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  size_t v12; // r8
  int v13; // eax
  size_t v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rbp
  int v18; // eax
  void *v19; // rax
  void *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbp
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v31; // rax
  void *v32; // rax
  const void *v33; // rsi
  __int64 v34; // rax
  size_t n; // [rsp+0h] [rbp-80h]
  size_t na; // [rsp+0h] [rbp-80h]
  __int64 v37; // [rsp+10h] [rbp-70h] BYREF
  int v38; // [rsp+18h] [rbp-68h] BYREF
  void *src; // [rsp+20h] [rbp-60h]
  __int128 v40; // [rsp+28h] [rbp-58h]
  unsigned __int64 v41; // [rsp+40h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  v6 = dbg;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  LODWORD(v6) = *(_DWORD *)(v6 + 64);
  v7 = v6 + 14;
  v8 = v6 + 7;
  if ( v8 >= 0 )
    v7 = v8;
  v9 = v7 >> 3;
  if ( v9 )
  {
    v10 = qvector_reserve();
    v11 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v10;
    v12 = v10;
    if ( v11 < v9 )
    {
      n = v10;
      memset((void *)(v10 + v11), 0, v9 - v11);
      v12 = n;
    }
    *(_QWORD *)(a1 + 8) = v9;
  }
  else
  {
    v12 = 0;
  }
  *(_BYTE *)(v12 + ((unsigned __int64)a2 >> 3)) |= 1 << (a2 & 7);
  v13 = *(_DWORD *)a3;
  v38 = -2;
  v40 = 0;
  if ( v13 < -1 )
  {
    src = *(void **)(a3 + 8);
  }
  else
  {
    v14 = *(_QWORD *)(a3 + 16);
    src = nullptr;
    v40 = 0;
    if ( v14 )
    {
      v32 = (void *)qalloc_or_throw();
      v33 = *(const void **)(a3 + 8);
      src = v32;
      *((_QWORD *)&v40 + 1) = v14;
      memcpy(v32, v33, v14);
      *(_QWORD *)&v40 = v14;
      v13 = *(_DWORD *)a3;
    }
  }
  v15 = *(_QWORD *)(a1 + 32);
  v16 = *(_QWORD *)(a1 + 24);
  v38 = v13;
  if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v15 + 1) )
  {
    v31 = qvector_reserve();
    *(_QWORD *)(a1 + 24) = v31;
    v15 = *(_QWORD *)(a1 + 32);
    v16 = v31;
  }
  v17 = v16 + 32 * v15;
  *(_DWORD *)v17 = -2;
  *(_QWORD *)(v17 + 24) = 0;
  *(_OWORD *)(v17 + 8) = 0;
  if ( (int *)v17 != &v38 )
  {
    v18 = v38;
    if ( v38 < -1 )
    {
      *(_QWORD *)(v17 + 8) = src;
    }
    else
    {
      *(_QWORD *)(v17 + 8) = 0;
      *(_OWORD *)(v17 + 16) = 0;
      if ( (_QWORD)v40 )
      {
        na = v40;
        v19 = (void *)qalloc_or_throw();
        *(_QWORD *)(v17 + 8) = v19;
        v20 = src;
        *(_QWORD *)(v17 + 24) = na;
        memcpy(v19, v20, na);
        v18 = v38;
        *(_QWORD *)(v17 + 16) = na;
      }
    }
    *(_DWORD *)v17 = v18;
  }
  ++*(_QWORD *)(a1 + 32);
  if ( v38 >= -1 && src )
  {
    *(_QWORD *)&v40 = 0;
    qfree();
  }
  if ( (a2 & 0x80000000) == 0 && a2 < (unsigned __int64)xmmword_2524F8 )
  {
    v21 = qword_2524F0 + 56LL * a2;
    if ( v21 )
    {
      v22 = *(int *)(v21 + 44);
      if ( (int)v22 < *(_DWORD *)(dbg + 64LL) )
      {
        v23 = *(_QWORD *)(dbg + 56LL) + 32 * v22;
        if ( (*(_BYTE *)(v23 + 9) & 1) == 0 )
        {
          if ( *(_QWORD *)(v23 + 16) )
          {
            v24 = sub_C73A0(v21);
            v25 = *(_QWORD *)(a1 + 48);
            v26 = *(_QWORD *)(a1 + 64);
            v37 = v24;
            v27 = *(_QWORD *)(a1 + 56);
            v28 = v27 + 1;
            if ( (unsigned __int64)&v37 < v25 || (unsigned __int64)&v37 >= v25 + 8 * v26 )
            {
              if ( v26 < v28 )
              {
                v34 = qvector_reserve();
                *(_QWORD *)(a1 + 48) = v34;
                v25 = v34;
                v27 = *(_QWORD *)(a1 + 56);
                v24 = v37;
                v28 = v27 + 1;
              }
            }
            else if ( v26 < v28 )
            {
              v29 = qvector_reserve();
              *(_QWORD *)(a1 + 48) = v29;
              v25 = v29;
              v27 = *(_QWORD *)(a1 + 56);
              v28 = v27 + 1;
            }
            *(_QWORD *)(v25 + 8 * v27) = v24;
            *(_QWORD *)(a1 + 56) = v28;
          }
        }
      }
    }
  }
  return v41 - __readfsqword(0x28u);
}

