unsigned __int64 __fastcall sub_42C5A0(__int64 a1, unsigned int a2, unsigned __int64 a3, char *a4)
{
  __int64 v5; // rdx
  __int64 v7; // r15
  _QWORD *v8; // rax
  size_t v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r15
  _QWORD *v12; // rax
  size_t v13; // rdx
  __int64 v14; // rax
  _BYTE *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r14
  _QWORD *v18; // rax
  size_t v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r14
  _QWORD *v22; // rax
  size_t v23; // rdx
  int v25; // edx

  v5 = *(_QWORD *)(a1 + 192);
  v7 = *(unsigned int *)(*(_QWORD *)(a1 + 224) + 4LL * a2);
  v8 = (_QWORD *)(v5 + 8 * v7);
  v9 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v7 + 1)) - *v8;
  *(_QWORD *)(a1 + 216) += v9;
  memset((void *)(*(_QWORD *)(a1 + 144) + *v8), 0, v9);
  *(_DWORD *)(*(_QWORD *)(a1 + 168) + 4 * v7) = -1;
  v10 = *(_QWORD *)(a1 + 296);
  v11 = *(unsigned int *)(*(_QWORD *)(a1 + 328) + 4LL * a2);
  v12 = (_QWORD *)(v10 + 8 * v11);
  v13 = *(_QWORD *)(v10 + 8LL * (unsigned int)(v11 + 1)) - *v12;
  *(_QWORD *)(a1 + 320) += v13;
  memset((void *)(*(_QWORD *)(a1 + 248) + *v12), 0, v13);
  *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v11) = -1;
  sub_421400(a1 + 144, a2, a3, a4);
  sub_427E80((std::string *)(a1 + 352), a3, a4);
  sub_421400(a1 + 248, a2, *(_QWORD *)(*(_QWORD *)(a1 + 352) - 24LL), *(_BYTE **)(a1 + 352));
  v14 = *(_QWORD *)(a1 + 352);
  if ( &_pthread_key_create )
  {
    if ( *(int *)(v14 - 8) <= 0 )
    {
      v15 = *(_BYTE **)(a1 + 352);
      goto LABEL_4;
    }
    v14 = *(_QWORD *)(a1 + 352);
  }
  else
  {
    v15 = *(_BYTE **)(a1 + 352);
    if ( *(int *)(v14 - 8) <= 0 )
    {
LABEL_4:
      if ( v15 - 24 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
      {
        *((_DWORD *)v15 - 2) = 0;
        *((_QWORD *)v15 - 3) = 0;
        *v15 = 0;
      }
      goto LABEL_6;
    }
  }
  if ( (_UNKNOWN *)(v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v25 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 - 8), 0xFFFFFFFF);
    }
    else
    {
      v25 = *(_DWORD *)(v14 - 8);
      *(_DWORD *)(v14 - 8) = v25 - 1;
    }
    if ( v25 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  *(_QWORD *)(a1 + 352) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
LABEL_6:
  v16 = *(_QWORD *)(a1 + 408);
  v17 = *(unsigned int *)(*(_QWORD *)(a1 + 440) + 4LL * a2);
  v18 = (_QWORD *)(v16 + 8 * v17);
  v19 = *(_QWORD *)(v16 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 440) + 4LL * a2) + 1)) - *v18;
  *(_QWORD *)(a1 + 432) += v19;
  memset((void *)(*(_QWORD *)(a1 + 360) + *v18), 0, v19);
  *(_DWORD *)(*(_QWORD *)(a1 + 384) + 4 * v17) = -1;
  v20 = *(_QWORD *)(a1 + 512);
  v21 = *(unsigned int *)(*(_QWORD *)(a1 + 544) + 4LL * a2);
  v22 = (_QWORD *)(v20 + 8 * v21);
  v23 = *(_QWORD *)(v20 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 544) + 4LL * a2) + 1)) - *v22;
  *(_QWORD *)(a1 + 536) += v23;
  memset((void *)(*(_QWORD *)(a1 + 464) + *v22), 0, v23);
  *(_DWORD *)(*(_QWORD *)(a1 + 488) + 4 * v21) = -1;
  LODWORD(v21) = *(_DWORD *)(a1 + 572);
  if ( (_DWORD)v21 != (unsigned int)getinf(36) )
    *(_BYTE *)(a1 + 568) = 0;
  return sub_42C220(
           a1 + 360,
           a2,
           *(_QWORD *)(a1 + 144)
         + *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 224) + 4LL * a2)));
}

