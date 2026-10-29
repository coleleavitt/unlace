unsigned __int64 __fastcall sub_11C170(_QWORD *a1)
{
  __int64 v2; // r14
  int v3; // eax
  const char *v4; // r15
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  const char *v7; // rdi
  int v9; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  *((_BYTE *)a1 + 113) = 1;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)a1[1] + 8LL))(a1[1], 31, *(_QWORD *)(*a1 + 24LL));
  sub_11BE80(a1);
  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, **(_QWORD **)(*a1 + 16LL))
                 + 24);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 12);
    *(_DWORD *)(v2 + 12) = v3 + 1;
    if ( !a1[12] )
    {
      v9 = -1;
      goto LABEL_10;
    }
  }
  else if ( !a1[12] )
  {
    v9 = -1;
    goto LABEL_11;
  }
  v4 = *(const char **)(v2 + 16);
  v5 = a1[11];
  v6 = 0;
  while ( 1 )
  {
    v7 = s1;
    if ( *(_QWORD *)(v5 + 8) )
      v7 = *(const char **)v5;
    if ( !strcmp(v7, v4) )
      break;
    ++v6;
    v5 += 24;
    if ( v6 >= a1[12] )
    {
      LODWORD(v6) = -1;
      break;
    }
  }
  v9 = v6;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 12) - 1;
LABEL_10:
    *(_DWORD *)(v2 + 12) = v3;
  }
LABEL_11:
  (*(void (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)a1[1] + 8LL))(a1[1], 30, &v9);
  *((_BYTE *)a1 + 113) = 0;
  return v10 - __readfsqword(0x28u);
}

