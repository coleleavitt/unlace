unsigned __int64 __fastcall sub_4820C0(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  __int64 i; // r15
  __int64 v4; // rbp
  __int64 v5; // r8
  unsigned int v6; // r11d
  char *v7; // r10
  _BYTE *v8; // rsi
  __int64 v9; // rdx
  char *v10; // r8
  unsigned int j; // eax
  __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  size_t v14; // r10
  __int64 v15; // r8
  size_t v16; // r11
  _BYTE *v17; // rsi
  __int64 v18; // rdi
  const char *v19; // rdx
  size_t v21; // [rsp+8h] [rbp-78h]
  unsigned int v22; // [rsp+10h] [rbp-70h]
  __int64 v23; // [rsp+10h] [rbp-70h]
  char *v24; // [rsp+18h] [rbp-68h]
  size_t v25; // [rsp+18h] [rbp-68h]
  __int64 v26; // [rsp+20h] [rbp-60h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v28; // [rsp+30h] [rbp-50h]
  unsigned __int64 v29; // [rsp+40h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v29 = __readfsqword(0x28u);
  v28 = 0;
  ptr = nullptr;
  for ( i = v2 + 32 * v1; i != v2; v2 += 32 )
  {
    if ( *(_BYTE *)(v2 + 24) )
    {
      v4 = v28;
      if ( (unsigned __int64)v28 > 1 )
      {
        v5 = v28 - 1;
        v6 = 1;
        v7 = "\n";
        if ( *(_BYTE *)(a1 + 64) )
        {
          v4 = v28 + 1;
          v6 = 2;
          v7 = "\r\n";
        }
        v8 = ptr;
        v9 = v4 + 1;
        if ( *((_QWORD *)&v28 + 1) < (unsigned __int64)(v4 + 1) )
        {
          v26 = v28 - 1;
          v24 = v7;
          v22 = v6;
          ptr = (void *)qvector_reserve(&ptr, ptr, v9, 1);
          v5 = v26;
          v8 = ptr;
          v7 = v24;
          v6 = v22;
          v9 = v4 + 1;
        }
        *(_QWORD *)&v28 = v9;
        v8[v4] = 0;
        v10 = (char *)ptr + v5;
        for ( j = 0; j < v6; ++j )
        {
          v12 = j;
          v10[v12] = v7[v12];
        }
      }
      v13 = *(_QWORD *)(v2 + 8);
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v13 != 1 )
        {
          v15 = v28;
          v16 = v13 - 1;
          if ( (_QWORD)v28 )
          {
            v15 = v28 - 1;
            v16 = v14 + v28 - 1;
            v13 += v28 - 1;
          }
          v17 = ptr;
          if ( *((_QWORD *)&v28 + 1) < v13 )
          {
            v25 = v16;
            v23 = v15;
            v21 = v14;
            ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
            v16 = v25;
            v17 = ptr;
            v15 = v23;
            v14 = v21;
          }
          *(_QWORD *)&v28 = v13;
          v17[v16] = 0;
          memcpy((char *)ptr + v15, *(const void **)v2, v14);
        }
      }
    }
  }
  v18 = switch_dbctx(*(int *)(a1 + 8));
  v19 = haystack;
  if ( (_QWORD)v28 )
    v19 = (const char *)ptr;
  sub_632C30(v18, 85, v19, 0);
  if ( ptr )
  {
    *(_QWORD *)&v28 = 0;
    qfree(ptr);
  }
  return v29 - __readfsqword(0x28u);
}
