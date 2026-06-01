/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BF30
// Address: 0x0046BF30

//----- (0046BF30) --------------------------------------------------------
void __stdcall sub_46BF30(int *a1, int **a2, int *a3)
{
  int *v3; // esi
  int *v4; // ebx
  int **v5; // edi
  int *v6; // edx
  int *v7; // ecx
  int *v8; // eax
  int *v9[5]; // [esp+10h] [ebp-3Ch] BYREF
  int v10; // [esp+24h] [ebp-28h] BYREF
  int v11; // [esp+28h] [ebp-24h] BYREF
  int v12; // [esp+2Ch] [ebp-20h] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  sub_47A78B(*a1);
  ms_exc.registration.TryLevel = 0;
  v3 = (int *)lpMem;
  v4 = (int *)((char *)lpMem + 4 * dword_4B78C8);
  v5 = a2;
  while ( 1 )
  {
    v9[4] = v3;
    if ( v3 == v4 )
      break;
    v12 = *v3;
    if ( sub_46C089(v12, *v5) )
    {
      v6 = v5[2];
      v7 = v5[1];
      v8 = *v5;
      v9[0] = &v12;
      v9[1] = v8;
      v9[2] = v7;
      v9[3] = v6;
      v11 = v12;
      v10 = v12;
      sub_46BEA4((int)v4, (int)&v12, &v10, v9, &v11);
      v5 = a2;
    }
    ++v3;
  }
  ms_exc.registration.TryLevel = -2;
  sub_47A7D3(*a3);
}
// 4B78C8: using guessed type int dword_4B78C8;
