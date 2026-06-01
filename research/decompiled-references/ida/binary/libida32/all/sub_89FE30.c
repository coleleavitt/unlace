__int64 __fastcall sub_89FE30(__int64 a1, int a2, const void *a3, size_t a4)
{
  size_t v6; // rbx
  unsigned int v7; // ebx
  void *dest; // [rsp+0h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-70h]
  __int64 (__fastcall **v11)(); // [rsp+20h] [rbp-58h] BYREF
  char v12; // [rsp+28h] [rbp-50h]
  int v13; // [rsp+2Ch] [rbp-4Ch]
  void *v14; // [rsp+30h] [rbp-48h]
  __int128 v15; // [rsp+38h] [rbp-40h]
  unsigned __int64 v16; // [rsp+48h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  dest = nullptr;
  *(_OWORD *)n = 0;
  if ( a4 )
  {
    dest = (void *)qvector_reserve(&dest, 0, a4, 1);
    memset((char *)dest + n[0], 0, a4 - n[0]);
    n[0] = a4;
    memcpy(dest, a3, a4);
    v6 = n[0];
    v12 = 97;
    v13 = a2;
    v11 = &off_2B15178;
    v14 = nullptr;
    v15 = 0;
    if ( n[0] )
    {
      v14 = (void *)qalloc_or_throw(n[0], (const char *)a3);
      *((_QWORD *)&v15 + 1) = v6;
      memcpy(v14, dest, v6);
      *(_QWORD *)&v15 = v6;
    }
    if ( dest )
    {
      n[0] = 0;
      qfree(dest);
    }
  }
  else
  {
    v12 = 97;
    v13 = a2;
    v15 = 0;
    v11 = &off_2B15178;
    v14 = nullptr;
  }
  v7 = sub_89F820(a1, (char *)&v11);
  sub_8B20A0(&v11);
  return v7;
}

