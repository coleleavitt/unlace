__int64 __fastcall sub_7B0230(__int64 a1, __int64 a2)
{
  const char *v2; // r12
  int v3; // r13d
  int v4; // r14d
  int v5; // r15d
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // ebp
  int v10; // r9d
  __int64 v11; // r13
  const char *v12; // rdx
  char v13; // al
  const char *v14; // r8
  size_t v15; // rax
  const char *v16; // r8
  size_t v17; // rbx
  size_t v18; // r12
  __int64 v19; // rax
  const char *src; // [rsp+0h] [rbp-68h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v2 = haystack;
  v23 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(const char **)(a1 + 40);
  v3 = 12;
  v4 = 0;
  while ( 1 )
  {
    v5 = v3 + v4;
    v6 = (v3 + v4) / 2;
    v7 = strcmp((const char *)*(&off_2B11500 + v6), v2);
    v8 = v7;
    if ( !v7 )
      break;
    if ( v7 >= 0 )
    {
      v3 = v6 - 1;
      if ( v4 > v6 - 1 )
        return sub_7AFED0(a2);
    }
    else
    {
      v4 = v6 + 1;
      if ( v6 + 1 > v3 )
        return sub_7AFED0(a2);
    }
  }
  if ( v6 == -1 )
    return sub_7AFED0(a2);
  v11 = sub_7AE510(a1);
  if ( !v11 )
    return sub_7AFED0(a2);
  if ( (unsigned int)(v6 - 5) <= 2 )
  {
    v22 = 0;
    ptr = nullptr;
    sub_3573A0((char **)&ptr);
    v12 = haystack;
    if ( (_QWORD)v22 )
      v12 = (const char *)ptr;
    v8 = sub_7AF570(a2, 4, v12);
    if ( ptr )
    {
      *(_QWORD *)&v22 = 0;
      qfree(ptr);
    }
    return v8;
  }
  v13 = *(_BYTE *)(a1 + 64);
  if ( v13 == 2 )
  {
    if ( v6 == 11 )
    {
      *(_DWORD *)(v11 + 72) = *(_DWORD *)(a1 + 72);
    }
    else if ( v5 > 23 )
    {
      if ( v6 != 12 )
        return sub_7AFED0(a2);
      *(_DWORD *)(v11 + 56) = *(_DWORD *)(a1 + 72);
    }
    else if ( v6 == 2 )
    {
      *(_DWORD *)(v11 + 64) = *(_DWORD *)(a1 + 72);
    }
    else
    {
      if ( v6 != 9 )
        return sub_7AFED0(a2);
      *(_DWORD *)(v11 + 60) = *(_DWORD *)(a1 + 72);
    }
  }
  else if ( (unsigned int)v6 <= 1 )
  {
    if ( v13 == 7 )
    {
      v14 = haystack;
      if ( *(_QWORD *)(a1 + 80) )
        v14 = *(const char **)(a1 + 72);
      if ( v6 )
        callui(1167, v11, (int)v14, (int)&callui, (int)v14, v10);
      if ( v14 && (src = v14, v15 = strlen(v14), v16 = src, (v17 = v15) != 0) )
      {
        v18 = v15 + 1;
        if ( *(_QWORD *)(v11 + 24) < v15 + 1 )
        {
          v19 = qvector_reserve(v11 + 8, *(_QWORD *)(v11 + 8), v15 + 1, 1);
          v16 = src;
          *(_QWORD *)(v11 + 8) = v19;
        }
        *(_QWORD *)(v11 + 16) = v18;
        memmove(*(void **)(v11 + 8), v16, v17);
        *(_BYTE *)(*(_QWORD *)(v11 + 8) + v17) = 0;
      }
      else
      {
        *(_QWORD *)(v11 + 16) = 0;
      }
      return v8;
    }
    return sub_7AFED0(a2);
  }
  return v8;
}

