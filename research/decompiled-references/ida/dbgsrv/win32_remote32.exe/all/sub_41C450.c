/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41C450
// Address: 0x0041C450

//----- (0041C450) --------------------------------------------------------
int __thiscall sub_41C450(int *this, int a2, int a3, int a4)
{
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  int v8; // ebx
  int result; // eax
  bool v10; // zf
  int *v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // ecx
  int v15; // [esp-4h] [ebp-20h]
  _DWORD v16[2]; // [esp+10h] [ebp-Ch] BYREF
  int v17; // [esp+18h] [ebp-4h]
  int *v18; // [esp+20h] [ebp+4h]
  int v19; // [esp+20h] [ebp+4h]

  v6 = (_DWORD *)*this;
  if ( *(_BYTE *)(a3 + 13) )
  {
    v7 = v6 + 2;
    if ( *(_BYTE *)(v6[1] + 13) || (v8 = a4, (unsigned __int8)sub_41D0A0(*v7 + 16, a4)) )
    {
      *(_DWORD *)a2 = *v7;
      *(_BYTE *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 4) = 0;
      return a2;
    }
    goto LABEL_16;
  }
  v8 = a4;
  v15 = a3 + 16;
  if ( a3 == *v6 )
  {
    if ( (unsigned __int8)sub_41D0A0(a4, v15) )
    {
      *(_DWORD *)a2 = a3;
      *(_DWORD *)(a2 + 4) = 1;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
    goto LABEL_16;
  }
  if ( (unsigned __int8)sub_41D0A0(a4, v15) )
  {
    a4 = a3;
    v18 = *sub_41D030((int **)&a4);
    if ( (unsigned __int8)sub_41D0A0((int)(v18 + 4), v8) )
    {
      v10 = *(_BYTE *)(v18[2] + 13) == 0;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
      if ( v10 )
      {
        *(_DWORD *)a2 = a3;
        *(_DWORD *)(a2 + 4) = 1;
      }
      else
      {
        *(_DWORD *)a2 = v18;
        *(_DWORD *)(a2 + 4) = 0;
      }
      return result;
    }
    goto LABEL_16;
  }
  if ( !(unsigned __int8)sub_41D0A0(a3 + 16, v8) )
  {
    *(_DWORD *)a2 = a3;
    *(_BYTE *)(a2 + 8) = 1;
    *(_DWORD *)(a2 + 4) = 0;
    return a2;
  }
  a4 = a3;
  v11 = sub_40B5E0(&a4);
  v12 = *v11;
  v19 = *v11;
  if ( *(_BYTE *)(*v11 + 13) )
  {
LABEL_21:
    v10 = *(_BYTE *)(*(_DWORD *)(a3 + 8) + 13) == 0;
    *(_BYTE *)(a2 + 8) = 0;
    result = a2;
    if ( v10 )
    {
      *(_DWORD *)a2 = v12;
      *(_DWORD *)(a2 + 4) = 1;
    }
    else
    {
      *(_DWORD *)a2 = a3;
      *(_DWORD *)(a2 + 4) = 0;
    }
    return result;
  }
  if ( (unsigned __int8)sub_41D0A0(v8, v12 + 16) )
  {
    v12 = v19;
    goto LABEL_21;
  }
LABEL_16:
  sub_41C640(this, v16, v8);
  v13 = v17;
  if ( *(_BYTE *)(v17 + 13) || (unsigned __int8)sub_41D0A0(v8, v17 + 16) )
  {
    v14 = v16[1];
    *(_DWORD *)a2 = v16[0];
    *(_DWORD *)(a2 + 4) = v14;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  else
  {
    *(_DWORD *)a2 = v13;
    *(_DWORD *)(a2 + 4) = 2;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
}
