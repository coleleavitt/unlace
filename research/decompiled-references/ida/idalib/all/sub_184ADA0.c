char __fastcall sub_184ADA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  char *v13; // r14
  __int64 v14; // rax
  unsigned int v15; // r15d
  __int64 v16; // rax
  size_t v17; // rax
  _DWORD v19[6]; // [rsp+0h] [rbp-108h] BYREF
  void *v20; // [rsp+18h] [rbp-F0h]
  __int64 v21; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v22[200]; // [rsp+40h] [rbp-C8h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v5 & 4) != 0 )
    v6 = *(_QWORD *)v6;
  LODWORD(v7) = (*(_BYTE *)(v6 + 8) & 0x7F) - 59;
  if ( (unsigned int)v7 > 2 || v6 == 64 )
    goto LABEL_16;
  if ( *(char *)(a2 + 28) >= 0 )
  {
    LOBYTE(v7) = sub_B77270(a2, v6, a3, a4);
    if ( (_BYTE)v7 )
    {
      LOBYTE(v7) = sub_B77A80(a2);
      if ( !(_BYTE)v7 )
      {
        v12 = *(_QWORD *)(**(_QWORD **)(a2 + 120) + 48LL);
        v7 = sub_A7AC20(*(_QWORD *)(a1 + 248), v6 - 64, v8, v9, v10, v11);
        if ( v7 == (*(_QWORD *)(*(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
                  & 0xFFFFFFFFFFFFFFF0LL) )
        {
          v13 = " const &";
          v14 = **(_QWORD **)(a2 + 120);
          v15 = *(_DWORD *)(v14 + 24);
          v16 = *(_QWORD *)(v14 + 40);
          if ( (v16 & 7) == 0 && (v16 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            v13 = (char *)"const &";
          sub_168B9F0((__int64)v22, (__int64 *)(a1 + 8), v15, 0xDACu, 0);
          v17 = j__strlen(v13);
          sub_9EC740((__int64)v19, v15, v13, v17, 0);
          sub_1589170((__int64)v22, v19);
          if ( v20 != &v21 )
            operator delete(v20);
          sub_15F7200(v22);
LABEL_16:
          LOBYTE(v7) = sub_B88650(a2, 1);
        }
      }
    }
  }
  return v7;
}
