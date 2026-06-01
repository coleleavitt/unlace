/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100013AA0
// Address: 0x0000000100013AA0

//----- (0000000100013AA0) ----------------------------------------------------
__int64 __fastcall sub_100013AA0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, __int64 a5, char a6)
{
  _QWORD *v10; // rdi
  off_t v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // r12d
  off_t v15; // rsi
  __int64 v16; // rbx
  bool v17; // zf
  off_t v18; // rax
  __int64 v22; // [rsp+10h] [rbp-40h]
  __int64 v23; // [rsp+18h] [rbp-38h] BYREF

  v10 = *(_QWORD **)(a1 + 512);
  if ( v10 )
  {
    v12 = a3;
    v13 = sub_1000135D0(v10, a3, (_QWORD *)(a1 + 224), (unsigned __int64 *)&v23);
    v14 = 0;
    if ( v13 )
    {
      v15 = v12;
      v16 = v13;
      qlseek(v13, v15, 0);
      if ( (unsigned __int8)sub_100013130((void **)a2, v16, -1, a4, v23, a5, a6) )
      {
        v17 = *(_QWORD *)(a2 + 8) == 0;
LABEL_7:
        LOBYTE(v14) = !v17;
      }
    }
  }
  else
  {
    v22 = sub_100012870(a1, *(_DWORD *)(a1 + 128));
    v18 = sub_100012870(a1, a3);
    v14 = 0;
    qlseek(*(_QWORD *)(a1 + 48), v18, 0);
    if ( (unsigned __int8)sub_100013130((void **)a2, *(_QWORD *)(a1 + 48), -1, a4, v22, a5, a6) )
    {
      v17 = *(_QWORD *)(a2 + 8) == 0;
      goto LABEL_7;
    }
  }
  return v14;
}
