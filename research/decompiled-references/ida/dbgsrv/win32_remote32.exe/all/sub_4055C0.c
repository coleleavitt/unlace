/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4055C0
// Address: 0x004055C0

//----- (004055C0) --------------------------------------------------------
int __userpurge sub_4055C0@<eax>(_DWORD *a1@<ecx>, __m128i a2@<xmm0>, int a3, int a4)
{
  _DWORD *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int *v10; // eax
  int v11; // edi
  bool v12; // zf
  int v13; // edx
  int *v14; // ecx
  int *v15; // eax
  signed int v16; // eax
  double v17; // [esp-4h] [ebp-60h]
  _DWORD v18[8]; // [esp+10h] [ebp-4Ch] BYREF
  __int64 v19; // [esp+30h] [ebp-2Ch]
  int v20; // [esp+38h] [ebp-24h]
  LPVOID v21; // [esp+40h] [ebp-1Ch] BYREF
  int v22; // [esp+44h] [ebp-18h]
  int v23; // [esp+48h] [ebp-14h]
  int v24; // [esp+4Ch] [ebp-10h]
  int v25; // [esp+58h] [ebp-4h]

  v24 = -1;
  if ( a4 == 1 || a4 == 3 )
  {
    v24 = *(_DWORD *)(a3 + 60);
    if ( v24 == -1 )
      return -2147467259;
  }
  v6 = nullptr;
  v7 = -2147467259;
  switch ( a4 )
  {
    case 0:
      v6 = sub_4627C2(0xCu);
      if ( v6 )
      {
        v10 = &dword_48A0F4;
        if ( a1[5] )
          v10 = (int *)a1[4];
        *v6 = &off_489ACC;
        v6[2] = -1;
        v6[1] = v10;
        break;
      }
      goto LABEL_16;
    case 2:
      v6 = sub_4627C2(0xCu);
      if ( v6 )
      {
        v9 = *(_DWORD *)(a3 + 64);
        *v6 = &off_489AD8;
        v6[2] = 1;
        v6[1] = v9;
        break;
      }
      goto LABEL_16;
    case 3:
      v6 = sub_4627C2(0xCu);
      if ( v6 )
      {
        v8 = *(_DWORD *)(a3 + 64);
        *v6 = &off_489AD8;
        v6[2] = 2;
        v6[1] = v8;
        break;
      }
LABEL_16:
      v6 = nullptr;
      break;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v6 + 8))(v6) )
  {
    v21 = nullptr;
    v22 = 0;
    v23 = 0;
    v11 = v24;
    v25 = 0;
    if ( v24 != -1 )
    {
      LODWORD(v17) = v24;
      sub_402970(a2, &v21, " with load address %a", v17);
    }
    if ( (dword_4B70EC & 0x10000) != 0 )
      sub_402760("PDB: Trying loadDataForExe(\"%S\", \"%S\")%s\n");
    v12 = a1[8] == 0;
    v13 = a1[3];
    v14 = &dword_48A0F4;
    v18[4] = v11;
    v18[0] = &off_489AE4;
    v18[1] = &off_489B14;
    v18[2] = &off_489B24;
    v18[3] = 1;
    v18[5] = v6;
    v18[6] = a1;
    v19 = 0;
    v20 = -1;
    if ( !v12 )
      v14 = (int *)a1[7];
    v15 = &dword_48A0F4;
    if ( a1[5] )
      v15 = (int *)a1[4];
    v16 = (*(int (__stdcall **)(int, int *, int *, _DWORD *))(*(_DWORD *)v13 + 24))(v13, v15, v14, v18);
    v7 = v16;
    if ( (dword_4B70EC & 0x10000) != 0 )
    {
      if ( v16 != -2147418113 && v16 != -2147024809 && (v16 < -2140340223 || (unsigned int)(v16 + 2140340223) >= 0x19) )
        sub_453860((__m128i)0LL, v16);
      sub_402760("PDB: %s\n");
    }
    v25 = 1;
    if ( v21 )
    {
      v22 = 0;
      sub_453A20(v21);
    }
  }
  (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1);
  return v7;
}
// 4056FC: variable 'v17' is possibly undefined
// 489ACC: using guessed type int (__stdcall *off_489ACC)(char);
// 489AD8: using guessed type _UNKNOWN *off_489AD8;
// 489AE4: using guessed type int (__stdcall *off_489AE4)(int, int, int);
// 489B14: using guessed type int (__stdcall *off_489B14)(int, int, int);
// 489B24: using guessed type int (__stdcall *off_489B24)(int, int, int);
// 48A0F4: using guessed type int dword_48A0F4;
// 4B70EC: using guessed type int dword_4B70EC;
