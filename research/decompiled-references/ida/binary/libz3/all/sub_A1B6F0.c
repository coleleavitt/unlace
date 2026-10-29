__int64 *__fastcall sub_A1B6F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rax
  __int64 ***v7; // r8
  unsigned int *v8; // rdx
  unsigned int v9; // r10d
  unsigned int v10; // esi

  v5 = *(_QWORD *)(a2 + 8);
  v7 = *(__int64 ****)(v5 + 8);
  if ( !v7 )
  {
    v8 = *(unsigned int **)v5;
    v9 = 0;
    if ( *(_QWORD *)v5 )
      goto LABEL_3;
LABEL_6:
    v10 = 0;
    return sub_A1B200(a1, v10, v8, v9, v7, a3, a5, a4);
  }
  v8 = *(unsigned int **)v5;
  v9 = *((_DWORD *)v7 - 1);
  if ( !*(_QWORD *)v5 )
    goto LABEL_6;
LABEL_3:
  v10 = *(v8 - 1);
  return sub_A1B200(a1, v10, v8, v9, v7, a3, a5, a4);
}

