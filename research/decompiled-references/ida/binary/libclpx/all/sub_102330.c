__int64 __fastcall sub_102330(_QWORD *a1, int a2, FILE *a3)
{
  size_t v4; // rax
  unsigned int v5; // edx
  size_t v7; // rbx
  void *v8; // rax
  signed int ptr[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v4 = fread(ptr, 4u, 1u, a3);
  v5 = 1;
  if ( v4 != 1 )
    return v5;
  v5 = ptr[0];
  if ( !ptr[0] )
    return v5;
  if ( ptr[0] != a2 )
    return 2;
  v7 = ptr[0];
  if ( (unsigned __int64)ptr[0] > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v8 = (void *)operator new[](8LL * ptr[0]);
  *a1 = v8;
  return v7 != fread(v8, 8u, v7, a3);
}

