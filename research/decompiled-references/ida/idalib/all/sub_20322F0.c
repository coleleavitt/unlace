__int64 __fastcall sub_20322F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  void *v13; // rdi
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-18h]

  *(_QWORD *)a1 = &off_2C75A88;
  if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 16) )
    sub_227B9F0(a1, a2, a3, a4, a5, a6, v16);
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( !*(_DWORD *)(a1 + 44) || v8 )
    {
      v9 = *(_QWORD *)(a1 + 24) - v8;
    }
    else
    {
      v15 = sub_227AEC0(a1);
      v7 = *(_QWORD *)(a1 + 48);
      v9 = v15;
    }
    v10 = *(_QWORD *)(v7 + 32);
    v11 = *(_QWORD *)(v7 + 16);
    if ( v9 )
    {
      if ( v11 != v10 )
        sub_227B9F0(v7, a2, v11, a4, a5, a6, v16);
      v12 = operator new[](v9);
      sub_227B8B0(v7, v12, v9, 1);
    }
    else
    {
      if ( v11 != v10 )
        sub_227B9F0(v7, a2, v11, a4, a5, a6, v16);
      sub_227B8B0(v7, 0, 0, 0);
    }
  }
  v13 = *(void **)(a1 + 72);
  if ( v13 != (void *)(a1 + 96) )
    free(v13);
  return sub_227B7A0(a1);
}
