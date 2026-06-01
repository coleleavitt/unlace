/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000403B0
// Address: 0x00000001000403B0

//----- (00000001000403B0) ----------------------------------------------------
bool __fastcall sub_1000403B0(_QWORD *a1, unsigned __int8 *a2)
{
  int v3; // ebx
  unsigned __int8 *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdi
  unsigned __int8 v8[8]; // [rsp+8h] [rbp-38h] BYREF
  void *__p[2]; // [rsp+10h] [rbp-30h]
  __int64 v10; // [rsp+20h] [rbp-20h]

  v3 = move_idcv(a2, (unsigned __int8 *)(*a1 + 32LL * a1[1] - 32));
  if ( !v3 )
  {
    v5 = (unsigned __int8 *)(*a1 + 32LL * a1[1] - 32);
    v8[0] = 2;
    *(_OWORD *)__p = 0;
    v10 = 0;
    copy_idcv(v8, v5);
    v6 = a1[1];
    if ( v6 )
    {
      v7 = v6 - 1;
      a1[1] = v7;
      sub_100043B90((unsigned __int8 *)(*a1 + 32 * v7));
    }
    if ( v8[0] == 5 )
    {
      sub_1000380B0((unsigned __int8 **)__p[0], v8);
    }
    else if ( v8[0] == 7 && __p[0] )
    {
      __p[1] = nullptr;
      qfree(__p[0]);
    }
  }
  return v3 == 0;
}
