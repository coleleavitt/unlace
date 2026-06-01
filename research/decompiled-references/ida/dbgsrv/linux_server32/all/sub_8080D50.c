/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8080D50
// Address: 0x08080D50

//----- (08080D50) --------------------------------------------------------
int __cdecl sub_8080D50(int a1, unsigned int a2)
{
  pthread_mutex_t *v2; // edi
  int v4; // [esp-18h] [ebp-34h]
  int v5; // [esp-14h] [ebp-30h]
  int v6; // [esp-10h] [ebp-2Ch]
  int v7; // [esp+0h] [ebp-1Ch]

  v2 = (pthread_mutex_t *)dword_811E6F8;
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  if ( a2 >= *(_DWORD *)(a1 + 40) )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(284, v4, v5, v6);
    JUMPOUT(0x804DCB4);
  }
  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 36) + 4 * a2);
  sub_80D1600(v2);
  return v7;
}
// 8080DAF: control flows out of bounds to 804DCB4
// 8080DBD: variable 'v4' is possibly undefined
// 8080DBD: variable 'v5' is possibly undefined
// 8080DBD: variable 'v6' is possibly undefined
// 811E6F8: using guessed type int dword_811E6F8;
// 811F8A1: using guessed type char byte_811F8A1;
