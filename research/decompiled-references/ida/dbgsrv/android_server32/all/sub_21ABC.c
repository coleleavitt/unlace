/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_21ABC
// Address: 0x00021ABC

//----- (00021ABC) --------------------------------------------------------
int __fastcall sub_21ABC(int a1)
{
  int v1; // r5
  _DWORD *v2; // r6
  const void **v3; // r4
  int v4; // r0
  unsigned int v5; // r0
  int v6; // r2
  char *v7; // r1
  size_t v8; // r6
  int v9; // r4
  void *v10; // r1
  int v11; // r7
  int v12; // r4
  char *v13; // r6
  char *v14; // r2
  int v16; // r4
  char *v17; // r2
  int v18; // r7
  char *v19; // [sp+28h] [bp-102Ch]
  int *v20; // [sp+2Ch] [bp-1028h]
  _DWORD *v21; // [sp+30h] [bp-1024h]
  void *ptr; // [sp+44h] [bp-1010h] BYREF
  int v24; // [sp+48h] [bp-100Ch]
  unsigned int v25; // [sp+4Ch] [bp-1008h]
  void *v26[1025]; // [sp+50h] [bp-1004h] BYREF

  v20 = (int *)(a1 + 1028);
  v21 = (_DWORD *)(a1 + 1032);
  v1 = 0;
  if ( !*(_DWORD *)(a1 + 1032) )
    goto LABEL_45;
  v2 = (_DWORD *)(a1 + 1068);
  v3 = (const void **)(a1 + 1064);
  v4 = *(_DWORD *)(a1 + 1068);
  if ( (unsigned int)(v4 - 1) < 3 || !v4 )
    goto LABEL_45;
  sub_266B8(v26, *v3, 2u);
  v5 = *v2 - 1;
  if ( !*v2 )
    v5 = 0;
  v6 = v5;
  if ( v5 >= 2 )
    v6 = 2;
  if ( *v2 )
    v7 = (char *)*v3;
  else
    v7 = &byte_B3CBE;
  sub_266B8(&ptr, &v7[v6], v5 - v6);
  v8 = _strlen_chk(".debug", 7);
  v9 = v24 - 1;
  if ( !v24 )
    v9 = 0;
  v10 = ptr;
  if ( v25 < v9 + v8 + 1 )
  {
    v10 = qvector_reserve((int)&ptr, ptr, v9 + v8 + 1, 1u);
    ptr = v10;
  }
  v24 = v9 + v8 + 1;
  v1 = 0;
  *((_BYTE *)v10 + v9 + v8) = 0;
  memmove((char *)ptr + v9, ".debug", v8);
  v11 = 1;
  if ( 12 * *v21 )
  {
    v12 = *v20;
    while ( 1 )
    {
      v13 = &byte_B3CBE;
      if ( *(_DWORD *)(v12 + 4) )
        v13 = *(char **)v12;
      qmakepath((char *)(a1 + 4), 1024, v13);
      v11 = 0;
      v1 = (**(int (__fastcall ***)(int, _DWORD))a1)(a1, 0);
      sub_26718(a1, (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n");
      v12 += 12;
      if ( v1 )
        break;
      v1 = 0;
      if ( v12 == *v20 + 12 * *v21 )
      {
        v11 = 1;
        break;
      }
    }
  }
  if ( ptr )
  {
    v24 = 0;
    qfree(ptr);
    v25 = 0;
    ptr = nullptr;
  }
  if ( v26[0] )
  {
    v26[1] = nullptr;
    qfree(v26[0]);
    v26[2] = nullptr;
    v26[0] = nullptr;
  }
  if ( v11 )
  {
LABEL_45:
    if ( *(_DWORD *)(a1 + 1056) >= 2u )
    {
      v14 = *(_DWORD *)(a1 + 1044) ? *(char **)(a1 + 1040) : &byte_B3CBE;
      if ( qdirname((char *)v26, 0x1000u, v14) )
      {
        v19 = (char *)(a1 + 4);
        qmakepath((char *)(a1 + 4), 1024, (char *)v26);
        v1 = (**(int (__fastcall ***)(int, int))a1)(a1, 1);
        sub_26718(a1, (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n");
        if ( !v1 )
        {
          qmakepath(v19, 1024, (char *)v26);
          v1 = (**(int (__fastcall ***)(int, int))a1)(a1, 1);
          sub_26718(a1, (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n");
          if ( !v1 )
          {
            v1 = 0;
            if ( 12 * *v21 )
            {
              v16 = *v20;
              while ( 1 )
              {
                v17 = &byte_B3CBE;
                if ( *(_DWORD *)(v16 + 4) )
                  v17 = *(char **)v16;
                v1 = 0;
                qmakepath(v19, 1024, v17);
                v18 = (**(int (__fastcall ***)(int, int))a1)(a1, 1);
                sub_26718(a1, (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n");
                v16 += 12;
                if ( v18 )
                  break;
                if ( v16 == *v20 + 12 * *v21 )
                  return v1;
              }
              return v18;
            }
          }
        }
      }
    }
  }
  return v1;
}
// 21B04: conditional instruction was optimized away because r0.4>=4u
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// B3CBE: using guessed type char byte_B3CBE;
