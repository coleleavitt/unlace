unsigned __int64 __fastcall sub_2ADA20(__int64 a1, const void **a2, unsigned __int64 a3)
{
  int v5; // eax
  size_t v6; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  char *v10; // rsi
  void *v11; // [rsp+0h] [rbp-50h] BYREF
  void *dest; // [rsp+8h] [rbp-48h] BYREF
  __int128 v13; // [rsp+10h] [rbp-40h]
  unsigned __int64 v14; // [rsp+20h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v13 = 0;
  dest = nullptr;
  v5 = unpack_dd(a2);
  if ( v5 )
  {
    v6 = v5;
    if ( (unsigned __int64)*a2 + v5 < a3 )
    {
      v8 = v13;
      v9 = v5 + 1LL;
      if ( (unsigned __int64)v13 < v9 )
      {
        v10 = (char *)dest;
        if ( *((_QWORD *)&v13 + 1) < v9 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v5 + 1LL, 1);
          v8 = v13;
          v10 = (char *)dest;
        }
        memset(&v10[v8], 0, v9 - v8);
        *(_QWORD *)&v13 = v6 + 1;
      }
      else if ( v9 != (_QWORD)v13 )
      {
        *(_QWORD *)&v13 = v5 + 1LL;
      }
      *((_BYTE *)dest + v6) = 0;
      memcpy(dest, *a2, v6);
      *a2 = (char *)*a2 + v6;
    }
  }
  v11 = dest;
  if ( !(unsigned __int8)extract_argloc(a1, &v11, 0) )
  {
    if ( !under_debugger )
      sub_37CFE0(51187);
    BUG();
  }
  if ( dest )
  {
    *(_QWORD *)&v13 = 0;
    qfree(dest);
  }
  return v14 - __readfsqword(0x28u);
}
