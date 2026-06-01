__int64 __fastcall sub_36FFD0(__int64 a1)
{
  unsigned int v1; // ebx
  size_t v2; // rbx
  const void *v4; // r14
  __int64 v5; // [rsp+8h] [rbp-50h] BYREF
  void *dest; // [rsp+10h] [rbp-48h] BYREF
  __int128 v7; // [rsp+18h] [rbp-40h]
  unsigned __int64 v8; // [rsp+28h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v5 = 0;
  v1 = sub_36C270((__int64)&v5, (char *)(a1 + 32), 0);
  if ( !v1 )
  {
    if ( *(_BYTE *)(a1 + 64) == 7 )
    {
      v2 = *(_QWORD *)(a1 + 80);
      dest = nullptr;
      v7 = 0;
      if ( v2 )
      {
        v4 = *(const void **)(a1 + 72);
        dest = (void *)qvector_reserve(&dest, 0, v2, 1);
        memset((char *)dest + v7, 0, v2 - v7);
        *(_QWORD *)&v7 = v2;
        memcpy(dest, v4, v2);
      }
      v1 = unpack_idcobj_from_bv(a1, &v5, &dest, *(unsigned int *)(a1 + 104));
      if ( dest )
      {
        *(_QWORD *)&v7 = 0;
        qfree(dest);
      }
    }
    else
    {
      v1 = unpack_idcobj_from_idb(a1, &v5, *(unsigned int *)(a1 + 72), 0, *(unsigned int *)(a1 + 104));
    }
  }
  clear_tinfo_t(&v5);
  return v1;
}

