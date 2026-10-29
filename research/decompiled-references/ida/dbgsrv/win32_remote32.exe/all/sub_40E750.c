/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E750
// Address: 0x0040E750

//----- (0040E750) --------------------------------------------------------
int __userpurge sub_40E750@<eax>(__m128i a1@<xmm0>, int **a2, int a3, int a4)
{
  int **v4; // ebx
  int *v5; // esi
  int *v6; // esi
  int *v7; // esi
  int *v8; // ecx
  int **v9; // eax
  int v10; // esi
  void *v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // eax
  _DWORD v16[2]; // [esp+10h] [ebp-5Ch] BYREF
  void *v17; // [esp+18h] [ebp-54h]
  unsigned int v18; // [esp+1Ch] [ebp-50h]
  unsigned int v19; // [esp+20h] [ebp-4Ch]
  void *v20; // [esp+24h] [ebp-48h]
  unsigned int v21; // [esp+28h] [ebp-44h]
  unsigned int v22; // [esp+2Ch] [ebp-40h]
  int v23; // [esp+30h] [ebp-3Ch]
  __int16 v24; // [esp+34h] [ebp-38h]
  int v25; // [esp+38h] [ebp-34h] BYREF
  int v26; // [esp+3Ch] [ebp-30h]
  void *v27; // [esp+40h] [ebp-2Ch]
  unsigned int v28; // [esp+44h] [ebp-28h]
  int v29; // [esp+48h] [ebp-24h]
  void *v30; // [esp+4Ch] [ebp-20h]
  unsigned int v31; // [esp+50h] [ebp-1Ch]
  int v32; // [esp+54h] [ebp-18h]
  int v33; // [esp+58h] [ebp-14h]
  __int16 v34; // [esp+5Ch] [ebp-10h]
  int v35; // [esp+68h] [ebp-4h]

  v4 = a2;
  if ( !a2[50] && ((unsigned int)a2[84] & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  v5 = v4[135];
  sub_408890(v4 + 135, (int)(v4 + 135), (int *)v5[1]);
  v5[1] = (int)v5;
  *v5 = (int)v5;
  v5[2] = (int)v5;
  v4[136] = nullptr;
  v6 = v4[137];
  sub_408890(v4 + 137, (int)(v4 + 137), (int *)v6[1]);
  v6[1] = (int)v6;
  *v6 = (int)v6;
  v6[2] = (int)v6;
  v4[138] = nullptr;
  v7 = v4[139];
  sub_408890(v4 + 139, (int)(v4 + 139), (int *)v7[1]);
  v7[1] = (int)v7;
  *v7 = (int)v7;
  v7[2] = (int)v7;
  v4[140] = nullptr;
  v8 = v4[151];
  v9 = (int **)*v8;
  a2 = v9;
  if ( v9 != (int **)v8 )
  {
    do
    {
      sub_40C8D0((int)v4, a1, (unsigned int)v9[4], (int *)v4 + 137, (int *)v4 + 139);
      sub_40B5E0((int *)&a2);
      v9 = a2;
    }
    while ( a2 != (int **)v4[151] );
  }
  v10 = a3;
  if ( v4[113] != (int *)-1 )
  {
    v11 = nullptr;
    do
    {
      v25 = 0;
      v26 = 0;
      v27 = nullptr;
      v28 = 0;
      v29 = 0;
      v30 = nullptr;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v11 = (void *)sub_4124C0((int)v4, (int)v4, a1, v11, (int)&v25);
      a2 = (int **)v11;
      if ( v11 != (void *)-1 && v25 != -1 )
      {
        v12 = v28;
        v16[0] = v25;
        v16[1] = v26;
        v17 = nullptr;
        v18 = 0;
        v19 = 0;
        if ( v28 )
        {
          v17 = sub_4539E0(v28);
          v19 = v12;
          sub_464310((unsigned int)v17, (unsigned int)v27, v12);
          v18 = v12;
        }
        v13 = v31;
        LOBYTE(v35) = 1;
        v20 = nullptr;
        v21 = 0;
        v22 = 0;
        if ( v31 )
        {
          v20 = sub_4539E0(v31);
          v22 = v13;
          sub_464310((unsigned int)v20, (unsigned int)v30, v13);
          v21 = v13;
        }
        v23 = v33;
        v24 = v34;
        v14 = *(_DWORD *)(v10 + 4) + 1;
        LOBYTE(v35) = 2;
        if ( v14 > *(_DWORD *)(v10 + 8) )
          *(_DWORD *)v10 = sub_453B00(v10, *(void **)v10, v14, 0x28u);
        sub_409180((_DWORD *)(*(_DWORD *)v10 + 40 * *(_DWORD *)(v10 + 4)), (int)v16);
        ++*(_DWORD *)(v10 + 4);
        LOBYTE(v35) = 5;
        if ( v20 )
          sub_453A20(v20);
        LOBYTE(v35) = 6;
        if ( v17 )
          sub_453A20(v17);
        v11 = a2;
      }
      v35 = 7;
      if ( v30 )
      {
        v31 = 0;
        sub_453A20(v30);
        v30 = nullptr;
        v32 = 0;
      }
      v35 = 8;
      if ( v27 )
      {
        v28 = 0;
        sub_453A20(v27);
      }
      v35 = -1;
    }
    while ( v11 != (void *)-1 );
    sub_43CE30(v4, 1);
  }
  if ( sub_43DB90((unsigned int *)v4, (_DWORD *)v10) )
    return -6;
  sub_43DC30((unsigned int *)v4, (_DWORD *)v10);
  return 1;
}
// 4B70F0: using guessed type char byte_4B70F0;
