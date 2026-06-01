/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412210
// Address: 0x00412210

//----- (00412210) --------------------------------------------------------
bool __userpurge sub_412210@<al>(
        int a1@<ecx>,
        __m128i a2@<xmm0>,
        _BYTE *a3,
        int a4,
        int (__stdcall **a5)(_DWORD, __m128i *, __m128i *),
        int (__stdcall **a6)(_DWORD, __m128i *, __m128i *),
        int (__stdcall **a7)(_DWORD, __m128i *, __m128i *))
{
  char *v8; // eax
  __m128i *v9; // eax
  bool v10; // bl
  int v11; // eax
  int (__stdcall **v13[6])(_DWORD, __m128i *, __m128i *); // [esp+10h] [ebp-24h] BYREF
  int v14; // [esp+30h] [ebp-4h]
  int (__stdcall **v15)(int, int); // [esp+34h] [ebp+0h] BYREF
  void *v16; // [esp+38h] [ebp+4h]
  int v17; // [esp+3Ch] [ebp+8h]
  int v18; // [esp+40h] [ebp+Ch]
  unsigned __int8 v19[1024]; // [esp+278h] [ebp+244h] BYREF

  v8 = sub_456590(a3);
  sub_45ACB0((unsigned int)v19, v8, 1024);
  v9 = sub_465040((unsigned int)v19, 0x2Eu);
  if ( v9 )
    v9->m128i_i8[0] = 0;
  sub_45ADA0(v19);
  v15 = &off_48A4F0;
  v16 = nullptr;
  v17 = 0;
  v18 = 0;
  v14 = 0;
  if ( sub_415880((int)&v15, a2, a4, 0, 1) )
  {
    v13[0] = (int (__stdcall **)(_DWORD, __m128i *, __m128i *))&off_48A744;
    v13[1] = (int (__stdcall **)(_DWORD, __m128i *, __m128i *))(a1 + 8);
    v13[2] = (int (__stdcall **)(_DWORD, __m128i *, __m128i *))v19;
    v13[3] = a5;
    v13[4] = a6;
    v13[5] = a7;
    LOBYTE(v14) = 2;
    v11 = sub_414A70((int)&v15, a2, a4, v13);
    v13[0] = (int (__stdcall **)(_DWORD, __m128i *, __m128i *))&off_48A4E4;
    v10 = v11 >= 0;
  }
  else
  {
    v10 = 0;
  }
  v15 = &off_48A4F0;
  v14 = 3;
  if ( v16 )
  {
    v17 = 0;
    sub_453A20(v16);
  }
  return v10;
}
// 48A4E4: using guessed type int (__stdcall *off_48A4E4)(int, int, int);
// 48A4F0: using guessed type int (__stdcall *off_48A4F0)(int, int);
// 48A744: using guessed type int (__stdcall *off_48A744)(int, int, int);
