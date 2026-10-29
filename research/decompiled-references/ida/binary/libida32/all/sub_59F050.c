__int64 __fastcall sub_59F050(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int *v4; // rax
  unsigned int v5; // edx

  v4 = sub_59ED40(a1, a2, a3);
  v5 = 0;
  if ( v4 && *v4 == a3 && (v5 = v4[1], *(unsigned int **)(a2 + 48) != v4) )
    return v5 - *(v4 - 1);
  else
    return v5;
}

