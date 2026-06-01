/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C770
// Address: 0x0041C770

//----- (0041C770) --------------------------------------------------------
int __thiscall sub_41C770(int *this, int a2, int a3)
{
  int *v3; // edi
  int result; // eax
  int v5; // ecx
  int v6; // eax
  __int64 v7; // xmm0_8
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // edi
  int v11; // [esp-4h] [ebp-50h]
  _BYTE v12[12]; // [esp+10h] [ebp-3Ch] BYREF
  __int64 v13; // [esp+1Ch] [ebp-30h]
  int v14; // [esp+24h] [ebp-28h]
  int *v15; // [esp+28h] [ebp-24h]
  _DWORD *v16; // [esp+2Ch] [ebp-20h]
  int v17; // [esp+30h] [ebp-1Ch]
  unsigned int *v18; // [esp+34h] [ebp-18h]
  int v19; // [esp+38h] [ebp-14h] BYREF
  int *v20; // [esp+3Ch] [ebp-10h]
  int v21; // [esp+48h] [ebp-4h]

  v3 = this;
  v20 = this;
  result = a2;
  v5 = *this;
  v19 = a2;
  v17 = v5;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      v18 = (unsigned int *)(result + 16);
      v6 = sub_41C450(v3, (int)v12, v5, result + 16);
      v7 = *(_QWORD *)v6;
      v8 = *(_DWORD *)(v6 + 8);
      v13 = v7;
      v14 = v8;
      if ( !(_BYTE)v8 )
      {
        if ( v3[1] == 76695844 )
          sub_403E20();
        v9 = *v3;
        v15 = v3;
        v21 = 0;
        v16 = nullptr;
        v10 = sub_4627C2(0x38u);
        v16 = v10;
        v21 = 1;
        sub_41C6D0((int)v20, (int)(v10 + 4), v18);
        *v10 = v9;
        v10[1] = v9;
        v10[2] = v9;
        *((_WORD *)v10 + 6) = 0;
        v11 = (int)v10;
        v3 = v20;
        v21 = -1;
        v16 = nullptr;
        sub_403C10(v20, (_DWORD *)v13, SHIDWORD(v13), v11);
      }
      sub_40B5E0(&v19);
      result = v19;
      if ( v19 == a3 )
        break;
      v5 = v17;
    }
  }
  return result;
}
