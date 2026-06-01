/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409CE0
// Address: 0x00409CE0

//----- (00409CE0) --------------------------------------------------------
void __thiscall sub_409CE0(void **this)
{
  void **v1; // esi
  int v2; // eax
  int v3; // ebx
  void **v4; // edi
  char *v5; // ecx
  int v6; // ebx
  int *v7; // esi
  void *v8; // eax
  void *v9; // [esp-4h] [ebp-30h]
  void *v10; // [esp-4h] [ebp-30h]
  int v12; // [esp+14h] [ebp-18h]
  int v13; // [esp+18h] [ebp-14h]
  char *v14; // [esp+1Ch] [ebp-10h]

  v1 = this;
  if ( *this )
  {
    v2 = (int)*(this + 1);
    v12 = v2;
    if ( v2 )
    {
      v3 = 0;
      v13 = 0;
      do
      {
        v4 = (void **)((char *)*v1 + v3);
        if ( *v4 )
        {
          v5 = (char *)v4[1];
          v14 = v5;
          if ( v5 )
          {
            v6 = 0;
            do
            {
              v7 = (int *)((char *)*v4 + v6);
              if ( *v7 >= -1 )
              {
                v8 = (void *)v7[2];
                if ( v8 )
                {
                  v7[3] = 0;
                  sub_453A20(v8);
                  v5 = v14;
                  v7[2] = 0;
                  v7[4] = 0;
                }
                *v7 = -2;
              }
              v6 += 24;
              v14 = --v5;
            }
            while ( v5 );
            v3 = v13;
            v1 = this;
          }
          v9 = *v4;
          v4[1] = nullptr;
          sub_453A20(v9);
          v2 = v12;
          *v4 = nullptr;
          v4[2] = nullptr;
        }
        v3 += 24;
        --v2;
        v13 = v3;
        v12 = v2;
      }
      while ( v2 );
    }
    v10 = *v1;
    v1[1] = nullptr;
    sub_453A20(v10);
    *v1 = nullptr;
    v1[2] = nullptr;
  }
}
