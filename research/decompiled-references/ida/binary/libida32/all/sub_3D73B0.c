unsigned __int64 __fastcall sub_3D73B0(__int64 a1)
{
  __int64 i; // rax
  const char *v4; // rdx
  const char *v5; // rbx
  int v6; // r12d
  size_t v7; // r14
  __int64 v8; // r14
  size_t v9; // rax
  size_t v10; // r12
  size_t v11; // r14
  void *v12; // rax
  void *v13; // rdi
  unsigned int v14; // [rsp+18h] [rbp-80h] BYREF
  unsigned int v15; // [rsp+1Ch] [rbp-7Ch] BYREF
  void *v16; // [rsp+20h] [rbp-78h] BYREF
  __int128 v17; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v19; // [rsp+48h] [rbp-50h]
  unsigned __int64 v20; // [rsp+58h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 72) )
    return v20 - __readfsqword(0x28u);
  netnode_check(&v14, "$ seen calling conventions", 0, 0);
  v16 = nullptr;
  v17 = 0;
  for ( i = netnode_qhashfirst(v14, &v16, 72); i > 0; i = netnode_qhashnext(v14, &v16, v4, 72) )
  {
    v5 = haystack;
    if ( (_QWORD)v17 )
      v5 = (const char *)v16;
    if ( netnode_hashval(v14, v5, &v15, 4, 72) == 4 )
    {
      v6 = v15;
      if ( v15 > 0x1FF || v15 <= 0xFF && (v15 & 0xFFFFFF0F) != 0 )
      {
        ptr = nullptr;
        v19 = 0;
        if ( v5 )
        {
          v7 = strlen(v5);
          ptr = (void *)qvector_reserve(&ptr, 0, v7 + 1, 1);
          *(_QWORD *)&v19 = v7 + 1;
          memmove(ptr, v5, v7);
          *((_BYTE *)ptr + v7) = 0;
          v8 = sub_3D7180(a1, (__int64)&ptr, v6);
          if ( ptr )
          {
            *(_QWORD *)&v19 = 0;
            qfree(ptr);
          }
          if ( v8 )
            goto LABEL_6;
          ptr = nullptr;
          v19 = 0;
          v9 = strlen(v5);
          v10 = v9 + 1;
          v11 = v9;
          v12 = (void *)qvector_reserve(&ptr, 0, v9 + 1, 1);
          *(_QWORD *)&v19 = v10;
          ptr = v12;
          memmove(v12, v5, v11);
          *((_BYTE *)ptr + v11) = 0;
          v6 = v15;
        }
        else if ( sub_3D7180(a1, (__int64)&ptr, v15) )
        {
          goto LABEL_6;
        }
        sub_3D7290((_QWORD *)a1, v6, (__int64)&ptr);
        if ( ptr )
        {
          *(_QWORD *)&v19 = 0;
          qfree(ptr);
        }
        if ( *(_QWORD *)(a1 + 56) == 1024 )
          break;
      }
    }
LABEL_6:
    v4 = haystack;
    if ( (_QWORD)v17 )
      v4 = (const char *)v16;
  }
  v13 = v16;
  *(_BYTE *)(a1 + 72) = 1;
  if ( v13 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v13);
  }
  return v20 - __readfsqword(0x28u);
}

