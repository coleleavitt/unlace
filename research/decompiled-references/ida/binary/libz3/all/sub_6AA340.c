__int64 *__fastcall sub_6AA340(_QWORD *a1)
{
  __int64 *result; // rax
  unsigned int v3; // ebp
  __int64 v4; // rdi
  void (__fastcall ***v5)(__int64); // rbx
  __int64 v6; // rdi

  result = qword_1C69D60;
  v3 = 0;
  *a1 = qword_1C69D60;
  v4 = a1[5];
  if ( v4 )
  {
    while ( v3 < *(_DWORD *)(v4 - 4) )
    {
      while ( 1 )
      {
        v5 = *(void (__fastcall ****)(__int64))(v4 + 8LL * v3);
        if ( v5 )
          break;
        if ( ++v3 >= *(_DWORD *)(v4 - 4) )
          return (__int64 *)sub_186B220((void *)(v4 - 8));
      }
      v6 = *(_QWORD *)(v4 + 8LL * v3++);
      (**v5)(v6);
      result = (__int64 *)sub_186B220(v5);
      v4 = a1[5];
      if ( !v4 )
        return result;
    }
    return (__int64 *)sub_186B220((void *)(v4 - 8));
  }
  return result;
}

