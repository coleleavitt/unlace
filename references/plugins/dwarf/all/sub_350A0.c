__int64 __fastcall sub_350A0(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 *v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  const char *v10; // rsi
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  char v14; // [rsp+Fh] [rbp-49h] BYREF
  __int64 v15; // [rsp+10h] [rbp-48h] BYREF
  __int128 v16; // [rsp+18h] [rbp-40h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( (debug & 0x400000) != 0 )
  {
    v5 = sub_34340(a1);
    v10 = src;
    if ( v5[1] )
      v10 = (const char *)*v5;
    sub_88B80((unsigned int)"%s::as_tinfo()\n", (_DWORD)v10, v6, v7, v8, v9);
    v15 = 0;
    v16 = 0;
    if ( (debug & 0x400000) != 0 )
    {
      if ( *(_QWORD *)(a1 + 112) == -1 || (*(_QWORD *)(a1 + 112) & 0x7FFFFFFFFFFFFFFFLL) == 0 )
        sub_88A30((unsigned int)&v15, (unsigned int)"", *(_DWORD *)(a1 + 112), v11, v12, v13);
      else
        sub_88A30((unsigned int)&v15, (unsigned int)"<%llu>: ", *(_DWORD *)(a1 + 112), v11, v12, v13);
    }
  }
  else
  {
    v15 = 0;
    v16 = 0;
  }
  sub_81780(&v14, *(_QWORD *)(*(_QWORD *)(a1 + 80) + 144LL), a1 + 112);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, a2);
  sub_81790(&v14);
  sub_81710(&v15);
  return v3;
}
