/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420C30
// Address: 0x00420C30

//----- (00420C30) --------------------------------------------------------
char __userpurge sub_420C30@<al>(_DWORD *a1@<ecx>, int a2@<ebx>, char *a3, char *a4, int a5)
{
  int v6; // eax
  int v8; // [esp+0h] [ebp-6Ch] BYREF
  void *v9; // [esp+28h] [ebp-44h]
  int v10; // [esp+2Ch] [ebp-40h]
  int v11; // [esp+30h] [ebp-3Ch]
  int v12; // [esp+48h] [ebp-24h]
  unsigned int v13; // [esp+4Ch] [ebp-20h]
  _DWORD *v14; // [esp+50h] [ebp-1Ch]
  int v15; // [esp+54h] [ebp-18h]
  char v16; // [esp+5Bh] [ebp-11h]
  int *v17; // [esp+5Ch] [ebp-10h]
  int v18; // [esp+68h] [ebp-4h]
  int v19; // [esp+74h] [ebp+8h]

  v17 = &v8;
  v14 = a1;
  v13 = a1[7];
  v9 = nullptr;
  v10 = 0;
  v11 = 0;
  v18 = 1;
  v15 = 0;
  v16 = 0;
  LOBYTE(v12) = sub_45CBF0(1);
  LOBYTE(v18) = 2;
  v16 = sub_41D590((int)a1, a2, a3, a4, a5);
  LOBYTE(v18) = 3;
  sub_45CBF0(v12);
  v18 = 0;
  v19 = sub_45C9E0();
  while ( a1[7] > v13 )
  {
    if ( !sub_4228C0(a1) )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(508);
    }
  }
  v6 = v19;
  a1[17] = a1[14] != 0 ? a1[14] + 16 : 0;
  if ( v16 )
    v6 = 0;
  sub_45CC20(v6);
  v18 = 16;
  if ( v9 )
  {
    v10 = 0;
    sub_453A20(v9);
  }
  return v16;
}
// 420CE5: conditional instruction was optimized away because edi.4==0
// 4B70F0: using guessed type char byte_4B70F0;
