__int64 __fastcall sub_400010(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx
  __int64 (*v3)(void); // rdx
  char v4; // dl
  void (*v5)(void); // rdx

  result = *(_QWORD *)(a1 + 696);
  if ( result )
  {
    v2 = 0;
    do
    {
      if ( v2 >= *(_DWORD *)(result - 4) )
        break;
      v3 = *(__int64 (**)(void))(**(_QWORD **)(result + 8LL * v2) + 32LL);
      if ( v3 != sub_41C620 )
      {
        v4 = v3();
        result = *(_QWORD *)(a1 + 696);
        if ( v4 )
        {
          v5 = *(void (**)(void))(**(_QWORD **)(result + 8LL * v2) + 40LL);
          if ( (char *)v5 != (char *)nullsub_210 )
          {
            v5();
            result = *(_QWORD *)(a1 + 696);
          }
        }
      }
      ++v2;
    }
    while ( result );
  }
  return result;
}

