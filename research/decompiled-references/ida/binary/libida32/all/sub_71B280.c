__int64 __fastcall sub_71B280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rsi
  __int64 result; // rax
  __m128i *v9; // rdi
  char *v10; // rax
  _DWORD *v11; // rbp
  __int64 v12; // rdx
  int v13; // eax

  v6 = *(unsigned int *)(a1 + 32);
  byte_2CA26CA = 1;
  result = (unsigned int)(*(_DWORD *)(a1 + 24) + 1);
  *(_DWORD *)(a1 + 24) = result;
  if ( (_DWORD)v6 )
  {
    v9 = *(__m128i **)(a1 + 8);
    v10 = sub_7188E0(v9, v6, 0, a4, a5, a6);
    v11 = v10;
    if ( v10 )
    {
      v12 = *(unsigned int *)v10;
      if ( (*(_DWORD *)a1 >> 2) - 4 < (unsigned int)v12 )
        sub_722BF0(v9, v6, v12);
      if ( (_DWORD)v12 )
      {
        sub_718590(*(_QWORD *)(a1 + 8), (__int64)v10);
        v13 = *v11 - 1;
        *v11 = v13;
        return (unsigned int)v11[v13 + 2];
      }
      else
      {
        result = *(unsigned int *)(a1 + 32);
        *(_DWORD *)(a1 + 32) = v11[1];
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}

