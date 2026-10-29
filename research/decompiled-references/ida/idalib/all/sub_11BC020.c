__int64 __fastcall sub_11BC020(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // rcx

  v4 = sub_12AFEA0();
  if ( *(_DWORD *)(a1 + 60) == 13 && !v4 )
  {
    sub_10DC5D0(a3, (__int64)"-z");
    sub_10DC5D0(a3, (__int64)"record");
    v7 = *(unsigned int *)(a3 + 8);
    v8 = v7 + 1;
    if ( v7 + 1 <= (unsigned __int64)*(unsigned int *)(a3 + 12) )
      goto LABEL_6;
    goto LABEL_17;
  }
  v5 = *(unsigned int *)(a3 + 8);
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v5 + 1, 8);
    v5 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v5) = "--no-as-needed";
  v6 = *(unsigned int *)(a3 + 12);
  v7 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  v8 = v7 + 1;
  *(_DWORD *)(a3 + 8) = v7;
  if ( v7 + 1 > v6 )
  {
LABEL_17:
    sub_2237220(a3, a3 + 16, v8, 8);
    v7 = *(unsigned int *)(a3 + 8);
  }
LABEL_6:
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v7) = "-lpthread";
  v9 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  v10 = *(_DWORD *)(a1 + 60) == 12;
  *(_DWORD *)(a3 + 8) = v9;
  if ( v10 )
  {
    v11 = v9 + 1;
    if ( v9 + 1 <= (unsigned __int64)*(unsigned int *)(a3 + 12) )
      goto LABEL_8;
    goto LABEL_15;
  }
  if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v9 + 1, 8);
    v9 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v9) = "-lrt";
  v13 = *(unsigned int *)(a3 + 12);
  v9 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  v11 = v9 + 1;
  *(_DWORD *)(a3 + 8) = v9;
  if ( v9 + 1 > v13 )
  {
LABEL_15:
    sub_2237220(a3, a3 + 16, v11, 8);
    v9 = *(unsigned int *)(a3 + 8);
  }
LABEL_8:
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v9) = "-lm";
  result = *(unsigned int *)(a1 + 60);
  ++*(_DWORD *)(a3 + 8);
  if ( (unsigned int)(result - 11) > 1 && (_DWORD)result != 3 )
    return sub_10DC5D0(a3, (__int64)"-ldl");
  return result;
}
