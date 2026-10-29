__int64 __fastcall sub_103CE0(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int8 a5)
{
  const void *v7; // r12
  size_t v8; // rax
  size_t v9; // rbp
  void *v10; // rdi
  size_t v11; // r13
  __int64 v12; // rax

  if ( a3 == 83 )
  {
    if ( *(_QWORD *)a2 != -1 && get_segm_by_sel() )
      get_segm_name();
  }
  else
  {
    if ( (a3 & 0xDF) != 0x49 )
      return sub_18B210(a1, a2, (unsigned int)a3, a4, a5);
    if ( *(_QWORD *)(a2 + 8)
      && (v7 = *(const void **)a2) != nullptr
      && (v8 = strlen(*(const char **)a2), (v9 = v8) != 0) )
    {
      v10 = *(void **)a4;
      v11 = v8 + 1;
      if ( *(_QWORD *)(a4 + 16) < v8 + 1 )
      {
        v12 = qvector_reserve();
        *(_QWORD *)a4 = v12;
        v10 = (void *)v12;
      }
      *(_QWORD *)(a4 + 8) = v11;
      memmove(v10, v7, v9);
      *(_BYTE *)(*(_QWORD *)a4 + v9) = 0;
    }
    else
    {
      *(_QWORD *)(a4 + 8) = 0;
    }
  }
  return 1;
}

