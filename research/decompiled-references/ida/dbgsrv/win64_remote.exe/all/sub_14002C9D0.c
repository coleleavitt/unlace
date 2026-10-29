/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002C9D0
// Address: 0x000000014002C9D0

//----- (000000014002C9D0) ----------------------------------------------------
__int64 __fastcall sub_14002C9D0(__int64 a1, const char *a2)
{
  __int64 v4; // rdi
  const char ***v5; // rbx
  const char *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  size_t v10; // rax

  if ( a2 && (v4 = *(_QWORD *)(a1 + 8) - 1LL, v4 >= 0) )
  {
    v5 = (const char ***)(*(_QWORD *)a1 + 8 * v4);
    while ( 1 )
    {
      v6 = Str1;
      if ( (*v5)[1] )
        v6 = **v5;
      if ( !strcmp(v6, a2) )
        break;
      --v5;
      if ( --v4 < 0 )
        goto LABEL_8;
    }
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
    if ( *(_DWORD *)(v8 + 136) )
      return -1;
    sub_14002D230(*(_QWORD *)(*(_QWORD *)a1 + 8 * v4));
  }
  else
  {
LABEL_8:
    v7 = operator new(0x90u);
    v8 = (__int64)v7;
    if ( v7 )
    {
      *v7 = 0;
      v7[1] = 0;
      v7[2] = 0;
      v7[4] = 0;
      v7[5] = 0;
      v7[6] = 0;
      v7[8] = 0;
      v7[9] = 0;
      v7[10] = 0;
      v7[11] = 0;
      v7[12] = 0;
      v7[13] = 0;
      v7[14] = 0;
      v7[15] = 0;
      v7[16] = 0;
    }
    else
    {
      v8 = 0;
    }
    if ( a2 && (v10 = strlen(a2)) != 0 )
      sub_140001810(v8, a2, v10);
    else
      *(_QWORD *)(v8 + 8) = 0;
    v4 = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int64)(v4 + 1) > *(_QWORD *)(a1 + 16) )
      *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v4 + 1, 8u);
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (*(_QWORD *)(a1 + 8))++) = v8;
  }
  *(_DWORD *)(v8 + 136) = -1;
  *(_DWORD *)(v8 + 24) = 0;
  return v4;
}
