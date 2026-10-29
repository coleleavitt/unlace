/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A10C0
// Address: 0x080A10C0

//----- (080A10C0) --------------------------------------------------------
int __cdecl sub_80A10C0(int a1, int a2, unsigned int a3)
{
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // edx
  const char *v7; // edi
  unsigned int v8; // eax
  char v10; // [esp+20h] [ebp-6Ch]
  int v11; // [esp+20h] [ebp-6Ch]
  int v12; // [esp+24h] [ebp-68h]
  unsigned __int8 v13[4]; // [esp+38h] [ebp-54h] BYREF
  __int128 v14; // [esp+3Ch] [ebp-50h]
  char v15[32]; // [esp+4Ch] [ebp-40h] BYREF
  unsigned int v16; // [esp+6Ch] [ebp-20h]

  v3 = *(int *)((char *)&off_811D0C4 + a1 - 135385076);
  v16 = __readgsdword(0x14u);
  if ( v3 )
  {
    v4 = a1 + 204;
    do
    {
      v5 = v3;
      v6 = *(_DWORD *)(v3 + 8);
      v3 = *(_DWORD *)(v3 + 12);
      if ( *(_DWORD *)(v5 + 16) >= a3 )
      {
        v4 = v5;
        v3 = v6;
      }
    }
    while ( v3 );
    v12 = 0;
    if ( a1 + 204 != v4 && a3 >= *(_DWORD *)(v4 + 16) )
    {
      v13[0] = 2;
      v14 = 0;
      sub_80D3B60(v15, 32, (char *)&qword_811CFF4 - 277284, a3);
      sub_80A4BE0();
      sub_80A4C00(a1, a2);
      if ( !*(_BYTE *)(v4 + 268) )
      {
        if ( !(unsigned __int8)sub_80816C0((int)v15, *(const char **)(v4 + 24), nullptr, 0, 1) )
        {
          sub_80A4BF0();
          goto LABEL_12;
        }
        *(_BYTE *)(v4 + 268) = 1;
      }
      v10 = sub_808FF10(v13, v15, nullptr, 0, 0, 0);
      sub_80A4BF0();
      if ( !v10 )
      {
LABEL_12:
        v7 = (const char *)sub_80C7AE0(0);
        v11 = sub_80C7A90(0);
        v8 = sub_80C7850();
        sub_80A9A50(*(int *)((char *)&off_811D0EC + a1 - 135385076), a3, v8, v11, v7);
LABEL_13:
        sub_8089430((int)v13);
        goto LABEL_16;
      }
      sub_808A540((int)v13);
      if ( !(_QWORD)v14 )
      {
        v12 = v4 + 20;
        goto LABEL_13;
      }
      sub_8089430((int)v13);
    }
  }
  v12 = 0;
LABEL_16:
  if ( v16 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v12;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D0C4: using guessed type _UNKNOWN *off_811D0C4;
// 811D0EC: using guessed type _UNKNOWN *off_811D0EC;
