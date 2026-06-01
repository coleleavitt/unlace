/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414C50
// Address: 0x0000000000414C50

//----- (0000000000414C50) ----------------------------------------------------
__int64 __fastcall sub_414C50(__int64 a1, __int64 a2, double a3, double a4, double a5)
{
  FILE *v6; // rsi
  bool v8; // zf
  char *v9; // r12
  char *v10; // rax
  char *v11; // r12
  size_t v12; // rax
  char *v13; // r13
  unsigned int v14; // edi
  size_t v15; // rax
  size_t v16; // r14
  __int64 v17; // rax
  void *v18; // rdi
  unsigned __int64 v19; // r13
  void *v20; // rax
  void *ptr; // [rsp+10h] [rbp-40h] BYREF
  __int128 v22; // [rsp+18h] [rbp-38h]
  unsigned __int64 v23; // [rsp+28h] [rbp-28h]

  v23 = __readfsqword(0x28u);
  v6 = *(FILE **)(a1 + 1400);
  v22 = 0;
  ptr = nullptr;
  if ( sub_481160((char **)&ptr, v6) <= 0 )
  {
    LODWORD(a2) = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 39) = 0;
    *(_WORD *)(a2 + 47) = 0;
    *(_QWORD *)a2 = -1;
    if ( sub_485540(
           (char *)ptr,
           "%a-%a %7s %a %7s %llx%n",
           0.0,
           a4,
           (const char *)a2,
           a5,
           (const char *)(a2 + 8),
           a2 + 32,
           (_DWORD *)(a2 + 16)) == 6 )
    {
      v8 = (_QWORD)v22 == 0;
      v9 = (char *)ptr;
      *(_BYTE *)(a2 + 48) = 1;
      if ( !v8 )
      {
        v10 = strchr(v9, 45);
        if ( v10 )
        {
          if ( (unsigned __int64)(v10 - v9 - 9) <= 0xFFFFFFFFFFFFFFF5LL )
          {
            *(_BYTE *)(a2 + 48) = 2;
            if ( *(_BYTE *)(a1 + 36) )
            {
              v17 = *(_QWORD *)(a1 + 16);
              *(_DWORD *)(a1 + 32) = 8;
              *(_QWORD *)(a1 + 24) = v17;
            }
            *(_DWORD *)(a1 + 276) = 8;
          }
        }
      }
      v11 = sub_485760(v9);
      v12 = strlen(v11);
      v13 = &v11[v12];
      if ( v11 < &v11[v12] )
      {
        while ( 1 )
        {
          v14 = *(v13 - 1);
          if ( v14 > 0x7F || !isspace(v14) )
            break;
          *--v13 = 0;
          if ( v13 == v11 )
            goto LABEL_19;
        }
      }
      if ( v13 - v11 > 10 && !strncmp(v13 - 10, " (deleted)", 0xAu) )
        *(v13 - 10) = 0;
LABEL_19:
      if ( v11 && (v15 = strlen(v11), (v16 = v15) != 0) )
      {
        v18 = *(void **)(a2 + 56);
        v19 = v15 + 1;
        if ( *(_QWORD *)(a2 + 72) < v15 + 1 )
        {
          v20 = sub_481540(a2 + 56, *(void **)(a2 + 56), v19, 1u);
          *(_QWORD *)(a2 + 56) = v20;
          v18 = v20;
        }
        *(_QWORD *)(a2 + 64) = v19;
        memmove(v18, v11, v16);
        *(_BYTE *)(*(_QWORD *)(a2 + 56) + v16) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 64) = 0;
      }
    }
    LOBYTE(a2) = *(_QWORD *)a2 != -1;
  }
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    j__free(ptr);
  }
  return (unsigned int)a2;
}
