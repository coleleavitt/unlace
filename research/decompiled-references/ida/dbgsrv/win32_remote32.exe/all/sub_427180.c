/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427180
// Address: 0x00427180

//----- (00427180) --------------------------------------------------------
int __thiscall sub_427180(LPVOID *this, const char *a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // eax

  v3 = sub_427E40(this, a2);
  if ( v3 == -1 )
  {
    v4 = sub_4627C2(0x48u);
    v5 = (int)v4;
    if ( v4 )
    {
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v4[4] = 0;
      v4[5] = 0;
      v4[6] = 0;
      v4[8] = 0;
      v4[9] = 0;
      v4[10] = 0;
      v4[11] = 0;
      v4[12] = 0;
      v4[13] = 0;
      v4[14] = 0;
      v4[15] = 0;
      v4[16] = 0;
    }
    else
    {
      v5 = 0;
    }
    if ( a2 && (v6 = strlen(a2)) != 0 )
    {
      v7 = v6 + 1;
      if ( v6 + 1 > *(_DWORD *)(v5 + 8) )
      {
        *(_DWORD *)v5 = sub_453B00(v5, *(void **)v5, v6 + 1, 1u);
        v7 = v6 + 1;
      }
      *(_DWORD *)(v5 + 4) = v7;
      sub_464310(*(_DWORD *)v5, (unsigned int)a2, v6);
      *(_BYTE *)(v6 + *(_DWORD *)v5) = 0;
    }
    else
    {
      *(_DWORD *)(v5 + 4) = 0;
    }
    v3 = (int)*(this + 1);
    if ( v3 + 1 > (unsigned int)*(this + 2) )
      *this = sub_453B00((int)this, *this, v3 + 1, 4u);
    *((_DWORD *)*this + (_DWORD)*(this + 1)) = v5;
    *(this + 1) = (char *)*(this + 1) + 1;
  }
  else
  {
    v5 = *((_DWORD *)*this + v3);
    if ( *(_DWORD *)(v5 + 68) )
      return -1;
    sub_427770(*((unsigned int **)*this + v3));
  }
  *(_DWORD *)(v5 + 68) = -1;
  *(_DWORD *)(v5 + 12) = 0;
  return v3;
}
