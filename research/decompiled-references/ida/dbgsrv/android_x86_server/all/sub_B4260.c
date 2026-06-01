/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B4260
// Address: 0x000B4260

//----- (000B4260) --------------------------------------------------------
_DWORD *__cdecl sub_B4260(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  void **v4; // edi
  void *v5; // eax

  v3 = qalloc_or_throw(32);
  v3[3] = 0;
  v3[2] = 0;
  v3[5] = 0;
  v3[4] = 0;
  v3[7] = 0;
  v3[6] = 0;
  v4 = (void **)operator new(0x10u);
  *v4 = nullptr;
  v4[1] = nullptr;
  v4[2] = nullptr;
  if ( sem_init((sem_t *)(v4 + 3), 0, 0) == -1 )
  {
    v5 = *v4;
    if ( *v4 )
    {
      v4[1] = nullptr;
      qfree(v5);
    }
    operator delete(v4);
    v4 = nullptr;
  }
  v3[6] = v4;
  *((_WORD *)v3 + 14) = 0;
  *v3 = a1 + 12;
  v3[1] = *(_DWORD *)(a1 + 16);
  **(_DWORD **)(a1 + 16) = v3;
  *(_DWORD *)(a1 + 16) = v3;
  ++*(_DWORD *)(a1 + 20);
  v3[2] = a2;
  v3[5] = a3;
  return v3 + 2;
}
