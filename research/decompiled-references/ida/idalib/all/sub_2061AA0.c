void __fastcall sub_2061AA0(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // r14
  void *v5; // r13
  __int64 *v6; // r12
  __int64 *v7; // rdi
  void *v8; // rdi
  int v9; // ebp
  _QWORD v10[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( a2 && ((BYTE1(*a2) & 0x7F) == 2 || *((_DWORD *)a2 - 2)) )
  {
    if ( *(_DWORD *)(a1 + 316) <= *(_DWORD *)(a1 + 312) )
    {
      v4 = a1 + 304;
      v5 = (void *)(a1 + 320);
      v6 = (__int64 *)sub_2237400(a1 + 304, a1 + 320, 0, 8, v10);
      v7 = &v6[*(unsigned int *)(a1 + 312)];
      *v7 = (__int64)a2;
      sub_20B2EE0(v7, a2, 1);
      sub_2061A00(v4, v6);
      v8 = *(void **)(a1 + 304);
      v9 = v10[0];
      if ( v5 != v8 )
        free(v8);
      *(_QWORD *)(a1 + 304) = v6;
      *(_DWORD *)(a1 + 316) = v9;
      ++*(_DWORD *)(a1 + 312);
    }
    else
    {
      v3 = (_QWORD *)(*(_QWORD *)(a1 + 304) + 8LL * *(unsigned int *)(a1 + 312));
      *v3 = a2;
      sub_20B2EE0(v3, a2, 1);
      ++*(_DWORD *)(a1 + 312);
    }
  }
}
