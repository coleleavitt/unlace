/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002E6A0
// Address: 0x000000014002E6A0

//----- (000000014002E6A0) ----------------------------------------------------
__int64 __fastcall sub_14002E6A0(char *Str, __int64 a2)
{
  _QWORD *v4; // r14
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  int v9; // ebp
  int v10; // edi
  _QWORD *v11; // rax
  size_t v12; // rax
  unsigned __int64 v13; // r8

  v4 = sub_14002DA30();
  if ( !Str )
    return 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  v7 = sub_14002D380((__int64)v4, Str);
  if ( !v7 )
  {
    v8 = operator new(0x40u);
    v7 = (__int64)v8;
    v9 = 0;
    if ( v8 )
    {
      v10 = *((_DWORD *)v4 + 18);
      *v8 = 0;
      v8[1] = 0;
      v11 = operator new(0x40u);
      *v11 = v11;
      v11[1] = v11;
      v11[2] = v11;
      *((_WORD *)v11 + 12) = 257;
      *(_QWORD *)v7 = v11;
      *(_DWORD *)(v7 + 16) = 0;
      *(_DWORD *)(v7 + 20) = v10;
      *(_QWORD *)(v7 + 24) = 0;
      *(_QWORD *)(v7 + 32) = 0;
      *(_QWORD *)(v7 + 40) = 0;
      *(_QWORD *)(v7 + 48) = -1;
      *(_DWORD *)(v7 + 56) = -1;
    }
    else
    {
      v7 = 0;
    }
    v12 = strlen(Str);
    if ( v12 )
      sub_140001810(v7 + 24, Str, v12);
    else
      *(_QWORD *)(v7 + 32) = 0;
    if ( a2 )
      v9 = *(_DWORD *)(a2 + 20);
    *(_DWORD *)(v7 + 16) = v9;
    v13 = v4[9] + 1LL;
    if ( v13 > v4[10] )
      v4[8] = sub_14005ABE0((__int64)(v4 + 8), (void *)v4[8], v13, 8u);
    *(_QWORD *)(v4[8] + 8LL * v4[9]++) = v7;
  }
  sub_14005D6D0(v6);
  return v7;
}
