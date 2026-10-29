unsigned __int64 __fastcall sub_7B6B60(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  _QWORD *v14; // rdi
  __int64 v15; // rbx
  _QWORD *v16; // rcx

  result = (unsigned __int64)a2;
  *(_QWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 104) = a4;
  if ( a4 | a6 )
  {
    v11 = (unsigned int)(4 * (a6 + 2 * a4));
    v12 = *(_QWORD *)(result + 2192);
    *(_QWORD *)(result + 2272) += v11;
    v14 = (_QWORD *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( *(_QWORD *)(result + 2200) >= (unsigned __int64)v14 + v11 && v12 )
      *(_QWORD *)(result + 2192) = (char *)v14 + v11;
    else
      v14 = (_QWORD *)sub_7B4EB0(result + 2192, v11, 3);
    *(_QWORD *)(a1 + 96) = v14;
    if ( 8 * a4 <= 8 )
    {
      if ( 8 * a4 == 8 )
      {
        *v14 = *a3;
        v14 = *(_QWORD **)(a1 + 96);
      }
    }
    else
    {
      memmove(v14, a3, 8 * a4);
      v14 = *(_QWORD **)(a1 + 96);
    }
    result = *(unsigned int *)(a1 + 104);
    v15 = 4 * a6;
    v16 = &v14[result];
    if ( v15 )
    {
      for ( result = 0; result != v15; result += 4LL )
        *(_DWORD *)((char *)v16 + result) = *(_DWORD *)(a5 + result);
    }
  }
  return result;
}

