__int64 __fastcall sub_F2B6E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r13
  const char *v7; // rax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rdi
  size_t v12; // rdx
  char *v13; // rsi
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx

  v6 = sub_995540(*(_QWORD *)(a1 + 1096), " ");
  v7 = sub_B3A6E0((*(_BYTE *)(a2 + 15) >> 5) & 3);
  sub_995540(v6, v7);
  v8 = *(_QWORD *)(a1 + 1096);
  if ( *(char *)(a2 + 15) < 0 )
    sub_995540(v8, " explicitly");
  else
    sub_995540(v8, " implicitly");
  v9 = *(_DWORD *)(a2 + 40);
  if ( *(_DWORD *)(a2 + 24) )
  {
    v10 = *(_QWORD *)(a1 + 1096);
    if ( v9 == -1 )
    {
      v17 = sub_995540(v10, " Param=\"");
      v18 = *(_QWORD *)(a2 + 16);
      v11 = v17;
      v12 = *(_QWORD *)(v18 + 16);
      v13 = *(char **)(v18 + 8);
    }
    else
    {
      v11 = sub_995540(v10, " Param=\"");
      v13 = sub_B3B170(a2, a3);
    }
    v14 = sub_9954E0(v11, v13, v12);
    sub_995540(v14, "\"");
    v9 = *(_DWORD *)(a2 + 40);
  }
  result = (unsigned int)(v9 + 2);
  if ( (unsigned int)result > 1 )
  {
    v16 = sub_995540(*(_QWORD *)(a1 + 1096), " ParamIndex=");
    return sub_227B910(v16, *(unsigned int *)(a2 + 40));
  }
  return result;
}
