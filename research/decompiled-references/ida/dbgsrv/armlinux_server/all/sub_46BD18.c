/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BD18
// Address: 0x000000000046BD18

//----- (000000000046BD18) ----------------------------------------------------
__int64 __fastcall sub_46BD18(__int64 a1, __int64 a2)
{
  int *v3; // x0
  unsigned int v4; // w21
  int *v5; // x21
  void *v6; // x0
  void *v7; // x0
  void *ptr; // [xsp+20h] [xbp-20h] BYREF
  __int64 v10; // [xsp+28h] [xbp-18h]
  __int64 v11; // [xsp+30h] [xbp-10h]

  ptr = nullptr;
  v10 = 0;
  v11 = 0;
  sub_46B060(a2, (__int64)&ptr);
  v3 = (int *)sub_46B250(a1, (const char **)&ptr);
  v4 = 0;
  if ( (int *)(a1 + 8) != v3 )
  {
    v5 = sub_49FAC0(v3, (_QWORD *)(a1 + 8));
    v6 = *((void **)v5 + 7);
    if ( v6 )
    {
      *((_QWORD *)v5 + 8) = 0;
      j__free(v6);
    }
    v7 = *((void **)v5 + 4);
    if ( v7 )
    {
      *((_QWORD *)v5 + 5) = 0;
      j__free(v7);
    }
    j__free_0(v5);
    v4 = 1;
    --*(_QWORD *)(a1 + 40);
  }
  if ( ptr )
  {
    v10 = 0;
    j__free(ptr);
  }
  return v4;
}
