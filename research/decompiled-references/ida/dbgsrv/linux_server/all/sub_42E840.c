/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E840
// Address: 0x000000000042E840

//----- (000000000042E840) ----------------------------------------------------
__int64 __fastcall sub_42E840(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  __int64 v3; // r12
  unsigned __int64 v4; // r13
  __int64 v5; // r15
  void *v6; // rsi
  unsigned __int64 v7; // rbx
  size_t v8; // r15
  void **v9; // r12
  unsigned __int64 v10; // r14
  void *v11; // r13
  void *v12; // rsi
  void *v14; // rax
  void *v15; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352) - 8);
  v2 = *(_QWORD *)(v1 + 16);
  v3 = *(_QWORD *)(v2 + 8);
  if ( !v3 )
  {
    v6 = *(void **)v2;
    v5 = 1;
    v4 = 2;
    if ( *(_QWORD *)(v2 + 16) >= 2u )
      goto LABEL_3;
LABEL_12:
    v14 = sub_481540(*(_QWORD *)(v1 + 16), v6, v4, 1u);
    *(_QWORD *)v2 = v14;
    v6 = v14;
    goto LABEL_3;
  }
  v4 = v3 + 1;
  v5 = *(_QWORD *)(v2 + 8);
  v6 = *(void **)v2;
  --v3;
  if ( *(_QWORD *)(v2 + 16) < v4 )
    goto LABEL_12;
LABEL_3:
  *(_QWORD *)(v2 + 8) = v4;
  *((_BYTE *)v6 + v3) = 46;
  *(_BYTE *)(*(_QWORD *)v2 + v5) = 0;
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v7 != 1 )
    {
      v9 = *(void ***)(v1 + 16);
      v10 = v7 - 1;
      v11 = v9[1];
      if ( v11 )
      {
        v11 = (char *)v11 - 1;
        v10 = (unsigned __int64)v11 + v8;
        v7 += (unsigned __int64)v11;
      }
      v12 = *v9;
      if ( (unsigned __int64)v9[2] < v7 )
      {
        v15 = sub_481540((__int64)v9, v12, v7, 1u);
        *v9 = v15;
        v12 = v15;
      }
      v9[1] = (void *)v7;
      *((_BYTE *)v12 + v10) = 0;
      memcpy((char *)*v9 + (_QWORD)v11, *(const void **)(a1 + 40), v8);
    }
  }
  return 0;
}
