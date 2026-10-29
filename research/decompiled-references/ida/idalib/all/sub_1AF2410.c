__int64 __fastcall sub_1AF2410(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // eax
  __int64 v3; // rbx
  void *ptr; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  char vars10; // [rsp+10h] [rbp+10h] BYREF

  v1 = *(unsigned int *)(a1 + 8);
  ptr = &vars10;
  vars8 = 0x400000000LL;
  sub_FFF220((__int64)&ptr, v1);
  v2 = vars8;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24)
                 + 8 * (*(unsigned int *)(*(_QWORD *)(a1 + 24) + 4LL) + (unsigned __int64)**(unsigned int **)(a1 + 24))
                 + 16);
  if ( (unsigned int)vars8 > 1 )
  {
    do
    {
      --v2;
      v3 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 8) + 32);
    }
    while ( v2 != 1 );
  }
  if ( ptr != &ptr )
    free(ptr);
  return v3;
}
