_QWORD *__fastcall sub_215F870(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // rbp
  _DWORD *v5; // rax
  __int64 v7; // rax
  __int64 (__fastcall *v8)(); // rdx
  __int64 v9; // rax
  bool v10; // cf
  char *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(); // [rsp+0h] [rbp-38h] BYREF
  _QWORD v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 80);
  if ( !v2 )
    goto LABEL_7;
  v3 = *(_QWORD *)(a2 + 64);
  v4 = a2;
  v5 = (_DWORD *)(v3 ? v3 + 92 : *(_QWORD *)(a2 + 72) + 108LL);
  if ( *v5 <= 5u || v2 == -40 || !*(_DWORD *)(v2 + 40) )
    goto LABEL_7;
  v14 = nullptr;
  sub_215F120(v15, (void **)a2, *(_DWORD *)(v2 + 40), &v14, (__int64)"base reloc table");
  v7 = v15[0];
  if ( !v15[0] )
  {
    if ( (v8 = v14, v9 = *(unsigned int *)(v2 + 44), v10 = __CFADD__(v14, v9), v11 = (char *)v14 + v9, (v12 = v10) == 0)
      && (v12 = *(_QWORD *)(a2 + 16), a2 = v12 + *(_QWORD *)(a2 + 24), (unsigned __int64)v11 <= a2)
      && v12 <= (unsigned __int64)v14
      || (v13 = sub_2195B10(v15, a2, v14, v12), sub_2220500(v15, 4, v13), v7 = v15[0], v8 = v14, !v15[0]) )
    {
      *(_QWORD *)(v4 + 160) = v8;
      *(_QWORD *)(v4 + 168) = (char *)v8 + *(unsigned int *)(v2 + 44);
LABEL_7:
      *a1 = 0;
      return a1;
    }
  }
  *a1 = v7;
  return a1;
}
