__int64 __fastcall sub_41A310(__int64 a1, __int64 a2, __int16 *a3)
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
  __int64 v15[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = a1;
  v15[1] = __readfsqword(0x28u);
  eah = get_eah();
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_BYTE *)(a1 + 21);
  v9 = *(_DWORD *)(eah + 24);
  v15[0] = *((_QWORD *)a3 + 3) + *((_QWORD *)a3 + 4);
  v10 = sub_41A250(v9, v7, v8, v15);
  v11 = *((_QWORD *)a3 + 2);
  LOBYTE(v3) = v11 != -1;
  v12 = v10 & v3;
  v13 = *a3;
  if ( *a3 == 3 )
  {
    put_word(a2, v15[0]);
    put_word(a2 + 2, *((_QWORD *)a3 + 2));
  }
  else if ( v13 == 5 )
  {
    put_dword(a2, v15[0]);
    put_word(a2 + 4, *((_QWORD *)a3 + 2));
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
