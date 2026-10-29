__int64 __fastcall sub_7B0A70(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  size_t v4; // rax
  size_t v5; // r12
  size_t v7; // r13
  void *v8; // rax

  v2 = operator new(0x28u);
  *(_BYTE *)(v2 + 8) = 11;
  v3 = v2;
  *(_DWORD *)(v2 + 12) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)v2 = &off_2B116B0;
  *(_OWORD *)(v2 + 24) = 0;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4;
    if ( v4 )
    {
      v7 = v4 + 1;
      v8 = (void *)qvector_reserve(v3 + 16, 0, v4 + 1, 1);
      *(_QWORD *)(v3 + 24) = v7;
      *(_QWORD *)(v3 + 16) = v8;
      memmove(v8, a2, v5);
      *(_BYTE *)(*(_QWORD *)(v3 + 16) + v5) = 0;
    }
  }
  *(_DWORD *)(v3 + 12) = -559038737;
  return v3;
}

