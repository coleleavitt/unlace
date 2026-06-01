/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F3F4
// Address: 0x000000000045F3F4

//----- (000000000045F3F4) ----------------------------------------------------
void __noreturn sub_45F3F4()
{
  __int64 v0; // x19
  __int64 v1; // x22
  __int64 v2; // x23
  __int64 v3; // x24
  void *v4; // x1
  void *v5; // x0
  void *v6; // x0
  char *v7; // x0
  __int64 v8; // x25
  __int64 i; // x21
  char *v10; // x2
  void *v11; // x1
  void *v12; // x0
  __int64 v13; // x26
  __int64 j; // x23
  char *v15; // x0
  char *v16; // x21
  void *v17; // x0
  void *v18; // x0
  void *v19; // x0
  __int64 v20; // x25
  __int64 k; // x23
  char *v22; // x0
  char *v23; // x21
  void *v24; // x0
  void *v25; // x0
  void *v26; // x0

  v4 = *(void **)(v0 + 832);
  if ( v4 )
  {
    *(_QWORD *)(v0 + 840) = 0;
    j__free(v4);
  }
  v5 = *(void **)(v0 + 808);
  if ( v5 )
  {
    *(_QWORD *)(v0 + 816) = 0;
    j__free(v5);
  }
  sub_45BF20(v2);
  sub_40D3C8(v0 + 608, *(_QWORD **)(v0 + 624));
  v6 = *(void **)(v0 + 584);
  if ( v6 )
  {
    *(_QWORD *)(v0 + 592) = 0;
    j__free(v6);
  }
  v7 = *(char **)(v0 + 560);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v0 + 568);
    for ( i = 0; v8 != i; ++i )
    {
      v10 = &v7[56 * i];
      v11 = *((void **)v10 + 1);
      if ( v11 )
      {
        *((_QWORD *)v10 + 2) = 0;
        j__free(v11);
        v7 = *(char **)(v0 + 560);
      }
    }
    *(_QWORD *)(v0 + 568) = 0;
    j__free(v7);
  }
  sub_40D380(v0 + 512, *(_QWORD **)(v0 + 528));
  v12 = *(void **)(v0 + 488);
  if ( v12 )
  {
    *(_QWORD *)(v0 + 496) = 0;
    j__free(v12);
  }
  if ( *(_QWORD *)(v0 + 456) )
  {
    v13 = *(_QWORD *)(v0 + 464);
    for ( j = 0; ; ++j )
    {
      v15 = *(char **)(v0 + 456);
      if ( v13 == j )
        break;
      v16 = &v15[80 * j];
      v17 = *((void **)v16 + 5);
      if ( v17 )
      {
        *((_QWORD *)v16 + 6) = 0;
        j__free(v17);
      }
      v18 = *((void **)v16 + 2);
      if ( v18 )
      {
        *((_QWORD *)v16 + 3) = 0;
        j__free(v18);
      }
    }
    *(_QWORD *)(v0 + 464) = 0;
    j__free(v15);
  }
  v19 = *(void **)(v0 + 432);
  if ( v19 )
  {
    *(_QWORD *)(v0 + 440) = 0;
    j__free(v19);
  }
  sub_40D318(v0 + 384, *(_QWORD **)(v0 + 400));
  sub_40D230(v0 + 336, *(_QWORD **)(v0 + 352));
  if ( *(_QWORD *)(v0 + 312) )
  {
    v20 = *(_QWORD *)(v0 + 320);
    for ( k = 0; ; ++k )
    {
      v22 = *(char **)(v0 + 312);
      if ( v20 == k )
        break;
      v23 = &v22[64 * k];
      v24 = *((void **)v23 + 5);
      if ( v24 )
      {
        *((_QWORD *)v23 + 6) = 0;
        j__free(v24);
      }
      v25 = *((void **)v23 + 1);
      if ( v25 )
      {
        *((_QWORD *)v23 + 2) = 0;
        j__free(v25);
      }
    }
    *(_QWORD *)(v0 + 320) = 0;
    j__free(v22);
  }
  v26 = *(void **)(v0 + 280);
  if ( v26 )
  {
    *(_QWORD *)(v0 + 288) = 0;
    j__free(v26);
  }
  sub_482ED0(v3);
  sub_45E880(v1);
  JUMPOUT(0x45F378);
}
// 45F590: control flows out of bounds to 45F378
// 45F3F4: variable 'v0' is possibly undefined
// 45F420: variable 'v2' is possibly undefined
// 45F584: variable 'v3' is possibly undefined
// 45F58C: variable 'v1' is possibly undefined
