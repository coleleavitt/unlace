__int64 __fastcall sub_129A950(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  const char *v11; // r12
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  bool v15; // zf
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx

  v2 = *(unsigned int *)(a2 + 8);
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, v2 + 1, 8);
    v2 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v2) = "-z";
  v3 = *(unsigned int *)(a2 + 12);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v4;
  if ( v4 + 1 > v3 )
  {
    sub_2237220(a2, a2 + 16, v4 + 1, 8);
    v4 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v4) = "now";
  v5 = *(unsigned int *)(a2 + 12);
  v6 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v6;
  if ( v6 + 1 > v5 )
  {
    sub_2237220(a2, a2 + 16, v6 + 1, 8);
    v6 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v6) = "-z";
  v7 = *(unsigned int *)(a2 + 12);
  v8 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v8;
  if ( v8 + 1 > v7 )
  {
    sub_2237220(a2, a2 + 16, v8 + 1, 8);
    v8 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v8) = "relro";
  v9 = *(unsigned int *)(a2 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v10;
  if ( v10 + 1 > v9 )
  {
    sub_2237220(a2, a2 + 16, v10 + 1, 8);
    v10 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v10) = "-z";
  v11 = "max-page-size=16384";
  v12 = *(unsigned int *)(a2 + 12);
  v13 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  if ( *(_DWORD *)(a1 + 48) != 14 )
    v11 = "max-page-size=4096";
  *(_DWORD *)(a2 + 8) = v13;
  if ( v13 + 1 > v12 )
  {
    sub_2237220(a2, a2 + 16, v13 + 1, 8);
    v13 = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * v13) = v11;
  result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  v15 = *(_DWORD *)(a1 + 48) == 17;
  *(_DWORD *)(a2 + 8) = result;
  if ( v15 )
  {
    v16 = result + 1;
    if ( result + 1 <= (unsigned __int64)*(unsigned int *)(a2 + 12) )
      goto LABEL_17;
LABEL_21:
    sub_2237220(a2, a2 + 16, v16, 8);
    result = *(unsigned int *)(a2 + 8);
    goto LABEL_17;
  }
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, result + 1, 8);
    result = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * result) = "--hash-style=both";
  v17 = *(unsigned int *)(a2 + 12);
  result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  v16 = result + 1;
  *(_DWORD *)(a2 + 8) = result;
  if ( result + 1 > v17 )
    goto LABEL_21;
LABEL_17:
  *(_QWORD *)(*(_QWORD *)a2 + 8 * result) = "--enable-new-dtags";
  ++*(_DWORD *)(a2 + 8);
  return result;
}
