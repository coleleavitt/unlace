void __fastcall sub_CB4D0(__int64 *a1, const char *a2, const void *a3)
{
  _QWORD *v4; // r12
  size_t v5; // rax
  size_t v6; // rbx
  void *v7; // rdi
  size_t v8; // rbp
  __int64 v9; // rax

  if ( a2 && *a2 )
  {
    v4 = (_QWORD *)sub_CB430(a1, a2);
    if ( !v4 )
      v4 = (_QWORD *)sub_CB200(a1, a2, a3);
    if ( a3 && (v5 = strlen((const char *)a3), (v6 = v5) != 0) )
    {
      v7 = (void *)v4[3];
      v8 = v5 + 1;
      if ( v4[5] < v5 + 1 )
      {
        v9 = qvector_reserve();
        v4[3] = v9;
        v7 = (void *)v9;
      }
      v4[4] = v8;
      memmove(v7, a3, v6);
      *(_BYTE *)(v4[3] + v6) = 0;
    }
    else
    {
      v4[4] = 0;
    }
  }
}

