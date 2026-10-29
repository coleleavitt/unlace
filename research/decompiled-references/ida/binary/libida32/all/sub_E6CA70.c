__int64 __fastcall sub_E6CA70(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  void *v4; // rdi
  _BYTE *v5; // rax
  size_t v6; // rdx

  v3 = *(_DWORD *)(a1 + 20);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    v5 = *(_BYTE **)(a2 + 8);
    if ( v5 )
    {
      v6 = *(unsigned int *)(a2 + 16);
      if ( (unsigned int)v6 <= v3 )
      {
        *(_DWORD *)(a1 + 16) = v6;
        memcpy(v4, v5, v6);
        return a1;
      }
      if ( !v3 )
      {
        if ( !*(_DWORD *)(a2 + 20) )
        {
LABEL_6:
          *(_QWORD *)(a1 + 8) = v5;
          *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
          return a1;
        }
        goto LABEL_14;
      }
    }
    else if ( !v3 )
    {
LABEL_9:
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      return a1;
    }
  }
  else if ( !v3 )
  {
    goto LABEL_12;
  }
  free(v4);
  *(_DWORD *)(a1 + 20) = 0;
LABEL_12:
  v5 = *(_BYTE **)(a2 + 8);
  if ( !v5 )
    goto LABEL_9;
  if ( !*(_DWORD *)(a2 + 20) )
    goto LABEL_6;
LABEL_14:
  *(_DWORD *)(a1 + 16) = 0;
  sub_E6B7E0(v5, &v5[*(unsigned int *)(a2 + 16)], (void **)(a1 + 8), (_DWORD *)(a1 + 16), (unsigned int *)(a1 + 20));
  return a1;
}

