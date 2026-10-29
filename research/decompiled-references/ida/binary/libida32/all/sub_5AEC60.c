__int64 __fastcall sub_5AEC60(__int64 a1, const char *a2, int a3, int a4, unsigned int *a5, __int64 a6)
{
  unsigned int v8; // eax
  __int64 *v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r12
  _UNKNOWN **v13; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+8h] [rbp-70h]
  __int64 v15; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  int v19; // [rsp+40h] [rbp-38h]
  unsigned __int64 v20; // [rsp+48h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 1 )
    {
      v8 = *a5;
      if ( *a5 > 0x2F )
      {
        v9 = *((__int64 **)a5 + 1);
        *((_QWORD *)a5 + 1) = v9 + 1;
      }
      else
      {
        v9 = (__int64 *)(*((_QWORD *)a5 + 2) + v8);
        *a5 = v8 + 8;
      }
      v10 = *v9;
      v11 = *(_QWORD *)(a1 + 8);
      LODWORD(v15) = a3;
      v17 = 0;
      v14 = v11;
      v12 = *(_QWORD *)(v10 + 8);
      v13 = &off_2B05BD0;
      ptr = nullptr;
      if ( v12 )
      {
        *((_QWORD *)&v17 + 1) = v12;
        ptr = (void *)qalloc_or_throw(8 * v12, a2, v9, v11, a5, a6, v13, v14, v15);
        memcpy(ptr, *(const void **)v10, 8 * v12);
        *(_QWORD *)&v17 = v12;
        v11 = *(_QWORD *)(a1 + 8);
      }
      v19 = -1;
      v18 = 0;
      sub_5AE960(*(unsigned int *)(v11 + 4LL * a3 + 16), &ptr, &v13);
      if ( ptr )
      {
        *(_QWORD *)&v17 = 0;
        qfree(ptr);
      }
    }
    return v20 - __readfsqword(0x28u);
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

