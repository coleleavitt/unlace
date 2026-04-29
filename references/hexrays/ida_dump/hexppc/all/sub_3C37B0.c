__int64 __fastcall sub_3C37B0(_DWORD *a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // eax

  v3 = a1[3];
  if ( v3 >= *(_DWORD *)(a2 + 64) )
    goto LABEL_7;
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 528) + 8LL * v3);
  if ( !v4 )
    goto LABEL_7;
  v5 = sub_32CA00(v4, a1[4]);
  if ( !v5 || !*(_QWORD *)(v5 + 8) )
  {
    v3 = a1[3];
LABEL_7:
    a1[3] = v3 + 1;
    v6 = 0;
    goto LABEL_8;
  }
  v6 = a1[4] + 1;
LABEL_8:
  a1[4] = v6;
  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 48LL))(a1, a2);
  return 1;
}
