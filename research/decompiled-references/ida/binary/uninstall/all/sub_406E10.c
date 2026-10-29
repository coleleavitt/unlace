__int64 __fastcall sub_406E10(__int64 a1, __int64 a2, const char *a3)
{
  int v3; // r12d
  __int64 result; // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  const char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // r14
  __int64 v13; // r12
  char *v14; // rcx
  const char *v15; // rsi
  int v16; // edx
  __int64 v17; // r13
  bool v18; // zf
  int v19; // [rsp+Ch] [rbp-2Ch] BYREF

  v3 = a2;
  result = 1;
  if ( (*(_BYTE *)(a1 + 424) & 1) != 0 )
    return result;
  if ( strstr(a3, "::") )
  {
    v9 = "cannot expose to a namespace (use expose to toplevel, then rename)";
LABEL_4:
    sub_48B710(a1, (_DWORD)v9, 0, v6, v7, v8);
    return 1;
  }
  v10 = *(_QWORD *)(a1 + 48);
  if ( !v10 || (v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v10 + 64))(*(_QWORD *)(a1 + 48), a2)) == 0 )
  {
    v14 = "\"";
    v15 = "unknown hidden command \"";
    v16 = v3;
LABEL_11:
    sub_48B710(a1, (_DWORD)v15, v16, (_DWORD)v14, 0, v8);
    return 1;
  }
  v12 = *(__int64 **)(v11 + 24);
  v13 = v12[1];
  if ( v13 != *(_QWORD *)(a1 + 40) )
  {
    v9 = "trying to expose a non global command name space command";
    goto LABEL_4;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, const char *, int *))(v13 + 232))(v13 + 160, a3, &v19);
  if ( !v19 )
  {
    v14 = "\" already exists";
    v15 = "exposed command \"";
    v16 = (int)a3;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(v13 + 352) )
    ++*(_DWORD *)(v13 + 392);
  if ( *(_DWORD *)(v13 + 416) )
    ++*(_DWORD *)(v13 + 360);
  if ( *v12 )
    sub_457BC0(*v12);
  v18 = v12[3] == 0;
  *v12 = v17;
  *(_QWORD *)(v17 + 24) = v12;
  if ( !v18 )
    ++*(_DWORD *)(a1 + 392);
  return 0;
}

