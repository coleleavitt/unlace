/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4714B8
// Address: 0x004714B8

//----- (004714B8) --------------------------------------------------------
char __usercall sub_4714B8@<al>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  _DWORD *v2; // esi
  _BYTE *v3; // edx
  unsigned int v4; // eax
  __int64 v6; // rax
  int v7; // ecx
  int v8; // [esp+4h] [ebp-4h] BYREF

  v2 = a1;
  v3 = (_BYTE *)a1[2];
  LOBYTE(a1) = *v3;
  if ( (unsigned __int8)(*v3 - 48) > 9u )
  {
    if ( (unsigned __int8)((_BYTE)a1 - 97) > 0x19u )
    {
      if ( (unsigned __int8)((_BYTE)a1 - 65) > 0x19u )
        v4 = -1;
      else
        v4 = (char)a1 - 55;
    }
    else
    {
      v4 = (char)a1 - 87;
    }
  }
  else
  {
    v4 = (char)a1 - 48;
  }
  if ( v4 > 9 )
    return 1;
  v8 = 0;
  LODWORD(v6) = sub_46BE50(a1, 0, a2, (int)v3, &v8, 10);
  if ( !v6 || (v7 = v8, v8 == v2[2]) )
  {
    v2[4] = 0;
    *((_WORD *)v2 + 10) = 0;
    *((_BYTE *)v2 + 22) = 0;
    v2[6] = 0;
    v2[7] = 0;
    v2[8] = 0;
    *((_BYTE *)v2 + 36) = 0;
    v2[10] = 0;
    v2[3] = 22;
    return 0;
  }
  else
  {
    *((_QWORD *)v2 + 3) = v6;
    v2[2] = v7;
    return 1;
  }
}
// 471518: variable 'v6' is possibly undefined
