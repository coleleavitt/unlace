/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80890B0
// Address: 0x080890B0

//----- (080890B0) --------------------------------------------------------
int __cdecl sub_80890B0(_DWORD *a1, unsigned __int8 *a2, char *a3, int a4)
{
  unsigned int v4; // esi
  int v5; // eax
  int v6; // eax
  int v8; // [esp-10h] [ebp-74h]
  int v9; // [esp-Ch] [ebp-70h]
  int v10; // [esp-8h] [ebp-6Ch]
  char v11; // [esp+10h] [ebp-54h]
  int v12; // [esp+10h] [ebp-54h]
  unsigned __int8 s; // [esp+18h] [ebp-4Ch]
  unsigned int v14; // [esp+48h] [ebp-1Ch]

  v14 = __readgsdword(0x14u);
  v4 = a1[7];
  v11 = sub_80C7BC0(1);
  s = sub_8086490((int)a1, a2, a3, a4);
  sub_80C7BC0(v11);
  v12 = sub_80C7850();
  while ( v4 < a1[7] )
  {
    if ( !(unsigned __int8)sub_808B780((int)a1) )
    {
      if ( !byte_811F8A1 )
      {
        if ( v14 == __readgsdword(0x14u) )
          sub_80CFF40(508, v8, v9, v10);
        sub_80D7AB0();
      }
      BUG();
    }
  }
  v5 = a1[14];
  if ( v5 )
    v5 += 16;
  a1[17] = v5;
  v6 = 0;
  if ( !s )
    v6 = v12;
  sub_80C7880(v6);
  if ( v14 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return s;
}
// 80891C7: variable 'v8' is possibly undefined
// 80891C7: variable 'v9' is possibly undefined
// 80891C7: variable 'v10' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
