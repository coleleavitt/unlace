unsigned __int64 __fastcall sub_40E60(__int64 a1, __int64 a2, __int64 a3, const char *a4, const char *a5)
{
  size_t v9; // rax
  __int64 v10; // r12
  size_t v11; // r14
  size_t v12; // r15
  _BYTE *v13; // rsi
  size_t v14; // rdx
  size_t v15; // rax
  size_t v16; // r15
  _BYTE *v17; // rsi
  size_t v18; // r14
  size_t v19; // r8
  size_t v20; // rdx
  _BYTE *v21; // [rsp+0h] [rbp-68h]
  size_t v22; // [rsp+0h] [rbp-68h]
  size_t v23; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v25; // [rsp+18h] [rbp-50h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 344) & 8) != 0 )
    return v26 - __readfsqword(0x28u);
  src = nullptr;
  v25 = 0;
  if ( get_ea_name(&src, a3, 0, 0) > 0 )
  {
    if ( !*a4 || !a4 )
      goto LABEL_6;
    v21 = src;
    v15 = strlen(a4);
    v16 = v25;
    v17 = v21;
    v18 = v15;
    if ( (_QWORD)v25 )
    {
      v16 = v25 - 1;
      v19 = v15 + v25 - 1;
      v20 = v15 + v25;
      if ( *((_QWORD *)&v25 + 1) >= v15 + (unsigned __int64)v25 )
        goto LABEL_18;
    }
    else
    {
      v20 = v15 + 1;
      if ( *((_QWORD *)&v25 + 1) >= v15 + 1 )
      {
        *(_QWORD *)&v25 = v15 + 1;
        v21[v15] = 0;
LABEL_22:
        memmove(src, a4, v18);
LABEL_6:
        if ( *a5 && a5 )
        {
          v9 = strlen(a5);
          v10 = v25;
          v11 = v9;
          v12 = v9;
          if ( (_QWORD)v25 )
          {
            v10 = v25 - 1;
            v12 = v9 + v25 - 1;
          }
          v13 = src;
          v14 = v12 + 1;
          if ( *((_QWORD *)&v25 + 1) < v12 + 1 )
          {
            src = (void *)qvector_reserve(&src, src, v14, 1);
            v14 = v12 + 1;
            v13 = src;
          }
          *(_QWORD *)&v25 = v14;
          v13[v12] = 0;
          memmove((char *)src + v10, a5, v11);
        }
        set_name(a2, src, 6144);
        goto LABEL_14;
      }
      v19 = v15;
    }
    v23 = v19;
    v22 = v20;
    src = (void *)qvector_reserve(&src, v17, v20, 1);
    v19 = v23;
    v17 = src;
    v20 = v22;
LABEL_18:
    *(_QWORD *)&v25 = v20;
    v17[v19] = 0;
    if ( v16 )
      memmove((char *)src + v18, src, v16);
    goto LABEL_22;
  }
LABEL_14:
  if ( src )
  {
    *(_QWORD *)&v25 = 0;
    qfree(src);
  }
  return v26 - __readfsqword(0x28u);
}

