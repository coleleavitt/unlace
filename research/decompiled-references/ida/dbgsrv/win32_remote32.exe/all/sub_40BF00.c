/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40BF00
// Address: 0x0040BF00

//----- (0040BF00) --------------------------------------------------------
void *__userpurge sub_40BF00@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, unsigned int a3)
{
  unsigned int v4; // esi
  unsigned int v5; // ecx
  int v6; // edi
  unsigned int v7; // eax
  __m128i *v8; // ebx
  LPVOID v9; // eax
  unsigned int v10; // edx
  int v11; // edx
  unsigned int v12; // esi
  unsigned int v13; // ecx
  unsigned int v14; // edi
  unsigned int v15; // ecx
  unsigned int v16; // eax
  int v17; // edi
  void *result; // eax
  unsigned int v19; // [esp+8h] [ebp-8h]
  unsigned int v20; // [esp+8h] [ebp-8h]
  unsigned int v21; // [esp+Ch] [ebp-4h]
  unsigned int i; // [esp+14h] [ebp+4h]
  unsigned int v23; // [esp+14h] [ebp+4h]

  v4 = 1;
  v5 = a1[2];
  if ( v5 )
    v4 = v5;
  while ( v4 - v5 < a3 || v4 < 8 )
  {
    if ( 97612893 - v4 < v4 )
      sub_40C160();
    v4 *= 2;
  }
  v6 = a1[3];
  v21 = v6;
  if ( v4 > 0x3FFFFFFF )
    goto LABEL_25;
  v7 = 4 * v4;
  if ( !(4 * v4) )
  {
    v8 = nullptr;
    goto LABEL_15;
  }
  if ( v7 >= 0x1000 )
  {
    if ( v7 + 35 >= v7 )
    {
      v9 = sub_4627C2(v7 + 35);
      if ( v9 )
      {
        v8 = (__m128i *)(((unsigned int)v9 + 35) & 0xFFFFFFE0);
        v8[-1].m128i_i32[3] = (__int32)v9;
        goto LABEL_15;
      }
      sub_467F04(a2, v6);
    }
LABEL_25:
    sub_403E00();
  }
  v8 = (__m128i *)sub_4627C2(4 * v4);
LABEL_15:
  v10 = v4 >> 1;
  v19 = 4 * v6;
  for ( i = (unsigned int)v8 + 4 * v6; v4 <= v10; v4 *= 2 )
    ;
  v11 = a1[2];
  v12 = v4 - v11;
  v13 = a1[1] + 4 * v6;
  v14 = a1[1] + 4 * v11 - v13;
  sub_464310(i, v13, v14);
  v15 = a1[1];
  v16 = v14 + i;
  v23 = v14 + i;
  if ( v21 > v12 )
  {
    v17 = 4 * v12;
    sub_464310(v16, v15, 4 * v12);
    v20 = v19 - 4 * v12;
    sub_464310((unsigned int)v8, 4 * v12 + a1[1], v20);
    sub_464890((__m128i *)((char *)v8 + v20), 0, 4 * v12);
  }
  else
  {
    v17 = v19;
    sub_464310(v16, v15, v19);
    sub_464890((__m128i *)(v19 + v23), 0, 4 * (v12 - v21));
    sub_464890(v8, 0, v19);
  }
  result = (void *)a1[1];
  if ( result )
    result = (void *)sub_40FB70((int)v8, v17, result, a1[2]);
  a1[2] += v12;
  a1[1] = v8;
  return result;
}
