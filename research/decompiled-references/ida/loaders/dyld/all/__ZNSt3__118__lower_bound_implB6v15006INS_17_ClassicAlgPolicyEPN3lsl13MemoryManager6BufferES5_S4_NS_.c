char *__fastcall std::__lower_bound_impl[abi:v15006]<std::_ClassicAlgPolicy,lsl::MemoryManager::Buffer *,lsl::MemoryManager::Buffer *,lsl::MemoryManager::Buffer,std::__identity,std::__less<lsl::MemoryManager::Buffer,lsl::MemoryManager::Buffer>>(
        char *a1,
        char *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v3; // x9
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x10
  unsigned __int64 v6; // x12
  unsigned __int64 *v7; // x13
  char v8; // w14
  unsigned __int64 v9; // x14
  bool v10; // zf
  char *v11; // x13

  if ( a2 != a1 )
  {
    v3 = (a2 - a1) >> 4;
    v4 = *a3;
    v5 = a3[1];
    a2 = a1;
    do
    {
      v6 = v3 >> 1;
      v7 = (unsigned __int64 *)&a2[16 * (v3 >> 1)];
      if ( *v7 >= v4 )
        v8 = 1;
      else
        v8 = -1;
      if ( *v7 == v4 )
      {
        v9 = v7[1];
        v10 = v9 == v5;
        v8 = v9 >= v5 ? 1 : -1;
        if ( v10 )
          v8 = 0;
      }
      v11 = (char *)(v7 + 2);
      v3 += ~v6;
      if ( v8 < 0 )
        a2 = v11;
      else
        v3 = v6;
    }
    while ( v3 );
  }
  return a2;
}
