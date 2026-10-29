bool __fastcall sub_518EC0(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v4; // rax
  __int64 v5; // r10
  unsigned __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  unsigned __int64 v10; // r11
  unsigned __int64 *v11; // rbx
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rdx
  char *v14; // rdx
  bool v15; // cl
  bool result; // al
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // r11
  unsigned __int64 *v19; // r9
  int v20; // eax

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 1768LL);
  if ( !*(_BYTE *)(v4 + 152) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v5 = a2;
  v7 = a4 - *(_DWORD *)(*(_QWORD *)(v4 + 8) + 68LL);
  if ( v7 >= *(_QWORD *)(v4 + 40) )
    sub_5144F0(v7, a3);
  v8 = v7 << 6;
  *(_DWORD *)(*(_QWORD *)(v4 + 32) + v8 + 56) = a4;
  v9 = *(_QWORD *)(v4 + 32) + v8;
  v10 = *(_QWORD *)(v9 + 8);
  v11 = *(unsigned __int64 **)v9;
  v12 = *(unsigned __int64 **)(v9 + 24);
  if ( v12 == (unsigned __int64 *)(*(_QWORD *)v9 + 33 * v10) || a3 < *v12 || a3 >= v12[1] )
  {
    if ( (_DWORD)v10 )
    {
      v13 = (unsigned int)(v10 - 1);
      if ( v13 < v10 )
      {
        if ( a3 >= *(unsigned __int64 *)((char *)v11 + 33 * v13 + 8)
          || (v17 = sub_5168B0((unsigned __int64 **)v9, a3), v19 != v17)
          && (v20 = 1041204193 * ((_DWORD)v17 - (_DWORD)v11), v20 != -1)
          && (v13 = (unsigned int)(v20 - 1), v20)
          && v13 < v18 )
        {
          v14 = (char *)v11 + 33 * v13;
          v15 = v14 != nullptr;
          result = v14 != nullptr && v5 != 0;
          if ( !result )
            return v15;
LABEL_9:
          *(__m128i *)v5 = _mm_loadu_si128((const __m128i *)v14);
          *(__m128i *)(v5 + 9) = _mm_loadu_si128((const __m128i *)(v14 + 9));
          return result;
        }
      }
    }
  }
  else if ( v12 != v11 )
  {
    v14 = (char *)v12 - 33;
    v15 = v12 != (unsigned __int64 *)((char *)&qword_20 + 1);
    result = v12 != (unsigned __int64 *)((char *)&qword_20 + 1) && v5 != 0;
    if ( !result )
      return v15;
    goto LABEL_9;
  }
  return 0;
}
