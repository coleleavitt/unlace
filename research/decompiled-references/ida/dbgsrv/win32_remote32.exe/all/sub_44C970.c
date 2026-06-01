/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44C970
// Address: 0x0044C970

//----- (0044C970) --------------------------------------------------------
int __thiscall sub_44C970(_DWORD **this, unsigned int a2, int a3)
{
  int v4; // esi
  _DWORD *v5; // eax
  int v6; // edx
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // eax
  int v12; // [esp+1Ch] [ebp-14h]
  _DWORD *v13; // [esp+20h] [ebp-10h]

  (*(void (__thiscall **)(_DWORD))(**(this + 12) + 4))(*(this + 12));
  v4 = 0;
  v5 = *(this + 12) + 1;
  v13 = v5;
  v6 = *v5;
  v12 = *v5;
  v7 = *(_DWORD *)(*v5 + 4);
  if ( !*(_BYTE *)(v7 + 13) )
  {
    v8 = *(_DWORD *)(*v5 + 4);
    do
    {
      v7 = v8;
      if ( *(_DWORD *)(v8 + 16) >= a2 )
      {
        v6 = v8;
        v4 = 1;
        v8 = *(_DWORD *)v8;
      }
      else
      {
        v8 = *(_DWORD *)(v8 + 8);
        v4 = 0;
      }
    }
    while ( !*(_BYTE *)(v8 + 13) );
    v5 = v13;
  }
  if ( *(_BYTE *)(v6 + 13) || a2 < *(_DWORD *)(v6 + 16) )
  {
    if ( v5[1] == 178956970 )
      sub_403E20();
    v9 = sub_4627C2(0x18u);
    v9[4] = a2;
    v9[5] = 0;
    *v9 = v12;
    v9[1] = v12;
    v9[2] = v12;
    *((_WORD *)v9 + 6) = 0;
    v6 = sub_403C10(v13, (_DWORD *)v7, v4, (int)v9);
  }
  *(_DWORD *)(v6 + 20) = a3;
  return (*(int (__thiscall **)(_DWORD))(**(this + 12) + 8))(*(this + 12));
}
