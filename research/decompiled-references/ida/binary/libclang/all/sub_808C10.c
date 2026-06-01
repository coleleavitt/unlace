__int64 *__fastcall sub_808C10(__int64 *a1, __int64 a2)
{
  unsigned int v3; // ebp
  void *v4; // rcx
  __int64 v5; // rsi
  void *v6; // rax
  _BYTE *v7; // r13
  __int64 v8; // rdi
  char *v9; // rbp
  __int64 v11; // rax
  void *v12; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v13; // [rsp+8h] [rbp-A0h]
  void *v14; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-90h]
  char v16; // [rsp+1Ch] [rbp-8Ch]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-80h]
  _BYTE v19[112]; // [rsp+38h] [rbp-70h] BYREF

  v3 = *(_DWORD *)(a2 + 32);
  v4 = *(void **)(a2 + 16);
  v5 = *(unsigned int *)(a2 + 24);
  ptr = v19;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
  if ( (unsigned __int64)(v5 + 63) > 0x7F )
  {
    sub_2585D40(&v12, v5, (unsigned __int64)(v5 + 63) >> 6, v4);
    if ( v13 > 0x40 )
    {
      v6 = *(void **)v12;
      goto LABEL_4;
    }
  }
  else
  {
    v13 = v5;
    v12 = v4;
  }
  v6 = v12;
LABEL_4:
  v15 = 64;
  v14 = v6;
  v16 = 1;
  sub_B17B60(&ptr, &v14, v3);
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  v7 = ptr;
  v8 = (__int64)(a1 + 2);
  v9 = (char *)n[0];
  *a1 = (__int64)(a1 + 2);
  if ( !v7 && v9 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v14 = v9;
  if ( (unsigned __int64)v9 > 0xF )
  {
    v11 = std::string::_M_create();
    *a1 = v11;
    v8 = v11;
    a1[2] = (__int64)v14;
LABEL_23:
    memcpy((void *)v8, v7, (size_t)v9);
    v9 = (char *)v14;
    v8 = *a1;
    goto LABEL_15;
  }
  if ( v9 == (_BYTE *)&dword_0 + 1 )
  {
    *((_BYTE *)a1 + 16) = *v7;
    goto LABEL_15;
  }
  if ( v9 )
    goto LABEL_23;
LABEL_15:
  a1[1] = (__int64)v9;
  v9[v8] = 0;
  if ( ptr != v19 )
    free(ptr);
  return a1;
}

