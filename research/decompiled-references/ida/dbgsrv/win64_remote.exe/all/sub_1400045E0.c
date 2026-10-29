/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400045E0
// Address: 0x00000001400045E0

//----- (00000001400045E0) ----------------------------------------------------
__int64 __fastcall sub_1400045E0(__int64 a1, __int64 a2, __int64 (__fastcall ***a3)(_QWORD, __int64))
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  int v9; // edi
  void *v10; // rdi
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  _BYTE *v13; // r8
  _QWORD *v14; // rax
  _DWORD *v15; // rax
  void *v16; // rcx
  _QWORD *v17; // rbx
  void *v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v21[2]; // [rsp+28h] [rbp-58h] BYREF
  void *Block; // [rsp+38h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h]
  void **p_Block; // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-30h]
  _QWORD *v26; // [rsp+60h] [rbp-20h] BYREF
  int v27; // [rsp+68h] [rbp-18h]
  int v28; // [rsp+C8h] [rbp+48h] BYREF

  v23 = 0;
  v6 = operator new(0x20u);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  Block = v6;
  v28 = 0;
  v21[0] = 0;
  if ( (*(int (__fastcall **)(__int64, __int64, _QWORD *, int *))(*(_QWORD *)a2 + 48LL))(a2, 1, v21, &v28) >= 0 )
  {
    while ( v28 == 1 )
    {
      LOBYTE(v7) = 1;
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 120LL))(a1, v21[0], v7);
      v21[1] = v8;
      v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 176LL))(v8, &v20);
      if ( v9 )
        goto LABEL_20;
      v10 = Block;
      v11 = *((_QWORD **)Block + 1);
      v12 = 0;
      v13 = Block;
      if ( !*((_BYTE *)v11 + 25) )
      {
        v14 = *((_QWORD **)Block + 1);
        do
        {
          v11 = v14;
          if ( *((_DWORD *)v14 + 7) >= v20 )
          {
            v12 = 1;
            v13 = v14;
          }
          else
          {
            v12 = 0;
            v14 += 2;
          }
          v14 = (_QWORD *)*v14;
        }
        while ( !*((_BYTE *)v14 + 25) );
      }
      v26 = v11;
      v27 = v12;
      if ( v13[25] || v20 < *((_DWORD *)v13 + 7) )
      {
        if ( v23 == 0x7FFFFFFFFFFFFFFLL )
          unknown_libname_1(v12, v11);
        p_Block = &Block;
        v25 = 0;
        v15 = operator new(0x20u);
        v15[7] = v20;
        *(_QWORD *)v15 = v10;
        *((_QWORD *)v15 + 1) = v10;
        *((_QWORD *)v15 + 2) = v10;
        *((_WORD *)v15 + 12) = 0;
        v25 = 0;
        sub_140003FC0(&Block, (__int64)&v26, (__int64)v15);
        v9 = (**a3)(a3, v8);
        if ( v9 < 0 )
        {
LABEL_20:
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 288LL))(v8, 1);
          goto LABEL_16;
        }
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 288LL))(v8, 1);
      v28 = 0;
      v21[0] = 0;
      if ( (*(int (__fastcall **)(__int64, __int64, _QWORD *, int *))(*(_QWORD *)a2 + 48LL))(a2, 1, v21, &v28) < 0 )
        break;
    }
  }
  v9 = 0;
LABEL_16:
  v16 = Block;
  v17 = *((_QWORD **)Block + 1);
  if ( !*((_BYTE *)v17 + 25) )
  {
    do
    {
      sub_1400030D0((__int64)&Block, (__int64)&Block, v17[2]);
      v18 = v17;
      v17 = (_QWORD *)*v17;
      j_j_free(v18);
    }
    while ( !*((_BYTE *)v17 + 25) );
    v16 = Block;
  }
  j_j_free(v16);
  return (unsigned int)v9;
}
// 14000467C: variable 'v7' is possibly undefined
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
