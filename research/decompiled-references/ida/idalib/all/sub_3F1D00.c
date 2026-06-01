__int64 __fastcall sub_3F1D00(__int64 a1, void *a2, char a3, __int64 a4, _BYTE *a5, size_t a6)
{
  _QWORD *v11; // r14
  unsigned __int64 v12; // rax
  size_t v13; // r9
  __int64 v14; // r14
  void *v15; // rdi
  void *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rsi
  size_t na; // [rsp+8h] [rbp-80h]
  void *v22; // [rsp+18h] [rbp-70h] BYREF
  void *v23; // [rsp+20h] [rbp-68h] BYREF
  __int128 v24; // [rsp+28h] [rbp-60h]
  void *ptr; // [rsp+40h] [rbp-48h] BYREF
  __int128 v26; // [rsp+48h] [rbp-40h]
  unsigned __int64 v27; // [rsp+58h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  if ( a3 != 83 )
    return 0;
  if ( (unsigned __int64)(a4 - 1000) > 0x7D0 )
    return 0;
  v11 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 1672LL);
  v12 = sub_3BDE50(v11, (__int64)a2);
  if ( (sub_3BE900(v11, v12, 0) & 0x2000) == 0 )
    return 0;
  v13 = a6;
  if ( a6 != 1 )
  {
    v23 = nullptr;
    v24 = 0;
    if ( !a6 )
    {
      ptr = nullptr;
      v26 = 0;
      goto LABEL_19;
    }
    v15 = nullptr;
    v14 = a6 + 1;
    if ( a6 == -1 )
    {
LABEL_9:
      na = v13;
      *(_QWORD *)&v24 = v14;
      memmove(v15, a5, v13);
      *((_BYTE *)v23 + na) = 0;
      ptr = nullptr;
      v26 = 0;
      if ( v23 && *(_BYTE *)v23 )
      {
        sub_3F1AB0((size_t *)&ptr, (const char *)v23);
        v16 = ptr;
        v17 = v26;
LABEL_12:
        v18 = *(_QWORD *)(a1 + 24);
        v22 = a2;
        sub_7BE7C0(&v22, v18, a4, v16, v17, 83);
        if ( ptr )
        {
          *(_QWORD *)&v26 = 0;
          qfree(ptr);
        }
        if ( v23 )
        {
          *(_QWORD *)&v24 = 0;
          qfree(v23);
        }
        return 1;
      }
LABEL_19:
      v17 = 0;
      v16 = nullptr;
      goto LABEL_12;
    }
LABEL_8:
    v23 = (void *)qvector_reserve(&v23, 0, v14, 1);
    v13 = a6;
    v15 = v23;
    goto LABEL_9;
  }
  if ( *a5 )
  {
    v23 = nullptr;
    v14 = 2;
    v24 = 0;
    goto LABEL_8;
  }
  v19 = *(_QWORD *)(a1 + 24);
  ptr = a2;
  sub_7BE7C0(&ptr, v19, a4, a5, 1, 83);
  return 1;
}
