void reset_undo()
{
  __int64 v0; // r12
  _QWORD *v1; // rbp
  _QWORD *v2; // rbx
  void *v3; // rdi
  void *v4; // rdi

  v0 = *(_QWORD *)(qword_2CCB598 + 1848);
  v1 = *(_QWORD **)(v0 + 8);
  if ( (_QWORD *)(v0 + 8) != v1 )
  {
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      *(_QWORD *)v2[1] = v1;
      v1[1] = v2[1];
      v3 = (void *)v2[5];
      if ( v3 )
      {
        v2[6] = 0;
        qfree(v3);
      }
      v4 = (void *)v2[2];
      if ( v4 )
      {
        v2[3] = 0;
        qfree(v4);
      }
      qfree(v2);
      --*(_QWORD *)(v0 + 24);
    }
    while ( (_QWORD *)(v0 + 8) != v1 );
    v1 = *(_QWORD **)(v0 + 8);
  }
  *(_QWORD *)(v0 + 32) = v1;
  *(_QWORD *)(v0 + 104) = 0;
  *(_BYTE *)(v0 + 120) = 0;
}
