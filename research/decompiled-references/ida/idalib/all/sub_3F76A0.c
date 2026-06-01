__int64 __fastcall sub_3F76A0(__int64 a1, void *a2, char a3, __int64 a4, unsigned int *a5, unsigned __int64 a6)
{
  _QWORD *v10; // rdi
  __int64 v12; // r12
  __int64 result; // rax
  int v14; // eax
  _QWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned int v18; // r12d
  __int64 v19; // rax
  const char *v20; // rdi
  int v21; // esi
  _QWORD *v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 *v30; // rax
  __int64 v31; // rsi
  _QWORD *v32; // rax
  unsigned int v34; // [rsp+0h] [rbp-78h]
  unsigned __int64 v35; // [rsp+10h] [rbp-68h] BYREF
  void *v36; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v38; // [rsp+28h] [rbp-50h]
  unsigned __int64 v39; // [rsp+38h] [rbp-40h]

  v10 = *(_QWORD **)(a1 + 64);
  v39 = __readfsqword(0x28u);
  v35 = sub_3BDE50(v10, (__int64)a2);
  v12 = v35;
  if ( a3 == 65 )
  {
    if ( a4 != 8 || a6 != 4 )
    {
      if ( a4 == 1 && a6 == 4 )
      {
        if ( v35 >= *(_QWORD *)(a1 + 72) && v35 < *(_QWORD *)(a1 + 80) )
          return 0;
        v17 = *(_QWORD *)(a1 + 24);
        v36 = a2;
        ptr = (void *)*a5;
        sub_7BE7C0(&v36, v17, 1, &ptr, 8, 65);
      }
      else if ( a4 == 0xFFFFFFFFLL && a6 <= 8 )
      {
        if ( v35 >= *(_QWORD *)(a1 + 72) && v35 < *(_QWORD *)(a1 + 80) )
          return 0;
        v25 = *(_QWORD **)(a1 + 64);
        ptr = a2;
        sub_7BE7C0(&ptr, *v25, -1, a5, a6, 65);
      }
      else
      {
        if ( *(void **)(a1 + 88) != a2 )
          return 0;
        if ( a4 == 9 && a6 == 4 )
        {
          if ( (*(_BYTE *)(a1 + 96) & 1) == 0 )
            return 0;
          v29 = *(_QWORD *)(a1 + 24);
          v36 = a2;
          ptr = (void *)*a5;
          sub_7BE7C0(&v36, v29, 9, &ptr, 8, 65);
        }
        else
        {
          if ( a4 != 20 || (*(_BYTE *)(a1 + 98) & 4) == 0 )
            return 0;
          v32 = *(_QWORD **)(a1 + 64);
          ptr = a2;
          sub_7BE7C0(&ptr, *v32, 20, a5, a6, 83);
        }
      }
      return 1;
    }
    v18 = *a5;
    if ( a2 == *(void **)(a1 + 32) )
    {
      v19 = *(_QWORD *)(a1 + 48);
    }
    else
    {
      v26 = *(_QWORD *)(a1 + 24);
      ptr = a2;
      if ( sub_7BF130(&ptr, v26, a1 + 40) <= 0 )
      {
        *(_QWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 32) = a2;
        goto LABEL_48;
      }
      *(_QWORD *)(a1 + 32) = a2;
      v19 = *(_QWORD *)(a1 + 48);
    }
    if ( v19 )
    {
      v20 = *(const char **)(a1 + 40);
      v21 = v19 - 1;
      goto LABEL_31;
    }
LABEL_48:
    v21 = 0;
    v20 = haystack;
LABEL_31:
    if ( sub_3D9E70((__int64)v20, v21) )
      return 0;
    v22 = *(_QWORD **)(a1 + 64);
    *(_QWORD *)(a1 + 88) = a2;
    *(_DWORD *)(a1 + 96) = v18;
    v23 = (_QWORD *)v22[187];
    if ( v23 )
    {
      v24 = v22 + 186;
      do
      {
        if ( v23[4] >= v35 )
        {
          v24 = v23;
          v23 = (_QWORD *)v23[2];
        }
        else
        {
          v23 = (_QWORD *)v23[3];
        }
      }
      while ( v23 );
      if ( v22 + 186 != v24 && v35 >= v24[4] )
        goto LABEL_63;
    }
    else
    {
      v24 = v22 + 186;
    }
    ptr = &v35;
    v24 = sub_3EEC00(v22 + 185, v24, (unsigned __int64 **)&ptr);
LABEL_63:
    *((_DWORD *)v24 + 10) = v18;
    v30 = *(__int64 **)(a1 + 64);
    v36 = a2;
    v31 = *v30;
    ptr = (void *)v18;
    sub_7BE7C0(&v36, v31, 8, &ptr, 8, 65);
    return 1;
  }
  if ( a3 != 83 )
    return 0;
  if ( *(void **)(a1 + 88) != a2 || a4 != 0x2000 )
  {
    if ( (unsigned __int64)(a4 - 12288) <= 0xFFF )
    {
      if ( v35 < *(_QWORD *)(a1 + 72) || v35 >= *(_QWORD *)(a1 + 80) )
        goto LABEL_53;
      v16 = *(_QWORD *)(a1 + 64);
      if ( *(_QWORD *)(*(_QWORD *)(v16 + 24) + 16LL) < v35 )
        goto LABEL_8;
      if ( sub_3BD540(v16, v35) )
      {
LABEL_53:
        if ( sub_3BDD60(*(_QWORD **)(a1 + 64), v35) == *(_QWORD *)(a1 + 88) && (*(_DWORD *)(a1 + 96) & 0x2000800) != 0 )
        {
LABEL_12:
          v15 = *(_QWORD **)(a1 + 64);
          ptr = a2;
          sub_7BE7C0(&ptr, *v15, a4, a5, a6, 83);
          return 1;
        }
      }
      v12 = v35;
    }
LABEL_8:
    LODWORD(ptr) = 0;
    if ( !(unsigned __int8)sub_3D9EF0(a4, &ptr) || sub_3BDD60(*(_QWORD **)(a1 + 64), v12) != *(_QWORD *)(a1 + 88) )
      return 0;
    v14 = *(_DWORD *)(a1 + 96);
    if ( (_DWORD)ptr )
    {
      if ( (v14 & 0x2000) == 0 )
        return 0;
    }
    else if ( (v14 & 0x1000) == 0 )
    {
      return 0;
    }
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(a1 + 96) & 0x20) == 0 )
    goto LABEL_8;
  v27 = *(_QWORD *)(a1 + 24);
  v36 = a2;
  v38 = 0;
  ptr = nullptr;
  v28 = sub_7BEED0(&v36, v27, &ptr, 1, 0x2000, 83);
  result = 0;
  if ( v28 > 0 )
  {
    sub_7BEF30(&v36, v27, ptr, v38, 0x2000, 83);
    result = 1;
  }
  if ( ptr )
  {
    v34 = result;
    *(_QWORD *)&v38 = 0;
    qfree(ptr);
    return v34;
  }
  return result;
}
