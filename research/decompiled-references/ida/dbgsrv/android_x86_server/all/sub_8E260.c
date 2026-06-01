/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E260
// Address: 0x0008E260

//----- (0008E260) --------------------------------------------------------
int *__cdecl sub_8E260(int *a1, int a2)
{
  int *v2; // esi
  int v3; // edi
  int v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  bool v9; // zf
  int v11; // [esp+10h] [ebp-3Ch]
  void *v12; // [esp+18h] [ebp-34h] BYREF
  int v13; // [esp+1Ch] [ebp-30h]
  int v14; // [esp+20h] [ebp-2Ch]
  int v15; // [esp+28h] [ebp-24h]
  int v16; // [esp+2Ch] [ebp-20h]
  int v17; // [esp+30h] [ebp-1Ch]
  unsigned int v18; // [esp+38h] [ebp-14h]

  v2 = a1;
  v18 = __readgsdword(0x14u);
  v12 = nullptr;
  v13 = 0;
  v14 = 0;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v12 = qalloc_or_throw(40 * v3);
    v14 = v3;
    sub_8E400((int)v12, *(int **)a2);
    v11 = v3;
    if ( v3 != 1 )
    {
      v4 = v3 - 1;
      v5 = 40;
      do
      {
        sub_8E400((int)v12 + v5, (int *)(v5 + *(_DWORD *)a2));
        v5 += 40;
        --v4;
      }
      while ( v4 );
    }
    v3 = v11;
    v13 = v11;
    v2 = a1;
    v6 = (int)v12;
  }
  else
  {
    v6 = 0;
  }
  v15 = v6;
  v12 = nullptr;
  v16 = v3;
  v13 = 0;
  v17 = v3;
  v14 = 0;
  if ( *v2 )
  {
    sub_1BDA0(v2, 0);
    qfree((void *)*v2);
    v7 = v16;
    v8 = v17;
    v9 = v12 == nullptr;
    *v2 = v15;
    v2[1] = v7;
    v2[2] = v8;
    if ( !v9 )
    {
      sub_1BDA0((int *)&v12, 0);
      qfree(v12);
      v12 = nullptr;
      v14 = 0;
    }
  }
  else
  {
    *v2 = v6;
    v2[1] = v3;
    v2[2] = v3;
  }
  return v2;
}
