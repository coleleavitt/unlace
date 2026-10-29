unsigned __int64 __fastcall sub_76F780(__int64 a1, __int64 a2, int a3, const char **a4)
{
  __int64 v6; // rbp
  const char *v7; // r13
  char *v8; // rax
  __int64 v9; // rdx
  void (*v10)(); // rax
  char *v11; // rdx
  void (*v13)(); // rax

  v6 = *(_QWORD *)(a1 + 88) + 48LL * a3;
  *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 120);
  v7 = *a4;
  v8 = strstr(*a4, *(const char **)(v6 + 24));
  if ( v8 )
  {
    v9 = *(_QWORD *)(v6 + 32);
    if ( v9 )
      v8 = &v8[v9 - 1];
    *a4 = v8;
    v10 = *(void (**)())(*(_QWORD *)a2 + 40LL);
    if ( v10 != nullsub_223 )
      ((void (__fastcall *)(__int64, _QWORD, void (*)()))v10)(a2, 0, nullsub_223);
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 116);
    v11 = (char *)*a4;
  }
  else
  {
    v11 = (char *)&v7[strlen(v7)];
    *a4 = v11;
    v13 = *(void (**)())(*(_QWORD *)a2 + 40LL);
    if ( v13 != nullsub_223 )
    {
      ((void (__fastcall *)(__int64, _QWORD))v13)(a2, (unsigned int)(a3 + 1));
      v11 = (char *)*a4;
    }
  }
  return sub_76F450(a1, a2, v11, *(_DWORD *)(a1 + 120));
}

