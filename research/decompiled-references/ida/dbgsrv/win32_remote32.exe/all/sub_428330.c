/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428330
// Address: 0x00428330

//----- (00428330) --------------------------------------------------------
void __usercall sub_428330(int a1@<ebx>, __m128i a2@<xmm0>)
{
  struct _RTL_CRITICAL_SECTION *v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int *v8; // eax
  char *v9; // eax
  const CHAR *v10; // eax
  void *v11; // [esp+8h] [ebp-18h] BYREF
  int v12; // [esp+Ch] [ebp-14h]
  int v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-4h]
  __int8 v15[260]; // [esp+20h] [ebp+0h] BYREF

  sub_453430((int)sub_428A30);
  dword_4B6B40 = sub_456280();
  v2 = sub_456280();
  dword_4B6BD4 = v2;
  if ( !dword_4B6B40 || !v2 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(486);
  }
  v3 = sub_428030();
  v4 = sub_438490(a1, nullptr, 0, 0, 0);
  v3[4] = v4;
  sub_437CA0(v4, (int)sub_42DD80);
  v3[6] = dword_4B4060;
  v3[5] = off_4B4064;
  v5 = sub_428030();
  sub_426580((int)v5, "object", 0);
  v6 = sub_428030();
  sub_426580((int)v6, "typeinfo", 0);
  v7 = sub_428030();
  sub_426580((int)v7, "exception", 0);
  if ( dword_4B4070 )
    dword_4B4070();
  if ( byte_4B6B30 )
  {
    v8 = off_4B46B4();
    v9 = (char *)sub_434370(v8, v15, 260, (int)"idc.idc", nullptr, 0);
    if ( v9 )
    {
      v11 = nullptr;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      if ( !sub_42F220(a2, v9, (int)&v11, 0) )
      {
        v10 = MultiByteStr;
        if ( v12 )
          LOBYTE(v10) = (_BYTE)v11;
        sub_417C10(&dword_489384, (char)v10);
        v14 = 1;
        if ( v11 )
        {
          v12 = 0;
          sub_453A20(v11);
        }
        return;
      }
      v3[3] = sub_433EB0(a1, v3[4]);
      v14 = 2;
      if ( v11 )
      {
        v12 = 0;
        sub_453A20(v11);
        v11 = nullptr;
        v13 = 0;
      }
      v14 = -1;
    }
  }
  if ( sub_428F00((int)dword_4B46B8) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1447);
  }
}
// 417C10: using guessed type _DWORD __cdecl sub_417C10(_DWORD, char);
// 489384: using guessed type int dword_489384;
// 4B4060: using guessed type int dword_4B4060;
// 4B4064: using guessed type int (**off_4B4064)[49];
// 4B4070: using guessed type int (*dword_4B4070)(void);
// 4B46B4: using guessed type int *(*off_4B46B4)();
// 4B46B8: using guessed type int dword_4B46B8[3];
// 4B6B30: using guessed type char byte_4B6B30;
// 4B70F0: using guessed type char byte_4B70F0;
