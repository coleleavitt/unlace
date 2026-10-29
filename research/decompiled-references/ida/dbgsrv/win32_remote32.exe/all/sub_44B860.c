/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B860
// Address: 0x0044B860

//----- (0044B860) --------------------------------------------------------
int __thiscall sub_44B860(_DWORD *this, int a2, unsigned __int8 *a3, unsigned int a4)
{
  void *v5; // ebx
  signed int v6; // eax
  unsigned int v7; // esi
  int (__cdecl *v9)(_DWORD *, void *, void *, unsigned int, void **, unsigned int *); // eax
  unsigned int v10; // esi
  _BYTE *v11; // eax
  unsigned int v12; // ebp
  _BYTE *v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // esi
  unsigned __int8 *v16; // [esp-8h] [ebp-40h]
  void *v17; // [esp+14h] [ebp-24h] BYREF
  unsigned __int8 *v18; // [esp+18h] [ebp-20h] BYREF
  unsigned int v19; // [esp+1Ch] [ebp-1Ch]
  unsigned int v20; // [esp+20h] [ebp-18h] BYREF
  void *v21; // [esp+24h] [ebp-14h] BYREF
  _BYTE v22[3]; // [esp+29h] [ebp-Fh] BYREF
  _BYTE v23[5]; // [esp+2Ch] [ebp-Ch] BYREF
  _BYTE v24[3]; // [esp+31h] [ebp-7h] BYREF

  if ( *(this + 5) )
  {
    v5 = nullptr;
    v18 = a3;
    v19 = a4;
    v21 = (void *)sub_4541E0(&v18, a4);
    v6 = sub_4541E0(&v18, v19);
    v7 = v6;
    if ( v6 )
    {
      v5 = sub_453990(v6);
      if ( !v5 )
        return 2;
    }
    if ( &v18[v7] >= v18 && (unsigned int)&v18[v7] <= v19 )
    {
      v16 = v18;
      v18 += v7;
      if ( sub_464310((unsigned int)v5, (unsigned int)v16, v7) )
      {
        v9 = (int (__cdecl *)(_DWORD *, void *, void *, unsigned int, void **, unsigned int *))*(this + 5);
        v17 = nullptr;
        v20 = 0;
        v10 = v9(this, v21, v5, v7, &v17, &v20);
        sub_453A20(v5);
        v11 = sub_4540B0(&v21, (unsigned int)v22, v10);
        sub_401600(a2, (unsigned int)&v21, v11 - (_BYTE *)&v21);
        v12 = v20;
        v21 = v17;
        v13 = sub_4540B0(v23, (unsigned int)v24, v20);
        sub_401600(a2, (unsigned int)v23, v13 - v23);
        if ( !v12 )
        {
LABEL_19:
          sub_453A20(v17);
          return 0;
        }
        v14 = *(_DWORD *)(a2 + 4);
        v15 = v14 + v12;
        if ( v14 + v12 < v14 )
          v15 = 0x7FFFFFFF;
        if ( v15 <= v14 )
        {
          if ( v15 == v14 || v15 >= v14 )
            goto LABEL_18;
        }
        else
        {
          if ( v15 > *(_DWORD *)(a2 + 8) )
            *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v15, 1u);
          sub_464890((__m128i *)(*(_DWORD *)(a2 + 4) + *(_DWORD *)a2), 0, v15 - *(_DWORD *)(a2 + 4));
        }
        *(_DWORD *)(a2 + 4) = v15;
LABEL_18:
        sub_464310(v14 + *(_DWORD *)a2, (unsigned int)v21, v12);
        goto LABEL_19;
      }
    }
  }
  return 1;
}
