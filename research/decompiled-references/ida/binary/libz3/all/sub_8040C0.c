__int64 __fastcall sub_8040C0(_DWORD *a1, unsigned int *a2)
{
  __int64 v2; // r12
  unsigned __int8 (*v3)(void); // rax
  __int64 v4; // rax
  char *v5; // rdx
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  unsigned int v7; // eax

  v2 = sub_7E4F00((__int64)a1, a2);
  v3 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 560LL);
  if ( (char *)v3 != (char *)sub_803DC0 )
  {
    if ( v3() )
      return 1;
    if ( v2 )
      goto LABEL_9;
    goto LABEL_15;
  }
  v4 = sub_7E4F00((__int64)a1, a2);
  if ( !v4 )
    goto LABEL_8;
  v5 = (char *)(v4 + 88);
  if ( *(int *)(v4 + 88) >> 8 == -1 )
    goto LABEL_8;
  while ( a1[3] != *v5 )
  {
    v5 = *((char **)v5 + 1);
    if ( !v5 )
      goto LABEL_8;
  }
  if ( *(int *)v5 >> 8 == -1 )
  {
LABEL_8:
    if ( v2 )
    {
LABEL_9:
      v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 528LL);
      if ( v6 == sub_803CC0 )
      {
        v7 = sub_7E69A0((__int64)a1, v2);
        sub_13D7950(*((_QWORD *)a1 + 14) + 1592LL, v2, v7, (unsigned int)a1[3]);
      }
      else
      {
        v6((__int64)a1, v2);
      }
      sub_14CCC20(a1 + 48, a2);
      return 1;
    }
LABEL_15:
    v2 = sub_7E67D0((__int64)a1, (__int64)a2, 0);
    goto LABEL_9;
  }
  return 1;
}

