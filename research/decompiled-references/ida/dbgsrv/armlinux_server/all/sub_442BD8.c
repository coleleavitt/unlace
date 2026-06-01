/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442BD8
// Address: 0x0000000000442BD8

//----- (0000000000442BD8) ----------------------------------------------------
__int64 __fastcall sub_442BD8(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4)
{
  unsigned __int64 v7; // x0
  const void *v9; // x24
  unsigned int v10; // w25
  size_t v11; // x20
  unsigned __int8 *v12; // x0
  _BYTE *v13; // x20
  signed __int64 v14; // x26
  unsigned __int8 *v15; // x0
  unsigned int v16; // w20
  __int64 (__fastcall *v17)(); // x4
  void *v18; // x0
  void *v19; // x0
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  size_t v21; // [xsp+58h] [xbp-18h]
  __int64 v22; // [xsp+60h] [xbp-10h]
  __int64 v23; // [xsp+68h] [xbp-8h]

  v7 = *(_QWORD *)(a1 + 168);
  if ( v7 < (unsigned __int64)a3 )
  {
    v9 = *(const void **)(a1 + 160);
    if ( v7 >= (unsigned __int64)v9 )
      goto LABEL_6;
    do
    {
      v7 = (unsigned __int8)under_debugger;
      if ( !under_debugger )
        sub_492270(1833);
      __break(0x3E8u);
LABEL_6:
      ptr = nullptr;
      v21 = 0;
      v10 = a4;
      v22 = 0;
      v11 = v7 - (_QWORD)v9;
      if ( (const void *)v7 == v9 )
        goto LABEL_7;
      v18 = nullptr;
      if ( v11 != -1 )
      {
        v18 = sub_491288((__int64)&ptr, nullptr, v11 + 1, 1u);
        ptr = v18;
      }
      v21 = v11 + 1;
      memmove(v18, v9, v11);
      *((_BYTE *)ptr + v11) = 0;
      if ( !v21 )
LABEL_7:
        v12 = (unsigned __int8 *)&qword_4B2D48;
      else
        v12 = (unsigned __int8 *)ptr;
      v9 = (const void *)sub_486068(v12);
      if ( ptr )
      {
        v21 = 0;
        j__free(ptr);
      }
      v13 = *(_BYTE **)(a1 + 168);
    }
    while ( v13 > a3 );
    ptr = nullptr;
    v21 = 0;
    v14 = a3 - v13;
    v22 = 0;
    if ( a3 == v13 )
      goto LABEL_12;
    v19 = nullptr;
    if ( v14 != -1 )
    {
      v19 = sub_491288((__int64)&ptr, nullptr, v14 + 1, 1u);
      ptr = v19;
    }
    v21 = v14 + 1;
    memmove(v19, v13, a3 - v13);
    *((_BYTE *)ptr + v14) = 0;
    if ( !v21 )
LABEL_12:
      v15 = (unsigned __int8 *)&qword_4B2D48;
    else
      v15 = (unsigned __int8 *)ptr;
    v16 = sub_486068(v15);
    if ( ptr )
    {
      v21 = 0;
      j__free(ptr);
    }
    v17 = *(__int64 (__fastcall **)())(*(_QWORD *)a2 + 16LL);
    if ( v17 != nullsub_1 )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v17)(a2, (unsigned int)v9, v16, v10);
    *(_QWORD *)(a1 + 168) = a3;
  }
  return v23 ^ _stack_chk_guard;
}
// 442BD8: could not find valid save-restore pair for x25
// 442BD8: could not find valid save-restore pair for x26
// 442BD8: could not find valid save-restore pair for x27
// 442C6C: variable 'a4' is possibly undefined
// 442B98: using guessed type __int64 __fastcall nullsub_1();
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 52451C: using guessed type char under_debugger;
