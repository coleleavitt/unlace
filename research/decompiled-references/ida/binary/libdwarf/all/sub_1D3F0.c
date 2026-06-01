__int64 __fastcall sub_1D3F0(__int64 a1, unsigned __int64 a2, _QWORD *a3, int *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  size_t v7; // r14
  size_t v8; // rax
  size_t v10; // rdx
  int v11; // ecx
  char *v12; // rax
  __int64 v13; // rdx
  char *v14; // r13
  __int64 v15; // rbp
  unsigned int random; // eax
  __int64 v17; // [rsp+0h] [rbp-48h]
  __int64 v18; // [rsp+0h] [rbp-48h]
  unsigned int v19; // [rsp+0h] [rbp-48h]

  if ( !a2 || a2 >= *(_QWORD *)(a1 + 168) )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(a1 + 192) + 184 * a2;
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
  {
LABEL_4:
    *a3 = v5;
    return 0;
  }
  v7 = *(_QWORD *)(v4 + 56);
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 < v7 || (v10 = *(_QWORD *)(v4 + 48), v8 < v10) )
  {
    v11 = 446;
    goto LABEL_16;
  }
  v17 = *(_QWORD *)(v4 + 48);
  v11 = 446;
  if ( v8 < v7 + v10 )
  {
LABEL_16:
    *a4 = v11;
    return 1;
  }
  *(_DWORD *)(v4 + 112) = 1;
  v12 = (char *)malloc(v7);
  v13 = v17;
  *(_QWORD *)(v4 + 104) = v12;
  v14 = v12;
  if ( !v12 )
  {
    v11 = 62;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v15 = 2146435072;
    v18 = v13;
    if ( v7 <= 0x7FF00000 )
      v15 = v7;
    random = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v14);
    if ( random )
      break;
    v13 = v15 + v18;
    v14 += v15;
    v7 -= v15;
    if ( !v7 )
    {
      *(_BYTE *)(v4 + 116) = 1;
      v5 = *(_QWORD *)(v4 + 104);
      *(_DWORD *)(v4 + 112) = 1;
      goto LABEL_4;
    }
  }
  v19 = random;
  free(*(void **)(v4 + 104));
  *(_QWORD *)(v4 + 104) = 0;
  return v19;
}

