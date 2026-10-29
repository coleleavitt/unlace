/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6494C
// Address: 0x000000000006494C

//----- (000000000006494C) ----------------------------------------------------
__int64 __fastcall sub_6494C(__int64 a1)
{
  const char *align; // x1
  size_t v3; // x2
  __int64 v4; // x20
  __int64 v5; // x8
  _BYTE *v6; // x0
  __int64 v7; // x20
  __int64 v8; // x8
  _BYTE *v9; // x0
  __int64 v10; // x20
  pthread_mutex_t *v11; // x0
  pthread_mutex_t ptr; // [xsp+0h] [xbp-40h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( *(_WORD *)(a1 + 64) )
  {
    case 3:
    case 5:
      sub_5EF88(a1, *(_QWORD *)(a1 + 72));
      break;
    case 4:
      memset(&ptr, 0, 24);
      sub_5FE3C(&ptr, a1 + 40);
      if ( *(&ptr.__align + 1) )
        align = (const char *)ptr.__align;
      else
        align = &byte_F154B;
      if ( *(&ptr.__align + 1) )
        v3 = *(&ptr.__align + 1) - 1;
      else
        v3 = 0;
      sub_5EC14(a1, align, v3);
      if ( ptr.__align )
      {
        *(&ptr.__align + 1) = 0;
        qfree((void *)ptr.__align);
        ptr.__align = 0;
        *(&ptr.__align + 2) = 0;
      }
      break;
    case 7:
      v7 = *(_QWORD *)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -46;
      v8 = *(_QWORD *)(v7 + 8);
      if ( *(_QWORD *)(v7 + 16) >= (unsigned __int64)(v8 + 1) )
      {
        v9 = *(_BYTE **)v7;
      }
      else
      {
        v9 = qvector_reserve((pthread_mutex_t *)v7, *(void **)v7, v8 + 1, 1u);
        v8 = *(_QWORD *)(v7 + 8);
        *(_QWORD *)v7 = v9;
      }
      v9[v8] = -46;
      ++*(_QWORD *)(v7 + 8);
      v11 = *(pthread_mutex_t **)(a1 + 200);
      ++*(_DWORD *)(a1 + 208);
      sub_68D00(v11, (const void *)(a1 + 88), 0x10u);
      *(_DWORD *)(a1 + 208) += 16;
      break;
    case 8:
      v4 = *(_QWORD *)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -45;
      v5 = *(_QWORD *)(v4 + 8);
      if ( *(_QWORD *)(v4 + 16) >= (unsigned __int64)(v5 + 1) )
      {
        v6 = *(_BYTE **)v4;
      }
      else
      {
        v6 = qvector_reserve((pthread_mutex_t *)v4, *(void **)v4, v5 + 1, 1u);
        v5 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)v4 = v6;
      }
      v6[v5] = -45;
      ++*(_QWORD *)(v4 + 8);
      v10 = *(_QWORD *)(a1 + 88);
      ++*(_DWORD *)(a1 + 208);
      sub_5EB14(a1, v10);
      sub_5EB14(a1, SWORD1(v10));
      sub_5EB14(a1, SWORD2(v10));
      sub_5EB14(a1, SHIWORD(v10));
      break;
    default:
      if ( !under_debugger )
        interr(275);
      __break(1u);
      sub_39134((void *)a1);
  }
  return 0;
}
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
