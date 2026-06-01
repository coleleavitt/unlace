/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DB20
// Address: 0x0004DB20

//----- (0004DB20) --------------------------------------------------------
unsigned int __fastcall sub_4DB20(_DWORD *a1, int a2, int a3)
{
  char *v4; // eax
  int qerrno; // eax
  unsigned int v6; // esi
  int file_line; // eax
  int v8; // ecx
  _DWORD *v9; // edx
  unsigned int v10; // edi
  int v11; // ecx
  unsigned int v12; // ecx
  char *v13; // eax
  size_t v14; // edx
  _DWORD *v15; // ecx
  int v16; // eax
  int v17; // edi
  unsigned int v18; // esi
  _BYTE *v19; // eax
  char *v20; // eax
  const char *v21; // eax
  size_t v22; // edx
  _DWORD *v23; // ecx
  int v24; // eax
  int v25; // edi
  unsigned int v26; // esi
  _BYTE *v27; // eax
  size_t v29; // [esp+4h] [ebp-38h]
  size_t v30; // [esp+8h] [ebp-34h]
  size_t v31; // [esp+8h] [ebp-34h]
  const char *v33; // [esp+Ch] [ebp-30h]
  size_t v34; // [esp+10h] [ebp-2Ch]
  unsigned int v35; // [esp+14h] [ebp-28h]
  void *v36; // [esp+18h] [ebp-24h] BYREF
  int v37; // [esp+1Ch] [ebp-20h]
  int v38; // [esp+20h] [ebp-1Ch]
  _DWORD v39[6]; // [esp+24h] [ebp-18h] BYREF

  v39[1] = __readgsdword(0x14u);
  if ( a3 )
  {
    v4 = *(char **)a3;
    if ( *(_DWORD *)a3 )
    {
      *(_DWORD *)(a3 + 4) = 0;
      qfree(v4);
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 8) = 0;
    }
    qerrno = get_qerrno();
    if ( qerrno )
    {
      v6 = qerrno;
      file_line = lex_get_file_line(a1, v39, nullptr, 0);
      v8 = v39[0];
      if ( v39[0] != -1 )
      {
        if ( file_line )
        {
          sub_1F400(a3, "%s", file_line);
          v8 = v39[0];
        }
        v9 = (_DWORD *)a3;
        if ( v8 )
        {
          v10 = *(_DWORD *)(a3 + 4);
          if ( v10 >= 2 )
          {
            v12 = v10 + 1;
            if ( *(_DWORD *)(a3 + 8) >= v10 + 1 )
            {
              v13 = *(char **)a3;
            }
            else
            {
              v13 = (char *)qvector_reserve(a3, *(void **)a3, v10 + 1, 1u);
              v12 = v10 + 1;
              v9 = (_DWORD *)a3;
              *(_DWORD *)a3 = v13;
            }
            v9[1] = v12;
            v13[v10 - 1] = 44;
            *(_BYTE *)(*v9 + v10) = 0;
            v11 = v39[0];
          }
          else
          {
            v11 = v8 - 1;
            v39[0] = v11;
          }
          sub_31370((int)v9, "%d", v11);
          v9 = (_DWORD *)a3;
        }
        if ( v9[1] >= 2u )
        {
          v14 = __strlen_chk(": ", 3);
          v15 = (_DWORD *)a3;
          v16 = *(_DWORD *)(a3 + 4);
          v17 = v16 - 1;
          if ( !v16 )
            v17 = 0;
          v30 = v17 + v14;
          v35 = v6;
          if ( *(_DWORD *)(a3 + 8) >= v17 + v14 + 1 )
          {
            v18 = v17 + v14 + 1;
            v19 = *(_BYTE **)a3;
          }
          else
          {
            v34 = v14;
            v18 = v17 + v14 + 1;
            v19 = qvector_reserve(a3, *(void **)a3, v18, 1u);
            v14 = v34;
            v15 = (_DWORD *)a3;
            *(_DWORD *)a3 = v19;
          }
          v15[1] = v18;
          v19[v30] = 0;
          memmove((void *)(*v15 + v17), ": ", v14);
          v6 = v35;
        }
      }
      if ( v6 == 47 )
      {
        v36 = nullptr;
        v37 = 0;
        v38 = 0;
        v20 = lex_print_token((int)&v36, a2);
        set_error_string(0, v20);
        if ( v36 )
        {
          v37 = 0;
          qfree(v36);
          v36 = nullptr;
          v38 = 0;
        }
      }
      v21 = qstrerror(v6);
      if ( v21 )
      {
        v33 = v21;
        v22 = strlen(v21);
        v23 = (_DWORD *)a3;
        v24 = *(_DWORD *)(a3 + 4);
        v25 = v24 - 1;
        if ( !v24 )
          v25 = 0;
        v29 = v25 + v22;
        v26 = v25 + v22 + 1;
        if ( *(_DWORD *)(a3 + 8) >= v26 )
        {
          v27 = *(_BYTE **)a3;
        }
        else
        {
          v31 = v22;
          v27 = qvector_reserve(a3, *(void **)a3, v25 + v22 + 1, 1u);
          v22 = v31;
          v23 = (_DWORD *)a3;
          *(_DWORD *)a3 = v27;
        }
        v23[1] = v26;
        v27[v29] = 0;
        memmove((void *)(*v23 + v25), v33, v22);
      }
    }
  }
  return __readgsdword(0x14u);
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
