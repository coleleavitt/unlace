/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74120
// Address: 0x00074120

//----- (00074120) --------------------------------------------------------
int __cdecl sub_74120(int *a1, int a2, _DWORD *a3, int a4)
{
  int v4; // edi
  int result; // eax
  int v6; // [esp+Ch] [ebp-30h]
  int v7; // [esp+10h] [ebp-2Ch]
  int v8; // [esp+14h] [ebp-28h]
  char v9[4]; // [esp+18h] [ebp-24h] BYREF
  int v10; // [esp+1Ch] [ebp-20h]
  int v11; // [esp+20h] [ebp-1Ch]
  unsigned int v12; // [esp+28h] [ebp-14h]

  v12 = __readgsdword(0x14u);
  v8 = *a1;
  v4 = a1[1];
  v7 = a1[18];
  v6 = a1[19];
  a1[1] = a2;
  a1[19] = 0;
  a1[18] = a4;
  v9[0] = 1;
  v11 = 0;
  v10 = 0;
  result = sub_73CF0((int)a1, (int)v9);
  if ( !result )
    *a3 = v10;
  a1[1] = v4;
  *a1 = v8;
  a1[18] = v7;
  a1[19] = v6;
  return result;
}
