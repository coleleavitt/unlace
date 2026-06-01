__int64 __fastcall sub_A86E90(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbp
  __int64 v5; // rdx
  unsigned __int64 v6; // r12
  void *v8; // rdi
  int v9; // ebp
  int v10; // eax
  _QWORD v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = (_QWORD *)operator new(0x120u);
  v3 = *(unsigned int *)(a1 + 23320);
  v4 = v2;
  *v2 = v2 + 2;
  v2[1] = 0x200000000LL;
  if ( *(_DWORD *)(a1 + 23324) <= (unsigned int)v3 )
  {
    v6 = sub_2237400(a1 + 23312, a1 + 23328, 0, 8, v11);
    *(_QWORD *)(v6 + 8LL * *(unsigned int *)(a1 + 23320)) = v4;
    sub_A86CA0(a1 + 23312, v6);
    v8 = *(void **)(a1 + 23312);
    v9 = v11[0];
    if ( (void *)(a1 + 23328) != v8 )
      free(v8);
    v10 = *(_DWORD *)(a1 + 23320);
    *(_QWORD *)(a1 + 23312) = v6;
    *(_DWORD *)(a1 + 23324) = v9;
    v5 = (unsigned int)(v10 + 1);
    *(_DWORD *)(a1 + 23320) = v5;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 23312) + 8 * v3) = v2;
    v5 = (unsigned int)(v3 + 1);
    v6 = *(_QWORD *)(a1 + 23312);
    *(_DWORD *)(a1 + 23320) = v5;
  }
  return *(_QWORD *)(v6 + 8 * v5 - 8);
}
