/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45DBD0
// Address: 0x000000000045DBD0

//----- (000000000045DBD0) ----------------------------------------------------
__int64 __fastcall sub_45DBD0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  char *v5; // r12
  __int64 v7; // rcx
  __int64 v8; // r8
  char v9; // r14
  __int64 v10; // rbp
  unsigned __int64 v11; // r12
  void *v12; // rsi
  void *v13; // rax
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // r8
  void *v19; // rdi
  void *v20; // rdi
  char *v21; // rsi
  char *v22; // rax
  char v23; // [rsp+7h] [rbp-49h] BYREF
  void *ptr; // [rsp+8h] [rbp-48h] BYREF
  __int128 v25; // [rsp+10h] [rbp-40h]
  unsigned __int64 v26; // [rsp+20h] [rbp-30h]

  v3 = *(_QWORD **)(a1 + 16);
  v26 = __readfsqword(0x28u);
  v25 = 0;
  ptr = nullptr;
  sub_45D930((__int64)&ptr, (__int64 *)a2, v3);
  v5 = (char *)ptr;
  if ( (_QWORD)v25 )
  {
    if ( !strcmp((const char *)ptr, ".debug_info") )
    {
      *(_BYTE *)(a1 + 24) = 1;
      goto LABEL_4;
    }
    if ( !strcmp(v5, ".note.gnu.build-id") && (v14 = *(_DWORD *)(a2 + 16), v14 <= 0xFFFF) )
    {
      v15 = *(_QWORD *)(a1 + 40);
      v16 = v14;
      if ( v15 < v14 )
      {
        v21 = *(char **)(a1 + 32);
        if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)v14 )
        {
          v22 = (char *)sub_481540(a1 + 32, v21, v14, 1u);
          *(_QWORD *)(a1 + 32) = v22;
          v15 = *(_QWORD *)(a1 + 40);
          v21 = v22;
        }
        memset(&v21[v15], 0, v16 - v15);
        *(_QWORD *)(a1 + 40) = v16;
      }
      else if ( v14 != v15 )
      {
        *(_QWORD *)(a1 + 40) = v14;
      }
      sub_47F740(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
      if ( *(_DWORD *)(a2 + 16) != sub_47F6E0(
                                     *(_QWORD *)(a1 + 8),
                                     *(void **)(a1 + 32),
                                     *(unsigned int *)(a2 + 16),
                                     v17,
                                     v18) )
      {
        v20 = *(void **)(a1 + 32);
        if ( v20 )
        {
          *(_QWORD *)(a1 + 40) = 0;
          j__free(v20);
          *(_QWORD *)(a1 + 32) = 0;
          v5 = (char *)ptr;
          *(_QWORD *)(a1 + 48) = 0;
          goto LABEL_4;
        }
      }
    }
    else
    {
      if ( strcmp(v5, ".gnu_debuglink") )
        goto LABEL_4;
      sub_47F740(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
      while ( sub_47F6E0(*(_QWORD *)(a1 + 8), &v23, 1, v7, v8) == 1 )
      {
        v9 = v23;
        if ( !v23 )
          goto LABEL_22;
        v10 = *(_QWORD *)(a1 + 64);
        v11 = 2;
        if ( v10 )
          v11 = v10-- + 1;
        v12 = *(void **)(a1 + 56);
        if ( *(_QWORD *)(a1 + 72) < v11 )
        {
          v13 = sub_481540(a1 + 56, v12, v11, 1u);
          *(_QWORD *)(a1 + 56) = v13;
          v12 = v13;
        }
        *(_QWORD *)(a1 + 64) = v11;
        *((_BYTE *)v12 + v10) = v9;
        *(_BYTE *)(*(_QWORD *)(a1 + 56) + v10 + 1) = 0;
      }
      v19 = *(void **)(a1 + 56);
      if ( v19 )
      {
        *(_QWORD *)(a1 + 64) = 0;
        j__free(v19);
        *(_QWORD *)(a1 + 56) = 0;
        *(_QWORD *)(a1 + 72) = 0;
      }
    }
LABEL_22:
    v5 = (char *)ptr;
  }
LABEL_4:
  if ( v5 )
    j__free(v5);
  return 0;
}
// 45DCCD: variable 'v7' is possibly undefined
// 45DCCD: variable 'v8' is possibly undefined
// 45DD71: variable 'v17' is possibly undefined
// 45DD71: variable 'v18' is possibly undefined
