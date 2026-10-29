/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D680
// Address: 0x0043D680

//----- (0043D680) --------------------------------------------------------
char *__thiscall sub_43D680(_DWORD *this)
{
  _DWORD *v1; // ebx
  _DWORD *v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // eax
  char *v5; // eax
  bool v6; // sf
  int v7; // ecx
  _DWORD *v8; // edi
  char *v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  int *v14; // esi
  void *v15; // eax
  int v16; // ecx
  _DWORD *v17; // eax
  char *result; // eax
  void *v19; // [esp-4h] [ebp-38h]
  int v20; // [esp+10h] [ebp-24h]
  char *v21; // [esp+14h] [ebp-20h]
  int v23; // [esp+1Ch] [ebp-18h]
  char *v24; // [esp+20h] [ebp-14h]
  int v25; // [esp+24h] [ebp-10h]

  v1 = this;
  v2 = this + 1;
  v3 = *(this + 2);
  v4 = *(this + 1) + 1;
  if ( v4 > v3 )
  {
    v5 = (char *)sub_453B00((int)this, nullptr, v4, 0x18u);
    v20 = v1[2];
    v6 = *v2 - 1 < 0;
    v7 = *v2 - 1;
    v1[2] = v3;
    v8 = (_DWORD *)*v1;
    v21 = v5;
    v23 = v7;
    if ( !v6 )
    {
      v9 = v5 + 8;
      v24 = v5 + 8;
      do
      {
        *((_DWORD *)v9 - 2) = *v8;
        v10 = v8[1];
        *v8 = 0;
        *((_DWORD *)v9 - 1) = v10;
        v11 = v8[2];
        v8[1] = 0;
        *(_DWORD *)v9 = v11;
        v8[2] = 0;
        *((_DWORD *)v9 + 1) = v8[3];
        *((_DWORD *)v9 + 2) = v8[4];
        v9[12] = *((_BYTE *)v8 + 20);
        if ( *v8 )
        {
          v12 = v8[1];
          v25 = v12;
          if ( v12 )
          {
            v13 = 0;
            do
            {
              v14 = (int *)(v13 + *v8);
              if ( *v14 >= -1 )
              {
                v15 = (void *)v14[2];
                if ( v15 )
                {
                  v14[3] = 0;
                  sub_453A20(v15);
                  v12 = v25;
                  v14[2] = 0;
                  v14[4] = 0;
                }
                *v14 = -2;
              }
              v13 += 24;
              v25 = --v12;
            }
            while ( v12 );
            v9 = v24;
          }
          v19 = (void *)*v8;
          v8[1] = 0;
          sub_453A20(v19);
          v7 = v23;
          *v8 = 0;
          v8[2] = 0;
        }
        v9 += 24;
        v8 += 6;
        v24 = v9;
        v23 = --v7;
      }
      while ( v7 >= 0 );
      v1 = this;
      v2 = this + 1;
    }
    sub_453A20((void *)*v1);
    *v1 = v21;
    v1[2] = v20;
  }
  v16 = 3 * *v2;
  v17 = (_DWORD *)*v1;
  v17[2 * v16] = 0;
  v17[2 * v16 + 1] = 0;
  v17[2 * v16 + 2] = 0;
  result = (char *)&v17[2 * v16];
  *((_DWORD *)result + 3) = -1;
  *((_DWORD *)result + 4) = -1;
  result[20] = 0;
  ++*v2;
  return result;
}
