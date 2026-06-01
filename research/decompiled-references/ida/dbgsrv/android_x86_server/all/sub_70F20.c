/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70F20
// Address: 0x00070F20

//----- (00070F20) --------------------------------------------------------
unsigned int __cdecl sub_70F20(int a1, int a2, char a3)
{
  char *v3; // esi
  int v4; // eax
  char v5; // dl
  __int64 v6; // kr00_8
  char v8[4]; // [esp+8h] [ebp-44h] BYREF
  int v9; // [esp+Ch] [ebp-40h]
  int v10; // [esp+10h] [ebp-3Ch]
  char v11[4]; // [esp+18h] [ebp-34h] BYREF
  __int64 v12; // [esp+1Ch] [ebp-30h]
  char v13[4]; // [esp+28h] [ebp-24h] BYREF
  __int64 v14; // [esp+2Ch] [ebp-20h]
  unsigned int v15; // [esp+38h] [ebp-14h]

  v15 = __readgsdword(0x14u);
  v11[0] = 1;
  v12 = 0;
  sub_738E0(a1, (int)v11, a3);
  v3 = v13;
  while ( 1 )
  {
    v4 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
    if ( v4 != 31868 )
      break;
    v13[0] = 1;
    v14 = 0;
    sub_738E0(a1, (int)v13, 1);
    v12 = (v12 | v14) != 0;
    v11[0] = 0;
  }
  if ( (unsigned __int16)v4 == 63 )
  {
    v13[0] = 1;
    v14 = 0;
    sub_70F20(a1, v13, 1);
    if ( *(_WORD *)(*(_DWORD *)(a1 + 228) + 12) != 58 )
      sub_70D30(a1);
    v8[0] = 1;
    v10 = 0;
    v9 = 0;
    sub_70F20(a1, v8, 1);
    if ( !v12 )
      v3 = v8;
    v5 = *v3;
    v6 = *(_QWORD *)(v3 + 4);
  }
  else
  {
    v6 = v12;
    v5 = v11[0];
  }
  *(_BYTE *)a2 = v5;
  *(_QWORD *)(a2 + 4) = v6;
  return __readgsdword(0x14u);
}
