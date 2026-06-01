/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004D9E0
// Address: 0x000000014004D9E0

//----- (000000014004D9E0) ----------------------------------------------------
void __fastcall sub_14004D9E0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  char *v4; // rax
  char *v5; // r15
  __int64 v6; // r12
  _QWORD *v7; // rsi
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  char *v10; // rdi
  _OWORD *v11; // rdx
  _OWORD *v12; // rax
  __int64 v13; // rcx
  void *v14; // rcx
  void *v15; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  if ( a2 > v3 )
  {
    v4 = (char *)sub_14005ABE0(a1, nullptr, a2, 0x1B0u);
    v5 = v4;
    v6 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v3;
    v7 = *(_QWORD **)a1;
    v8 = *(_QWORD *)(a1 + 8) - 1LL;
    if ( v8 >= 0 )
    {
      v9 = v7 + 8;
      v10 = v4 + 16;
      do
      {
        *((_QWORD *)v10 - 2) = *v7;
        *((_QWORD *)v10 - 1) = *(v9 - 7);
        *(v9 - 7) = 0;
        *(_QWORD *)v10 = *(v9 - 6);
        *(v9 - 6) = 0;
        *((_QWORD *)v10 + 1) = *(v9 - 5);
        *(v9 - 5) = 0;
        *((_DWORD *)v10 + 4) = *((_DWORD *)v9 - 8);
        *((_QWORD *)v10 + 3) = *(v9 - 3);
        *(v9 - 3) = 0;
        *((_QWORD *)v10 + 4) = *(v9 - 2);
        *(v9 - 2) = 0;
        *((_QWORD *)v10 + 5) = *(v9 - 1);
        *(v9 - 1) = 0;
        v11 = v10 + 48;
        v12 = v9;
        v13 = 2;
        do
        {
          *v11 = *v12;
          v11[1] = v12[1];
          v11[2] = v12[2];
          v11[3] = v12[3];
          v11[4] = v12[4];
          v11[5] = v12[5];
          v11[6] = v12[6];
          v11 += 8;
          *(v11 - 1) = v12[7];
          v12 += 8;
          --v13;
        }
        while ( v13 );
        *v11 = *v12;
        v11[1] = v12[1];
        v11[2] = v12[2];
        v11[3] = v12[3];
        v11[4] = v12[4];
        v11[5] = v12[5];
        *((_QWORD *)v11 + 12) = *((_QWORD *)v12 + 12);
        v10[408] = *((_BYTE *)v9 + 360);
        *((_DWORD *)v10 + 103) = *((_DWORD *)v9 + 91);
        v14 = (void *)*(v9 - 3);
        if ( v14 )
        {
          *(v9 - 2) = 0;
          j_free(v14);
          *(v9 - 3) = 0;
          *(v9 - 1) = 0;
        }
        v15 = (void *)*(v9 - 7);
        if ( v15 )
        {
          *(v9 - 6) = 0;
          j_free(v15);
          *(v9 - 7) = 0;
          *(v9 - 5) = 0;
        }
        v7 += 54;
        v9 += 54;
        v10 += 432;
        --v8;
      }
      while ( v8 >= 0 );
    }
    j_free(*(void **)a1);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 16) = v6;
  }
}
