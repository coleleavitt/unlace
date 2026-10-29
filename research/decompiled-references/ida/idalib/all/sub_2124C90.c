__int64 __fastcall sub_2124C90(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  unsigned __int8 *v8; // rsi
  unsigned __int8 *v9; // r8
  unsigned __int8 *v10; // rdx
  int v11; // eax
  int v12; // ecx
  unsigned __int8 *v13; // rax
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rdx

  v6 = a1;
  v8 = *(unsigned __int8 **)(a2 + 56);
  v9 = (unsigned __int8 *)(*(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 72));
  if ( v8 == v9 )
  {
    v10 = v8;
LABEL_19:
    v13 = v10;
    goto LABEL_12;
  }
  v10 = v8 + 1;
  *(_QWORD *)(a2 + 56) = v8 + 1;
  v11 = *v8;
  LOBYTE(a4) = v11 == 13;
  a6 = a4;
  if ( v11 != 10 && v11 != 13 )
  {
    while ( v9 != v10 )
    {
      *(_QWORD *)(a2 + 56) = ++v10;
      v12 = *(v10 - 1);
      LOBYTE(a1) = v12 == 13;
      a6 = (unsigned int)a1;
      if ( v12 == 10 || v12 == 13 )
        goto LABEL_8;
    }
    goto LABEL_19;
  }
LABEL_8:
  v13 = v10;
  if ( v9 != v10 && (_BYTE)a6 && *v10 == 10 )
  {
    v13 = v10 + 1;
    *(_QWORD *)(a2 + 56) = v10 + 1;
  }
LABEL_12:
  v14 = *(_QWORD *)(a2 + 168);
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int8 *, unsigned __int8 *, signed __int64, unsigned __int8 *, __int64))(*(_QWORD *)v14 + 16LL))(
      v14,
      v8,
      v8,
      v10 - 1 - v8,
      v9,
      a6);
    v13 = *(unsigned __int8 **)(a2 + 56);
  }
  v15 = *(_BYTE *)(a2 + 147) == 0;
  *(_BYTE *)(a2 + 128) = 1;
  v16 = *(_QWORD *)(a2 + 136);
  if ( v15 )
  {
    --v13;
    *(_BYTE *)(a2 + 147) = 1;
  }
  *(_DWORD *)v6 = 9;
  *(_QWORD *)(v6 + 16) = &v13[-v16];
  *(_QWORD *)(v6 + 8) = v16;
  *(_DWORD *)(v6 + 32) = 64;
  *(_QWORD *)(v6 + 24) = 0;
  return v6;
}
