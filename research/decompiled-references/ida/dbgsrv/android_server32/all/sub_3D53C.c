/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D53C
// Address: 0x0003D53C

//----- (0003D53C) --------------------------------------------------------
int __fastcall sub_3D53C(_DWORD *a1, int a2, int a3)
{
  _BYTE *v5; // r0
  int qerrno; // r0
  unsigned int v7; // r6
  const char *file_line; // r2
  int v9; // r0
  unsigned int v10; // r5
  int v11; // r2
  unsigned int v12; // r2
  _BYTE *v13; // r0
  size_t v14; // r2
  int v15; // r0
  int v16; // r5
  size_t v17; // r3
  unsigned int v18; // r7
  _BYTE *v19; // r0
  char *v20; // r0
  const char *v21; // r0
  const char *v22; // r6
  size_t v23; // r2
  int v24; // r0
  int v25; // r7
  size_t v26; // r3
  unsigned int v27; // r5
  _BYTE *v28; // r0
  size_t v30; // [sp+4h] [bp-28h]
  size_t v31; // [sp+8h] [bp-24h]
  size_t v32; // [sp+8h] [bp-24h]
  size_t v34; // [sp+10h] [bp-1Ch]
  void *v35; // [sp+18h] [bp-14h] BYREF
  int v36; // [sp+1Ch] [bp-10h]
  int v37; // [sp+20h] [bp-Ch]
  _DWORD v38[2]; // [sp+24h] [bp-8h] BYREF

  if ( a3 )
  {
    v5 = *(_BYTE **)a3;
    if ( *(_DWORD *)a3 )
    {
      *(_DWORD *)(a3 + 4) = 0;
      qfree(v5);
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)a3 = 0;
    }
    qerrno = get_qerrno();
    if ( qerrno )
    {
      v7 = qerrno;
      file_line = (const char *)lex_get_file_line(a1, v38, nullptr, 0);
      v9 = v38[0];
      if ( v38[0] != -1 )
      {
        if ( file_line )
        {
          sub_1DA58(a3, "%s", file_line);
          v9 = v38[0];
        }
        if ( v9 )
        {
          v10 = *(_DWORD *)(a3 + 4);
          if ( v10 >= 2 )
          {
            v12 = v10 - 1;
            if ( *(_DWORD *)(a3 + 8) >= v10 + 1 )
            {
              v13 = *(_BYTE **)a3;
            }
            else
            {
              v13 = qvector_reserve(a3, *(void **)a3, v10 + 1, 1u);
              v12 = v10 - 1;
              *(_DWORD *)a3 = v13;
            }
            *(_DWORD *)(a3 + 4) = v10 + 1;
            v13[v12] = 44;
            *(_BYTE *)(*(_DWORD *)a3 + v10) = 0;
            v11 = v38[0];
          }
          else
          {
            v11 = v9 - 1;
            v38[0] = v9 - 1;
          }
          sub_28C8C(a3, "%d", v11);
        }
        if ( *(_DWORD *)(a3 + 4) >= 2u )
        {
          v14 = _strlen_chk(": ", 3);
          v15 = *(_DWORD *)(a3 + 4);
          v16 = v15 - 1;
          if ( !v15 )
            v16 = 0;
          v17 = v16 + v14;
          v18 = v16 + v14 + 1;
          if ( *(_DWORD *)(a3 + 8) >= v18 )
          {
            v19 = *(_BYTE **)a3;
          }
          else
          {
            v30 = v16 + v14;
            v31 = v14;
            v19 = qvector_reserve(a3, *(void **)a3, v16 + v14 + 1, 1u);
            v17 = v30;
            v14 = v31;
            *(_DWORD *)a3 = v19;
          }
          *(_DWORD *)(a3 + 4) = v18;
          v19[v17] = 0;
          memmove((void *)(*(_DWORD *)a3 + v16), ": ", v14);
        }
      }
      if ( v7 == 47 )
      {
        v36 = 0;
        v35 = nullptr;
        v37 = 0;
        v20 = lex_print_token((int)&v35, a2);
        set_error_string(0, v20);
        if ( v35 )
        {
          v36 = 0;
          qfree(v35);
          v37 = 0;
          v35 = nullptr;
        }
      }
      v21 = qstrerror(v7);
      if ( v21 )
      {
        v22 = v21;
        v23 = strlen(v21);
        v24 = *(_DWORD *)(a3 + 4);
        v25 = v24 - 1;
        if ( !v24 )
          v25 = 0;
        v26 = v25 + v23;
        v27 = v25 + v23 + 1;
        if ( *(_DWORD *)(a3 + 8) >= v27 )
        {
          v28 = *(_BYTE **)a3;
        }
        else
        {
          v32 = v25 + v23;
          v34 = v23;
          v28 = qvector_reserve(a3, *(void **)a3, v25 + v23 + 1, 1u);
          v26 = v32;
          v23 = v34;
          *(_DWORD *)a3 = v28;
        }
        *(_DWORD *)(a3 + 4) = v27;
        v28[v26] = 0;
        memmove((void *)(*(_DWORD *)a3 + v25), v22, v23);
      }
    }
  }
  return _stack_chk_guard - v38[1];
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
