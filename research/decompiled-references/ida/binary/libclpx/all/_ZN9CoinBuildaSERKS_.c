__int64 __fastcall CoinBuild::operator=(__int64 a1, __int64 a2)
{
  int v3; // eax
  _QWORD *v4; // rdi
  int v5; // ebx
  _QWORD *v6; // rbp
  int v7; // eax
  int v8; // edx
  _DWORD *v9; // r14
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  unsigned __int64 v14; // rdi
  int v15; // r15d
  _QWORD *v16; // r13
  bool v17; // cc
  int v18; // eax
  int v19; // edi
  int v20; // eax
  void *v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax

  if ( a1 != a2 )
  {
    v3 = *(_DWORD *)a1;
    v4 = *(_QWORD **)(a1 + 24);
    if ( v3 > 0 )
    {
      v5 = 0;
      do
      {
        v6 = (_QWORD *)*v4;
        ++v5;
        operator delete[](v4);
        v4 = v6;
      }
      while ( *(_DWORD *)a1 > v5 );
    }
    v7 = *(_DWORD *)a2;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
    v8 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)a1 = v7;
    *(_DWORD *)(a1 + 8) = v8;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 24) = 0;
      v9 = *(_DWORD **)(a2 + 24);
      if ( v7 > 0 )
      {
        v10 = 4 * (3 * v9[3] - 3);
        v11 = v10 + 70;
        v12 = v10 + 56;
        v13 = v10 + 63;
        if ( v13 >= 0 )
          v11 = v13;
        v14 = v11 >> 3;
        if ( v14 <= 0xFFFFFFFFFFFFFFFLL )
        {
          v15 = 0;
          v16 = nullptr;
          do
          {
            v21 = (void *)operator new[](8 * v14);
            v22 = memcpy(v21, v9, v12);
            v23 = *(_QWORD **)(a1 + 24);
            if ( v23 )
            {
              v17 = *(_DWORD *)a1 <= ++v15;
              *v16 = v22;
              v9 = *(_DWORD **)v9;
              if ( v17 )
                goto LABEL_17;
            }
            else
            {
              v17 = *(_DWORD *)a1 <= ++v15;
              *(_QWORD *)(a1 + 24) = v22;
              v23 = v22;
              v9 = *(_DWORD **)v9;
              if ( v17 )
                goto LABEL_17;
            }
            v16 = v22;
            v18 = 4 * (3 * v9[3] - 3);
            v19 = v18 + 70;
            v12 = v18 + 56;
            v20 = v18 + 63;
            if ( v20 >= 0 )
              v19 = v20;
            v14 = v19 >> 3;
          }
          while ( v14 <= 0xFFFFFFFFFFFFFFFLL );
        }
        __cxa_throw_bad_array_new_length();
      }
      v23 = nullptr;
      v22 = nullptr;
LABEL_17:
      *(_QWORD *)(a1 + 16) = v23;
      *(_QWORD *)(a1 + 32) = v22;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 32) = 0;
    }
  }
  return a1;
}

