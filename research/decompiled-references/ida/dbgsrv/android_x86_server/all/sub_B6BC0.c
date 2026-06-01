/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B6BC0
// Address: 0x000B6BC0

//----- (000B6BC0) --------------------------------------------------------
unsigned int __cdecl sub_B6BC0(int a1, int *a2, int a3, int a4)
{
  int v4; // eax
  char v5; // cl
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // esi
  unsigned int v10; // ecx
  unsigned int v11; // esi
  bool v12; // cf
  char **v13; // [esp+Ch] [ebp-40h]
  unsigned int v14[2]; // [esp+10h] [ebp-3Ch] BYREF
  unsigned int v15; // [esp+18h] [ebp-34h] BYREF
  int v16; // [esp+1Ch] [ebp-30h]
  int v17; // [esp+20h] [ebp-2Ch]
  int v18; // [esp+24h] [ebp-28h]
  char v19; // [esp+28h] [ebp-24h]
  __int64 v20; // [esp+2Ch] [ebp-20h]
  int v21; // [esp+34h] [ebp-18h]
  unsigned int v22; // [esp+38h] [ebp-14h]

  v22 = __readgsdword(0x14u);
  if ( a4 )
  {
    v13 = (char **)sub_9B2D0(a4);
    v4 = *a2;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = v4;
    if ( v4 == -1 )
      v5 = 0;
    else
      v5 = must_journal();
    v19 = v5;
    v6 = a2[2] + a2[1];
    v14[0] = a2[2];
    v14[1] = v6;
    sub_B6DC0(&v15, v14);
    if ( !a3 )
    {
      if ( 12 * v16 )
      {
        v10 = v15 + 12 * v16 - 12;
        if ( v10 > v15 )
        {
          v11 = v15 + 12;
          do
          {
            v21 = *(_DWORD *)(v11 - 4);
            v20 = *(_QWORD *)(v11 - 12);
            *(_BYTE *)(v11 - 4) = *(_BYTE *)(v10 + 8);
            *(_QWORD *)(v11 - 12) = *(_QWORD *)v10;
            *(_BYTE *)(v10 + 8) = v21;
            *(_QWORD *)v10 = v20;
            v10 -= 12;
            v12 = v11 < v10;
            v11 += 12;
          }
          while ( v12 );
        }
      }
    }
    v7 = v15;
    v8 = 12 * v16;
    if ( 12 * v16 )
    {
      do
      {
        if ( *(unsigned __int8 *)(v7 + 8) == a3 )
          rangeset_t_sub(v13, (unsigned int *)v7);
        else
          rangeset_t_add(v13, (_DWORD *)v7);
        v7 += 12;
        v8 -= 12;
      }
      while ( v8 );
      v7 = v15;
    }
    if ( v7 )
    {
      v16 = 0;
      qfree((void *)v7);
      v15 = 0;
      v17 = 0;
    }
  }
  return __readgsdword(0x14u);
}
