_QWORD *__fastcall sub_215F990(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(); // rdx
  __int64 (__fastcall *v13)(); // [rsp+0h] [rbp-38h] BYREF
  _QWORD v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 80);
  if ( !v2 )
    goto LABEL_7;
  v3 = *(_QWORD *)(a2 + 64);
  v4 = (_DWORD *)(v3 ? v3 + 92 : *(_QWORD *)(a2 + 72) + 108LL);
  if ( *v4 <= 6u || v2 == -48 || !*(_DWORD *)(v2 + 48) )
    goto LABEL_7;
  v6 = *(unsigned int *)(v2 + 52);
  if ( v6 == 28 * (v6 / 0x1C) )
  {
    v13 = nullptr;
    sub_215F120(v14, (void **)a2, *(_DWORD *)(v2 + 48), &v13, (__int64)"debug directory");
    v10 = v14[0];
    if ( !v14[0] )
    {
      sub_215ED20(
        v14,
        (unsigned __int64)v13,
        *(unsigned int *)(v2 + 52),
        v7,
        v8,
        v9,
        *(_QWORD *)(a2 + 16),
        *(_QWORD *)(a2 + 24));
      v10 = v14[0];
      if ( !v14[0] )
      {
        v12 = v13;
        *(_QWORD *)(a2 + 176) = v13;
        *(_QWORD *)(a2 + 184) = (char *)v12 + *(unsigned int *)(v2 + 52);
LABEL_7:
        *a1 = 0;
        return a1;
      }
    }
    *a1 = v10;
    return a1;
  }
  else
  {
    v11 = sub_2195B10(a1, 0x4924924924924925LL, v6 / 0x1C, v6);
    sub_A09EA0((__int64)a1, 3u, v11, "debug directory has uneven size");
    return a1;
  }
}
