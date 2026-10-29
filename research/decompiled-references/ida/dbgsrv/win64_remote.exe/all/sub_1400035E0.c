/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400035E0
// Address: 0x00000001400035E0

//----- (00000001400035E0) ----------------------------------------------------
void __fastcall sub_1400035E0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  int v3; // eax
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  _QWORD *v5; // rbx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v2 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v3 = *((_DWORD *)v2 + 2);
    if ( v3 <= 1 )
    {
      v4 = (void (__fastcall ***)(_QWORD, __int64))v2[2];
      if ( v4 )
      {
        (**v4)(v4, 1);
        v2[2] = 0;
      }
      if ( *v2 )
      {
        FreeLibrary((HMODULE)*v2);
        *v2 = 0;
      }
    }
    else
    {
      *((_DWORD *)v2 + 2) = v3 - 1;
      *a1 = 0;
    }
  }
  v5 = (_QWORD *)*a1;
  if ( *a1 )
  {
    if ( !--dword_1400CADF0 && byte_1400CADF4 )
    {
      CoUninitialize();
      byte_1400CADF4 = 0;
    }
    v6 = (void *)v5[10];
    if ( v6 )
    {
      v5[11] = 0;
      j_free(v6);
      v5[10] = 0;
      v5[12] = 0;
    }
    v7 = (void *)v5[7];
    if ( v7 )
    {
      v5[8] = 0;
      j_free(v7);
      v5[7] = 0;
      v5[9] = 0;
    }
    v8 = (void *)v5[4];
    if ( v8 )
    {
      v5[5] = 0;
      j_free(v8);
      v5[4] = 0;
      v5[6] = 0;
    }
    j_j_free(v5);
    *a1 = 0;
  }
}
// 1400CADF0: using guessed type int dword_1400CADF0;
// 1400CADF4: using guessed type char byte_1400CADF4;
