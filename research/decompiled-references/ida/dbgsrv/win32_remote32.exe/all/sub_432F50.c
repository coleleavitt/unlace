/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432F50
// Address: 0x00432F50

//----- (00432F50) --------------------------------------------------------
int __userpurge sub_432F50@<eax>(int *this@<ecx>, void **ebx0@<ebx>, int a2, char a3)
{
  int v5; // ecx
  char v6; // al
  int v7; // ecx
  int result; // eax
  _BYTE *v9; // ecx
  char v10[8]; // [esp+8h] [ebp-40h] BYREF
  __int64 v11; // [esp+10h] [ebp-38h]
  char v12[8]; // [esp+18h] [ebp-30h] BYREF
  __int64 v13; // [esp+20h] [ebp-28h]
  _BYTE v14[8]; // [esp+28h] [ebp-20h] BYREF
  __int64 v15; // [esp+30h] [ebp-18h]
  _BYTE v16[8]; // [esp+38h] [ebp-10h] BYREF
  __int64 v17; // [esp+40h] [ebp-8h]

  v10[0] = 1;
  v11 = 0;
  sub_432460(this, (__m128i)0LL, ebx0, (int)v10, a3);
  v5 = *(this + 66);
  if ( *(_WORD *)(v5 + 12) == 31868 )
  {
    do
    {
      v12[0] = 1;
      v13 = 0;
      sub_432460(this, (__m128i)0LL, ebx0, (int)v12, 1);
      v11 = v11 || v13;
      v5 = *(this + 66);
      v6 = 0;
      v10[0] = 0;
    }
    while ( *(_WORD *)(v5 + 12) == 31868 );
  }
  else
  {
    v6 = v10[0];
  }
  if ( *(_WORD *)(v5 + 12) == 63 )
  {
    v14[0] = 1;
    v15 = 0;
    sub_432F50(this, (int)v14, 1);
    if ( *(_WORD *)(*(this + 66) + 12) != 58 )
      sub_432F40(this);
    v16[0] = 1;
    v17 = 0;
    sub_432F50(this, (int)v16, 1);
    v9 = v14;
    if ( !v11 )
      v9 = v16;
    *(_BYTE *)a2 = *v9;
    result = *((_DWORD *)v9 + 2);
    *(_DWORD *)(a2 + 12) = *((_DWORD *)v9 + 3);
    *(_DWORD *)(a2 + 8) = result;
  }
  else
  {
    v7 = HIDWORD(v11);
    *(_BYTE *)a2 = v6;
    result = v11;
    *(_DWORD *)(a2 + 12) = v7;
    *(_DWORD *)(a2 + 8) = result;
  }
  return result;
}
