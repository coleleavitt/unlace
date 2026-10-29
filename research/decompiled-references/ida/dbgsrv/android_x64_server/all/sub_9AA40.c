/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9AA40
// Address: 0x000000000009AA40

//----- (000000000009AA40) ----------------------------------------------------
void __fastcall sub_9AA40(__int64 a1)
{
  int *v1; // r12
  unsigned __int64 v3; // r15
  __int64 v4; // rbx
  unsigned __int64 v5; // r13
  void *v6; // rdi

  v1 = *(int **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
    {
      v4 = 0;
      v5 = 1;
      if ( *v1 < -1 )
        goto LABEL_9;
LABEL_6:
      v6 = *(void **)&v1[v4 + 2];
      if ( v6 )
      {
        *(_QWORD *)&v1[v4 + 4] = 0;
        qfree(v6);
        *(_QWORD *)&v1[v4 + 2] = 0;
        *(_QWORD *)&v1[v4 + 6] = 0;
      }
      v1[v4] = -2;
LABEL_9:
      while ( v5 < v3 )
      {
        v1 = *(int **)a1;
        v4 += 8;
        ++v5;
        if ( *(int *)(*(_QWORD *)a1 + v4 * 4) >= -1 )
          goto LABEL_6;
      }
      v1 = *(int **)a1;
    }
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v1);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
