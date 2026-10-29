__int64 __fastcall sub_643120(__int64 a1, __int64 a2)
{
  const char *v2; // r15
  _DWORD *v3; // r12
  char v4; // al
  const char *v5; // rdx
  char v6; // al
  int v7; // eax
  int v8; // ecx
  _BYTE *v9; // rbx
  __int64 v10; // r13
  size_t v11; // rax
  size_t v12; // r8
  size_t v13; // r9
  size_t v14; // rdx
  __int64 v15; // r12
  __int64 v16; // r13
  unsigned __int64 v17; // r13
  __int64 v18; // r15
  void *v19; // rdx
  __int64 v20; // rcx
  __m128 v21; // xmm0
  bool v23; // zf
  const char *v24; // rax
  const char *v25; // rax
  const char *v26; // rax
  size_t v27; // [rsp+8h] [rbp-70h]
  size_t v28; // [rsp+10h] [rbp-68h]
  size_t v29; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v31; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v2 = "__dec";
  LODWORD(v3) = a1;
  v4 = *(_BYTE *)(a1 + 52);
  v32 = __readfsqword(0x28u);
  v5 = nullptr;
  v6 = v4 & 0x60;
  if ( v6 != 64 )
  {
    if ( v6 )
    {
      v23 = v6 == 32;
      v24 = "__udec";
      if ( v23 )
        v24 = "__char";
      v2 = v24;
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 48);
      v8 = v7 & 0x400;
      if ( (v7 & 0x200) != 0 )
      {
        v26 = "__sbin";
        if ( !v8 )
          v26 = "__bin";
        v2 = v26;
      }
      else if ( (v7 & 0x100) != 0 )
      {
        v25 = "__soct";
        if ( !v8 )
          v25 = "__oct";
        v2 = v25;
      }
      else
      {
        if ( (v7 & 0x400) != 0 )
          v5 = "__shex";
        v2 = v5;
      }
    }
  }
  v31 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 15, 1);
  v9 = ptr;
  if ( v2 )
  {
    v10 = v31;
    v11 = strlen(v2);
    v12 = v11;
    v13 = v11;
    if ( v10 )
    {
      --v10;
      v13 = v11 + v10;
    }
    v14 = v13 + 1;
    if ( *((_QWORD *)&v31 + 1) < v13 + 1 )
    {
      v29 = v11;
      v28 = v13;
      v27 = v13 + 1;
      ptr = (void *)qvector_reserve(&ptr, v9, v14, 1);
      v12 = v29;
      v9 = ptr;
      v13 = v28;
      v14 = v27;
    }
    *(_QWORD *)&v31 = v14;
    v9[v13] = 0;
    memmove((char *)ptr + v10, v2, v12);
    v9 = ptr;
  }
  if ( (*(_BYTE *)(a1 + 49) & 8) != 0 )
  {
    v15 = v31;
    if ( (unsigned __int64)v31 > 1 )
    {
      v16 = v31 - 1;
      if ( *((_QWORD *)&v31 + 1) < (unsigned __int64)(v31 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, v9, v31 + 1, 1);
        v9 = ptr;
      }
      *(_QWORD *)&v31 = v15 + 1;
      v9[v15] = 0;
      *((_BYTE *)ptr + v16) = 32;
      v15 = v31;
      v9 = ptr;
    }
    if ( v15 )
    {
      v18 = v15 + 6;
      v17 = v15 + 7;
      --v15;
      if ( *((_QWORD *)&v31 + 1) >= v17 )
        goto LABEL_21;
    }
    else
    {
      v17 = 8;
      v18 = 7;
      if ( *((_QWORD *)&v31 + 1) >= 8u )
      {
LABEL_21:
        *(_QWORD *)&v31 = v17;
        v9[v18] = 0;
        v3 = (char *)ptr + v15;
        *v3 = 2053922655;
        *(_DWORD *)((char *)v3 + 3) = 1869768058;
        v9 = ptr;
        goto LABEL_22;
      }
    }
    ptr = (void *)qvector_reserve(&ptr, v9, v17, 1);
    v9 = ptr;
    goto LABEL_21;
  }
LABEL_22:
  LOBYTE(v3) = (unsigned __int64)v31 > 1;
  if ( a2 && (unsigned __int64)v31 > 1 )
  {
    v19 = *(void **)a2;
    v20 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = v9;
    v21 = _mm_loadh_ps((const double *)&v31 + 1);
    ptr = v19;
    v9 = v19;
    *((_QWORD *)&v31 + 1) = v20;
    *(__m128 *)(a2 + 8) = v21;
  }
  if ( v9 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v9);
  }
  return (unsigned int)v3;
}

