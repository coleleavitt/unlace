/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44BB20
// Address: 0x0044BB20

//----- (0044BB20) --------------------------------------------------------
int __thiscall sub_44BB20(_BYTE *this, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // esi
  const char *v10; // eax
  _DWORD v12[4]; // [esp+14h] [ebp-10h] BYREF
  int v13; // [esp+30h] [ebp+Ch]

  v4 = a3;
  v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 8))(this);
  sub_44D490(v12, v5, 1, a3);
  v12[3] = 0;
  if ( !a3 )
  {
LABEL_7:
    v8 = 0;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v6 = -1;
    if ( sub_44D590(v5, a4) <= 0 )
      break;
    v7 = sub_44D5A0(v5, a2, v4);
    v6 = v7;
    if ( v7 <= 0 )
      break;
    a2 += v7;
    v4 -= v7;
    sub_44D500(v12);
LABEL_6:
    if ( !v4 )
      goto LABEL_7;
  }
  v13 = sub_44D520(v5);
  if ( v13 == -21015 )
    goto LABEL_6;
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 20))(this);
  if ( v6 )
  {
    *(this + 4) = 1;
    if ( v13 != -15059582 )
    {
      v10 = (const char *)sub_44D800(v5);
      sub_401590((int)(this + 8), v10);
    }
  }
  v8 = -1;
LABEL_8:
  sub_44D4B0(v12);
  return v8;
}
