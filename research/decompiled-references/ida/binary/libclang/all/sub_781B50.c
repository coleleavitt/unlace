__int64 __fastcall sub_781B50(__int64 a1, _QWORD *a2, __int64 *a3, unsigned __int64 a4)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // r13
  __int64 v11; // rsi
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx

  v7 = *(_QWORD *)(a1 + 120);
  if ( (v7 & 4) == 0 )
  {
    v13 = (_QWORD *)sub_798D40(a1);
    v14 = v13[274];
    v13[284] += 32LL;
    v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v13[275] >= v15 + 32 && v14 )
      v13[274] = v15 + 32;
    else
      v15 = sub_779030((__int64)(v13 + 274), 32, 3);
    *(_DWORD *)(v15 + 16) = 0;
    *(_QWORD *)(v15 + 24) = 0;
    *(_OWORD *)v15 = 0;
    v7 = v15 | 4;
    *(_QWORD *)(a1 + 120) = v7;
  }
  v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  result = *(unsigned int *)(v8 + 16);
  if ( (_DWORD)result )
  {
    *(_QWORD *)(v8 + 24) = 0;
    *(_DWORD *)(v8 + 16) = 0;
  }
  if ( a4 )
  {
    v10 = 8 * a4;
    v11 = -1;
    result = a2[274];
    if ( a4 <= 0xFFFFFFFFFFFFFFFLL )
      v11 = 8 * a4;
    a2[284] += v11;
    v12 = (_QWORD *)((result + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a2[275] >= (unsigned __int64)v12 + v11 && result )
    {
      a2[274] = (char *)v12 + v11;
    }
    else
    {
      result = sub_779030((__int64)(a2 + 274), v11, 3);
      v12 = (_QWORD *)result;
    }
    *(_QWORD *)(v8 + 24) = v12;
    *(_DWORD *)(v8 + 16) = a4;
    if ( v10 <= 8 )
    {
      if ( v10 == 8 )
      {
        result = *a3;
        *v12 = *a3;
      }
    }
    else
    {
      return (__int64)memmove(v12, a3, 8 * a4);
    }
  }
  return result;
}

