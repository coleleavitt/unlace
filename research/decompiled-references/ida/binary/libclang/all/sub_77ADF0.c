__int64 __fastcall sub_77ADF0(__int64 a1, _QWORD *a2, __int64 *a3, unsigned __int64 a4)
{
  __int64 v6; // r13
  unsigned __int64 v8; // r13
  __int64 result; // rax
  __int64 v10; // r14
  __int64 v11; // rsi
  _QWORD *v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  unsigned __int64 v17; // rax

  v6 = *(_QWORD *)(a1 + 56);
  if ( (v6 & 4) == 0 )
  {
    v14 = sub_798D40(a1);
    v15 = *(_QWORD *)(v14 + 2192);
    *(_QWORD *)(v14 + 2272) += 48LL;
    v16 = v14;
    v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v16 + 2200) >= v17 + 48 && v15 )
      *(_QWORD *)(v16 + 2192) = v17 + 48;
    else
      v17 = sub_779030(v16 + 2192, 48, 3);
    *(_DWORD *)(v17 + 16) = 0;
    *(_OWORD *)(v17 + 24) = 0;
    *(_QWORD *)(v17 + 40) = 0;
    *(_OWORD *)v17 = 0;
    *(_QWORD *)(a1 + 56) = v17 | 4;
    *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFF8LL) + 32) = v6 & 0xFFFFFFFFFFFFFFF8LL;
    v6 = *(_QWORD *)(a1 + 56);
  }
  v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
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

