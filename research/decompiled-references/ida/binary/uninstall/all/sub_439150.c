__int64 __fastcall sub_439150(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rax
  void *v4; // rdi
  size_t v5; // r12
  __int64 v6; // r13
  __int64 v7; // rdx
  void *v9; // rbx

  v2 = *(_QWORD *)(a1 + 120);
  v3 = *(_QWORD *)(a1 + 128);
  v4 = *(void **)(a1 + 112);
  v5 = v2 - (_QWORD)v4;
  v6 = 2 * (v3 - (_QWORD)v4);
  if ( *(_DWORD *)(a1 + 136) )
  {
    v7 = sub_40FC10(v4, v6);
    *(_QWORD *)(a1 + 112) = v7;
  }
  else
  {
    v9 = (void *)sub_40FB00(v6);
    memcpy(v9, *(const void **)(a1 + 112), v5);
    v7 = (__int64)v9;
    *(_QWORD *)(a1 + 112) = v9;
    *(_DWORD *)(a1 + 136) = 1;
  }
  *(_QWORD *)(a1 + 120) = v7 + v5;
  *(_QWORD *)(a1 + 128) = v7 + v6;
  return v7 + v6;
}

