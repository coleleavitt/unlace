/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8081240
// Address: 0x08081240

//----- (08081240) --------------------------------------------------------
unsigned int sub_8081240()
{
  pthread_mutex_t *v0; // eax
  _DWORD *v1; // edi
  int v2; // eax
  size_t *v3; // eax
  char *v4; // eax
  unsigned int result; // eax
  int v6; // [esp-18h] [ebp-1044h]
  int v7; // [esp-18h] [ebp-1044h]
  int v8; // [esp-14h] [ebp-1040h]
  int v9; // [esp-14h] [ebp-1040h]
  int v10; // [esp-10h] [ebp-103Ch]
  int v11; // [esp-10h] [ebp-103Ch]
  void *ptr; // [esp+4h] [ebp-1028h] BYREF
  int v13; // [esp+8h] [ebp-1024h]
  int v14; // [esp+Ch] [ebp-1020h]
  int v15[1014]; // [esp+10h] [ebp-101Ch] BYREF
  unsigned int v16; // [esp+1010h] [ebp-1Ch]

  v16 = __readgsdword(0x14u);
  sub_80D0060((int)sub_8081670);
  dword_811E6F8 = (int)sub_80D1320();
  v0 = sub_80D1320();
  dword_811E640 = (int)v0;
  if ( !dword_811E6F8 || !v0 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v16 == __readgsdword(0x14u) )
        sub_80CFF40(486, v6, v8, v10);
      sub_80D7AB0();
    }
    goto LABEL_24;
  }
  v1 = (_DWORD *)sub_807F510();
  v2 = sub_809AE10(nullptr, 0, 0, 0);
  v1[4] = v2;
  sub_80937D0(v2, (int)sub_8077B40);
  v1[6] = dword_811D3A0[0];
  v1[5] = dword_811D3A0[1];
  sub_8081090("object", 0);
  sub_8081090("typeinfo", 0);
  sub_8081090("exception", 0);
  if ( *(_DWORD *)algn_811D3B0 )
    (*(void (**)(void))algn_811D3B0)();
  if ( !(_BYTE)dword_811E84C
    || (v3 = (size_t *)off_811DA24(), (v4 = sub_80933E0(v3, (char *)v15, 4096, (int)"idc.idc", nullptr, 0)) == nullptr) )
  {
LABEL_12:
    if ( !sub_807DAC0((int)dword_811D9E0) )
      goto LABEL_13;
    if ( !byte_811F8A1 )
    {
      if ( v16 == __readgsdword(0x14u) )
        sub_80CFF40(1447, v7, v9, v11);
      sub_80D7AB0();
    }
LABEL_24:
    BUG();
  }
  ptr = nullptr;
  v13 = 0;
  v14 = 0;
  if ( (unsigned __int8)sub_807C440(v4, &ptr, 0) )
  {
    v1[3] = sub_809AE60(v1[4]);
    if ( ptr )
    {
      v13 = 0;
      sub_80CF780(ptr);
    }
    goto LABEL_12;
  }
  sub_8069790();
  if ( ptr )
  {
    v13 = 0;
    sub_80CF780(ptr);
  }
LABEL_13:
  result = v16 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 8081471: variable 'v6' is possibly undefined
// 8081471: variable 'v8' is possibly undefined
// 8081471: variable 'v10' is possibly undefined
// 808149E: variable 'v7' is possibly undefined
// 808149E: variable 'v9' is possibly undefined
// 808149E: variable 'v11' is possibly undefined
// 811D3A0: using guessed type int dword_811D3A0[3];
// 811D3B0: using guessed type _BYTE algn_811D3B0[16];
// 811D9E0: using guessed type int dword_811D9E0[3];
// 811DA24: using guessed type int *(*off_811DA24)();
// 811E640: using guessed type int dword_811E640;
// 811E6F8: using guessed type int dword_811E6F8;
// 811E84C: using guessed type int dword_811E84C;
// 811F8A1: using guessed type char byte_811F8A1;
