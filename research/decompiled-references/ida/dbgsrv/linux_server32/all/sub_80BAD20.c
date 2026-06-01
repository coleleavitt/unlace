/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BAD20
// Address: 0x080BAD20

//----- (080BAD20) --------------------------------------------------------
pthread_mutex_t *__cdecl sub_80BAD20(_DWORD *a1, char a2)
{
  int v2; // edx
  _DWORD *v3; // edi
  pthread_mutex_t *result; // eax
  _DWORD *v5; // edi
  int v6; // [esp-14h] [ebp-34h]
  int v7; // [esp-10h] [ebp-30h]
  int v8; // [esp-Ch] [ebp-2Ch]

  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  *a1 = dword_811CDDC;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  a1[12] = sub_80D0330();
  a1[13] = v2;
  a1[14] = 0x1FFFF;
  if ( a2 )
  {
    v3 = (_DWORD *)operator new(0x20u);
    v3[2] = 0;
    v3[3] = 0;
    v3[4] = v3 + 2;
    v3[5] = v3 + 2;
    v3[6] = 0;
    *v3 = &off_811C624;
    result = sub_80D1320();
    v3[7] = result;
    if ( !result )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(1540, v6, v7, v8);
      JUMPOUT(0x805182A);
    }
    a1[11] = v3;
  }
  else
  {
    v5 = (_DWORD *)operator new(0x1Cu);
    *v5 = &off_811C608;
    v5[2] = 0;
    v5[3] = 0;
    v5[4] = v5 + 2;
    v5[5] = v5 + 2;
    v5[6] = 0;
    a1[11] = v5;
    return (pthread_mutex_t *)(v5 + 2);
  }
  return result;
}
// 80BAE47: control flows out of bounds to 805182A
// 80BAD9C: variable 'v2' is possibly undefined
// 80BAE58: variable 'v6' is possibly undefined
// 80BAE58: variable 'v7' is possibly undefined
// 80BAE58: variable 'v8' is possibly undefined
// 811C608: using guessed type int (__cdecl *off_811C608)(int);
// 811C624: using guessed type int (__cdecl *off_811C624)(int);
// 811CDDC: using guessed type int dword_811CDDC[2];
// 811F8A1: using guessed type char byte_811F8A1;
