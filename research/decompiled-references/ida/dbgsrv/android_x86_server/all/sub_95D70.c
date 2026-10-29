/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95D70
// Address: 0x00095D70

//----- (00095D70) --------------------------------------------------------
int __cdecl sub_95D70(_BYTE *a1, int a2, char *a3, int a4)
{
  int v4; // ecx
  char *v5; // eax
  char *v6; // esi
  size_t v7; // eax
  void *v8; // eax
  int v9; // esi
  int v11; // [esp+14h] [ebp-38h]
  char *v12; // [esp+18h] [ebp-34h] BYREF
  int v13; // [esp+1Ch] [ebp-30h]
  int v14; // [esp+20h] [ebp-2Ch]
  int v15[9]; // [esp+28h] [ebp-24h] BYREF

  v15[4] = __readgsdword(0x14u);
  if ( a1[36] )
  {
    if ( !(_BYTE)under_debugger )
      interr(1621);
    BUG();
  }
  v4 = 53;
  if ( a2 )
    v4 = 2 * (a2 > 0) + 52;
  v11 = v4;
  sub_96B40((int)v15, v4);
  v12 = nullptr;
  v13 = 0;
  v14 = 0;
  sub_2EA00((int)&v12, a3, a4);
  if ( v13 )
    v5 = v12;
  else
    v5 = byte_EF875;
  v6 = &byte_DCEE2;
  if ( v5 )
    v6 = v5;
  v7 = strlen(v6);
  sub_3A950(v15, v6, v7 + 1);
  v8 = (void *)(*(int (__cdecl **)(_BYTE *, _DWORD, int *))(*(_DWORD *)a1 + 8))(a1, (unsigned __int8)v11, v15);
  qfree(v8);
  if ( v11 == 52 )
    exit(1);
  v9 = v13 - 1;
  if ( !v13 )
    v9 = 0;
  if ( v12 )
  {
    v13 = 0;
    qfree(v12);
    v12 = nullptr;
    v14 = 0;
  }
  if ( v15[0] )
  {
    v15[1] = 0;
    qfree((void *)v15[0]);
    v15[0] = 0;
    v15[2] = 0;
  }
  return v9;
}
// DCEE2: using guessed type char byte_DCEE2;
// 13E34C: using guessed type int under_debugger;
