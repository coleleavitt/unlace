__int64 __fastcall sub_962D10(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // r12
  void *v8; // rdi
  __int64 v9; // [rsp+0h] [rbp-30h]

  result = *(_QWORD *)(a1 + 136);
  if ( !result )
  {
    v3 = *(_BYTE *)(a1 + 96) ? sub_962A10(a1) : sub_962700(a1);
    result = 0;
    if ( v3 )
    {
      v9 = operator new(0x60u);
      sub_983C00(v9, v3);
      v4 = *(_QWORD *)(a1 + 136);
      result = v9;
      *(_QWORD *)(a1 + 136) = v9;
      if ( v4 )
      {
        v5 = *(unsigned int *)(v4 + 88);
        v6 = *(_QWORD *)(v4 + 72);
        if ( (_DWORD)v5 )
        {
          v7 = v6 + 80 * v5;
          do
          {
            if ( (unsigned int)(*(_DWORD *)v6 + 2) > 1 )
            {
              v8 = *(void **)(v6 + 8);
              if ( v8 != (void *)(v6 + 24) )
                free(v8);
            }
            v6 += 80;
          }
          while ( v7 != v6 );
        }
        operator delete();
        if ( *(_QWORD *)v4 != v4 + 16 )
          free(*(void **)v4);
        operator delete((void *)v4, 0x60u);
        return *(_QWORD *)(a1 + 136);
      }
    }
  }
  return result;
}

