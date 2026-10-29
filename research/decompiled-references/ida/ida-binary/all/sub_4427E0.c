__int64 __fastcall sub_4427E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  bool v4; // zf
  _QWORD *v6; // rbp
  __int64 v7; // rsi
  unsigned int v8; // ebx
  const char *v10; // rsi
  __int64 v11; // rbp
  const char *v12; // r14
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-78h] BYREF
  __int128 v16; // [rsp+8h] [rbp-70h]
  _BYTE src[24]; // [rsp+20h] [rbp-58h] BYREF
  int v18; // [rsp+38h] [rbp-40h]
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]

  v4 = *a3 == -1;
  v19 = __readfsqword(0x28u);
  if ( !v4 )
  {
    v6 = *(_QWORD **)(a1 + 216);
    if ( v6 )
      goto LABEL_3;
LABEL_18:
    v6 = *(_QWORD **)(a1 + 208);
    goto LABEL_3;
  }
  if ( a3[1] )
    return 0;
  v6 = *(_QWORD **)(a1 + 216);
  if ( !v6 )
    goto LABEL_18;
LABEL_3:
  v7 = *v6;
  *(_OWORD *)src = -1;
  dirtree_get_parent_cursor(src, v7, a3);
  if ( *(_QWORD *)src != -1 || *(_QWORD *)&src[8] )
    return 0;
  v15 = 0;
  v16 = 0;
  dirtree_get_abspath_by_cursor(&v15, *v6, a3, 0);
  v10 = (const char *)&v15;
  memset(src, 0, sizeof(src));
  v18 = 0;
  v8 = sub_442560((__int64 *)src, (__int64)&v15);
  if ( (_BYTE)v8 && a2 )
  {
    v11 = *(_QWORD *)&src[8];
    if ( *(_QWORD *)&src[8] > 1u )
    {
      v12 = *(const char **)src;
      v13 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < *(_QWORD *)&src[8] )
      {
        v14 = qvector_reserve(a2, *(_QWORD *)a2, *(_QWORD *)&src[8], 1);
        *(_QWORD *)a2 = v14;
        v13 = (void *)v14;
      }
      *(_QWORD *)(a2 + 8) = v11;
      v10 = v12;
      memmove(v13, v12, v11 - 1);
      *(_BYTE *)(*(_QWORD *)a2 + v11 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
    *(_DWORD *)(a2 + 24) = v18;
  }
  if ( *(_QWORD *)src )
  {
    *(_QWORD *)&src[8] = 0;
    qfree(*(_QWORD *)src, v10);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, v10);
  }
  return v8;
}
