/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_759C0
// Address: 0x00000000000759C0

//----- (00000000000759C0) ----------------------------------------------------
char __fastcall sub_759C0(__int64 a1, _DWORD *a2, __int64 a3, char *a4, double a5, __m128 a6)
{
  int v8; // eax
  __int64 v9; // rax
  int v10; // edx
  __int64 *v11; // rax
  __int64 v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v13[1] = __readfsqword(0x28u);
  v8 = a2[7];
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = sub_6D4B0(*(_QWORD *)(a1 + 8), v8);
      v10 = *(_DWORD *)(v9 + 60);
      if ( v10 != -1 )
        return sub_77750(a1, a2, v10, a3, a4, 0, a5, a6);
      v8 = *(_DWORD *)(v9 + 24);
      if ( !v8 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v13[0] = a3;
    v11 = sub_80B80((__int64)a2, a3, (__int64)&dword_1034A4, v13);
    copy_idcv((char *)v11 + 56, a4, a5, a6);
    return 1;
  }
}
// 1034A4: using guessed type int dword_1034A4;
