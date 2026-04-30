bool __fastcall sub_569480(__int64 a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v4; // ebx
  bool result; // al
  unsigned int *v6; // r12
  unsigned int *v7; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // edi
  size_t v10; // r13
  void *v11; // rax
  __int64 v12; // rsi
  int v13; // edx

  v4 = a3;
  result = a2 == nullptr || a3 == 0;
  if ( result )
  {
    v10 = 24;
    v4 = 1;
    v6 = (unsigned int *)&unk_6D5EC0;
LABEL_8:
    v11 = off_8C52A8(*(void **)(a1 + 96), v10);
    *(_QWORD *)(a1 + 96) = v11;
    memcpy(v11, v6, v10);
    v12 = *(_QWORD *)(a1 + 56);
    v13 = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 160) = v4;
    sub_55C7B0(a1, v12, v13);
    return 1;
  }
  else
  {
    v6 = a2;
    v7 = a2 + 4;
    v8 = 0;
    v9 = 0;
    while ( *v7 >= v8 )
    {
      v8 = v7[1];
      if ( v8 < *v7 )
        break;
      ++v9;
      v7 += 6;
      if ( v9 >= v4 )
      {
        v10 = 24LL * v4;
        goto LABEL_8;
      }
    }
  }
  return result;
}
