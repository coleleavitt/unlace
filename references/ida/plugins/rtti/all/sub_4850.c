__int64 __fastcall sub_4850(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebp
  int v5; // eax
  char *v6; // r12
  char *v7; // rax
  char *v8; // rax
  size_t v9; // rax
  size_t v10; // r13
  void *v11; // rdi
  size_t v12; // r14
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-68h] BYREF
  __int128 v15; // [rsp+8h] [rbp-60h]
  char *haystack; // [rsp+20h] [rbp-48h]
  __int128 v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v2 = 0;
  if ( !a2 || !*a2 )
    return v2;
  v15 = 0;
  v14 = 0;
  v2 = sub_4600((__int64)&v14, a2, 0, "??_R0", "@8");
  if ( (_BYTE)v2 )
  {
    haystack = 0;
    v17 = 0;
    v5 = demangle_name();
    v6 = haystack;
    if ( v5 > 0 && (v7 = strstr(haystack, "RTTI Type Descriptor")) != 0 && (v8 = v7 - 1, v6 < v8) )
    {
      while ( *(v8 - 1) == 32 )
      {
        if ( --v8 == v6 )
          goto LABEL_15;
      }
      if ( v6 >= v8 )
      {
        v2 = 0;
LABEL_17:
        *(_QWORD *)&v17 = 0;
        qfree();
        goto LABEL_18;
      }
      *v8 = 0;
      if ( v6 && (v9 = strlen(v6), (v10 = v9) != 0) )
      {
        v11 = *(void **)a1;
        v12 = v9 + 1;
        if ( *(_QWORD *)(a1 + 16) < v9 + 1 )
        {
          v13 = qvector_reserve();
          *(_QWORD *)a1 = v13;
          v11 = (void *)v13;
        }
        *(_QWORD *)(a1 + 8) = v12;
        memmove(v11, v6, v10);
        *(_BYTE *)(*(_QWORD *)a1 + v10) = 0;
        v6 = haystack;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
        v6 = haystack;
      }
    }
    else
    {
LABEL_15:
      v2 = 0;
    }
    if ( !v6 )
      goto LABEL_18;
    goto LABEL_17;
  }
LABEL_18:
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return v2;
}
