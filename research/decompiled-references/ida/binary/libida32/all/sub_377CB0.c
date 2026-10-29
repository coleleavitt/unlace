__int64 __fastcall sub_377CB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbp
  void *v5; // r15
  void *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-D0h] BYREF
  _QWORD v9[2]; // [rsp+8h] [rbp-C8h] BYREF
  void *src; // [rsp+18h] [rbp-B8h]
  __int128 v11; // [rsp+20h] [rbp-B0h]
  void *ptr; // [rsp+30h] [rbp-A0h]
  __int128 v13; // [rsp+38h] [rbp-98h]
  __int128 v14; // [rsp+48h] [rbp-88h] BYREF
  __int64 v15; // [rsp+68h] [rbp-68h]
  int v16; // [rsp+70h] [rbp-60h]
  __int64 v17; // [rsp+78h] [rbp-58h]
  char v18; // [rsp+80h] [rbp-50h]
  unsigned __int64 v19; // [rsp+90h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v8 = 0;
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  v2 = *(unsigned int *)(a1 + 40);
  if ( (unsigned __int8)get_type_by_tid(&v8, *(unsigned int *)(a1 + 8)) )
  {
    v9[1] = 0;
    src = nullptr;
    ptr = nullptr;
    v15 = 1;
    v16 = -1;
    v17 = 0;
    v18 = 0;
    v9[0] = 8 * v2;
    v11 = 0;
    v13 = 0;
    v14 = 0;
    if ( (unsigned int)find_tinfo_udt_member((int)v9) != -1 )
    {
      v3 = v11;
      if ( (unsigned __int64)v11 > 1 )
      {
        v5 = src;
        v6 = *(void **)(a2 + 8);
        if ( *(_QWORD *)(a2 + 24) < (unsigned __int64)v11 )
        {
          v7 = qvector_reserve(a2 + 8, *(_QWORD *)(a2 + 8), v11, 1);
          *(_QWORD *)(a2 + 8) = v7;
          v6 = (void *)v7;
        }
        *(_QWORD *)(a2 + 16) = v3;
        memmove(v6, v5, v3 - 1);
        *(_BYTE *)(*(_QWORD *)(a2 + 8) + v3 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 16) = 0;
      }
    }
    clear_tinfo_t(&v14);
    if ( ptr )
    {
      *(_QWORD *)&v13 = 0;
      qfree(ptr);
    }
    if ( src )
    {
      *(_QWORD *)&v11 = 0;
      qfree(src);
    }
  }
  clear_tinfo_t(&v8);
  return 0;
}

