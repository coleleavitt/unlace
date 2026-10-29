__int64 __fastcall sub_29B4F0(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  int *v3; // rbx
  char v5; // al
  char v6; // r13

  v3 = *(int **)a2;
  if ( !(4LL * *(_QWORD *)(a2 + 8)) )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = v5;
    v5 = sub_29B420((__int64)a1, *v3, a3);
    if ( !v5 )
      break;
    if ( ++v3 == (int *)(*(_QWORD *)a2 + 4LL * *(_QWORD *)(a2 + 8)) )
      goto LABEL_7;
  }
  if ( !v6 )
    return 0;
LABEL_7:
  sub_29AD80(a1);
  return 1;
}
