/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48A60
// Address: 0x00048A60

//----- (00048A60) --------------------------------------------------------
void __fastcall __noreturn sub_48A60(_DWORD *a1, int a2, char *a3, unsigned int a4)
{
  int v4; // r6
  char *v7; // r4
  void *v8; // r0
  void *v9; // r0
  unsigned __int8 *v10; // r0
  unsigned int v11; // r4
  int v12; // r6
  unsigned int i; // r7
  int v14; // r0
  int v15; // r1
  _DWORD v17[3]; // [sp+18h] [bp-40h] BYREF
  char v18[8]; // [sp+24h] [bp-34h] BYREF
  unsigned int v19; // [sp+2Ch] [bp-2Ch]
  int v20; // [sp+30h] [bp-28h]
  int v21; // [sp+34h] [bp-24h]
  int v22; // [sp+38h] [bp-20h]
  _BYTE v23[24]; // [sp+40h] [bp-18h] BYREF

  v4 = a4;
  v18[0] = 2;
  v19 = a4;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  memset(v17, 0, sizeof(v17));
  sub_47544((int)v17, a4);
  if ( v4 >= 1 )
  {
    v7 = (char *)v17[0];
    do
    {
      qmemcpy(v23, v7, sizeof(v23));
      qmemcpy(v7, a3, 0x18u);
      qmemcpy(a3, v23, 0x18u);
      a3 += 24;
      v7 += 24;
      --v4;
    }
    while ( v4 );
  }
  v8 = (void *)a1[6];
  if ( v8 )
  {
    a1[7] = 0;
    qfree(v8);
    a1[8] = 0;
    a1[6] = 0;
  }
  v9 = (void *)a1[9];
  if ( v9 )
  {
    a1[10] = 0;
    qfree(v9);
    a1[11] = 0;
    a1[9] = 0;
  }
  v10 = (unsigned __int8 *)a1[3];
  if ( v10 )
  {
    v11 = a1[4];
    if ( v11 )
    {
      v12 = 0;
      for ( i = 1; ; ++i )
      {
        free_idcv(&v10[v12]);
        if ( i >= v11 )
          break;
        v12 += 24;
        v10 = (unsigned __int8 *)a1[3];
      }
      v10 = (unsigned __int8 *)a1[3];
    }
    a1[4] = 0;
    qfree(v10);
    a1[5] = 0;
    a1[3] = 0;
  }
  v14 = a1[1];
  v15 = *(_DWORD *)(v14 + 68) - 1;
  *(_DWORD *)(v14 + 68) = v15;
  if ( !v15 && off_DD618 )
    off_DD618();
  *a1 = 0;
  (*(void (__fastcall **)(_DWORD, char *))(a2 + 4))(v17[0], v18);
  if ( !under_debugger )
    interr(291);
  __debugbreak();
}
// DD618: using guessed type int (*off_DD618)(void);
// E0550: using guessed type char under_debugger;
