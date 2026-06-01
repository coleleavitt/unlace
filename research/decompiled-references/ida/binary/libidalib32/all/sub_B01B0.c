__int64 __fastcall sub_B01B0(__int64 a1, const void *a2)
{
  unsigned int v3; // ebp
  char *v5; // r13
  size_t v6; // rax
  size_t v7; // r12
  void *v8; // rdi
  size_t v9; // r14
  __int64 v10; // rax

  if ( qword_250BC0 != qword_250BA0 )
  {
    sub_A1190((__int64)xmmword_250E60, (__int64)xmmword_250B60);
    sub_A0DA0(xmmword_250B60);
  }
  v3 = sub_AFE80(xmmword_250E60, a2) & 1;
  if ( !a1 || !(_BYTE)v3 )
    return v3;
  if ( !qword_250F90 || (v5 = s) == nullptr || (v6 = strlen(s), (v7 = v6) == 0) )
  {
    *(_QWORD *)(a1 + 8) = 0;
    return v3;
  }
  v8 = *(void **)a1;
  v9 = v6 + 1;
  if ( *(_QWORD *)(a1 + 16) < v6 + 1 )
  {
    v10 = qvector_reserve();
    *(_QWORD *)a1 = v10;
    v8 = (void *)v10;
  }
  *(_QWORD *)(a1 + 8) = v9;
  memmove(v8, v5, v7);
  *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
  return v3;
}

