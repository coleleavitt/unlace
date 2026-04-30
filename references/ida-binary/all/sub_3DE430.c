unsigned __int64 __fastcall sub_3DE430(__int64 a1, __int64 a2, int a3)
{
  const char *v5; // rsi
  _BYTE *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r13
  const char *v9; // rsi
  const char *v10; // r13
  __int64 v11; // r14
  const char *v12; // rsi
  _WORD *v13; // rax
  __int64 v14; // rbp
  int v15; // eax
  const char *v17; // r14
  void *v18; // rax
  void *v19; // rax
  const char *v20; // r15
  void *v21; // rax
  void *src; // [rsp+0h] [rbp-8h] BYREF
  __int128 vars0; // [rsp+8h] [rbp+0h]
  unsigned __int64 vars10; // [rsp+18h] [rbp+10h]

  vars10 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 56) = a3;
  v5 = nullptr;
  *(_QWORD *)a1 = &unk_874988;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 100;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 208) = -1;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 304) = -1;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 360) = -1;
  *(_DWORD *)(a1 + 368) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 336) = 0;
  src = nullptr;
  vars0 = 0;
  v6 = (_BYTE *)qvector_reserve(&src, 0, 6, 1);
  src = v6;
  v7 = a1 + 176;
  *(_QWORD *)&vars0 = 6;
  *(_DWORD *)v6 = 1970037110;
  v6[4] = 101;
  *((_BYTE *)src + 5) = 0;
  *(_QWORD *)(a1 + 200) = a1;
  if ( (void **)(a1 + 176) != &src )
  {
    v8 = vars0;
    if ( (unsigned __int64)vars0 > 1 )
    {
      v20 = (const char *)src;
      v21 = *(void **)(a1 + 176);
      if ( *(_QWORD *)(a1 + 192) < (unsigned __int64)vars0 )
      {
        v21 = (void *)qvector_reserve(v7, *(_QWORD *)(a1 + 176), vars0, 1);
        *(_QWORD *)(a1 + 176) = v21;
      }
      *(_QWORD *)(a1 + 184) = v8;
      v5 = v20;
      memmove(v21, v20, v8 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 176) + v8 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 184) = 0;
    }
  }
  *(_DWORD *)(a1 + 208) = 1;
  if ( src )
  {
    *(_QWORD *)&vars0 = 0;
    qfree(src, v5);
  }
  v9 = nullptr;
  src = nullptr;
  vars0 = 0;
  src = (void *)qvector_reserve(&src, 0, 9, 1);
  *(_QWORD *)&vars0 = 9;
  strcpy((char *)src, "location");
  v10 = (const char *)src;
  *(_QWORD *)(a1 + 296) = a1;
  if ( (void **)(a1 + 272) != &src )
  {
    v11 = vars0;
    if ( (unsigned __int64)vars0 > 1 )
    {
      v19 = *(void **)(a1 + 272);
      if ( *(_QWORD *)(a1 + 288) < (unsigned __int64)vars0 )
      {
        v19 = (void *)qvector_reserve(a1 + 272, *(_QWORD *)(a1 + 272), vars0, 1);
        *(_QWORD *)(a1 + 272) = v19;
      }
      *(_QWORD *)(a1 + 280) = v11;
      v9 = v10;
      memmove(v19, v10, v11 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 272) + v11 - 1) = 0;
      v10 = (const char *)src;
    }
    else
    {
      *(_QWORD *)(a1 + 280) = 0;
    }
  }
  *(_DWORD *)(a1 + 304) = 3;
  if ( v10 )
  {
    *(_QWORD *)&vars0 = 0;
    qfree(v10, v9);
  }
  v12 = nullptr;
  src = nullptr;
  vars0 = 0;
  v13 = (_WORD *)qvector_reserve(&src, 0, 7, 1);
  src = v13;
  *(_QWORD *)&vars0 = 7;
  *(_DWORD *)v13 = 1902994797;
  v13[2] = 31092;
  *((_BYTE *)src + 6) = 0;
  *(_QWORD *)(a1 + 352) = a1;
  if ( (void **)(a1 + 328) != &src )
  {
    v14 = vars0;
    if ( (unsigned __int64)vars0 > 1 )
    {
      v17 = (const char *)src;
      v18 = *(void **)(a1 + 328);
      if ( *(_QWORD *)(a1 + 344) < (unsigned __int64)vars0 )
      {
        v18 = (void *)qvector_reserve(a1 + 328, *(_QWORD *)(a1 + 328), vars0, 1);
        *(_QWORD *)(a1 + 328) = v18;
      }
      *(_QWORD *)(a1 + 336) = v14;
      v12 = v17;
      memmove(v18, v17, v14 - 1);
      *(_BYTE *)(v14 - 1 + *(_QWORD *)(a1 + 328)) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 336) = 0;
    }
  }
  *(_DWORD *)(a1 + 360) = -1;
  if ( src )
  {
    *(_QWORD *)&vars0 = 0;
    qfree(src, v12);
  }
  if ( a2 )
  {
    v15 = *(_DWORD *)(a2 + 24);
    if ( v15 == 10 )
    {
      *(_DWORD *)(a1 + 368) = 3;
      return vars10 - __readfsqword(0x28u);
    }
    if ( v15 > 10 )
    {
      if ( v15 == 16 )
      {
        *(_DWORD *)(a1 + 368) = 4;
        return vars10 - __readfsqword(0x28u);
      }
    }
    else
    {
      if ( v15 == 2 )
      {
        *(_DWORD *)(a1 + 368) = 1;
        return vars10 - __readfsqword(0x28u);
      }
      if ( v15 == 8 )
      {
        *(_DWORD *)(a1 + 368) = 2;
        return vars10 - __readfsqword(0x28u);
      }
    }
    *(_DWORD *)(a1 + 368) = 0;
  }
  return vars10 - __readfsqword(0x28u);
}
