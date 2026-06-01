/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AB8
// Address: 0x00080AB8

//----- (00080AB8) --------------------------------------------------------
_DWORD *__fastcall sub_80AB8(int a1, int a2, int a3)
{
  _DWORD *v4; // r7
  char *v5; // r5
  int v6; // r0
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r6
  _DWORD *result; // r0
  void *v12; // r0
  int v13; // [sp+4h] [bp-10h]

  v4 = qalloc_or_throw(32);
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v5 = (char *)operator new(0x10u);
  *(_DWORD *)v5 = 0;
  *((_DWORD *)v5 + 1) = 0;
  *((_DWORD *)v5 + 2) = 0;
  v6 = sem_init((sem_t *)(v5 + 12), 0, 0);
  v7 = a3;
  v8 = v6 + 1;
  v9 = a1;
  v10 = a1 + 12;
  result = v4 + 2;
  if ( !v8 )
  {
    v13 = v9;
    v12 = *(void **)v5;
    if ( *(_DWORD *)v5 )
    {
      *((_DWORD *)v5 + 1) = 0;
      qfree(v12);
    }
    operator delete(v5);
    v5 = nullptr;
    v7 = a3;
    result = v4 + 2;
    v9 = v13;
  }
  v4[6] = v5;
  *((_WORD *)v4 + 14) = 0;
  *v4 = v10;
  v4[1] = *(_DWORD *)(v9 + 16);
  **(_DWORD **)(v9 + 16) = v4;
  *(_DWORD *)(v9 + 16) = v4;
  ++*(_DWORD *)(v9 + 20);
  v4[5] = v7;
  v4[2] = a2;
  return result;
}
