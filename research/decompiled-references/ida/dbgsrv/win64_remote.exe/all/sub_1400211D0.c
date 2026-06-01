/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400211D0
// Address: 0x00000001400211D0

//----- (00000001400211D0) ----------------------------------------------------
__int64 *__fastcall sub_1400211D0(__int64 *a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  __int64 **v6; // rdx
  __int64 *i; // rcx
  __int64 v8; // rcx
  __int64 j; // rax

  *a1 = 0;
  a1[1] = 0;
  v4 = operator new(0x58u);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *a1 = (__int64)v4;
  *(_QWORD *)(*a1 + 8) = sub_1400208A0(a1, *(_QWORD *)(*(_QWORD *)a2 + 8LL), (__int64)v4);
  a1[1] = *(_QWORD *)(a2 + 8);
  v5 = (_QWORD *)*a1;
  v6 = *(__int64 ***)(*a1 + 8);
  if ( *((_BYTE *)v6 + 25) )
  {
    *v5 = v5;
    *(_QWORD *)(*a1 + 16) = *a1;
  }
  else
  {
    for ( i = *v6; !*((_BYTE *)i + 25); i = (__int64 *)*i )
      v6 = (__int64 **)i;
    *v5 = v6;
    v8 = *(_QWORD *)(*a1 + 8);
    for ( j = *(_QWORD *)(v8 + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
      v8 = j;
    *(_QWORD *)(*a1 + 16) = v8;
  }
  *((_DWORD *)a1 + 4) = 1;
  *((_DWORD *)a1 + 5) = *(_DWORD *)(a2 + 20);
  return a1;
}
