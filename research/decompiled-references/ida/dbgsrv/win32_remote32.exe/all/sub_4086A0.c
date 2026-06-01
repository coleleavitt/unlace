/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4086A0
// Address: 0x004086A0

//----- (004086A0) --------------------------------------------------------
void *__thiscall sub_4086A0(void *this, int a2, int *a3)
{
  void *result; // eax
  int *i; // ebx
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // ebx
  void **v8; // edi
  char *v9; // ecx
  int v10; // ebx
  int *v11; // esi
  void *v12; // eax
  void *v13; // [esp-4h] [ebp-34h]
  void *v14; // [esp-4h] [ebp-34h]
  _DWORD *v16; // [esp+14h] [ebp-1Ch]
  int v17; // [esp+18h] [ebp-18h]
  int v18; // [esp+1Ch] [ebp-14h]
  char *v19; // [esp+20h] [ebp-10h]
  int *v20; // [esp+3Ch] [ebp+Ch]

  result = this;
  for ( i = a3; !*((_BYTE *)i + 13); result = this )
  {
    sub_4086A0(a2, i[2]);
    v5 = i;
    i = (int *)*i;
    v16 = v5;
    v20 = i;
    if ( v5[5] )
    {
      v6 = v5[6];
      v17 = v6;
      if ( v6 )
      {
        v7 = 0;
        v18 = 0;
        do
        {
          v8 = (void **)(v7 + v5[5]);
          if ( *v8 )
          {
            v9 = (char *)v8[1];
            v19 = v9;
            if ( v9 )
            {
              v10 = 0;
              do
              {
                v11 = (int *)((char *)*v8 + v10);
                if ( *v11 >= -1 )
                {
                  v12 = (void *)v11[2];
                  if ( v12 )
                  {
                    v11[3] = 0;
                    sub_453A20(v12);
                    v9 = v19;
                    v11[2] = 0;
                    v11[4] = 0;
                  }
                  *v11 = -2;
                }
                v10 += 24;
                v19 = --v9;
              }
              while ( v9 );
              v7 = v18;
              v5 = v16;
            }
            v13 = *v8;
            v8[1] = nullptr;
            sub_453A20(v13);
            v6 = v17;
            *v8 = nullptr;
            v8[2] = nullptr;
          }
          v7 += 24;
          --v6;
          v18 = v7;
          v17 = v6;
        }
        while ( v6 );
        i = v20;
      }
      v14 = (void *)v5[5];
      v5[6] = 0;
      sub_453A20(v14);
      v5[5] = 0;
      v5[7] = 0;
    }
    sub_4627F2(v5);
  }
  return result;
}
