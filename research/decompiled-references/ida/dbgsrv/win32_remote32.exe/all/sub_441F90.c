/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441F90
// Address: 0x00441F90

//----- (00441F90) --------------------------------------------------------
char __userpurge sub_441F90@<al>(int *a1@<ecx>, __m128i a2@<xmm0>, int a3, int a4, unsigned int *a5)
{
  void *v6; // edx
  const char *v7; // eax
  const char *v8; // ecx
  int v9; // eax
  int v11; // ebx
  int v12; // eax
  bool v13; // bl
  int v14; // [esp+10h] [ebp-34h] BYREF
  int v15; // [esp+18h] [ebp-2Ch]
  void *v16; // [esp+1Ch] [ebp-28h] BYREF
  int v17; // [esp+20h] [ebp-24h]
  int v18; // [esp+24h] [ebp-20h]
  LPVOID v19; // [esp+28h] [ebp-1Ch] BYREF
  int v20; // [esp+2Ch] [ebp-18h]
  int v21; // [esp+30h] [ebp-14h]
  int *v22; // [esp+34h] [ebp-10h]
  int v23; // [esp+40h] [ebp-4h]

  v22 = a1;
  v19 = nullptr;
  v20 = 0;
  v21 = 0;
  v23 = 0;
  sub_448580(a4, a2, &v19);
  sub_41C640(a1, &v14, (int)&v19);
  v6 = v19;
  if ( !*(_BYTE *)(v15 + 13) )
  {
    v7 = MultiByteStr;
    if ( *(_DWORD *)(v15 + 20) )
      v7 = *(const char **)(v15 + 16);
    v8 = MultiByteStr;
    if ( v20 )
      v8 = (const char *)v19;
    v9 = strcmp(v8, v7);
    if ( v9 )
      v9 = v9 < 0 ? -1 : 1;
    if ( v9 >= 0 && v15 != *v22 && a3 )
    {
      sub_403330(a3, (unsigned int *)(v15 + 28));
      v23 = 1;
      if ( v19 )
      {
        v20 = 0;
        sub_453A20(v19);
      }
      return 1;
    }
    v6 = v19;
  }
  v23 = 2;
  if ( v6 )
  {
    v20 = 0;
    sub_453A20(v6);
    v19 = nullptr;
    v21 = 0;
  }
  v16 = nullptr;
  v17 = 0;
  v18 = 0;
  v23 = 4;
  if ( a5 )
    sub_403330((int)&v16, a5);
  if ( *(_BYTE *)(a4 + 17) )
  {
    if ( a3 )
      sub_403330(a3, (unsigned int *)a4);
    v11 = 0;
  }
  else
  {
    v12 = *(_DWORD *)(a4 + 12);
    if ( v12 != 11 && v12 != 10 && v12 != 18 )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(30222);
    }
    v11 = sub_442170(a2, a3, a4, (int)&v16);
  }
  v13 = v11 >= 0;
  v23 = 5;
  if ( v16 )
  {
    v17 = 0;
    sub_453A20(v16);
  }
  return v13;
}
// 4B70F0: using guessed type char byte_4B70F0;
