__int64 __fastcall sub_986A50(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // r12
  void *v9; // rdi
  __int64 v10; // [rsp+0h] [rbp-30h]

  result = *(_QWORD *)(a1 + 136);
  if ( !result )
  {
    v3 = *(_BYTE *)(a1 + 96) ? sub_986750(a1) : sub_986440(a1);
    result = 0;
    if ( v3 )
    {
      v10 = operator new(0x60u);
      sub_9A7940(v10, v3);
      v4 = *(_QWORD *)(a1 + 136);
      result = v10;
      *(_QWORD *)(a1 + 136) = v10;
      if ( v4 )
      {
        v5 = *(unsigned int *)(v4 + 88);
        v6 = *(_QWORD *)(v4 + 72);
        v7 = 80 * v5;
        if ( (_DWORD)v5 )
        {
          v8 = v6 + 80 * v5;
          do
          {
            if ( (unsigned int)(*(_DWORD *)v6 + 2) > 1 )
            {
              v9 = *(void **)(v6 + 8);
              if ( v9 != (void *)(v6 + 24) )
                free(v9);
            }
            v6 += 80;
          }
          while ( v8 != v6 );
          v6 = *(_QWORD *)(v4 + 72);
          v7 = 80LL * *(unsigned int *)(v4 + 88);
        }
        operator delete(v6, v7, 8);
        if ( *(_QWORD *)v4 != v4 + 16 )
          free(*(void **)v4);
        operator delete((void *)v4, 0x60u);
        return *(_QWORD *)(a1 + 136);
      }
    }
  }
  return result;
}
