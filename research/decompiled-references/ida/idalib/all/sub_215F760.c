_QWORD *__fastcall sub_215F760(_QWORD *a1, unsigned __int64 a2)
{
  unsigned int *v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  _DWORD *v5; // rax
  unsigned int v6; // edx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(); // rdx
  __int64 v10; // rax
  bool v11; // cf
  char *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(); // [rsp+0h] [rbp-38h] BYREF
  _QWORD v16[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(unsigned int **)(a2 + 80);
  if ( !v2 )
    goto LABEL_6;
  v3 = *(_QWORD *)(a2 + 64);
  v4 = a2;
  v5 = (_DWORD *)(v3 ? v3 + 92 : *(_QWORD *)(a2 + 72) + 108LL);
  if ( !*v5 )
    goto LABEL_6;
  v6 = *v2;
  if ( !*v2 )
    goto LABEL_6;
  v15 = nullptr;
  sub_215F120(v16, (void **)a2, v6, &v15, (__int64)"export table");
  v8 = v16[0];
  if ( !v16[0] )
  {
    if ( (v9 = v15, v10 = v2[1], v11 = __CFADD__(v15, v10), v12 = (char *)v15 + v10, (v13 = v11) == 0)
      && (v13 = *(_QWORD *)(a2 + 16), a2 = v13 + *(_QWORD *)(a2 + 24), (unsigned __int64)v12 <= a2)
      && v13 <= (unsigned __int64)v15
      || (v14 = sub_2195B10(v16, a2, v15, v13), sub_2220500(v16, 4, v14), v8 = v16[0], v9 = v15, !v16[0]) )
    {
      *(_QWORD *)(v4 + 152) = v9;
LABEL_6:
      *a1 = 0;
      return a1;
    }
  }
  *a1 = v8;
  return a1;
}
