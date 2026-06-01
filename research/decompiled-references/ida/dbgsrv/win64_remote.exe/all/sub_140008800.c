/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140008800
// Address: 0x0000000140008800

//----- (0000000140008800) ----------------------------------------------------
__int64 __fastcall sub_140008800(
        _QWORD **a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        int (__fastcall ***a5)(_QWORD, __int64))
{
  _QWORD *v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // rbx
  void *v14; // rsi
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  _BYTE *v17; // r8
  _QWORD *v18; // rax
  _DWORD *v19; // rax
  _QWORD *v20; // rbx
  void *v21; // rcx
  unsigned int v23; // [rsp+30h] [rbp-51h] BYREF
  void *Block; // [rsp+38h] [rbp-49h] BYREF
  __int64 v25; // [rsp+40h] [rbp-41h]
  int v26; // [rsp+48h] [rbp-39h] BYREF
  __int64 v27; // [rsp+50h] [rbp-31h] BYREF
  __int64 v28; // [rsp+58h] [rbp-29h] BYREF
  __int128 v29; // [rsp+60h] [rbp-21h]
  void **p_Block; // [rsp+78h] [rbp-9h]
  __int64 v31; // [rsp+80h] [rbp-1h]
  __int64 v32; // [rsp+88h] [rbp+7h]
  __int128 v33; // [rsp+A0h] [rbp+1Fh] BYREF

  v25 = 0;
  v9 = operator new(0x20u);
  *v9 = v9;
  v9[1] = v9;
  v9[2] = v9;
  *((_WORD *)v9 + 12) = 257;
  Block = v9;
  v10 = a2 + a3;
  while ( a2 < v10 )
  {
    v11 = a2;
    v27 = 0;
    if ( (*(int (__fastcall **)(_QWORD *, unsigned __int64, _QWORD, __int64 *, int *))(*a1[6] + 160LL))(
           a1[6],
           a2,
           a4,
           &v27,
           &v26) < 0
      || !v27 )
    {
      break;
    }
    LOBYTE(v12) = 1;
    v13 = ((__int64 (__fastcall *)(_QWORD **, __int64, __int64))(*a1)[15])(a1, v27, v12);
    v32 = v13;
    if ( (*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 176LL))(v13, &v23) )
      goto LABEL_15;
    v28 = 0;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 136LL))(v27, &v28);
    v14 = Block;
    v15 = *((_QWORD **)Block + 1);
    v16 = 0;
    v17 = Block;
    if ( !*((_BYTE *)v15 + 25) )
    {
      v18 = *((_QWORD **)Block + 1);
      do
      {
        v15 = v18;
        if ( *((_DWORD *)v18 + 7) >= v23 )
        {
          v16 = 1;
          v17 = v18;
        }
        else
        {
          v16 = 0;
          v18 += 2;
        }
        v18 = (_QWORD *)*v18;
      }
      while ( !*((_BYTE *)v18 + 25) );
    }
    *(_QWORD *)&v29 = v15;
    DWORD2(v29) = v16;
    if ( v17[25] || v23 < *((_DWORD *)v17 + 7) )
    {
      if ( v25 == 0x7FFFFFFFFFFFFFFLL )
        unknown_libname_1(v16, v15);
      p_Block = &Block;
      v31 = 0;
      v19 = operator new(0x20u);
      v19[7] = v23;
      *(_QWORD *)v19 = v14;
      *((_QWORD *)v19 + 1) = v14;
      *((_QWORD *)v19 + 2) = v14;
      *((_WORD *)v19 + 12) = 0;
      v31 = 0;
      v33 = v29;
      sub_140003FC0(&Block, (__int64)&v33, (__int64)v19);
      if ( (**a5)(a5, v13) < 0 )
      {
LABEL_15:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 288LL))(v13, 1);
        break;
      }
    }
    a2 += v28 - v26;
    if ( a2 <= v11 )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(30169);
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 288LL))(v13, 1);
  }
  v20 = *((_QWORD **)Block + 1);
  while ( !*((_BYTE *)v20 + 25) )
  {
    sub_1400030D0((__int64)&Block, (__int64)&Block, v20[2]);
    v21 = v20;
    v20 = (_QWORD *)*v20;
    j_j_free(v21);
  }
  j_j_free(Block);
  return 0;
}
// 1400088B5: variable 'v12' is possibly undefined
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
// 1400CB61C: using guessed type char byte_1400CB61C;
