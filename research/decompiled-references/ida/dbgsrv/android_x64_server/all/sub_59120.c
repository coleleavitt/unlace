/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59120
// Address: 0x0000000000059120

//----- (0000000000059120) ----------------------------------------------------
char __fastcall sub_59120(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  void *v4; // rdi
  unsigned __int8 v5; // al
  char v6; // dl
  void *v8[2]; // [rsp+0h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-68h]
  __int128 v10; // [rsp+20h] [rbp-58h]
  __int128 v11; // [rsp+30h] [rbp-48h]
  _BYTE v12[31]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp-18h]

  v13 = __readfsqword(0x28u);
  memset(v12, 0, sizeof(v12));
  v11 = 0;
  v10 = 0;
  *(_OWORD *)ptr = 0;
  *(_OWORD *)v8 = 0;
  if ( v8 != (void **)a2 )
  {
    v3 = *(void **)(a2 + 24);
    if ( v3 )
    {
      *(_QWORD *)(a2 + 32) = 0;
      qfree(v3);
      *(_QWORD *)(a2 + 24) = 0;
      *(_QWORD *)(a2 + 40) = 0;
    }
    v4 = *(void **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      qfree(v4);
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 16) = 0;
    }
    sub_5D190(a2, (__int64)v8);
    if ( ptr[1] )
    {
      *(_QWORD *)&v10 = 0;
      qfree(ptr[1]);
      ptr[1] = nullptr;
      *((_QWORD *)&v10 + 1) = 0;
    }
  }
  if ( v8[0] )
  {
    v8[1] = nullptr;
    qfree(v8[0]);
    v8[0] = nullptr;
    ptr[0] = nullptr;
  }
  if ( (int)sub_50490(*(_QWORD *)(a1 + 8), a2 + 48) < 0 )
    return 0;
  v5 = *(_BYTE *)(a2 + 52);
  if ( v5 < 0x30u
    || (v5 >> 4 != 14 || (v6 = 2, *(_WORD *)(*(_QWORD *)(a1 + 8) + 522LL) != 40)) && (v6 = -2, v5 >= 0xA0u) )
  {
    v6 = v5 >> 4;
  }
  *(_BYTE *)(a2 + 92) = v6;
  *(_DWORD *)(a2 + 88) = 0;
  *(_BYTE *)(a2 + 93) = v5 & 0xF;
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 56) + *(_QWORD *)(*(_QWORD *)(a1 + 8) + 608LL);
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 64);
  return 1;
}
