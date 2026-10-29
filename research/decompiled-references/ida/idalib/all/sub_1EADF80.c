void __fastcall sub_1EADF80(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rdi

  v1 = a1 + 4;
  v2 = *a1;
  if ( (_QWORD *)*a1 != a1 + 1 )
  {
    v3 = a1[2];
    if ( v3 )
    {
      if ( *(_QWORD *)v2 != v2 + 24 )
      {
        free(*(void **)v2);
        v3 = a1[2];
      }
      v4 = a1[1];
      *(_QWORD *)(v2 + 8) = v3;
      v5 = a1[3];
      *(_QWORD *)v2 = v4;
      *(_QWORD *)(v2 + 16) = v5;
      *((_OWORD *)a1 + 1) = 0;
      return;
    }
    *(_QWORD *)(v2 + 8) = 0;
  }
  v6 = (_QWORD *)a1[1];
  if ( v6 != v1 )
    free(v6);
}
