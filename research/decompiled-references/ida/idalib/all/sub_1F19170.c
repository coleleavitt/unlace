__int64 __fastcall sub_1F19170(__int64 *a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  bool v10; // zf
  unsigned __int64 v11; // rax

  v5 = sub_1EE7490(*a1);
  v6 = *a1;
  *(_DWORD *)a3 = v5;
  v7 = *(unsigned int *)(v6 + 24);
  v8 = *(_QWORD *)(v6 + 32);
  result = (unsigned int)(v7 + 1);
  v10 = *(_QWORD *)(v8 + 8 * v7) == 0;
  *(_DWORD *)(v6 + 24) = result;
  if ( v10 )
  {
    v10 = *(_QWORD *)(v8 + 8 * result) == 0;
    *(_DWORD *)(v6 + 24) = v7 + 2;
    if ( v10 )
      return result;
LABEL_5:
    result = sub_1EE7490(v6);
    *(_DWORD *)(a3 + 4) = result;
    return result;
  }
  v11 = sub_1F19070(v6);
  v6 = *a1;
  *(_QWORD *)(a3 + 8) = v11;
  result = *(unsigned int *)(v6 + 24);
  v10 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * result) == 0;
  *(_DWORD *)(v6 + 24) = result + 1;
  if ( !v10 )
    goto LABEL_5;
  return result;
}
