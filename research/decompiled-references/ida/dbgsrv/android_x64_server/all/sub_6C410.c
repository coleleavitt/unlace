/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C410
// Address: 0x000000000006C410

//----- (000000000006C410) ----------------------------------------------------
unsigned __int64 __fastcall sub_6C410(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r15
  const char *v9; // rsi
  const char *v10; // rdi
  void *v11; // r14
  _QWORD *v12; // r12
  char *v13; // rdi
  char **v15; // [rsp+0h] [rbp-68h]
  void *src; // [rsp+8h] [rbp-60h]
  int v17; // [rsp+10h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+18h] [rbp-50h]
  void *v19; // [rsp+28h] [rbp-40h]
  unsigned __int64 v20; // [rsp+30h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 96);
  v6 = (__int64 *)(a1 + 88);
  if ( !v5 )
  {
    v11 = *(void **)(a3 + 8);
LABEL_13:
    v17 = a2;
    *(_OWORD *)ptr = 0;
    v19 = nullptr;
    if ( v11 )
    {
      ptr[0] = qalloc_or_throw((signed __int64)v11);
      v19 = v11;
      memcpy(ptr[0], *(const void **)a3, (size_t)v11);
      ptr[1] = v11;
    }
    sub_6C610((__int64)v6, (unsigned __int64)&v17);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v19 = nullptr;
    }
    return __readfsqword(0x28u);
  }
  v7 = *v6;
  v8 = 32 * (v5 - 1);
  v9 = s1;
  v10 = s1;
  if ( *(_QWORD *)(*v6 + v8 + 16) )
    v10 = *(const char **)(v8 + *v6 + 8);
  v15 = (char **)(v8 + *v6 + 8);
  v11 = *(void **)(a3 + 8);
  src = *(void **)a3;
  if ( v11 )
    v9 = *(const char **)a3;
  if ( strcmp(v10, v9) )
  {
    if ( *(_DWORD *)(v7 + v8) == a2 )
    {
      if ( v15 != (char **)a3 )
      {
        v12 = (_QWORD *)(v8 + v7 + 16);
        if ( (unsigned __int64)v11 < 2 )
        {
          *v12 = 0;
        }
        else
        {
          if ( *(_QWORD *)(v7 + v8 + 24) >= (unsigned __int64)v11 )
          {
            v13 = *v15;
          }
          else
          {
            v13 = (char *)qvector_reserve((__int64)v15, *v15, (unsigned __int64)v11, 1u);
            *v15 = v13;
          }
          *v12 = v11;
          memmove(v13, src, (size_t)v11 - 1);
          *((_BYTE *)v11 + (_QWORD)*v15 - 1) = 0;
        }
      }
      return __readfsqword(0x28u);
    }
    goto LABEL_13;
  }
  return __readfsqword(0x28u);
}
