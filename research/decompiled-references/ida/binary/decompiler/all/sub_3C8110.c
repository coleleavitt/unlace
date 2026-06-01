__int64 __fastcall sub_3C8110(__int64 *a1, const char *a2)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // r15
  const char *v6; // rdi
  size_t v8; // rax
  size_t v9; // r12
  __int64 v10; // rax
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax
  __int64 v14; // [rsp+8h] [rbp-40h]

  v3 = a1[1];
  v14 = *a1;
  if ( v3 )
  {
    v4 = *a1;
    v5 = 0;
    while ( 1 )
    {
      v6 = s1;
      if ( *(_QWORD *)(v4 + 8) )
        v6 = *(const char **)v4;
      if ( !strcmp(v6, a2) )
        break;
      ++v5;
      v4 += 40;
      if ( v3 == v5 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( a1[2] < (unsigned __int64)(v3 + 1) )
    {
      v10 = qvector_reserve();
      v3 = a1[1];
      v14 = v10;
      *a1 = v10;
    }
    v4 = v14 + 40 * v3;
    *(_QWORD *)v4 = 0;
    *(_DWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 32) = 0;
    *(_OWORD *)(v4 + 8) = 0;
    ++a1[1];
    if ( a2 && (v8 = strlen(a2), (v9 = v8) != 0) )
    {
      v11 = *(void **)v4;
      v12 = v8 + 1;
      if ( *(_QWORD *)(v4 + 16) < v8 + 1 )
      {
        v13 = qvector_reserve();
        *(_QWORD *)v4 = v13;
        v11 = (void *)v13;
      }
      *(_QWORD *)(v4 + 8) = v12;
      memmove(v11, a2, v9);
      *(_BYTE *)(*(_QWORD *)v4 + v9) = 0;
    }
    else
    {
      *(_QWORD *)(v4 + 8) = 0;
    }
  }
  return v4 + 24;
}
