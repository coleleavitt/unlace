/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426BC0
// Address: 0x00426BC0

//----- (00426BC0) --------------------------------------------------------
int __thiscall sub_426BC0(int *this, LPVOID *a2, int a3)
{
  int v4; // edi
  int v5; // edi
  int v6; // esi
  unsigned int v7; // esi
  void *v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  _BYTE *v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // edi
  int v14; // esi
  _BYTE *v15; // eax
  const char *v16; // eax
  _DWORD *v17; // eax
  int v18; // esi
  unsigned int v19; // edi
  unsigned int v20; // eax
  void *v21; // ebx
  unsigned int v22; // esi
  int *v23; // esi
  _DWORD *v24; // eax
  __int64 v25; // xmm0_8
  int v26; // eax
  int v27; // esi
  _DWORD *v28; // eax
  unsigned int v29; // ecx
  int *v30; // ecx
  _DWORD *v32; // [esp-Ch] [ebp-60h]
  unsigned int v33; // [esp-8h] [ebp-5Ch]
  const char *v34; // [esp-8h] [ebp-5Ch]
  int v35; // [esp-8h] [ebp-5Ch]
  void *v36; // [esp+10h] [ebp-44h] BYREF
  unsigned int v37; // [esp+14h] [ebp-40h]
  unsigned int v38; // [esp+18h] [ebp-3Ch]
  int v39; // [esp+1Ch] [ebp-38h]
  __int64 v40; // [esp+20h] [ebp-34h] BYREF
  int v41; // [esp+28h] [ebp-2Ch]
  _BYTE *v42; // [esp+2Ch] [ebp-28h] BYREF
  unsigned int v43; // [esp+30h] [ebp-24h]
  unsigned int v44; // [esp+34h] [ebp-20h]
  _DWORD v45[2]; // [esp+38h] [ebp-1Ch] BYREF
  const char *v46; // [esp+40h] [ebp-14h]
  int *v47; // [esp+44h] [ebp-10h]
  int v48; // [esp+50h] [ebp-4h]

  v47 = this;
  sub_41C640(this, &v40, a3);
  v4 = v41;
  if ( !*(_BYTE *)(v41 + 13) && !(unsigned __int8)sub_41D0A0(a3, v41 + 16) && v4 != *this )
  {
    v5 = *(_DWORD *)(v4 + 28);
    v6 = *((_DWORD *)*a2 + v5);
    if ( *(_DWORD *)(v6 + 68) )
      return -1;
    sub_427770(*((unsigned int **)*a2 + v5));
    *(_DWORD *)(v6 + 68) = -1;
    return v5;
  }
  v7 = *(this + 5);
  v8 = nullptr;
  v9 = 0;
  v42 = nullptr;
  v10 = 0;
  v43 = 0;
  v44 = 0;
  if ( v7 )
  {
    v11 = sub_4539E0(v7);
    v33 = *(this + 4);
    v42 = v11;
    v44 = v7;
    sub_464310((unsigned int)v11, v33, v7);
    v10 = v44;
    v9 = v7;
    v8 = v42;
    v43 = v7;
  }
  v48 = 0;
  if ( v9 )
    v12 = v9 - 1;
  else
    v12 = 0;
  if ( v12 + 2 > v10 )
  {
    v8 = sub_453B00((int)&v42, v8, v12 + 2, 1u);
    v42 = v8;
  }
  v43 = v12 + 2;
  *((_BYTE *)v8 + v12) = 46;
  v42[v12 + 1] = 0;
  v13 = *(_DWORD *)(a3 + 4) != 0 ? *(_DWORD *)(a3 + 4) - 1 : 0;
  if ( v13 )
  {
    v14 = v43 != 0 ? v43 - 1 : 0;
    if ( v13 + v14 + 1 <= v44 )
    {
      v15 = v42;
    }
    else
    {
      v15 = sub_453B00((int)&v42, v42, v13 + v14 + 1, 1u);
      v42 = v15;
    }
    v43 = v13 + v14 + 1;
    v15[v14 + v13] = 0;
    sub_464310((unsigned int)&v42[v14], *(_DWORD *)a3, v13);
  }
  v16 = MultiByteStr;
  if ( v43 )
    v16 = v42;
  v46 = v16;
  v5 = sub_427E40(a2, v16);
  if ( v5 == -1 )
  {
    v17 = sub_4627C2(0x48u);
    v18 = (int)v17;
    if ( v17 )
    {
      *v17 = 0;
      v17[1] = 0;
      v17[2] = 0;
      v17[4] = 0;
      v17[5] = 0;
      v17[6] = 0;
      v17[8] = 0;
      v17[9] = 0;
      v17[10] = 0;
      v17[11] = 0;
      v17[12] = 0;
      v17[13] = 0;
      v17[14] = 0;
      v17[15] = 0;
      v17[16] = 0;
    }
    else
    {
      v18 = 0;
    }
    if ( v46 && (v19 = strlen(v46)) != 0 )
    {
      v20 = v19 + 1;
      if ( v19 + 1 > *(_DWORD *)(v18 + 8) )
      {
        *(_DWORD *)v18 = sub_453B00(v18, *(void **)v18, v19 + 1, 1u);
        v20 = v19 + 1;
      }
      v34 = v46;
      *(_DWORD *)(v18 + 4) = v20;
      sub_464310(*(_DWORD *)v18, (unsigned int)v34, v19);
      *(_BYTE *)(v19 + *(_DWORD *)v18) = 0;
    }
    else
    {
      *(_DWORD *)(v18 + 4) = 0;
    }
    v5 = (int)a2[1];
    if ( v5 + 1 > (unsigned int)a2[2] )
      *a2 = sub_453B00((int)a2, *a2, v5 + 1, 4u);
    *((_DWORD *)*a2 + (_DWORD)a2[1]) = v18;
    a2[1] = (char *)a2[1] + 1;
    goto LABEL_37;
  }
  v18 = *((_DWORD *)*a2 + v5);
  if ( !*(_DWORD *)(v18 + 68) )
  {
    sub_427770(*((unsigned int **)*a2 + v5));
LABEL_37:
    *(_DWORD *)(v18 + 68) = -1;
    *(_DWORD *)(v18 + 12) = 0;
    goto LABEL_38;
  }
  v5 = -1;
LABEL_38:
  v21 = nullptr;
  v36 = nullptr;
  v37 = 0;
  v38 = 0;
  v22 = *(_DWORD *)(a3 + 4);
  if ( v22 )
  {
    v21 = sub_4539E0(*(_DWORD *)(a3 + 4));
    v38 = v22;
    v36 = v21;
    sub_464310((unsigned int)v21, *(_DWORD *)a3, v22);
    v37 = v22;
  }
  v39 = v5;
  v23 = v47;
  LOBYTE(v48) = 1;
  v24 = sub_41C640(v47, v45, (int)&v36);
  v25 = *(_QWORD *)v24;
  v26 = v24[2];
  v40 = v25;
  if ( *(_BYTE *)(v26 + 13) || (unsigned __int8)sub_41D0A0((int)&v36, v26 + 16) )
  {
    if ( v23[1] == 0x7FFFFFF )
      sub_403E20();
    v27 = *v23;
    v45[1] = v47;
    LOBYTE(v48) = 2;
    v46 = nullptr;
    v28 = sub_4627C2(0x20u);
    v28[5] = v37;
    v29 = v38;
    v28[4] = v21;
    v21 = nullptr;
    v28[6] = v29;
    v30 = v47;
    v35 = HIDWORD(v40);
    v28[7] = v5;
    v32 = (_DWORD *)v40;
    *v28 = v27;
    v28[1] = v27;
    v28[2] = v27;
    *((_WORD *)v28 + 6) = 0;
    sub_403C10(v30, v32, v35, (int)v28);
  }
  LOBYTE(v48) = 5;
  if ( v21 )
    sub_453A20(v21);
  v48 = 6;
  if ( v42 )
  {
    v43 = 0;
    sub_453A20(v42);
  }
  return v5;
}
