/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88A70
// Address: 0x00088A70

//----- (00088A70) --------------------------------------------------------
_DWORD *__cdecl sub_88A70(_DWORD *a1, int a2)
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  size_t v6; // [esp+18h] [ebp-14h]

  if ( a1 != (_DWORD *)a2 )
  {
    v2 = *a1;
    if ( *(int *)a2 < -1 )
    {
      if ( v2 >= -1 )
      {
        v3 = (void *)a1[1];
        if ( v3 )
        {
          a1[2] = 0;
          qfree(v3);
          a1[1] = 0;
          a1[3] = 0;
        }
      }
      *(_QWORD *)(a1 + 1) = *(_QWORD *)(a2 + 4);
    }
    else if ( v2 < -1 )
    {
      a1[1] = 0;
      a1[2] = 0;
      a1[3] = 0;
      if ( *(_DWORD *)(a2 + 8) )
      {
        v6 = *(_DWORD *)(a2 + 8);
        v4 = qalloc_or_throw(v6);
        a1[1] = v4;
        a1[3] = v6;
        memcpy(v4, *(const void **)(a2 + 4), v6);
        a1[2] = v6;
      }
    }
    else
    {
      sub_88B60(a1 + 1, a2 + 4);
    }
    *a1 = *(_DWORD *)a2;
  }
  return a1;
}
