/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427310
// Address: 0x00427310

//----- (00427310) --------------------------------------------------------
int __thiscall sub_427310(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  unsigned int v4; // eax
  int v5; // edi
  _BYTE *v6; // eax
  unsigned int v7; // ebp
  int v8; // eax
  int *v9; // ebx
  _BYTE *v10; // eax
  _BYTE *v11; // eax
  _BYTE *v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // edi
  __int16 v18; // bx
  int result; // eax
  char v20; // [esp+Fh] [ebp-29h] BYREF
  unsigned int v21; // [esp+10h] [ebp-28h]
  _DWORD *v22; // [esp+14h] [ebp-24h]
  int v23; // [esp+18h] [ebp-20h] BYREF
  char v24[3]; // [esp+1Dh] [ebp-1Bh] BYREF
  _BYTE v25[20]; // [esp+20h] [ebp-18h] BYREF
  int v26; // [esp+34h] [ebp-4h] BYREF

  v2 = a2;
  v22 = a2;
  *(this + 3) = *(this + 1);
  v4 = a2[1];
  if ( v4 )
  {
    v5 = 0;
    v21 = 0;
    v6 = sub_4540B0(&v23, (unsigned int)v24, v4);
    sub_401600((int)this, (unsigned int)&v23, v6 - (_BYTE *)&v23);
    v7 = 0;
    if ( a2[1] )
    {
      v8 = 0;
      v23 = 0;
      do
      {
        v9 = (int *)(v8 + *v2);
        v10 = sub_4540B0(v25, (unsigned int)&v26, *v9 - v5);
        v11 = sub_4540B0(v10, (unsigned int)&v26, v9[1] - v21);
        v12 = sub_4540B0(v11, (unsigned int)&v26, v9[2]);
        v13 = sub_4540B0(v12, (unsigned int)&v26, v9[3]) - v25;
        v21 = v13;
        if ( v13 )
        {
          v14 = *(this + 1);
          v20 = 0;
          v15 = v14 + v13;
          if ( v14 + v13 >= v14 )
          {
            if ( v14 + v13 > v14 )
            {
              sub_402900((int)this, v15, &v20);
              v13 = v21;
            }
          }
          else
          {
            *(this + 1) = v15;
          }
          sub_464310(v14 + *this, (unsigned int)v25, v13);
        }
        v16 = v9[1];
        ++v7;
        v5 = *v9;
        v2 = v22;
        v21 = v16;
        v8 = v23 + 16;
        v23 += 16;
      }
      while ( v7 < v22[1] );
    }
  }
  v17 = *(this + 1);
  v18 = *((_WORD *)this + 2) - *((_WORD *)this + 6);
  v20 = 0;
  if ( v17 + 2 >= v17 )
    sub_402900((int)this, v17 + 2, &v20);
  else
    *(this + 1) = v17 + 2;
  result = *this;
  *(_WORD *)(v17 + *this) = v18;
  return result;
}
