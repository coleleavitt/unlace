/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C8810
// Address: 0x00000000000C8810

//----- (00000000000C8810) ----------------------------------------------------
_QWORD *__fastcall sub_C8810(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _OWORD *v5; // rbx
  char *v6; // r13
  void *v7; // rdi
  __int64 v8; // rax

  v5 = qalloc_or_throw(48);
  v5[2] = 0;
  v5[1] = 0;
  v6 = (char *)operator new(0x28u);
  *(_OWORD *)v6 = 0;
  *((_QWORD *)v6 + 2) = 0;
  if ( sem_init((sem_t *)(v6 + 24), 0, 0) == -1 )
  {
    v7 = *(void **)v6;
    if ( *(_QWORD *)v6 )
    {
      *((_QWORD *)v6 + 1) = 0;
      qfree(v7);
    }
    operator delete(v6);
    v6 = nullptr;
  }
  *((_QWORD *)v5 + 4) = v6;
  *((_WORD *)v5 + 20) = 0;
  v8 = *a3;
  *(_QWORD *)v5 = *a3;
  *((_QWORD *)v5 + 1) = *(_QWORD *)(v8 + 8);
  **(_QWORD **)(v8 + 8) = v5;
  *(_QWORD *)(v8 + 8) = v5;
  ++*(_QWORD *)(a2 + 16);
  *a1 = v5;
  return a1;
}
