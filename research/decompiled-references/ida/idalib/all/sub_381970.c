__int64 __fastcall sub_381970(__int64 a1, const char *a2, char a3)
{
  __int64 result; // rax
  size_t v6; // rax
  size_t v7; // r13
  const char *v8; // rdi
  void *v9; // rdi
  size_t v10; // r14
  __int64 v11; // rax

  result = getinf_flag(44, 32);
  if ( !a2 || !(_BYTE)result )
    goto LABEL_3;
  v6 = strlen(a2);
  v7 = v6;
  if ( v6 )
  {
    v9 = *(void **)(a1 + 112);
    v10 = v6 + 1;
    if ( *(_QWORD *)(a1 + 128) < v6 + 1 )
    {
      v11 = qvector_reserve(a1 + 112, *(_QWORD *)(a1 + 112), v10, 1);
      *(_QWORD *)(a1 + 112) = v11;
      v9 = (void *)v11;
    }
    *(_QWORD *)(a1 + 120) = v10;
    memmove(v9, a2, v7);
    *(_BYTE *)(*(_QWORD *)(a1 + 112) + v7) = 0;
    if ( *(_QWORD *)(a1 + 120) )
    {
      v8 = *(const char **)(a1 + 112);
      goto LABEL_9;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 120) = 0;
  }
  v8 = haystack;
LABEL_9:
  result = tag_strlen(v8);
  *(_QWORD *)(a1 + 136) = result;
LABEL_3:
  if ( (a3 & 2) != 0 )
    *(_DWORD *)(a1 + 144) |= 0x400u;
  return result;
}
