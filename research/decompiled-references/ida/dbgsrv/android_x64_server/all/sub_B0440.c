/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B0440
// Address: 0x00000000000B0440

//----- (00000000000B0440) ----------------------------------------------------
_OWORD *__fastcall sub_B0440(_QWORD *a1, const char *a2, unsigned int (__fastcall *a3)(_QWORD, _QWORD))
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // r13
  char *v7; // r12
  char *v8; // r15
  _QWORD *v9; // rbp
  const char *v10; // rdi
  int v11; // eax
  const char *v12; // rsi
  unsigned __int64 v13; // rax
  _OWORD *v14; // r13
  const char *v15; // r14
  char *v16; // rbx
  unsigned __int64 v17; // rbp
  char *v18; // r15
  unsigned __int64 i; // rbx
  int v20; // ecx
  int v21; // ecx
  __int64 **v22; // rbp
  char **v23; // rdi
  __int64 v24; // rcx
  char *v25; // rax
  char **v26; // rdi
  __int64 v27; // rcx
  char *v28; // rax
  char *v29; // r14
  __int64 v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rbp
  unsigned int v36; // eax
  void *v37; // rdi
  __int64 v38; // rbx
  unsigned int (__fastcall *v41)(_QWORD, _QWORD); // [rsp+8h] [rbp-A0h]
  char *v42; // [rsp+8h] [rbp-A0h]
  __int64 v43; // [rsp+10h] [rbp-98h]
  char *s2; // [rsp+18h] [rbp-90h] BYREF
  __int64 v45; // [rsp+20h] [rbp-88h]
  __int64 v46; // [rsp+28h] [rbp-80h]
  __int128 v47; // [rsp+30h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v49; // [rsp+50h] [rbp-58h]
  int v50; // [rsp+60h] [rbp-48h]
  unsigned __int64 v51; // [rsp+70h] [rbp-38h]

  v51 = __readfsqword(0x28u);
  sub_37F60((__int64)&s2, a2);
  v4 = a1[35];
  v5 = v45;
  if ( v4 )
  {
    v41 = a3;
    v6 = a1 + 35;
    v43 = v45;
    v7 = s2;
    v8 = s2;
    if ( !v45 )
      v8 = (char *)s1;
    v9 = a1 + 35;
    do
    {
      v10 = s1;
      if ( *(_QWORD *)(v4 + 40) )
        v10 = *(const char **)(v4 + 32);
      v11 = strcmp(v10, v8);
      if ( v11 >= 0 )
        v9 = (_QWORD *)v4;
      v4 = *(_QWORD *)(v4 + 8LL * (v11 < 0));
    }
    while ( v4 );
    if ( v9 == v6 )
    {
      a3 = v41;
    }
    else
    {
      a3 = v41;
      if ( v9[5] )
        v12 = (const char *)v9[4];
      else
        v12 = s1;
      if ( strcmp(v8, v12) >= 0 )
      {
        v13 = v9[7];
        if ( v13 != -1 )
        {
          if ( v13 < a1[32] )
          {
            v14 = *(_OWORD **)(a1[31] + 8 * v13);
            if ( !v7 )
              return v14;
            goto LABEL_69;
          }
          if ( !(_BYTE)under_debugger )
            interr(1472);
LABEL_75:
          BUG();
        }
        v14 = nullptr;
        if ( !v7 )
          return v14;
LABEL_69:
        v45 = 0;
        qfree(v7);
        s2 = nullptr;
        v46 = 0;
        return v14;
      }
    }
    v5 = v43;
  }
  else
  {
    v7 = s2;
  }
  v15 = s1;
  if ( v5 )
    v15 = v7;
  v16 = byte_1154B5;
  v17 = 1;
  while ( strcmp(off_14FA60[v17], v15) )
  {
    ++v17;
    v16 += 5;
    if ( v17 >= 0x148 )
      goto LABEL_39;
  }
  if ( (_DWORD)v17 )
  {
    v49 = 0;
    *(_OWORD *)ptr = 0;
    v50 = -1;
    if ( *(unsigned __int16 *)v16 != 0xFFFF )
    {
      if ( !(_BYTE)under_debugger )
        interr(1473);
      goto LABEL_75;
    }
    v18 = byte_1154B0;
    for ( i = 0; i < 0x148; ++i )
    {
      v20 = i;
      if ( *(unsigned __int16 *)v18 != 0xFFFF )
        v20 = *(unsigned __int16 *)v18;
      if ( v20 == (_DWORD)v17 )
      {
        v47 = 0;
        if ( (int)i <= 0 )
        {
          v14 = nullptr;
LABEL_56:
          v22 = (__int64 **)a1;
          goto LABEL_57;
        }
        v21 = HIDWORD(qword_114A70[i]);
        *(_QWORD *)&v47 = LODWORD(qword_114A70[i]);
        *((_QWORD *)&v47 + 1) = (unsigned int)(v21 + 1);
        rangeset_t_add((__int64)ptr, (unsigned __int64 *)&v47);
      }
      v18 += 5;
    }
    v22 = (__int64 **)a1;
    v14 = qalloc_or_throw(40);
    v14[1] = 0;
    *v14 = 0;
    *((_DWORD *)v14 + 8) = -1;
    v23 = (char **)(a1 + 31);
    v24 = a1[32];
    if ( a1[33] >= (unsigned __int64)(v24 + 1) )
    {
      v25 = *v23;
    }
    else
    {
      v25 = (char *)qvector_reserve((__int64)v23, *v23, v24 + 1, 8u);
      a1[31] = v25;
      v24 = a1[32];
    }
    *(_QWORD *)&v25[8 * v24] = v14;
    ++a1[32];
    v42 = (char *)ptr[1];
    if ( ptr[1] )
    {
      v29 = nullptr;
      v30 = 2688;
      do
      {
        v31 = 16LL * (int)v29;
        v32 = *(_QWORD *)((char *)ptr[0] + v31);
        v33 = *(_QWORD *)((char *)ptr[0] + v31 + 8);
        if ( (unsigned int)v32 < (unsigned int)v33 )
        {
          v34 = (unsigned int)v32;
          v35 = (unsigned int)v33;
          do
          {
            while ( 1 )
            {
              v36 = (unsigned int)sub_AFF90(v34) >> 16;
              if ( (unsigned __int8)v36 > 0xBu || !_bittest64(&v30, (unsigned __int8)v36) )
                break;
              *(_QWORD *)&v47 = v34++;
              *((_QWORD *)&v47 + 1) = v34;
              rangeset_t_add((__int64)v14, (unsigned __int64 *)&v47);
              if ( v34 == v35 )
                goto LABEL_55;
            }
            ++v34;
          }
          while ( v34 != v35 );
        }
LABEL_55:
        ++v29;
      }
      while ( v29 != v42 );
      goto LABEL_56;
    }
LABEL_57:
    v37 = ptr[0];
    if ( ptr[0] )
    {
LABEL_64:
      ptr[1] = nullptr;
      qfree(v37);
      ptr[0] = nullptr;
      *(_QWORD *)&v49 = 0;
    }
  }
  else
  {
LABEL_39:
    v22 = (__int64 **)a1;
    if ( !a3 )
      goto LABEL_67;
    v49 = 0;
    *(_OWORD *)ptr = 0;
    v50 = -1;
    if ( a3(ptr, v15) )
    {
      v14 = nullptr;
    }
    else
    {
      v14 = qalloc_or_throw(40);
      v14[1] = 0;
      *v14 = 0;
      *((_DWORD *)v14 + 8) = -1;
      v26 = (char **)(a1 + 31);
      v27 = a1[32];
      if ( a1[33] >= (unsigned __int64)(v27 + 1) )
      {
        v28 = *v26;
      }
      else
      {
        v28 = (char *)qvector_reserve((__int64)v26, *v26, v27 + 1, 8u);
        a1[31] = v28;
        v27 = a1[32];
      }
      *(_QWORD *)&v28[8 * v27] = v14;
      ++a1[32];
      rangeset_t_swap((__int64)v14, (__int128 **)ptr);
    }
    v37 = ptr[0];
    if ( ptr[0] )
      goto LABEL_64;
  }
  if ( v14 )
  {
    v38 = (__int64)v22[32] - 1;
    goto LABEL_68;
  }
LABEL_67:
  v38 = -1;
  v14 = nullptr;
LABEL_68:
  ptr[0] = &s2;
  *((_QWORD *)sub_B0B40(v22 + 34, (__int64)&s2, (__int64)byte_115B18, (__int64 *)ptr) + 7) = v38;
  v7 = s2;
  if ( s2 )
    goto LABEL_69;
  return v14;
}
// 114A70: using guessed type __int64 qword_114A70[];
// 14FA60: using guessed type char *off_14FA60[361];
// 158B40: using guessed type __int64 under_debugger;
