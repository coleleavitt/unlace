unsigned __int64 __fastcall sub_1E61D20(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rbx
  unsigned __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r10d
  const char *v10; // rbp
  _QWORD *v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  size_t v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  size_t v18; // rax
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rbp
  __int16 v25; // ax
  __int64 v26; // rax
  __int64 (__fastcall ***v27)(); // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-40h]

  v3 = a1[1];
  v4 = *a1;
  v5 = *(_QWORD *)(v3 + 128) + 144LL * a3;
  result = (unsigned __int64)sub_1E5DA80(
                               *(_QWORD **)(v5 + 24),
                               *(_QWORD *)(v5 + 24) + 8LL * *(unsigned int *)(v5 + 32),
                               271);
  if ( result == v8 )
  {
    v10 = "strong";
    if ( v9 != 2 )
    {
      if ( v9 <= 2 )
      {
        v10 = "none";
        if ( v9 != 1 )
          v10 = nullptr;
      }
      else
      {
        v10 = "weak";
        if ( v9 != 3 )
        {
          v10 = "autoreleasing";
          if ( v9 != 4 )
            v10 = nullptr;
        }
      }
    }
    v11 = *(_QWORD **)(v4 + 248);
    v12 = v11[294];
    v11[304] += 16LL;
    v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v11[295] >= v13 + 16 && v12 )
    {
      v11[294] = v13 + 16;
      v14 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v14 = sub_986170((__int64)(v11 + 294), 16, 16, 3, v7, v8);
      v13 = v14 & 0xFFFFFFFFFFFFFFFDLL;
    }
    *(_DWORD *)v14 = 0;
    v15 = 0;
    *(_QWORD *)(v14 + 8) = 0;
    v16 = *(_QWORD *)(v4 + 248);
    v17 = *(_QWORD *)(v16 + 17504);
    if ( v10 )
    {
      v30 = *(_QWORD *)(v16 + 17504);
      v18 = j__strlen(v10);
      v17 = v30;
      v15 = v18;
    }
    *(_QWORD *)(v14 + 8) = sub_6F3470(v17, v10, v15);
    v19 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(v4 + 248) + 17504LL), "objc_ownership", 0xEu);
    v24 = sub_15D92D0(*(_QWORD *)(v3 + 768), 88, v20, v21, v22, v23);
    v25 = sub_F963B0(v19, 0, 1);
    *(_BYTE *)(v24 + 35) &= 0xFCu;
    *(_WORD *)(v24 + 32) = v25;
    v26 = *(_QWORD *)(v24 + 56);
    *(_QWORD *)v24 = v19;
    *(_QWORD *)(v24 + 8) = 0;
    *(_BYTE *)(v24 + 34) = -15;
    *(_QWORD *)(v24 + 40) = 0;
    *(_QWORD *)(v24 + 48) = 0;
    *(_QWORD *)(v24 + 56) = v26 & 0x7F800000 | 1;
    *(_OWORD *)(v24 + 16) = 0;
    v27 = sub_15D7D80(v24);
    *(_QWORD *)(v24 + 80) = v13 | 2;
    v28 = *(unsigned int *)(v3 + 788);
    *(_QWORD *)(v24 + 72) = v27;
    v29 = *(unsigned int *)(v3 + 784);
    if ( v29 + 1 > v28 )
    {
      sub_2237220(v3 + 776, v3 + 792, v29 + 1, 8);
      v29 = *(unsigned int *)(v3 + 784);
    }
    *(_QWORD *)(*(_QWORD *)(v3 + 776) + 8 * v29) = v24;
    ++*(_DWORD *)(v3 + 784);
    result = *(unsigned int *)(v5 + 32);
    if ( result + 1 > *(unsigned int *)(v5 + 36) )
    {
      sub_2237220(v5 + 24, v5 + 40, result + 1, 8);
      result = *(unsigned int *)(v5 + 32);
    }
    *(_QWORD *)(*(_QWORD *)(v5 + 24) + 8 * result) = v24;
    ++*(_DWORD *)(v5 + 32);
  }
  return result;
}
