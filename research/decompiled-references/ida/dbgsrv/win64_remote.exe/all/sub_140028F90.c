/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140028F90
// Address: 0x0000000140028F90

//----- (0000000140028F90) ----------------------------------------------------
__int64 __fastcall sub_140028F90(__int64 a1, __int64 a2)
{
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // r8
  __int64 **v10; // rdx
  __int64 *i; // rcx
  __int64 v12; // rcx
  __int64 j; // rax

  if ( *(_BYTE *)a2 != 5 )
    return sub_140028E70((char *)a1, (char *)a2);
  v5 = (__int64 *)operator new(0x18u);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    *v5 = 0;
    v5[1] = 0;
    v8 = operator new(0x58u);
    *v8 = v8;
    v8[1] = v8;
    v8[2] = v8;
    *((_WORD *)v8 + 12) = 257;
    *v6 = (__int64)v8;
    *(_QWORD *)(*v6 + 8) = sub_1400208A0(v6, *(_QWORD *)(*(_QWORD *)v7 + 8LL), (__int64)v8);
    v6[1] = *(_QWORD *)(v7 + 8);
    v9 = (_QWORD *)*v6;
    v10 = *(__int64 ***)(*v6 + 8);
    if ( *((_BYTE *)v10 + 25) )
    {
      *v9 = v9;
      *(_QWORD *)(*v6 + 16) = *v6;
    }
    else
    {
      for ( i = *v10; !*((_BYTE *)i + 25); i = (__int64 *)*i )
        v10 = (__int64 **)i;
      *v9 = v10;
      v12 = *(_QWORD *)(*v6 + 8);
      for ( j = *(_QWORD *)(v12 + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
        v12 = j;
      *(_QWORD *)(*v6 + 16) = v12;
    }
    *((_DWORD *)v6 + 4) = 1;
    *((_DWORD *)v6 + 5) = *(_DWORD *)(v7 + 20);
  }
  else
  {
    v6 = nullptr;
  }
  sub_140029390(a1);
  *(_BYTE *)a1 = 5;
  *(_QWORD *)(a1 + 8) = v6;
  return 0;
}
