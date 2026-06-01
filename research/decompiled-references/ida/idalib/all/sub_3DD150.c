__int64 __fastcall sub_3DD150(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 *v8; // rbx
  unsigned __int64 v9; // rbp
  const void *v10; // r13
  void *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax

  if ( a2 <= 0x1FF && (a2 > 0xFF || (a2 & 0xFFFFFF0F) == 0) )
  {
    if ( !under_debugger )
      interr(3378);
    BUG();
  }
  v5 = a1[7];
  v6 = a1[6];
  if ( a1[8] < (unsigned __int64)(v5 + 1) )
  {
    v12 = qvector_reserve(a1 + 6, v6, v5 + 1, 32);
    a1[6] = v12;
    v6 = v12;
    v5 = a1[7];
  }
  result = 32 * v5;
  v8 = (__int64 *)(v6 + result);
  *v8 = 0;
  *(_OWORD *)(v8 + 1) = 0;
  ++a1[7];
  *((_DWORD *)v8 + 6) = a2;
  if ( v6 + result != a3 )
  {
    v9 = *(_QWORD *)(a3 + 8);
    if ( v9 > 1 )
    {
      v10 = *(const void **)a3;
      v11 = (void *)*v8;
      if ( v8[2] < v9 )
      {
        v13 = qvector_reserve(v8, *v8, v9, 1);
        *v8 = v13;
        v11 = (void *)v13;
      }
      v8[1] = v9;
      memmove(v11, v10, v9 - 1);
      result = *v8;
      *(_BYTE *)(*v8 + v9 - 1) = 0;
    }
    else
    {
      v8[1] = 0;
    }
  }
  return result;
}
