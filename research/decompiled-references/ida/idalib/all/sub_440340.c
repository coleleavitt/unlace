unsigned __int64 __fastcall sub_440340(__int64 a1, unsigned int a2, unsigned __int64 a3, char *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8; // r15
  _QWORD *v9; // rax
  size_t v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r15
  _QWORD *v13; // rax
  size_t v14; // rdx
  __int64 v15; // rax
  _BYTE *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r14
  _QWORD *v19; // rax
  size_t v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r14
  _QWORD *v23; // rax
  size_t v24; // rdx
  int v26; // edx
  char v27; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 224);
  v6 = *(_QWORD *)(a1 + 192);
  v28 = __readfsqword(0x28u);
  v8 = *(unsigned int *)(v5 + 4LL * a2);
  v9 = (_QWORD *)(v6 + 8 * v8);
  v10 = *(_QWORD *)(v6 + 8LL * (unsigned int)(v8 + 1)) - *v9;
  *(_QWORD *)(a1 + 216) += v10;
  memset((void *)(*(_QWORD *)(a1 + 144) + *v9), 0, v10);
  *(_DWORD *)(*(_QWORD *)(a1 + 168) + 4 * v8) = -1;
  v11 = *(_QWORD *)(a1 + 296);
  v12 = *(unsigned int *)(*(_QWORD *)(a1 + 328) + 4LL * a2);
  v13 = (_QWORD *)(v11 + 8 * v12);
  v14 = *(_QWORD *)(v11 + 8LL * (unsigned int)(v12 + 1)) - *v13;
  *(_QWORD *)(a1 + 320) += v14;
  memset((void *)(*(_QWORD *)(a1 + 248) + *v13), 0, v14);
  *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v12) = -1;
  sub_4352D0(a1 + 144, a2, a3, a4);
  sub_43BD80((std::string *)(a1 + 352), a3, a4);
  sub_4352D0(a1 + 248, a2, *(_QWORD *)(*(_QWORD *)(a1 + 352) - 24LL), *(_BYTE **)(a1 + 352));
  v15 = *(_QWORD *)(a1 + 352);
  if ( &_pthread_key_create )
  {
    if ( *(int *)(v15 - 8) <= 0 )
    {
      v16 = *(_BYTE **)(a1 + 352);
      goto LABEL_4;
    }
    v15 = *(_QWORD *)(a1 + 352);
  }
  else
  {
    v16 = *(_BYTE **)(a1 + 352);
    if ( *(int *)(v15 - 8) <= 0 )
    {
LABEL_4:
      if ( v16 - 24 != (_BYTE *)&std::string::_Rep::_S_empty_rep_storage )
      {
        *((_DWORD *)v16 - 2) = 0;
        *((_QWORD *)v16 - 3) = 0;
        *v16 = 0;
      }
      goto LABEL_6;
    }
  }
  if ( (_UNKNOWN *)(v15 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v26 = _InterlockedExchangeAdd((volatile signed __int32 *)(v15 - 8), 0xFFFFFFFF);
    }
    else
    {
      v26 = *(_DWORD *)(v15 - 8);
      *(_DWORD *)(v15 - 8) = v26 - 1;
    }
    if ( v26 <= 0 )
      std::string::_Rep::_M_destroy(v15 - 24, &v27);
  }
  *(_QWORD *)(a1 + 352) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
LABEL_6:
  v17 = *(_QWORD *)(a1 + 408);
  v18 = *(unsigned int *)(*(_QWORD *)(a1 + 440) + 4LL * a2);
  v19 = (_QWORD *)(v17 + 8 * v18);
  v20 = *(_QWORD *)(v17 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 440) + 4LL * a2) + 1)) - *v19;
  *(_QWORD *)(a1 + 432) += v20;
  memset((void *)(*(_QWORD *)(a1 + 360) + *v19), 0, v20);
  *(_DWORD *)(*(_QWORD *)(a1 + 384) + 4 * v18) = -1;
  v21 = *(_QWORD *)(a1 + 512);
  v22 = *(unsigned int *)(*(_QWORD *)(a1 + 544) + 4LL * a2);
  v23 = (_QWORD *)(v21 + 8 * v22);
  v24 = *(_QWORD *)(v21 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 544) + 4LL * a2) + 1)) - *v23;
  *(_QWORD *)(a1 + 536) += v24;
  memset((void *)(*(_QWORD *)(a1 + 464) + *v23), 0, v24);
  *(_DWORD *)(*(_QWORD *)(a1 + 488) + 4 * v22) = -1;
  LODWORD(v22) = *(_DWORD *)(a1 + 572);
  if ( (_DWORD)v22 != (unsigned int)getinf(36) )
    *(_BYTE *)(a1 + 568) = 0;
  return sub_43FFC0(
           a1 + 360,
           a2,
           *(_QWORD *)(a1 + 144)
         + *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 224) + 4LL * a2)));
}
