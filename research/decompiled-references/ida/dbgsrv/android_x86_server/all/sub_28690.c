/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28690
// Address: 0x00028690

//----- (00028690) --------------------------------------------------------
int __cdecl sub_28690(int a1, char **a2, int a3, int a4, unsigned int a5)
{
  int v5; // edi
  int v6; // edx
  int v7; // ecx
  _DWORD *v8; // esi
  int v9; // esi
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // esi
  bool v14; // cf
  _DWORD *v15; // eax
  _DWORD *v17; // edx
  _DWORD *v18; // eax
  int v19; // ecx
  __int64 v20; // xmm0_8
  unsigned int v21; // [esp+8h] [ebp-34h]
  int v22; // [esp+Ch] [ebp-30h]
  _DWORD *v23; // [esp+Ch] [ebp-30h]
  __int64 v24; // [esp+10h] [ebp-2Ch] BYREF
  __int64 v25; // [esp+18h] [ebp-24h]
  int v26; // [esp+20h] [ebp-1Ch]
  unsigned int v27; // [esp+28h] [ebp-14h]

  v5 = a5;
  v6 = a4;
  v7 = a3;
  v27 = __readgsdword(0x14u);
  v8 = (_DWORD *)a1;
  if ( a3 != 4 )
    return (unsigned __int8)sub_92780(v8, v7, v6, v5);
  if ( a2 )
  {
    v9 = a4;
    v10 = sub_8D280(a1, a2, a4, a5);
    v6 = v9;
    v8 = (_DWORD *)a1;
    if ( v10 < 0 )
      return -2;
  }
  v11 = v5;
  if ( v5 < 0 )
    v11 = v8[54];
  if ( v11 <= 0 || (unsigned int)v11 > v8[54] )
  {
    if ( !(_BYTE)under_debugger )
      interr(30066);
LABEL_34:
    BUG();
  }
  v22 = v8[53];
  LODWORD(v24) = v6;
  BYTE4(v25) = v11;
  v26 = 0;
  if ( (unsigned __int8)v11 >= 8u )
  {
    if ( !(_BYTE)under_debugger )
      interr(1796);
    goto LABEL_34;
  }
  v5 = v11;
  v21 = v6;
  if ( !(*(int (__cdecl **)(_DWORD *, int, char *, int, _DWORD))(*v8 + 144))(v8, v6, (char *)&v24 + 4, v11, 0)
    || (*(int (__cdecl **)(_DWORD *, unsigned int, int, int, _DWORD))(*v8 + 148))(v8, v21, v22, v5, 0) != v5 )
  {
    v6 = v21;
    v7 = 4;
    return (unsigned __int8)sub_92780(v8, v7, v6, v5);
  }
  v12 = (_DWORD *)v8[57];
  if ( v12 )
  {
    v13 = v8 + 57;
    v14 = v12[4] < v21;
    if ( v12[4] <= v21 )
      goto LABEL_17;
    while ( 1 )
    {
      v15 = (_DWORD *)*v12;
      v13 = v12;
      if ( !*v12 )
        break;
      while ( 1 )
      {
        v12 = v15;
        v14 = v15[4] < v21;
        if ( v15[4] > v21 )
          break;
LABEL_17:
        if ( v14 )
        {
          v13 = v12 + 1;
          v15 = (_DWORD *)v12[1];
          if ( v15 )
            continue;
        }
        goto LABEL_25;
      }
    }
  }
  else
  {
    v12 = v8 + 57;
  }
  v13 = v12;
LABEL_25:
  v17 = (_DWORD *)*v13;
  if ( !*v13 )
  {
    v18 = operator new(0x28u);
    v18[4] = v21;
    v18[5] = -1;
    *((_BYTE *)v18 + 32) = 0;
    v18[9] = 0;
    *v18 = 0;
    v18[1] = 0;
    v18[2] = v12;
    *v13 = v18;
    v19 = **(_DWORD **)(a1 + 224);
    v23 = v18;
    if ( v19 )
    {
      *(_DWORD *)(a1 + 224) = v19;
      v18 = (_DWORD *)*v13;
    }
    sub_2D500(*(_DWORD *)(a1 + 228), (int)v18);
    ++*(_DWORD *)(a1 + 232);
    v17 = v23;
  }
  v17[9] = v26;
  v20 = v24;
  *(_QWORD *)(v17 + 7) = v25;
  *(_QWORD *)(v17 + 5) = v20;
  sub_2F850((_DWORD *)(a1 + 656), (unsigned int *)&a4);
  return 1;
}
// 13E34C: using guessed type int under_debugger;
