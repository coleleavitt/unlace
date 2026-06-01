__int64 __fastcall sub_3F84F0(__int64 a1, void *a2, char a3, unsigned __int64 a4, int *a5, __int64 a6, char **a7)
{
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r12
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rsi
  unsigned int v26; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v27; // [rsp+18h] [rbp-90h] BYREF
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int128 v29; // [rsp+28h] [rbp-80h]
  _BYTE v30[40]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( a3 == 83 )
  {
    if ( a2 == *(void **)(a1 + 64) )
    {
      if ( a4 - 6 <= 3 )
      {
        qsnprintf((unsigned int)v30, 32, (unsigned int)"%a", a4, (_DWORD)a5, (unsigned int)v30);
        if ( a6 == 4 )
        {
          v21 = *(_QWORD *)(a1 + 24);
          v22 = (unsigned int)*a5;
          ptr = a2;
LABEL_48:
          v27 = v22;
          sub_7BE7C0(&ptr, v21, a4, &v27, 8, 83);
          return 1;
        }
LABEL_53:
        sub_35A790(a7);
        return 0;
      }
    }
    else
    {
      if ( a2 != *(void **)(a1 + 72) && a2 != *(void **)(a1 + 80) && a2 != *(void **)(a1 + 88) )
      {
        if ( a2 != *(void **)(a1 + 96)
          && a2 != *(void **)(a1 + 112)
          && a2 != *(void **)(a1 + 120)
          && a2 != *(void **)(a1 + 128)
          && a2 != *(void **)(a1 + 136) )
        {
          return 0;
        }
        goto LABEL_26;
      }
      if ( a4 <= 0x1E )
      {
        if ( ((1LL << a4) & 0x610F004A) == 0 )
        {
          if ( (_DWORD)a4 == 11 )
          {
            v15 = (unsigned int)*a5;
            v16 = *(_QWORD *)(a1 + 24);
            v27 = (unsigned __int64)a2;
            if ( v15 == 0xFFFFFFFFLL )
              v15 = -1;
            ptr = (void *)v15;
            sub_7BE7C0(&v27, v16, 11, &ptr, 8, 83);
            return 1;
          }
          goto LABEL_26;
        }
        qsnprintf((unsigned int)v30, 32, (unsigned int)"%a", a4, (_DWORD)a5, (unsigned int)v30);
        if ( a6 == 4 )
        {
          v22 = *a5;
          v21 = *(_QWORD *)(a1 + 24);
          ptr = a2;
          goto LABEL_48;
        }
        goto LABEL_53;
      }
    }
LABEL_26:
    ptr = a2;
    sub_7BE7C0(&ptr, *(_QWORD *)(a1 + 24), a4, a5, a6, 83);
    return 1;
  }
  if ( a3 == 65 )
  {
    if ( a2 == *(void **)(a1 + 96) || a2 == *(void **)(a1 + 104) )
    {
      qsnprintf((unsigned int)v30, 32, (unsigned int)"%a", a4, (_DWORD)a5, (unsigned int)v30);
      if ( a6 == 4 )
      {
        v23 = (unsigned int)*a5;
        v24 = *(_QWORD *)(a1 + 24);
        ptr = a2;
        v27 = v23;
        sub_7BE7C0(&ptr, v24, a4, &v27, 8, 65);
        return 1;
      }
    }
    else
    {
      if ( *(void **)(a1 + 144) != a2 || a4 != 1 )
        return 0;
      qsnprintf((unsigned int)v30, 32, (unsigned int)"%a", 1, (_DWORD)a5, a6);
      if ( a6 == 4 )
      {
        v17 = (unsigned int)*a5;
        v18 = *(_QWORD *)(a1 + 24);
        ptr = a2;
        v27 = v17;
        sub_7BE7C0(&ptr, v18, 1, &v27, 8, 65);
        return 1;
      }
    }
    goto LABEL_53;
  }
  if ( a3 != 69 )
    return 0;
  if ( a2 != *(void **)(a1 + 144) )
  {
    if ( a4 )
      return 0;
    v11 = sub_3BDE50(*(_QWORD **)(*(_QWORD *)(a1 + 24) + 1672LL), (__int64)a2);
    if ( v11 < *(_QWORD *)(a1 + 160) || v11 >= *(_QWORD *)(a1 + 168) )
      return 0;
    if ( a2 == *(void **)(a1 + 32) )
    {
      v12 = *(_QWORD *)(a1 + 48);
      goto LABEL_10;
    }
    v25 = *(_QWORD *)(a1 + 24);
    ptr = a2;
    if ( sub_7BF130(&ptr, v25, a1 + 40) > 0 )
    {
      *(_QWORD *)(a1 + 32) = a2;
      v12 = *(_QWORD *)(a1 + 48);
LABEL_10:
      if ( v12 <= 0x12 || strncmp(*(const char **)(a1 + 40), "$ debugger plugin ", 0x12u) )
        return 0;
      v13 = *(_QWORD *)(a1 + 24);
      v27 = (unsigned __int64)a2;
      v29 = 0;
      ptr = nullptr;
      if ( sub_7BEED0(&v27, v13, &ptr, 1, 0, 69) <= 0 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v29 = 0;
          qfree(ptr);
        }
        return 0;
      }
      sub_7BEF30(&v27, v13, ptr, v29, 0, 69);
      if ( ptr )
      {
        *(_QWORD *)&v29 = 0;
        qfree(ptr);
      }
      return 1;
    }
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 32) = a2;
    return 0;
  }
  if ( a4 )
    return 0;
  v19 = *(_QWORD *)(a1 + 24);
  v27 = (unsigned __int64)a2;
  v29 = 0;
  ptr = nullptr;
  v20 = sub_7BEED0(&v27, v19, &ptr, 1, 0, 69);
  result = 0;
  if ( v20 > 0 )
  {
    sub_7BEF30(&v27, v19, ptr, v29, 0, 69);
    result = 1;
  }
  if ( ptr )
  {
    v26 = result;
    *(_QWORD *)&v29 = 0;
    qfree(ptr);
    return v26;
  }
  return result;
}
