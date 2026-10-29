/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F370
// Address: 0x0005F370

//----- (0005F370) --------------------------------------------------------
int __cdecl sub_5F370(int *a1)
{
  _DWORD *v1; // esi
  char *v2; // eax
  int v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v10; // [esp+18h] [ebp-54h]
  char *v11; // [esp+1Ch] [ebp-50h]
  void *v12; // [esp+20h] [ebp-4Ch] BYREF
  int v13; // [esp+24h] [ebp-48h]
  int v14; // [esp+28h] [ebp-44h]
  void **v15; // [esp+38h] [ebp-34h] BYREF
  int v16; // [esp+40h] [ebp-2Ch] BYREF
  void *v17; // [esp+44h] [ebp-28h]
  int v18; // [esp+48h] [ebp-24h]
  int v19; // [esp+4Ch] [ebp-20h]
  int v20; // [esp+50h] [ebp-1Ch]
  unsigned int v21; // [esp+58h] [ebp-14h]

  v21 = __readgsdword(0x14u);
  v12 = nullptr;
  v13 = 0;
  v14 = 0;
  v1 = (_DWORD *)sub_5E1B0((int)a1, (int *)&v12);
  if ( v1 )
  {
    v2 = (char *)(a1[3] + 20 * a1[4] - 20);
    LOBYTE(v16) = 2;
    v18 = 0;
    v17 = nullptr;
    v20 = 0;
    v19 = 0;
    copy_idcv((char *)&v16, v2);
    v3 = a1[4];
    if ( v3 )
    {
      v4 = v3 - 1;
      a1[4] = v4;
      free_idcv((char *)(a1[3] + 20 * v4));
    }
    if ( (char)v16 == 5 )
    {
      sub_59680(v17, (char *)&v16);
    }
    else if ( (char)v16 == 7 && v17 )
    {
      v18 = 0;
      qfree(v17);
      v17 = nullptr;
      v19 = 0;
    }
    v11 = (char *)(a1[3] + 20 * a1[4] - 20);
    v5 = v1[4];
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = sub_538B0(a1[1], v5);
        v7 = *(_DWORD *)(v6 + 36);
        if ( v7 != -1 )
          break;
        v5 = *(_DWORD *)(v6 + 12);
        if ( !v5 )
          goto LABEL_15;
      }
      v10 = sub_5E430((int)a1, v1, v7, (int)&v12, v11, 0);
    }
    else
    {
LABEL_15:
      v15 = &v12;
      sub_68CD0((int)&v16, (int)v1, (int)&v12, (int)dword_F4D90, (int *)&v15);
      LOBYTE(v8) = 1;
      v10 = v8;
      copy_idcv((char *)(v16 + 28), v11);
    }
  }
  else
  {
    sub_5CBC0((int)a1);
    v10 = 0;
  }
  if ( v12 )
  {
    v13 = 0;
    qfree(v12);
    v12 = nullptr;
    v14 = 0;
  }
  return v10;
}
// 5F540: variable 'v8' is possibly undefined
// F4D90: using guessed type int dword_F4D90[2];
