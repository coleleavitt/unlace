/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C6AF0
// Address: 0x00000000000C6AF0

//----- (00000000000C6AF0) ----------------------------------------------------
__int64 __fastcall sub_C6AF0(__int64 a1, int a2, int a3)
{
  bool v4; // r12
  __int64 *v5; // rbp
  __int64 *v6; // rbx
  unsigned int i; // r13d
  int v8; // eax
  __int64 v9; // rax
  sem_t *v10; // rdi

  v4 = (a3 & 0x7F) == 0 || (((_BYTE)a3 + 1) & 0x7E) != 0;
  v5 = *(__int64 **)(a1 + 24);
  v6 = (__int64 *)(a1 + 24);
  for ( i = 0; v6 != v5; v5 = (__int64 *)*v5 )
  {
    if ( !*((_BYTE *)v5 + 40) )
    {
      if ( (i & 1) == 0
        && ((v8 = *((_DWORD *)v5 + 4), v8 == -1) || v8 == a2)
        && (a3 != 0xFFFF || (*((_DWORD *)v5 + 7) & 8) != 0) )
      {
        *((_DWORD *)v5 + 4) = a2;
        *((_DWORD *)v5 + 5) = a3;
        *((_BYTE *)v5 + 40) = 1;
        v9 = v5[4];
        LOBYTE(i) = 1;
        if ( v9 )
          goto LABEL_18;
      }
      else if ( v4 && *((_DWORD *)v5 + 4) == a2 )
      {
        *((_BYTE *)v5 + 24) = 1;
        *((_BYTE *)v5 + 40) = 1;
        v9 = v5[4];
        if ( v9 )
        {
LABEL_18:
          v10 = (sem_t *)(v9 + 24);
          if ( *(_QWORD *)(v9 + 8) > 1u )
            v10 = (sem_t *)v10->__align;
          sem_post(v10);
        }
      }
    }
  }
  return i;
}
// C6BBE: masking with 0x1 was optimized away because r13.1 <= 0x1
