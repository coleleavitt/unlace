unsigned __int64 __fastcall sub_118680(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v8; // r12
  size_t v9; // rax
  int v10; // ebx
  int v11; // r12d
  int v12; // r14d
  __int64 v13; // r9
  unsigned __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rbx
  _QWORD *v17; // rbp
  __int64 v18; // rax
  _QWORD *v19; // rbx
  size_t v20; // rax
  __int64 v21; // rbp
  size_t v22; // r13
  size_t v23; // r15
  __int64 v24; // rsi
  void *v26; // rdi
  size_t v27; // rbp
  size_t v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rbp
  _WORD *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+0h] [rbp-458h]
  size_t v35; // [rsp+0h] [rbp-458h]
  __int64 v36; // [rsp+8h] [rbp-450h]
  char s[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v38; // [rsp+418h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 8544) + 16 * a5;
  v38 = __readfsqword(0x28u);
  v36 = *(_QWORD *)v6;
  qstrftime64();
  v8 = *a2;
  v9 = strlen(s);
  if ( v9 )
  {
    v26 = *(void **)v8;
    v27 = v9;
    v28 = v9 + 1;
    if ( *(_QWORD *)(v8 + 16) < v9 + 1 )
    {
      v35 = v9 + 1;
      v33 = qvector_reserve();
      v28 = v35;
      *(_QWORD *)v8 = v33;
      v26 = (void *)v33;
    }
    *(_QWORD *)(v8 + 8) = v28;
    memmove(v26, s, v27);
    *(_BYTE *)(*(_QWORD *)v8 + v27) = 0;
  }
  else
  {
    *(_QWORD *)(v8 + 8) = 0;
  }
  v10 = 3 * *(_DWORD *)(v6 + 8);
  v11 = v10;
  if ( *(_QWORD *)v36 == *(_QWORD *)(a1 + 4280) )
  {
    v30 = *a2;
    v31 = *(_WORD **)(*a2 + 24);
    if ( *(_QWORD *)(*a2 + 40) <= 2u )
    {
      v32 = qvector_reserve();
      *(_QWORD *)(v30 + 24) = v32;
      v31 = (_WORD *)v32;
    }
    *(_QWORD *)(v30 + 32) = 3;
    v11 = v10 - 2;
    *v31 = 15917;
    *(_BYTE *)(*(_QWORD *)(v30 + 24) + 2LL) = 0;
  }
  v12 = 0;
  if ( v11 > 0 )
  {
    do
    {
      v17 = (_QWORD *)*a2;
      v16 = *(_QWORD *)(*a2 + 32);
      if ( v16 )
      {
        v13 = v16 + 1;
        v14 = v16 + 2;
        v15 = v17[3];
        --v16;
        if ( v17[5] < v14 )
          goto LABEL_10;
      }
      else
      {
        v15 = v17[3];
        v14 = 3;
        v13 = 2;
        if ( v17[5] < 3u )
        {
LABEL_10:
          v34 = v13;
          v18 = qvector_reserve();
          v13 = v34;
          v17[3] = v18;
          v15 = v18;
        }
      }
      v17[4] = v14;
      ++v12;
      *(_BYTE *)(v15 + v13) = 0;
      *(_WORD *)(v17[3] + v16) = 8224;
    }
    while ( v11 != v12 );
  }
  v19 = (_QWORD *)*a2;
  v20 = strlen((const char *)(v36 + 10));
  v21 = v19[4];
  v22 = v20;
  v23 = v20;
  if ( v21 )
  {
    --v21;
    v23 = v20 + v21;
  }
  v24 = v19[3];
  if ( v19[5] < v23 + 1 )
  {
    v29 = qvector_reserve();
    v19[3] = v29;
    v24 = v29;
  }
  v19[4] = v23 + 1;
  *(_BYTE *)(v24 + v23) = 0;
  memmove((void *)(v21 + v19[3]), (const void *)(v36 + 10), v22);
  return v38 - __readfsqword(0x28u);
}

