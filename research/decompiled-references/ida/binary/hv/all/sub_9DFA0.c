__int64 __fastcall sub_9DFA0(
        __int64 a1,
        int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // ebx
  __int64 v12; // rdi
  int v13; // [rsp+Ch] [rbp-2Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-28h] BYREF
  __int128 v15; // [rsp+18h] [rbp-20h]
  int v16[2]; // [rsp+28h] [rbp-10h]

  v10 = a2;
  v13 = a2;
  *(_QWORD *)v16 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    sub_9DB00(*(_QWORD *)a1, 4, &v13, 4u, a3, a4, a5, a6, a7, a8, a9, a10);
  }
  else if ( !*(_BYTE *)(a1 + 12) )
  {
    v12 = *(_QWORD *)a1;
    ptr = nullptr;
    v15 = 0;
    if ( (unsigned int)sub_9CBC0(v12, (__int64)&ptr) == 4 )
      v10 = *(_DWORD *)ptr;
    if ( ptr )
    {
      *(_QWORD *)&v15 = 0;
      j__free(ptr);
    }
  }
  return v10;
}

