__int64 __fastcall sub_2AE7F0(__int64 a1, __int64 a2, int a3, char a4)
{
  _QWORD *v4; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  __int64 *v8; // r13
  char *v9; // rbx
  __int64 v10; // rdi
  const char *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r14
  size_t v16; // rbx
  __int64 v17; // rdx
  const char *v18; // rsi
  __int64 v19; // rax
  char *v20; // rax
  const void *v21; // rsi
  const char *v22; // rsi
  const char *v25; // [rsp+10h] [rbp-58h] BYREF
  __int128 v26; // [rsp+18h] [rbp-50h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v4 = *(_QWORD **)(a1 + 440);
  if ( !v4 || !v4[1] || (unsigned __int64)a3 >= v4[3] )
    return 0;
  v5 = 0;
  v6 = 0;
  v8 = (__int64 *)(v4[2] + 24LL * a3);
  if ( v8[1] )
  {
    while ( 1 )
    {
      v14 = *v8;
      v25 = nullptr;
      v26 = 0;
      v15 = v5 + v14;
      v16 = *(_QWORD *)(v15 + 16);
      if ( v16 )
      {
        v20 = (char *)qalloc_or_throw(*(_QWORD *)(v15 + 16));
        *((_QWORD *)&v26 + 1) = v16;
        v21 = *(const void **)(v15 + 8);
        v25 = v20;
        memcpy(v20, v21, v16);
        *(_QWORD *)&v26 = v16;
        if ( !a4 && v16 != 1 )
        {
          v22 = v25;
          if ( tag_remove(&v25, v25, 0) < 0 )
            break;
        }
      }
      v17 = *(_QWORD *)(a2 + 8);
      v18 = *(const char **)a2;
      if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v17 + 1) )
      {
        v19 = qvector_reserve(a2, v18, v17 + 1, 48);
        *(_QWORD *)a2 = v19;
        v17 = *(_QWORD *)(a2 + 8);
        v18 = (const char *)v19;
      }
      v9 = (char *)&v18[48 * v17];
      *((_QWORD *)v9 + 4) = 0xFFFFFFFF00000001LL;
      v9[40] = 0;
      *(_OWORD *)v9 = 0;
      *((_OWORD *)v9 + 1) = 0;
      ++*(_QWORD *)(a2 + 8);
      v10 = *(_QWORD *)v15;
      if ( *(_QWORD *)v15 )
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      *(_QWORD *)v9 = v10;
      v11 = *((const char **)v9 + 1);
      v12 = *((_QWORD *)v9 + 3);
      *((_QWORD *)v9 + 1) = v25;
      v25 = v11;
      *((_QWORD *)v9 + 2) = v26;
      v13 = *((_QWORD *)&v26 + 1);
      *((_QWORD *)&v26 + 1) = v12;
      *((_QWORD *)v9 + 3) = v13;
      v9[32] = *(_BYTE *)(v15 + 32);
      *((_DWORD *)v9 + 9) = *(_DWORD *)(v15 + 36);
      v9[40] = *(_BYTE *)(v15 + 40);
      if ( v11 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v11, v18);
      }
      ++v6;
      v5 += 272;
      if ( v6 >= v8[1] )
        return 1;
    }
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25, v22);
    }
    return 0;
  }
  return 1;
}
