/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AD280
// Address: 0x000AD280

//----- (000AD280) --------------------------------------------------------
int __cdecl sub_AD280(int a1, char *a2, __int64 a3, int a4)
{
  FILE *v4; // eax
  __int64 v5; // rax
  int v6; // edi
  int v7; // esi
  void **v8; // edx
  unsigned int v9; // ecx
  char *v10; // eax
  int v11; // eax
  size_t v12; // edi
  int v13; // esi
  _DWORD *v14; // ecx
  void *v15; // eax
  int v16; // eax
  int v17; // edi
  int v18; // esi
  int v19; // eax
  int v20; // esi
  FILE *v21; // edi
  const char *v22; // eax
  const char *v23; // esi
  size_t v24; // eax
  size_t v25; // edx
  size_t v26; // edi
  _DWORD *v27; // ecx
  void *v28; // eax
  _DWORD *v29; // esi
  const char *v31; // [esp-Ch] [ebp-38h]
  FILE *v32; // [esp+Ch] [ebp-20h]
  int v33; // [esp+Ch] [ebp-20h]
  size_t v34; // [esp+10h] [ebp-1Ch]
  char v35; // [esp+17h] [ebp-15h] BYREF
  unsigned int v36; // [esp+18h] [ebp-14h]

  v36 = __readgsdword(0x14u);
  v4 = sub_ACE00(a2, "rbe", 8);
  if ( !v4 )
  {
    set_qerrno(1);
    qerrstr(-1);
    sub_1DE10("Can't open for read file '%s': %s");
  }
  v32 = v4;
  LODWORD(v5) = qfsize(v4);
  v6 = v5;
  if ( v5 < 1 || (v7 = HIDWORD(v5), a3 < v5) )
  {
    if ( a4 )
    {
      v11 = __strlen_chk("wrong file size", 16);
      if ( v11 )
      {
        v12 = v11;
        v13 = v11 + 1;
        v14 = (_DWORD *)a4;
        if ( *(_DWORD *)(a4 + 8) >= (unsigned int)(v11 + 1) )
        {
          v15 = *(void **)a4;
        }
        else
        {
          v15 = qvector_reserve(a4, *(void **)a4, v11 + 1, 1u);
          v14 = (_DWORD *)a4;
          *(_DWORD *)a4 = v15;
        }
        v14[1] = v13;
        v29 = v14;
        memmove(v15, "wrong file size", v12);
        goto LABEL_28;
      }
      *(_DWORD *)(a4 + 4) = 0;
    }
LABEL_29:
    v19 = 0;
    v21 = v32;
    goto LABEL_30;
  }
  v8 = (void **)a1;
  v9 = *(_DWORD *)(a1 + 4);
  if ( v9 >= (unsigned int)v5 )
  {
    if ( v9 != (_DWORD)v5 )
    {
      v35 = 0;
      sub_43860((char **)a1, v5, &v35);
      v8 = (void **)a1;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 8) >= (unsigned int)v5 )
    {
      v10 = *(char **)a1;
    }
    else
    {
      v10 = (char *)qvector_reserve(a1, *(void **)a1, v5, 1u);
      *(_DWORD *)a1 = v10;
      v9 = *(_DWORD *)(a1 + 4);
    }
    memset(&v10[v9], 0, v6 - v9);
    *(_DWORD *)(a1 + 4) = v6;
    v8 = (void **)a1;
  }
  v16 = qfread(v32, *v8, v6);
  v17 = v16 ^ v6;
  v19 = v16 >> 31;
  v18 = v19 ^ v7;
  LOBYTE(v19) = 1;
  v20 = v17 | v18;
  v21 = v32;
  if ( v20 )
  {
    if ( a4 )
    {
      v22 = qstrerror(0xFFFFFFFF);
      if ( v22 )
      {
        v23 = v22;
        v24 = strlen(v22);
        if ( v24 )
        {
          v25 = v24;
          v26 = v24 + 1;
          v27 = (_DWORD *)a4;
          if ( *(_DWORD *)(a4 + 8) >= v24 + 1 )
          {
            v28 = *(void **)a4;
          }
          else
          {
            v34 = v24;
            v28 = qvector_reserve(a4, *(void **)a4, v24 + 1, 1u);
            v25 = v34;
            v27 = (_DWORD *)a4;
            *(_DWORD *)a4 = v28;
          }
          v27[1] = v26;
          v31 = v23;
          v29 = v27;
          v12 = v25;
          memmove(v28, v31, v25);
LABEL_28:
          *(_BYTE *)(*v29 + v12) = 0;
          goto LABEL_29;
        }
      }
      *(_DWORD *)(a4 + 4) = 0;
    }
    v19 = 0;
  }
LABEL_30:
  v33 = v19;
  qfclose(v21);
  return v33;
}
// AD2DC: variable 'v5' is possibly undefined
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
