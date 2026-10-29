/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_404110
// Address: 0x00404110

//----- (00404110) --------------------------------------------------------
int __thiscall sub_404110(void *this, int *a2, int (__thiscall ***a3)(_DWORD, int))
{
  void *v3; // ebx
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  int v8; // esi
  _DWORD *v9; // ecx
  int *v10; // edi
  int *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  _DWORD *v17; // [esp+18h] [ebp-2Ch] BYREF
  int v18; // [esp+1Ch] [ebp-28h]
  int v19; // [esp+20h] [ebp-24h]
  void *v20; // [esp+24h] [ebp-20h]
  _DWORD *v21; // [esp+28h] [ebp-1Ch]
  unsigned int v22; // [esp+2Ch] [ebp-18h] BYREF
  int v23; // [esp+30h] [ebp-14h] BYREF
  int v24; // [esp+34h] [ebp-10h] BYREF
  int v25; // [esp+40h] [ebp-4h]

  v3 = this;
  v20 = this;
  v18 = 0;
  v4 = sub_4627C2(0x14u);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 6) = 257;
  v17 = v4;
  v25 = 0;
  v5 = *a2;
  v24 = 0;
  v23 = 0;
  if ( (*(int (__stdcall **)(int *, int, int *, int *))(v5 + 24))(a2, 1, &v23, &v24) >= 0 )
  {
    while ( v24 == 1 )
    {
      v6 = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)v3 + 60))(v3, v23, 1);
      v19 = v6;
      v7 = *(_DWORD *)v6;
      LOBYTE(v25) = 1;
      v8 = (*(int (__thiscall **)(int, unsigned int *))(v7 + 88))(v6, &v22);
      if ( v8 )
        goto LABEL_16;
      v9 = v17;
      v21 = v17;
      v10 = (int *)v17[1];
      if ( !*((_BYTE *)v10 + 13) )
      {
        v11 = (int *)v17[1];
        do
        {
          v10 = v11;
          if ( v11[4] >= v22 )
          {
            v9 = v11;
            v8 = 1;
            v11 = (int *)*v11;
          }
          else
          {
            v11 = (int *)v11[2];
            v8 = 0;
          }
        }
        while ( !*((_BYTE *)v11 + 13) );
      }
      if ( *((_BYTE *)v9 + 13) || v22 < v9[4] )
      {
        if ( v18 == 214748364 )
          sub_403E20();
        LOBYTE(v25) = 2;
        v12 = sub_4627C2(0x14u);
        LOBYTE(v25) = 1;
        v12[4] = v22;
        v13 = v21;
        *v12 = v21;
        v12[1] = v13;
        v12[2] = v13;
        *((_WORD *)v12 + 6) = 0;
        sub_403C10(&v17, v10, v8, (int)v12);
        v8 = (**a3)(a3, v6);
        if ( v8 < 0 )
        {
LABEL_16:
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 144))(v6, 1);
          goto LABEL_18;
        }
      }
      v14 = *(_DWORD *)v6;
      LOBYTE(v25) = 0;
      (*(void (__thiscall **)(int, int))(v14 + 144))(v6, 1);
      v24 = 0;
      v15 = *a2;
      v23 = 0;
      if ( (*(int (__stdcall **)(int *, int, int *, int *))(v15 + 24))(a2, 1, &v23, &v24) < 0 )
        break;
      v3 = v20;
    }
  }
  v8 = 0;
LABEL_18:
  sub_402EB0((void **)&v17);
  return v8;
}
