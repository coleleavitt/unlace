void __fastcall Z3_get_string_contents(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbp
  char v6; // r12
  char *v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  void *ptr; // [rsp+0h] [rbp-88h] BYREF
  __int64 v15; // [rsp+8h] [rbp-80h]
  _BYTE v16[120]; // [rsp+10h] [rbp-78h] BYREF

  v4 = a3;
  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_297CE0(a1, a2, a3);
  ptr = v16;
  *(_DWORD *)(a1 + 1520) = 0;
  v15 = 0x1000000000LL;
  if ( (unsigned __int8)sub_163BAA0(a1 + 464, a2, &ptr) )
  {
    if ( (_DWORD)v4 == (_DWORD)v15 )
    {
      v7 = (char *)ptr;
      if ( (_DWORD)v4 )
      {
        if ( (unsigned int)(v4 - 1) <= 2 || (unsigned __int64)(a4 - ((_QWORD)ptr + 4)) <= 8 )
        {
          v12 = 4 * v4;
          v13 = 0;
          do
          {
            *(_DWORD *)(a4 + v13) = *(_DWORD *)&v7[v13];
            v13 += 4;
          }
          while ( v13 != v12 );
        }
        else
        {
          v8 = 0;
          do
          {
            *(__m128i *)(a4 + v8) = _mm_loadu_si128((const __m128i *)&v7[v8]);
            v8 += 16;
          }
          while ( 16LL * ((unsigned int)v4 >> 2) != v8 );
          v9 = v4 & 0xFFFFFFFC;
          if ( (v4 & 3) != 0 )
          {
            *(_DWORD *)(a4 + 4LL * v9) = *(_DWORD *)&v7[4 * v9];
            v10 = v9 + 1;
            if ( (unsigned int)v10 < (unsigned int)v4 )
            {
              v11 = v9 + 2;
              *(_DWORD *)(a4 + 4 * v10) = *(_DWORD *)&v7[4 * v10];
              if ( (unsigned int)v11 < (unsigned int)v4 )
                *(_DWORD *)(a4 + 4 * v11) = *(_DWORD *)&v7[4 * v11];
            }
          }
        }
      }
      if ( v7 )
      {
        if ( v7 != v16 )
          sub_186B220(v7);
      }
LABEL_17:
      if ( !v6 )
        return;
LABEL_23:
      byte_1C7EBA0 = 1;
      return;
    }
    sub_24EA30(a1, 3u, "string size disagrees with supplied buffer length");
  }
  else
  {
    sub_24EA30(a1, 3u, "expression is not a string literal");
  }
  if ( !ptr || ptr == v16 )
    goto LABEL_17;
  sub_186B220(ptr);
  if ( v6 )
    goto LABEL_23;
}

