/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A850
// Address: 0x0044A850

//----- (0044A850) --------------------------------------------------------
void __cdecl sub_44A850(_DWORD *a1, char a2, int a3)
{
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // ecx
  signed int v6; // esi
  unsigned int v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  void *v11; // edx
  _DWORD *v12; // eax
  int v13; // eax
  int *v14; // esi
  unsigned int v15; // eax
  unsigned int v16; // esi
  LPVOID *v17; // edi
  bool v18; // cf
  int v19; // eax
  unsigned int v20; // edx
  unsigned __int8 *v21; // ecx
  unsigned int v22; // eax
  bool v23; // zf
  unsigned int v24; // [esp-4h] [ebp-54h]
  int v25; // [esp+Ch] [ebp-44h] BYREF
  void *v26; // [esp+14h] [ebp-3Ch]
  int v27; // [esp+18h] [ebp-38h]
  __int64 v28; // [esp+20h] [ebp-30h] BYREF
  __int64 v29; // [esp+28h] [ebp-28h]
  int v30; // [esp+30h] [ebp-20h]
  _DWORD *v31; // [esp+34h] [ebp-1Ch]
  int v32; // [esp+38h] [ebp-18h]
  unsigned int v33; // [esp+3Ch] [ebp-14h]
  char v34; // [esp+43h] [ebp-Dh]
  int v35; // [esp+4Ch] [ebp-4h]

  v3 = a3;
  v4 = sub_4541E0((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
  v5 = a1;
  v6 = v4;
  v33 = v4;
  v7 = a1[1];
  if ( v33 != v7 )
  {
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v35 = 1;
    if ( v33 >= v7 )
    {
      if ( v33 > v7 )
      {
        if ( (unsigned int)&v28 < *a1 || (unsigned int)&v28 >= *a1 + 20 * a1[2] )
        {
          sub_44AB60((int)a1, v6, &v28);
        }
        else
        {
          v12 = sub_4496C0(&v25, &v28);
          LOBYTE(v35) = 3;
          sub_44AB60((int)a1, v6, v12);
          LOBYTE(v35) = 4;
          if ( v26 )
          {
            v27 = 0;
            sub_453A20(v26);
          }
        }
      }
    }
    else
    {
      v8 = 20 * v6;
      v9 = (_DWORD *)(v7 - v6);
      v32 = 20 * v6;
      v31 = v9;
      do
      {
        v10 = (_DWORD *)(v8 + *a1);
        v11 = (void *)v10[2];
        LOBYTE(v35) = 2;
        if ( v11 )
        {
          v10[3] = 0;
          sub_453A20(v11);
          v9 = v31;
          v8 = v32;
          v10[2] = 0;
          v10[4] = 0;
        }
        v8 += 20;
        v9 = (_DWORD *)((char *)v9 - 1);
        v32 = v8;
        v31 = v9;
      }
      while ( v9 );
      v6 = v33;
      a1[1] = v33;
      v3 = a3;
    }
    v35 = 5;
    if ( (_DWORD)v29 )
      sub_453A20((void *)v29);
    v5 = a1;
    v35 = -1;
  }
  if ( v6 > 0 )
  {
    v13 = 0;
    v32 = 0;
    do
    {
      v24 = *(_DWORD *)(v3 + 4);
      v31 = (_DWORD *)(v13 + *v5);
      v14 = v31;
      *v14 = sub_4541E0((unsigned __int8 **)v3, v24);
      v15 = sub_4541E0((unsigned __int8 **)v3, *(_DWORD *)(v3 + 4));
      v16 = v15;
      v17 = (LPVOID *)(v31 + 2);
      v18 = v15 < v31[3];
      if ( v15 <= v31[3] )
      {
        if ( v15 == v31[3] )
          goto LABEL_26;
        v34 = 0;
        if ( !v18 )
          goto LABEL_26;
      }
      else
      {
        if ( v15 > v31[4] )
          *v17 = sub_453B00((int)(v31 + 2), *v17, v15, 1u);
        sub_464890((__m128i *)((char *)*v17 + (_DWORD)v17[1]), 0, v16 - (_DWORD)v17[1]);
        v34 = 0;
      }
      v17[1] = (LPVOID)v16;
LABEL_26:
      v3 = a3;
      if ( a2 )
      {
        v19 = sub_4541E0((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
        v20 = v31[2];
        v31[1] = v19;
        v21 = *(unsigned __int8 **)a3;
        v22 = *(_DWORD *)a3 + v16;
        if ( v22 >= *(_DWORD *)a3 && v22 <= *(_DWORD *)(a3 + 4) )
        {
          *(_DWORD *)a3 = v22;
          sub_464310(v20, (unsigned int)v21, v16);
        }
      }
      v5 = a1;
      v13 = v32 + 20;
      v23 = v33-- == 1;
      v32 += 20;
    }
    while ( !v23 );
  }
}
