__int64 __fastcall sub_5C98E0(__int64 a1, int a2, int a3, int a4, unsigned int *a5)
{
  unsigned int v7; // eax
  __int64 *v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r12
  _QWORD v12[2]; // [rsp+0h] [rbp-78h] BYREF
  int v13; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  int v17; // [rsp+40h] [rbp-38h]
  unsigned __int64 v18; // [rsp+48h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v7 = *a5;
      if ( *a5 > 0x2F )
      {
        v8 = *((__int64 **)a5 + 1);
        *((_QWORD *)a5 + 1) = v8 + 1;
      }
      else
      {
        v8 = (__int64 *)(*((_QWORD *)a5 + 2) + v7);
        *a5 = v7 + 8;
      }
      v9 = *v8;
      v10 = *(_QWORD *)(a1 + 8);
      v13 = a3;
      v15 = 0;
      v12[1] = v10;
      v11 = *(_QWORD *)(v9 + 8);
      v12[0] = &off_2B2FB90;
      ptr = nullptr;
      if ( v11 )
      {
        *((_QWORD *)&v15 + 1) = v11;
        ptr = (void *)qalloc_or_throw(16 * v11);
        memcpy(ptr, *(const void **)v9, 16 * v11);
        *(_QWORD *)&v15 = v11;
        v10 = *(_QWORD *)(a1 + 8);
      }
      v17 = -1;
      v16 = 0;
      ((void (__fastcall *)(_QWORD, void **, _QWORD *))sub_5C95D0)(*(unsigned int *)(v10 + 4LL * a3 + 16), &ptr, v12);
      if ( ptr )
      {
        *(_QWORD *)&v15 = 0;
        qfree(ptr);
      }
    }
    return v18 - __readfsqword(0x28u);
  }
  else
  {
    if ( *a5 > 0x2F )
      *((_QWORD *)a5 + 1) += 8LL;
    else
      *a5 += 8;
    return rangeset_t_add2(*(_DWORD *)(a1 + 8LL * a3 + 56) + 8 * (5 * a4 + 5));
  }
}
