__int64 __fastcall sub_79C090(unsigned int *a1, __int64 a2, const char *a3, char a4)
{
  unsigned __int16 *v4; // rax
  unsigned int v7; // esi
  __int64 v8; // rdi

  v7 = *a1;
  v8 = *(_QWORD *)(a2 + 1544);
  if ( v7 == -1 || !a3 )
    return 0;
  sub_78D080(v8, v7, a4, a3);
  v4 = (unsigned __int16 *)sub_723E90(*(_QWORD *)v8, (unsigned __int16 *)(v8 + 45));
  if ( v4 )
    return *(unsigned int *)((char *)v4 + *v4 + 4);
  else
    return 0;
}

