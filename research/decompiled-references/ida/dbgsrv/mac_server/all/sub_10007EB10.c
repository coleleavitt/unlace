/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007EB10
// Address: 0x000000010007EB10

//----- (000000010007EB10) ----------------------------------------------------
__int64 __fastcall sub_10007EB10(__int64 a1, int a2, int a3)
{
  __int64 *v3; // r13
  int v4; // ebx
  unsigned int v5; // r12d
  __int64 v6; // rax
  unsigned int v8; // [rsp+0h] [rbp-30h]

  v3 = *(__int64 **)(a1 + 24);
  if ( v3 != (__int64 *)(a1 + 24) )
  {
    v4 = a3 & 0x7F;
    v8 = a3 & 0xFFFFFF7F;
    v5 = 0;
    while ( 1 )
    {
      if ( !*((_BYTE *)v3 + 40) )
      {
        if ( (v5 & 1) != 0
          || *((_DWORD *)v3 + 4) != a2 && *((_DWORD *)v3 + 4) != -1
          || v8 == 4991 && (*((_DWORD *)v3 + 7) & 0x10) == 0 )
        {
          if ( v4 == 127 )
            goto LABEL_4;
          if ( *((_DWORD *)v3 + 4) != a2 )
            goto LABEL_4;
          *((_BYTE *)v3 + 24) = 1;
          *((_BYTE *)v3 + 40) = 1;
          v6 = v3[4];
          if ( !v6 )
            goto LABEL_4;
LABEL_15:
          if ( *(_QWORD *)(v6 + 8) > 1u )
            sem_post(*(sem_t **)(v6 + 24));
          else
            semaphore_signal(*(_DWORD *)(v6 + 24));
          goto LABEL_4;
        }
        *((_DWORD *)v3 + 4) = a2;
        *((_DWORD *)v3 + 5) = a3;
        *((_BYTE *)v3 + 40) = 1;
        v6 = v3[4];
        LOBYTE(v5) = 1;
        if ( v6 )
          goto LABEL_15;
      }
LABEL_4:
      v3 = (__int64 *)*v3;
      if ( v3 == (__int64 *)(a1 + 24) )
        return v5;
    }
  }
  return 0;
}
// 10007EBF7: masking with 0x1 was optimized away because r12.1 <= 0x1
