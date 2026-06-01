void __fastcall sub_9668E0(_QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[2];
  *a1 = off_2BD2BD0;
  if ( v1 != a1 + 4 )
    free(v1);
}

