_QWORD *__fastcall sub_215F640(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  _DWORD *v5; // rax
  unsigned int v6; // edx
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 (__fastcall *v10)(); // rdx
  __int64 v11; // rax
  bool v12; // cf
  char *v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(); // [rsp+0h] [rbp-38h] BYREF
  _QWORD v17[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 80);
  if ( !v2 )
    goto LABEL_7;
  v3 = *(_QWORD *)(a2 + 64);
  v4 = a2;
  v5 = (_DWORD *)(v3 ? v3 + 92 : *(_QWORD *)(a2 + 72) + 108LL);
  if ( *v5 <= 0xDu )
    goto LABEL_7;
  if ( v2 == -104 )
    goto LABEL_7;
  v6 = *(_DWORD *)(v2 + 104);
  if ( !v6 )
    goto LABEL_7;
  v8 = *(_DWORD *)(v2 + 108);
  v16 = nullptr;
  *(_DWORD *)(a2 + 144) = (v8 >> 5) - 1;
  sub_215F120(v17, (void **)a2, v6, &v16, (__int64)"delay import table");
  v9 = v17[0];
  if ( !v17[0] )
  {
    if ( (v10 = v16,
          v11 = *(unsigned int *)(v2 + 108),
          v12 = __CFADD__(v16, v11),
          v13 = (char *)v16 + v11,
          (v14 = v12) == 0)
      && (v14 = *(_QWORD *)(a2 + 16), a2 = v14 + *(_QWORD *)(a2 + 24), (unsigned __int64)v13 <= a2)
      && v14 <= (unsigned __int64)v16
      || (v15 = sub_2195B10(v17, a2, v16, v14), sub_2220500(v17, 4, v15), v9 = v17[0], v10 = v16, !v17[0]) )
    {
      *(_QWORD *)(v4 + 136) = v10;
LABEL_7:
      *a1 = 0;
      return a1;
    }
  }
  *a1 = v9;
  return a1;
}
