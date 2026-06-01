/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000191B0
// Address: 0x00000001000191B0

//----- (00000001000191B0) ----------------------------------------------------
void __fastcall sub_1000191B0(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v4; // r13
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rax
  bool v9; // cf
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  _BYTE *v12; // rax
  __int64 v13; // r12
  char v14; // dl
  _BOOL8 v15; // rcx
  __int64 v16; // rsi
  _BYTE *v17; // r14

  if ( a1[3] && a1[1] )
  {
    v4 = 8;
    v5 = 0;
    do
    {
      v6 = (_QWORD *)a1[3];
      if ( v6 )
      {
        v7 = *a1;
        v8 = v6[2];
        v9 = v8 == 0;
        v10 = v8 - 1;
        v11 = 0;
        if ( !v9 )
          v11 = v10;
        if ( v11 > *(unsigned int *)(*a1 + v4 - 8) )
        {
          v12 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
          if ( *v12 )
          {
            if ( (~*(_BYTE *)(v7 + v4 - 4) & 0xE) == 0 )
            {
              v13 = *(_QWORD *)(v7 + v4) + a2[5];
              v14 = *(_BYTE *)(v7 + v4 - 3);
              if ( (*(_BYTE *)(v7 + v4 - 4) & 0x11) == 1 || v14 )
              {
                if ( a3 == 12 && v14 == 1 )
                {
                  v15 = (*(_WORD *)(v7 + v4 - 2) & 0xF) == 8;
                  v16 = *(_QWORD *)(v7 + v4) + a2[5];
                  v17 = v12;
                  (*(void (__fastcall **)(_QWORD *, __int64, _BYTE *, _BOOL8))(*a2 + 40LL))(a2, v16, v12, v15);
                  v12 = v17;
                }
                (*(void (__fastcall **)(_QWORD *, __int64, _BYTE *))(*a2 + 8LL))(a2, v13, v12);
              }
            }
          }
        }
      }
      ++v5;
      v4 += 16;
    }
    while ( v5 < a1[1] );
  }
}
