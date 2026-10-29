/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140039A40
// Address: 0x0000000140039A40

//----- (0000000140039A40) ----------------------------------------------------
_QWORD *__fastcall sub_140039A40(__int64 a1)
{
  unsigned __int64 v2; // rcx
  _QWORD **v3; // r14
  _QWORD *result; // rax
  _QWORD *v5; // r14
  _QWORD *v6; // rdi
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = *(_QWORD ***)(a1 + 8);
    if ( *(_QWORD *)(a1 + 56) >> 3 <= v2 )
    {
      *v3[1] = 0;
      v5 = *v3;
      if ( v5 )
      {
        do
        {
          v6 = (_QWORD *)*v5;
          sub_14002BC90((__int64)(v5 + 6));
          sub_140037230((__int64)(v5 + 2));
          j_j_free(v5);
          v5 = v6;
        }
        while ( v6 );
      }
      **(_QWORD **)(a1 + 8) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 16) = 0;
      v7 = *(_QWORD *)(a1 + 8);
      return (_QWORD *)sub_140009D90(*(unsigned __int64 **)(a1 + 24), *(unsigned __int64 **)(a1 + 32), &v7);
    }
    else
    {
      return sub_140037AB0((_QWORD *)a1, *v3, *(_QWORD **)(a1 + 8));
    }
  }
  return result;
}
