__int64 __fastcall sub_6F6380(__int64 a1)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rdx
  _QWORD *v4; // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rdx
  void *v9; // rdi
  int v10; // ebp
  int v11; // eax
  _QWORD v12[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = (_QWORD *)operator new(0x120u);
  v3 = *(unsigned int *)(a1 + 23156);
  v4 = v2;
  *v2 = v2 + 2;
  v2[1] = 0x200000000LL;
  v5 = *(unsigned int *)(a1 + 23152);
  if ( v5 >= v3 )
  {
    v6 = sub_25D5F70(a1 + 23144, a1 + 23160, 0, 8, v12);
    *(_QWORD *)(v6 + 8LL * *(unsigned int *)(a1 + 23152)) = v4;
    sub_6F6220(a1 + 23144, v6);
    v9 = *(void **)(a1 + 23144);
    v10 = v12[0];
    if ( (void *)(a1 + 23160) != v9 )
      free(v9);
    v11 = *(_DWORD *)(a1 + 23152);
    *(_QWORD *)(a1 + 23144) = v6;
    *(_DWORD *)(a1 + 23156) = v10;
    v7 = (unsigned int)(v11 + 1);
    *(_DWORD *)(a1 + 23152) = v7;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 23144) + 8 * v5) = v4;
    v6 = *(_QWORD *)(a1 + 23144);
    v7 = (unsigned int)(*(_DWORD *)(a1 + 23152) + 1);
    *(_DWORD *)(a1 + 23152) = v7;
  }
  return *(_QWORD *)(v6 + 8 * v7 - 8);
}

