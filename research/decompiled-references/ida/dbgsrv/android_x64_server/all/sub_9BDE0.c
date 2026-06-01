/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BDE0
// Address: 0x000000000009BDE0

//----- (000000000009BDE0) ----------------------------------------------------
__int64 __fastcall sub_9BDE0(__int64 a1, __int64 a2)
{
  char *v3; // rbp
  const char *v4; // rbx
  unsigned __int64 v5; // r14
  char **v6; // r12
  unsigned __int64 v7; // rax
  char *v8; // rdi
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // r14
  _BYTE *v12; // rax
  void *v14; // rdi
  char *v15; // rdi
  char *s1[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+20h] [rbp-48h]
  char v18; // [rsp+2Fh] [rbp-39h] BYREF
  unsigned __int64 v19; // [rsp+30h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  *(_OWORD *)s1 = 0;
  v17 = 0;
  sub_90010((__m128i *)s1, (_QWORD *)a2, *(_QWORD **)(a1 + 16));
  v3 = s1[0];
  v4 = ::s1;
  if ( s1[1] )
    v4 = s1[0];
  if ( !strcmp(v4, ".debug_info") )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else if ( !strcmp(v4, ".note.gnu.build-id") && (v5 = *(unsigned int *)(a2 + 16), v5 <= 0xFFFF) )
  {
    v6 = (char **)(a1 + 32);
    v7 = *(_QWORD *)(a1 + 40);
    if ( v7 >= v5 )
    {
      if ( v7 != v5 )
      {
        v18 = 0;
        sub_5E330(a1 + 32, v5, &v18);
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 48) >= v5 )
      {
        v8 = *v6;
      }
      else
      {
        v8 = (char *)qvector_reserve(a1 + 32, *v6, *(unsigned int *)(a2 + 16), 1u);
        *(_QWORD *)(a1 + 32) = v8;
        v7 = *(_QWORD *)(a1 + 40);
      }
      memset(&v8[v7], 0, v5 - v7);
      *(_QWORD *)(a1 + 40) = v5;
    }
    qlseek(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
    if ( qlread(*(_QWORD *)(a1 + 8), *(void **)(a1 + 32), *(unsigned int *)(a2 + 16)) != *(_DWORD *)(a2 + 16) )
    {
      v15 = *v6;
      if ( *v6 )
      {
        *(_QWORD *)(a1 + 40) = 0;
        qfree(v15);
        *(_QWORD *)(a1 + 32) = 0;
        *(_QWORD *)(a1 + 48) = 0;
        if ( !v3 )
          return 0;
        goto LABEL_20;
      }
    }
  }
  else if ( !strcmp(v4, ".gnu_debuglink") )
  {
    qlseek(*(_QWORD *)(a1 + 8), *(int *)(a2 + 20), 0);
    while ( qlread(*(_QWORD *)(a1 + 8), &v18, 1) == 1 )
    {
      v9 = v18;
      if ( !v18 )
      {
        if ( v3 )
          goto LABEL_20;
        return 0;
      }
      v10 = *(_QWORD *)(a1 + 64);
      v11 = v10 - 1;
      if ( !v10 )
        v11 = 0;
      v12 = *(_BYTE **)(a1 + 56);
      if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v11 + 2) )
      {
        v12 = qvector_reserve(a1 + 56, *(char **)(a1 + 56), v11 + 2, 1u);
        *(_QWORD *)(a1 + 56) = v12;
      }
      *(_QWORD *)(a1 + 64) = v11 + 2;
      v12[v11] = v9;
      *(_BYTE *)(*(_QWORD *)(a1 + 56) + v11 + 1) = 0;
    }
    v14 = *(void **)(a1 + 56);
    if ( !v14 )
      goto LABEL_19;
    *(_QWORD *)(a1 + 64) = 0;
    qfree(v14);
    *(_QWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 72) = 0;
    if ( v3 )
      goto LABEL_20;
    return 0;
  }
LABEL_19:
  if ( v3 )
  {
LABEL_20:
    s1[1] = nullptr;
    qfree(v3);
    s1[0] = nullptr;
    v17 = 0;
  }
  return 0;
}
