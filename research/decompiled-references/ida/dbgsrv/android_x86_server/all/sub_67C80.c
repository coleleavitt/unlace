/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67C80
// Address: 0x00067C80

//----- (00067C80) --------------------------------------------------------
unsigned int __cdecl sub_67C80(_DWORD *a1, int a2, char *s, size_t n)
{
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // edi
  int v7; // edx
  _BYTE *v8; // eax
  int v10; // [esp+0h] [ebp-3Ch] BYREF
  void **v11[3]; // [esp+4h] [ebp-38h] BYREF
  int v12; // [esp+10h] [ebp-2Ch] BYREF
  void *v13; // [esp+14h] [ebp-28h]
  int v14; // [esp+18h] [ebp-24h]
  int v15; // [esp+1Ch] [ebp-20h]
  int v16; // [esp+20h] [ebp-1Ch]
  unsigned int v17; // [esp+28h] [ebp-14h]

  v4 = a1;
  v17 = __readgsdword(0x14u);
  v5 = a1[1];
  v6 = v5 - 1;
  if ( !v5 )
    v6 = 0;
  v7 = a2;
  if ( a1[2] >= (unsigned int)(v6 + 2) )
  {
    v8 = (_BYTE *)*a1;
  }
  else
  {
    v8 = qvector_reserve((int)a1, (void *)*a1, v6 + 2, 1u);
    v7 = a2;
    v4 = a1;
    *a1 = v8;
  }
  v4[1] = v6 + 2;
  v8[v6] = 10;
  *(_BYTE *)(*v4 + v6 + 1) = 0;
  LOBYTE(v12) = 2;
  v14 = 0;
  v13 = nullptr;
  v16 = 0;
  v15 = 0;
  get_idcv_attr((int)&v12, v7, s, 1);
  v11[0] = nullptr;
  v11[1] = nullptr;
  v10 = (int)v11;
  sub_587A0((int)a1, &v12, s, n, &v10);
  sub_68120((int)&v10, v11[0]);
  if ( (char)v12 == 5 )
  {
    sub_59680(v13, (char *)&v12);
  }
  else if ( (char)v12 == 7 && v13 )
  {
    v14 = 0;
    qfree(v13);
    v13 = nullptr;
    v15 = 0;
  }
  return __readgsdword(0x14u);
}
