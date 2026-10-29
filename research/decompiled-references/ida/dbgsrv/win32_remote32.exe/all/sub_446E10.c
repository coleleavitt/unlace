/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_446E10
// Address: 0x00446E10

//----- (00446E10) --------------------------------------------------------
void __thiscall sub_446E10(unsigned int *this, unsigned int a2)
{
  unsigned int v3; // ebx
  int v4; // edx
  char *v5; // eax
  _DWORD *v6; // eax
  _DWORD v7[64]; // [esp+10h] [ebp-10Ch] BYREF
  int v8; // [esp+118h] [ebp-4h]
  __m128i v9; // [esp+11Ch] [ebp+0h] BYREF
  void *v10; // [esp+130h] [ebp+14h]
  int v11; // [esp+134h] [ebp+18h]
  int v12; // [esp+138h] [ebp+1Ch]
  int v13; // [esp+13Ch] [ebp+20h]
  int v14; // [esp+140h] [ebp+24h]
  int v15; // [esp+144h] [ebp+28h]
  int v16; // [esp+148h] [ebp+2Ch]
  int v17; // [esp+14Ch] [ebp+30h]
  int v18; // [esp+150h] [ebp+34h]
  char v19; // [esp+156h] [ebp+3Ah] BYREF

  v3 = *(this + 1);
  if ( a2 != v3 )
  {
    sub_464890(&v9, 0, 0x100u);
    memset((char *)v9.m128i_i64 + 4, 0, 12);
    v10 = nullptr;
    v11 = 0;
    v12 = 0;
    v13 = -1;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v4 = 8;
    v14 = -1;
    v15 = -1;
    v5 = &v19;
    do
    {
      *(_DWORD *)(v5 - 2) = 0;
      v5 += 24;
      *(_DWORD *)(v5 - 22) = 0;
      *(_DWORD *)(v5 - 18) = 0;
      *(_DWORD *)(v5 - 14) = 0;
      *(_DWORD *)(v5 - 10) = 0;
      *(_DWORD *)(v5 - 6) = 0;
      --v4;
    }
    while ( v4 );
    v8 = 2;
    if ( a2 >= v3 )
    {
      if ( a2 > v3 )
      {
        if ( (unsigned int)&v9 < *this || (unsigned int)&v9 >= *this + (*(this + 2) << 8) )
        {
          sub_447220(this, a2, (int)&v9);
        }
        else
        {
          v6 = sub_4406C0(v7, &v9);
          LOBYTE(v8) = 3;
          sub_447220(this, a2, (int)v6);
          sub_40AD70(v7);
        }
      }
    }
    else
    {
      sub_446FC0(this, a2);
    }
    v8 = 4;
    if ( v10 )
    {
      v11 = 0;
      sub_453A20(v10);
      v10 = nullptr;
      v12 = 0;
    }
    v8 = 5;
    if ( v9.m128i_i32[1] )
    {
      v9.m128i_i32[2] = 0;
      sub_453A20((void *)v9.m128i_i32[1]);
    }
  }
}
