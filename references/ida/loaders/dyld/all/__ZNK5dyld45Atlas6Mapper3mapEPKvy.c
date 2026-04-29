char *__fastcall dyld4::Atlas::Mapper::map(dyld4::Atlas::Mapper *this, char *a2, __int64 a3)
{
  __int64 v3; // x9
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  unsigned __int64 v8; // x10
  unsigned __int64 v9; // x11
  int v10; // w4
  unsigned __int64 v11; // x8
  off_t v12; // x5
  char *v13; // x19
  char *v14; // x0

  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    return &a2[v3 - *(_QWORD *)(*((_QWORD *)this + 1) + 16LL)];
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 1);
    v7 = 32 * v5;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 + 16);
      if ( v8 <= (unsigned __int64)a2 )
      {
        v9 = *(_QWORD *)(v6 + 8) + v8;
        if ( v9 > (unsigned __int64)a2 )
          break;
      }
      v6 += 32;
      v7 -= 32;
      if ( !v7 )
        return (char *)-1LL;
    }
    v10 = *(_DWORD *)(v6 + 24);
    if ( v10 == -1 )
    {
      return &a2[*(_QWORD *)v6 - v8];
    }
    else
    {
      if ( (unsigned __int64)&a2[a3] > v9 )
        dyld4::Atlas::Mapper::map();
      v11 = (unsigned __int64)&a2[*(_QWORD *)v6 - v8];
      v12 = v11 & -(__int64)vm_page_size;
      v13 = (char *)(v11 - v12);
      v14 = (char *)mmap(nullptr, v11 - v12 + a3, 1, 2, v10, v12);
      if ( v14 == (char *)-1LL )
        return (_BYTE *)(&dword_0 + 1);
      else
        return &v14[(_QWORD)v13];
    }
  }
  return a2;
}
