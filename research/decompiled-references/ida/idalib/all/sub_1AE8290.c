__int64 __fastcall sub_1AE8290(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // r13d
  _DWORD *v6; // rbp
  int v7; // edx
  int v8; // ebx
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ebx
  unsigned int *v13; // r14
  int *v14; // rbx
  int *v15; // rbp
  __int64 v16; // rsi
  _BYTE *v17; // rdi
  char v18; // cl
  unsigned int v19; // [rsp+Ch] [rbp-5Ch]
  void *ptr[2]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v21[72]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a3;
  if ( a4 != 103 && !(unsigned __int8)sub_20EC3B0(a4, a2, a3) )
    return 103;
  v6 = (_DWORD *)sub_20ED4F0(a1);
  v8 = v7;
  switch ( (int)a2 )
  {
    case 26:
      if ( *v6 != 70 )
      {
        *(__m128i *)ptr = _mm_load_si128((const __m128i *)&xmmword_23AAB10);
        if ( a1 != 106 && a1 != HIDWORD(ptr[0]) && LODWORD(ptr[1]) != a1 && HIDWORD(ptr[1]) != a1 )
          goto LABEL_9;
      }
      return 88;
    case 34:
      return 103;
    case 44:
      v18 = a1 - 72;
      if ( a1 - 72 <= 0x2A )
      {
        result = 88;
        if ( ((1LL << v18) & 0x8003) != 0 )
          return result;
        result = 94;
        if ( ((1LL << v18) & 0x60000000000LL) != 0 )
          return result;
      }
      goto LABEL_9;
    case 66:
    case 69:
      if ( a1 != 106 )
        goto LABEL_9;
      return 88;
    case 71:
    case 75:
    case 99:
      result = (unsigned int)*v6;
      if ( (_DWORD)result == 70 )
        return result;
      if ( !sub_FFF130(a1) )
        return 103;
      goto LABEL_12;
    default:
LABEL_9:
      if ( !sub_FFF130(a1) )
        return 103;
LABEL_12:
      if ( a4 == 103 )
      {
        v12 = v8 - 1;
        if ( v12 < 0 )
          return 103;
      }
      else
      {
        if ( !v8 )
          return 103;
        if ( a4 == *v6 )
        {
          v12 = 0;
        }
        else
        {
          v10 = 1;
          v11 = (unsigned int)(v8 - 1) + 1LL;
          do
          {
            v12 = v10;
            if ( v11 == v10 )
              return 103;
            ++v10;
          }
          while ( a4 != v6[v10 - 1] );
        }
      }
      v13 = &v6[v12];
      break;
  }
  while ( 1 )
  {
    --v12;
    if ( (unsigned __int8)sub_20EC3B0(*v13, (unsigned int)a2, v5) )
      break;
    --v13;
    if ( v12 == -1 )
      return 103;
  }
  ptr[0] = v21;
  ptr[1] = (void *)0x200000000LL;
  if ( v12 == -1 )
    return 103;
  v14 = &v6[v12];
  v15 = v6 - 1;
  while ( 1 )
  {
    if ( sub_FFF130(*v14) )
    {
      v16 = (unsigned int)*v14;
      LODWORD(ptr[1]) = 0;
      sub_FFF220((__int64)ptr, v16);
      v17 = ptr[0];
      if ( *(_DWORD *)ptr[0] != 103 )
        break;
    }
    if ( --v14 == v15 )
    {
      v17 = ptr[0];
      result = 103;
      goto LABEL_29;
    }
  }
  result = *((unsigned int *)ptr[0] + LODWORD(ptr[1]) - 1);
LABEL_29:
  if ( v17 != v21 )
  {
    v19 = result;
    free(v17);
    return v19;
  }
  return result;
}
