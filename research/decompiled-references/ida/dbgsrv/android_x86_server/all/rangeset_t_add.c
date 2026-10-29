/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_add
// Address: 0x000B7590

//----- (000B7590) --------------------------------------------------------
int __cdecl rangeset_t_add(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  char v3; // al
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  int v7; // esi
  void *v9; // [esp+10h] [ebp-2Ch] BYREF
  int v10; // [esp+14h] [ebp-28h]
  int v11; // [esp+18h] [ebp-24h]
  int v12; // [esp+1Ch] [ebp-20h]
  char v13; // [esp+20h] [ebp-1Ch]
  unsigned int v14; // [esp+28h] [ebp-14h]

  v14 = __readgsdword(0x14u);
  if ( !a1 || *a2 >= a2[1] )
    return 0;
  v2 = a1[4];
  v9 = nullptr;
  v10 = 0;
  v11 = 0;
  v12 = v2;
  if ( v2 == -1 )
    v3 = 0;
  else
    v3 = must_journal();
  v13 = v3;
  LOBYTE(v5) = sub_B7130(a1, a2, (int)&v9);
  v4 = v5;
  if ( (_BYTE)v5 )
  {
    v6 = v5;
    sub_B76D0((int)&v9);
    v4 = v6;
  }
  if ( v9 )
  {
    v7 = v4;
    v10 = 0;
    qfree(v9);
    v9 = nullptr;
    v11 = 0;
    return v7;
  }
  return v4;
}
// B760C: variable 'v5' is possibly undefined
