/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C738
// Address: 0x0007C738

//----- (0007C738) --------------------------------------------------------
int __fastcall sub_7C738(int a1, const char *a2, unsigned int a3, unsigned int a4, int a5)
{
  FILE *v8; // r0
  __int64 v9; // r0
  signed int v10; // r5
  unsigned int v11; // r7
  int v12; // r7
  int v13; // r6
  int v14; // r0
  size_t v15; // r5
  unsigned int v16; // r4
  void *v17; // r0
  bool v18; // zf
  const char *v19; // r0
  const char *v20; // r5
  size_t v21; // r0
  size_t v22; // r4
  unsigned int v23; // r6
  void *v24; // r0
  const char *v26; // r0
  FILE *stream; // [sp+14h] [bp-Ch]
  _BYTE v29[4]; // [sp+18h] [bp-8h] BYREF

  v8 = sub_7C4F4(a2, "rbe", 8);
  if ( !v8 )
  {
    set_qerrno(1);
    v26 = (const char *)qerrstr(-1);
    sub_1C9E4("Can't open for read file '%s': %s", a2, v26);
  }
  stream = v8;
  v9 = qfsize(v8);
  v10 = v9;
  if ( v9 < 1 || (v11 = HIDWORD(v9), __SPAIR64__(a4, a3) < v9) )
  {
    v12 = a5;
    v13 = 0;
    if ( !a5 )
      goto LABEL_27;
    v14 = _strlen_chk("wrong file size", 16);
    if ( !v14 )
      goto LABEL_22;
    v15 = v14;
    v16 = v14 + 1;
    if ( *(_DWORD *)(a5 + 8) >= (unsigned int)(v14 + 1) )
    {
      v17 = *(void **)a5;
    }
    else
    {
      v17 = qvector_reserve(a5, *(void **)a5, v16, 1u);
      *(_DWORD *)a5 = v17;
    }
    *(_DWORD *)(a5 + 4) = v16;
    memmove(v17, "wrong file size", v15);
    v13 = 0;
    *(_BYTE *)(*(_DWORD *)a5 + v15) = 0;
  }
  else
  {
    HIDWORD(v9) = *(_DWORD *)(a1 + 4);
    if ( HIDWORD(v9) >= (unsigned int)v9 )
    {
      if ( HIDWORD(v9) != (_DWORD)v9 )
      {
        v29[0] = 0;
        sub_370F6((void **)a1, v9, v29);
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 8) >= (unsigned int)v9 )
      {
        LODWORD(v9) = *(_DWORD *)a1;
      }
      else
      {
        LODWORD(v9) = qvector_reserve(a1, *(void **)a1, v9, 1u);
        *(_DWORD *)a1 = v9;
        HIDWORD(v9) = *(_DWORD *)(a1 + 4);
      }
      memset((void *)(v9 + HIDWORD(v9)), 0, v10 - HIDWORD(v9));
      *(_DWORD *)(a1 + 4) = v10;
    }
    v13 = 1;
    v18 = qfread(stream, *(void **)a1, v10) == __PAIR64__(v11, v10);
    v12 = a5;
    if ( !v18 )
    {
      v13 = 0;
      if ( a5 )
      {
        v19 = qstrerror(0xFFFFFFFF);
        if ( v19 )
        {
          v20 = v19;
          v21 = strlen(v19);
          if ( v21 )
          {
            v22 = v21;
            v23 = v21 + 1;
            if ( *(_DWORD *)(a5 + 8) >= v21 + 1 )
            {
              v24 = *(void **)a5;
            }
            else
            {
              v24 = qvector_reserve(a5, *(void **)a5, v23, 1u);
              *(_DWORD *)a5 = v24;
            }
            *(_DWORD *)(a5 + 4) = v23;
            memmove(v24, v20, v22);
            v13 = 0;
            *(_BYTE *)(*(_DWORD *)a5 + v22) = 0;
            goto LABEL_27;
          }
        }
LABEL_22:
        v13 = 0;
        *(_DWORD *)(v12 + 4) = 0;
      }
    }
  }
LABEL_27:
  qfclose(stream);
  return v13;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
