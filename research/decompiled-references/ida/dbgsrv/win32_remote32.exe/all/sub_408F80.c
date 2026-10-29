/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408F80
// Address: 0x00408F80

//----- (00408F80) --------------------------------------------------------
int __thiscall sub_408F80(int *this, int a2, int a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  char v6; // dl
  int v7; // esi
  char *v8; // edx
  int *v9; // ecx
  int v10; // eax
  int v11; // eax
  __int64 v13; // [esp+Ch] [ebp-28h]
  _DWORD v14[3]; // [esp+18h] [ebp-1Ch] BYREF
  int *v15; // [esp+24h] [ebp-10h]
  int v16; // [esp+30h] [ebp-4h]

  v15 = this;
  v4 = sub_408C10(this, v14, (unsigned int *)a3);
  v5 = v4[2];
  v13 = *(_QWORD *)v4;
  if ( *(_BYTE *)(v5 + 13) || *(_DWORD *)a3 < *(_DWORD *)(v5 + 16) )
  {
    if ( *(this + 1) == 63161283 )
      sub_403E20();
    v7 = *this;
    v14[1] = v15;
    v16 = 0;
    v14[2] = 0;
    v8 = (char *)sub_4627C2(0x44u);
    *((_DWORD *)v8 + 4) = *(_DWORD *)a3;
    *((_DWORD *)v8 + 5) = *(_DWORD *)(a3 + 4);
    *((_DWORD *)v8 + 6) = *(_DWORD *)(a3 + 8);
    v9 = v15;
    *((_DWORD *)v8 + 7) = *(_DWORD *)(a3 + 12);
    *((_DWORD *)v8 + 8) = *(_DWORD *)(a3 + 16);
    v10 = *(_DWORD *)(a3 + 20);
    *(_DWORD *)(a3 + 16) = 0;
    *((_DWORD *)v8 + 9) = v10;
    v11 = *(_DWORD *)(a3 + 24);
    *(_DWORD *)(a3 + 20) = 0;
    *((_DWORD *)v8 + 10) = v11;
    *(_DWORD *)(a3 + 24) = 0;
    *(_OWORD *)(v8 + 44) = *(_OWORD *)(a3 + 28);
    *(_QWORD *)(v8 + 60) = *(_QWORD *)(a3 + 44);
    *(_DWORD *)v8 = v7;
    *((_DWORD *)v8 + 1) = v7;
    *((_DWORD *)v8 + 2) = v7;
    *((_WORD *)v8 + 6) = 0;
    v5 = sub_403C10(v9, (_DWORD *)v13, SHIDWORD(v13), (int)v8);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  *(_DWORD *)a2 = v5;
  *(_BYTE *)(a2 + 4) = v6;
  return a2;
}
