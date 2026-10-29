__int64 __fastcall sub_1AA2500(_QWORD *a1, char a2, char a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  _UNKNOWN **v13; // [rsp+0h] [rbp-28h] BYREF
  __int16 v14; // [rsp+8h] [rbp-20h]
  char v15; // [rsp+Ah] [rbp-1Eh]
  char v16; // [rsp+Bh] [rbp-1Dh]
  char v17; // [rsp+Ch] [rbp-1Ch]
  __int64 v18; // [rsp+10h] [rbp-18h]

  v14 = 256;
  v15 = 0;
  v13 = &off_2BC77B8;
  v16 = a2;
  v17 = a3;
  v18 = a5;
  if ( a5
    && (v5 = a4, v6 = sub_1BF9B70(*a1, a4, a5, &v13), v6 != 1)
    && ((v10 = v6 & 0xFFFFFFFFFFFFFFFELL, v11 = v10, (*(_DWORD *)v10 & 0x10000) != 0)
     || sub_9EC890(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL), v5, v7, v8, v9)) )
  {
    return v11;
  }
  else
  {
    return 1;
  }
}
