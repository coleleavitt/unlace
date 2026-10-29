__int64 __fastcall sub_6327E0(__int64 a1, __int64 a2, const char *a3, size_t a4, __int64 a5, __int64 a6)
{
  int v6; // r13d
  __int64 *v7; // r15
  char *v9; // r12
  size_t v10; // rbp
  unsigned int v11; // r14d
  size_t v12; // rax
  size_t v13; // rax
  void *v14; // rax
  size_t v15; // rdx
  char *v16; // rsi
  __int64 v18; // rcx
  const char *v19; // rsi
  void *v20; // rax
  int v21; // eax
  void *v22; // rax
  int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rdx
  char v26; // al
  void *dest; // [rsp+0h] [rbp-58h] BYREF
  __int128 v28; // [rsp+8h] [rbp-50h]
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a2 + 56);
  if ( (v6 & 0x2000) != 0 || (v6 & 0x4070) == 0 )
    return 0;
  v7 = (__int64 *)a1;
  v9 = (char *)a3;
  v10 = a4;
  v11 = a5;
  if ( !a4 && a3 )
  {
    a1 = (__int64)a3;
    v10 = strlen(a3) + 1;
  }
  if ( (v6 & 0xF) == 0 )
  {
    dest = nullptr;
    v28 = 0;
    if ( (v6 & 0x20) == 0 )
    {
      v12 = *(_QWORD *)(a2 + 16);
      if ( (v6 & 0x10) != 0 )
      {
        v13 = v12 - 1;
        if ( v13 <= v10 )
          v10 = v13;
        if ( v10 == -1 )
        {
          v14 = nullptr;
        }
        else
        {
          v14 = (void *)qvector_reserve(&dest, 0, v10 + 1, 1);
          dest = v14;
        }
        *(_QWORD *)&v28 = v10 + 1;
        v15 = v10;
        v16 = v9;
        v9 = (char *)haystack;
        *((_BYTE *)v14 + v10) = 0;
        v10 = 1;
        memmove(dest, v16, v15);
        if ( (_QWORD)v28 )
        {
          v9 = (char *)dest;
          v10 = strlen((const char *)dest) + 1;
        }
      }
      else if ( v10 > v12 )
      {
        v10 = *(_QWORD *)(a2 + 16);
      }
    }
    sub_630910((__int64)v7, a2, v9, v10, v11);
    sub_631E70(v7, v11, 0, 0);
    if ( dest )
    {
      *(_QWORD *)&v28 = 0;
      qfree(dest);
    }
    return 1;
  }
  if ( (~(_WORD)v6 & 0x808) == 0 )
  {
    if ( !under_debugger )
      interr(2045);
    BUG();
  }
  v18 = *(unsigned int *)(a2 + 60);
  if ( (_DWORD)v18 && (unsigned int)v18 < v10 )
  {
    if ( *(_QWORD *)a2 )
      sub_368890();
    sub_368890();
  }
  v19 = *(const char **)(a2 + 48);
  if ( !v9 || !v10 )
  {
    if ( v19 )
    {
      a1 = *v7;
      v22 = sub_62A340(*v7, v19, 1u);
    }
    else
    {
      v22 = (void *)v7[1];
    }
    dest = v22;
    v23 = *(_DWORD *)(a2 + 56);
    if ( (v23 & 0xF) == 0 )
      sub_629950(a1, v19, a3, v18, a5, a6);
    v24 = *v7;
    if ( (v23 & 4) != 0 )
    {
      v26 = sub_7BF2D0(&dest, v24);
    }
    else
    {
      v25 = *(_QWORD *)(a2 + 8);
      if ( (v23 & 8) != 0 )
      {
        v26 = (int)sub_7BEF80(&dest, v24, v25, *(unsigned __int8 *)(a2 + 32)) > 0;
      }
      else if ( (v23 & 0x800) != 0 )
      {
        v26 = sub_7BF530(&dest, v24, v25, 72);
      }
      else
      {
        v26 = sub_7BE850(&dest, v24, v25, *(unsigned __int8 *)(a2 + 32));
      }
    }
LABEL_39:
    if ( !v26 )
      return 0;
LABEL_40:
    sub_631E70(v7, v11, 0, 0);
    return 1;
  }
  if ( v19 )
    v20 = sub_62A340(*v7, v19, 1u);
  else
    v20 = (void *)v7[1];
  dest = v20;
  v21 = *(_DWORD *)(a2 + 56);
  if ( (v21 & 4) != 0 )
  {
    if ( (unsigned __int8)sub_7BF280(&dest, *v7, v9, v10) )
      goto LABEL_40;
    v21 = *(_DWORD *)(a2 + 56);
  }
  if ( (v21 & 0x800) != 0 )
  {
    if ( (unsigned __int8)sub_7BF4E0(&dest, *v7, *(_QWORD *)(a2 + 8), v9, v10, *(unsigned __int8 *)(a2 + 32)) )
      goto LABEL_40;
    v21 = *(_DWORD *)(a2 + 56);
  }
  if ( (v21 & 2) != 0 )
  {
    if ( (unsigned __int8)sub_7BE7C0(&dest, *v7, *(_QWORD *)(a2 + 8), v9, v10, *(unsigned __int8 *)(a2 + 32)) )
      goto LABEL_40;
    v21 = *(_DWORD *)(a2 + 56);
  }
  if ( (v21 & 8) != 0 )
  {
    v26 = sub_7BEF30(&dest, *v7, v9, v10, *(_QWORD *)(a2 + 8), *(unsigned __int8 *)(a2 + 32));
    goto LABEL_39;
  }
  return 0;
}
