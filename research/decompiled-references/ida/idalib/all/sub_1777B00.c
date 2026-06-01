unsigned __int64 __fastcall sub_1777B00(_QWORD *a1, __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r13
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  _DWORD *v17; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rax

  v4 = a3;
  v5 = a2;
  v8 = a4 + 1;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v14 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(v4 + 32),
          (const __m128i *)(v9 * (((unsigned __int64)v8 - (v8 != nullptr)) / v9 + (v8 != nullptr))),
          v10,
          v11);
  v15 = v14 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v16 = *(_QWORD *)v15;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v15 + 16LL) - 35 <= 1
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 <= 1
      && sub_F63050(v16, a2, v12, v13) )
    {
      v4 = sub_A74EC0(*(_QWORD *)(*a1 + 248LL), v14);
LABEL_4:
      sub_1EA6140(v5, v4, 4, 4);
      *v17 = *a4;
      return v4;
    }
    v19 = *a1;
    if ( !*(_DWORD *)(*a1 + 12632LL) )
    {
      sub_F6C520(*(_QWORD *)(v4 + 32));
      if ( v14 == *(_QWORD *)(v4 + 32) )
      {
        v23 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_10;
      }
      v19 = *a1;
    }
    a2 = v14;
    v4 = sub_1E6FFC0(v19, v14, (unsigned int)*a4, 0);
    v23 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
LABEL_10:
      sub_F68450(*v23, a2, v20, v21, v22);
      goto LABEL_4;
    }
  }
  return 0;
}
