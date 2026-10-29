void __fastcall sub_7CC9E0(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 v5; // r10
  char *v6; // rax

  v5 = *(_QWORD *)(a1 + 2264);
  v6 = (char *)(a2 + 88);
  if ( *(int *)(a2 + 88) >> 8 == -1 )
  {
LABEL_6:
    sub_7A8D90(v5, 0xFFFFFFFF, a3, a4, a5);
  }
  else
  {
    while ( *(_DWORD *)(v5 + 12) != *v6 )
    {
      v6 = *((char **)v6 + 1);
      if ( !v6 )
        goto LABEL_6;
    }
    sub_7A8D90(v5, *(int *)v6 >> 8, a3, a4, a5);
  }
}

