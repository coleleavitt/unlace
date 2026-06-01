/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42EB90
// Address: 0x0042EB90

//----- (0042EB90) --------------------------------------------------------
int __thiscall sub_42EB90(char **this, const char *a2)
{
  _BYTE *v3; // ebx
  unsigned int v4; // esi
  unsigned int v5; // esi
  unsigned int v6; // eax
  char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // eax
  char *v11; // eax
  char *v12; // ecx
  _BYTE *v14; // [esp+1Ch] [ebp-24h] BYREF
  unsigned int v15; // [esp+20h] [ebp-20h]
  int v16; // [esp+24h] [ebp-1Ch]
  int v17; // [esp+28h] [ebp-18h]
  int v18; // [esp+2Ch] [ebp-14h]
  int v19; // [esp+30h] [ebp-10h]
  int v20; // [esp+3Ch] [ebp-4h]

  v3 = nullptr;
  v17 = (int)*(this + 1);
  v4 = 0;
  v14 = nullptr;
  v15 = 0;
  v19 = 0;
  v16 = 0;
  v18 = v17;
  v20 = 0;
  if ( a2 )
  {
    v5 = strlen(a2);
    v6 = v5 + 1;
    if ( v5 != -1 )
    {
      v3 = sub_453B00((int)&v14, nullptr, v5 + 1, 1u);
      v6 = v5 + 1;
      v14 = v3;
    }
    v15 = v6;
    sub_464310((unsigned int)v3, (unsigned int)a2, v5);
    v14[v5] = 0;
    v4 = v15;
    v3 = v14;
    v18 = (int)*(this + 1);
    v19 = v16;
  }
  v7 = *this;
  v20 = 1;
  if ( &v14 < (_BYTE **)v7 || (v8 = v19, &v14 >= (_BYTE **)&v7[12 * (_DWORD)*(this + 2)]) )
  {
    if ( v18 + 1 > (unsigned int)*(this + 2) )
    {
      v11 = (char *)sub_453B00((int)this, v7, v18 + 1, 0xCu);
      v3 = v14;
      v7 = v11;
      *this = v11;
    }
    v12 = &v7[12 * (_DWORD)*(this + 1)];
    *(_DWORD *)v12 = v3;
    v14 = nullptr;
    *((_DWORD *)v12 + 1) = v15;
    v15 = 0;
    *((_DWORD *)v12 + 2) = v16;
    v16 = 0;
  }
  else
  {
    v14 = nullptr;
    v15 = 0;
    v16 = 0;
    LOBYTE(v20) = 2;
    if ( v18 + 1 > (unsigned int)*(this + 2) )
    {
      v9 = (char *)sub_453B00((int)this, v7, v18 + 1, 0xCu);
      v8 = v19;
      v7 = v9;
      *this = v9;
    }
    v10 = 3 * (_DWORD)*(this + 1);
    *(_DWORD *)&v7[4 * v10] = v3;
    *(_DWORD *)&v7[4 * v10 + 4] = v4;
    *(_DWORD *)&v7[4 * v10 + 8] = v8;
  }
  ++*(this + 1);
  v20 = 6;
  if ( v14 )
  {
    v15 = 0;
    sub_453A20(v14);
  }
  return v17;
}
