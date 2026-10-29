__int64 __fastcall sub_406F80(__int64 a1, unsigned int a2, __int16 *a3)
{
  int v3; // r12d
  __int64 eah; // rax
  int v7; // esi
  unsigned __int8 v8; // dl
  int v9; // edi
  int v10; // eax
  __int64 v11; // rsi
  unsigned int v12; // r12d
  __int16 v13; // ax
  unsigned int v15; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-20h]

  v3 = a1;
  v16 = __readfsqword(0x28u);
  eah = get_eah();
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_BYTE *)(a1 + 21);
  v9 = *(_DWORD *)(eah + 8);
  v15 = *((_DWORD *)a3 + 4) + *((_DWORD *)a3 + 5);
  v10 = sub_406ED0(v9, v7, v8, (int *)&v15);
  v11 = *((unsigned int *)a3 + 3);
  LOBYTE(v3) = (_DWORD)v11 != -1;
  v12 = v10 & v3;
  v13 = *a3;
  if ( *a3 == 3 )
  {
    put_word(a2, v15);
    put_word(a2 + 2, *((unsigned int *)a3 + 3));
  }
  else if ( v13 == 5 )
  {
    put_dword(a2, v15);
    put_word(a2 + 4, *((unsigned int *)a3 + 3));
  }
  else if ( v13 == 2 )
  {
    put_word(a2, v11);
  }
  else
  {
    return 0;
  }
  return v12;
}

