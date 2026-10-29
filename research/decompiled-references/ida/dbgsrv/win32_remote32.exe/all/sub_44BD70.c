/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44BD70
// Address: 0x0044BD70

//----- (0044BD70) --------------------------------------------------------
int __thiscall sub_44BD70(_BYTE *this, int *a2)
{
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // esi
  const char *v9; // eax
  _DWORD v11[4]; // [esp+14h] [ebp-10h] BYREF

  v3 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 8))(this);
  if ( !v3 || *(this + 4) )
    return -1;
  sub_44DD30(a2);
  v4 = *a2;
  v5 = a2[1];
  sub_44D490(v11, v3, 0, v5);
  v11[3] = 0;
  if ( v5 <= 0 )
  {
LABEL_6:
    v7 = 0;
  }
  else
  {
    while ( 1 )
    {
      v6 = sub_44D750(v3, v4, v5);
      if ( v6 < 0 )
        break;
      v5 -= v6;
      v4 += v6;
      sub_44D500(v11);
      if ( v5 <= 0 )
        goto LABEL_6;
    }
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 20))(this);
    *(this + 4) = 1;
    if ( sub_44D520(v3) != -15059582 )
    {
      v9 = (const char *)sub_44D800(v3);
      sub_401590((int)(this + 8), v9);
    }
    v7 = -1;
  }
  sub_44D4B0(v11);
  return v7;
}
