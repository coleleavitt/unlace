signed __int64 __fastcall sub_613F40(__int64 a1, __int64 a2, void *a3, size_t a4, __int64 a5)
{
  int v6; // edx
  _QWORD *v7; // rbp
  const char *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  signed __int64 result; // rax
  void *v17; // rbp
  size_t v18; // rbx
  const char *v19; // rsi
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rdx
  signed __int64 v23; // [rsp+8h] [rbp-60h]
  int v24; // [rsp+1Ch] [rbp-4Ch] BYREF
  void *src; // [rsp+20h] [rbp-48h] BYREF
  __int128 v26; // [rsp+28h] [rbp-40h]
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a2 + 56);
  if ( (v6 & 0x4070) == 0 )
    return 0;
  v7 = (_QWORD *)a1;
  if ( (v6 & 0xF) == 0 )
    return sub_613A00(a1, a2, a3, a4);
  if ( (v6 & 8) != 0 )
  {
    if ( (v6 & 0x800) != 0 )
    {
      if ( !under_debugger )
        interr(2043);
      BUG();
    }
    v10 = *(const char **)(a2 + 48);
    src = nullptr;
    v26 = 0;
    if ( v10 )
    {
      v11 = *(_QWORD *)a1;
      v24 = sub_60DEE0(v11, v10, 0);
      v15 = *(unsigned __int8 *)(a2 + 32);
      if ( (*(_BYTE *)(a2 + 56) & 0xF) == 0 )
        sub_60D4F0(v11, v10, v12, v13, v14, v15);
    }
    else
    {
      v15 = *(unsigned __int8 *)(a2 + 32);
      v24 = *(_DWORD *)(a1 + 8);
    }
    result = sub_79BAE0(&v24, *v7, &src, 1, *(unsigned int *)(a2 + 8), v15);
    v17 = src;
    if ( result > 0 )
    {
      v18 = v26;
      if ( a3 )
      {
        if ( (unsigned __int64)v26 > a4 )
          v18 = a4;
        memcpy(a3, src, v18);
      }
      result = v18;
    }
    if ( v17 )
    {
      v23 = result;
      *(_QWORD *)&v26 = 0;
      qfree(v17);
      return v23;
    }
  }
  else
  {
    v19 = *(const char **)(a2 + 48);
    if ( v19 )
    {
      a1 = *(_QWORD *)a1;
      v20 = sub_60DEE0(a1, v19, 0);
      v6 = *(_DWORD *)(a2 + 56);
    }
    else
    {
      v20 = *(_DWORD *)(a1 + 8);
    }
    LODWORD(src) = v20;
    if ( (v6 & 4) != 0 )
    {
      return sub_79BDC0(&src, *v7, a3, a4);
    }
    else
    {
      v21 = *(unsigned __int8 *)(a2 + 32);
      if ( (v6 & 0x800) != 0 )
      {
        return sub_79BFB0(&src, *v7, *(_QWORD *)(a2 + 8), a3, a4, v21);
      }
      else
      {
        v22 = v6 & 0xF;
        if ( !(_DWORD)v22 )
          sub_60D4F0(a1, v19, v22, a4, a5, v21);
        return sub_79B5C0(&src, *v7, *(unsigned int *)(a2 + 8), a3, a4, v21);
      }
    }
  }
  return result;
}

