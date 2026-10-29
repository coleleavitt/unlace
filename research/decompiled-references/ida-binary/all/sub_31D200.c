unsigned __int64 __fastcall sub_31D200(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  int v4; // eax
  const char *v5; // r13
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  const char *v8; // rdi
  int v9; // edx
  __int64 v10; // rbx
  __int64 v12; // [rsp+8h] [rbp-60h]
  int v13; // [rsp+1Ch] [rbp-4Ch] BYREF
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  *((_BYTE *)a1 + 73) = 1;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)a1[1] + 8LL))(a1[1], 31, *(_QWORD *)(*a1 + 24LL));
  sub_31CE70(a1);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL));
  v3 = *(_QWORD *)(v2 + 24);
  v12 = v2;
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 12);
    *(_DWORD *)(v3 + 12) = v4 + 1;
    if ( !a1[7] )
    {
      v13 = -1;
      goto LABEL_11;
    }
  }
  else if ( !a1[7] )
  {
    v13 = -1;
    goto LABEL_12;
  }
  v5 = *(const char **)(v3 + 16);
  v6 = a1[6];
  v7 = 0;
  do
  {
    v8 = &s1;
    if ( *(_QWORD *)(v6 + 8) )
      v8 = *(const char **)v6;
    if ( !strcmp(v8, v5) )
    {
      v9 = v7;
      goto LABEL_9;
    }
    ++v7;
    v6 += 24;
  }
  while ( v7 < a1[7] );
  v9 = -1;
LABEL_9:
  v13 = v9;
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 12) - 1;
LABEL_11:
    *(_DWORD *)(v3 + 12) = v4;
  }
LABEL_12:
  (*(void (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)a1[1] + 8LL))(a1[1], 30, &v13);
  v10 = *(_QWORD *)(v12 + 24);
  v14 = v10;
  if ( v10 )
  {
    ++*(_DWORD *)(v10 + 12);
    sub_31D160(a1, &v14);
    --*(_DWORD *)(v10 + 12);
  }
  else
  {
    sub_31D160(a1, &v14);
  }
  *((_BYTE *)a1 + 73) = 0;
  return v15 - __readfsqword(0x28u);
}
