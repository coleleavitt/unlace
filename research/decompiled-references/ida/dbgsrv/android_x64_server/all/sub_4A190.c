/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A190
// Address: 0x000000000004A190

//----- (000000000004A190) ----------------------------------------------------
char *__fastcall sub_4A190(_QWORD **a1, _QWORD *a2, unsigned __int64 *a3, __int64 a4)
{
  void **v5; // rax
  char *v6; // rbx
  void **v7; // r15
  __int128 v8; // xmm0
  size_t v9; // r13
  void *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 *v13; // rsi
  __int64 v15; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v16[1] = __readfsqword(0x28u);
  v5 = (void **)sub_4A2A0(a1, a2, v16, &v15, a3);
  v6 = (char *)*v5;
  if ( !*v5 )
  {
    v7 = v5;
    v6 = (char *)operator new(0x40u);
    *((_QWORD *)v6 + 4) = *(_QWORD *)a4;
    v8 = 0;
    *(_OWORD *)(v6 + 40) = 0;
    *((_QWORD *)v6 + 7) = 0;
    v9 = *(_QWORD *)(a4 + 16);
    if ( v9 )
    {
      v10 = qalloc_or_throw(*(_QWORD *)(a4 + 16));
      *((_QWORD *)v6 + 5) = v10;
      *((_QWORD *)v6 + 7) = v9;
      memcpy(v10, *(const void **)(a4 + 8), v9);
      *((_QWORD *)v6 + 6) = v9;
      v8 = 0;
    }
    v11 = v16[0];
    *(_OWORD *)v6 = v8;
    *((_QWORD *)v6 + 2) = v11;
    *v7 = v6;
    v12 = (_QWORD *)**a1;
    if ( v12 )
    {
      *a1 = v12;
      v13 = (__int64 *)*v7;
    }
    else
    {
      v13 = (__int64 *)v6;
    }
    sub_4A450(a1[1], v13);
    a1[2] = (_QWORD *)((char *)a1[2] + 1);
  }
  return v6;
}
