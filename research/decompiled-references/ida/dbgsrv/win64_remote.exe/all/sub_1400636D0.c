/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400636D0
// Address: 0x00000001400636D0

//----- (00000001400636D0) ----------------------------------------------------
void __fastcall sub_1400636D0(_QWORD *a1)
{
  __int64 v1; // rax
  signed __int64 v3; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdi
  void *v6; // rax
  void *v7; // rcx
  void *v8; // rcx

  v1 = a1[1];
  a1[3] = 0;
  v3 = *(_QWORD *)(v1 + 8);
  a1[2] = v3;
  a1[5] = 0;
  a1[4] = 0;
  v4 = *(unsigned int *)(v1 + 16);
  a1[6] = v4;
  if ( v4 )
  {
    if ( v3 <= 0 )
    {
      a1[6] = 0;
    }
    else
    {
      v5 = ((v3 + v4 - 1) / v4 + 7) >> 3;
      a1[5] = sub_14005AA50(v3);
      v6 = sub_14005AA50(v5);
      v7 = (void *)a1[5];
      a1[4] = v6;
      if ( v7 && v6 )
      {
        memset(v6, 0, v5);
      }
      else
      {
        j_free(v7);
        v8 = (void *)a1[4];
        a1[5] = 0;
        j_free(v8);
        a1[4] = 0;
        a1[6] = 0;
      }
    }
  }
}
