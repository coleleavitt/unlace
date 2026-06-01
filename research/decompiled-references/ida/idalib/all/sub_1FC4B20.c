__int64 __fastcall sub_1FC4B20(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 *v16; // r12
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 result; // rax
  int *v23; // rcx
  int v24; // edx
  __int64 v25; // rsi
  _DWORD *v26; // rdx

  sub_1FC2690(a1, a2);
  sub_1FC23C0((unsigned int *)(a1 + 232));
  v4 = *(_DWORD *)(a1 + 236);
  v5 = (((*(_QWORD *)a2 >> 22) & 1) << *(_DWORD *)(a1 + 236)) | *(_DWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 236) = v4 + 1;
  *(_DWORD *)(a1 + 232) = v5;
  v6 = v5 | ((unsigned __int8)BYTE2(*(_QWORD *)a2) >> 7 << (v4 + 1));
  *(_DWORD *)(a1 + 236) = v4 + 2;
  *(_DWORD *)(a1 + 232) = v6;
  v7 = (((*(_BYTE *)(a2 + 3) >> 1) & 3) << (v4 + 2)) | v6;
  *(_DWORD *)(a1 + 236) = v4 + 4;
  *(_DWORD *)(a1 + 232) = v7;
  v8 = v7 | (((*(_QWORD *)a2 >> 27) & 1) << ((unsigned __int8)v4 + 4));
  *(_DWORD *)(a1 + 236) = v4 + 5;
  *(_DWORD *)(a1 + 232) = v8;
  if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
    v8 |= (*(_QWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x80000LL) != 0) + 32) != *(_QWORD *)(a2 + 16)) << (v4 + 5);
  *(_DWORD *)(a1 + 232) = v8;
  *(_DWORD *)(a1 + 236) = v4 + 6;
  v9 = (((*(_QWORD *)a2 >> 19) & 1) << ((unsigned __int8)v4 + 6)) | v8;
  *(_DWORD *)(a1 + 236) = v4 + 7;
  *(_DWORD *)(a1 + 232) = v9;
  v10 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 236) = v4 + 8;
  *(_DWORD *)(a1 + 232) = (((v10 >> 20) & 1) << ((unsigned __int8)v4 + 7)) | v9;
  v11 = *(_QWORD *)a2;
  v12 = *(_QWORD *)a2 >> 16;
  if ( (*(_QWORD *)a2 & 0x100000LL) != 0 )
  {
    v25 = 0;
    v26 = (_DWORD *)(a2 + 16LL * ((v12 & 8) != 0) + 8LL * ((v12 & 0x20) != 0) + 32);
    if ( *v26 )
      v25 = (unsigned int)v26[3];
    sub_9B9C90(*(_QWORD *)(a1 + 24), v25);
    v11 = *(_QWORD *)a2;
  }
  v13 = *(_QWORD *)(a2 + 16);
  v14 = *(_QWORD *)(v13 + 40) & 7LL;
  if ( (_DWORD)v14 == 7 )
  {
    v23 = (int *)(*(_QWORD *)(v13 + 40) & 0xFFFFFFFFFFFFFFF8LL);
    v24 = 3;
    if ( (unsigned int)*v23 <= 3 )
      v24 = *v23;
    v15 = v11 >> 16;
    LODWORD(v14) = v24 + 8;
    if ( (v11 & 0x100000) != 0 )
      goto LABEL_11;
  }
  else
  {
    v15 = v11 >> 16;
    if ( (v11 & 0x100000) != 0 )
      goto LABEL_11;
  }
  if ( (v15 & 8) == 0 )
  {
    if ( (v15 & 0x20) != 0 && v13 != *(_QWORD *)(a2 + 16LL * ((v15 & 8) != 0) + 32) )
    {
      v16 = (__int64 *)(a1 + 8);
      if ( (v11 & 0x80000) == 0 )
        goto LABEL_13;
      goto LABEL_12;
    }
    if ( !(_DWORD)v14 && (*(_BYTE *)(a2 + 1) & 0x38) == 0 )
    {
      *(_DWORD *)(a1 + 228) = *(_DWORD *)(*(_QWORD *)a1 + 3548LL);
      v11 = *(_QWORD *)a2;
    }
  }
LABEL_11:
  v16 = (__int64 *)(a1 + 8);
  if ( (v11 & 0x80000) != 0 )
  {
LABEL_12:
    sub_1F9A420(v16, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
    v11 = *(_QWORD *)a2;
  }
LABEL_13:
  if ( (v11 & 0x200000) != 0 )
  {
    v17 = a2 + 16LL * ((v11 & 0x80000) != 0);
    if ( *(_QWORD *)(a2 + 16) != *(_QWORD *)(v17 + 32) )
    {
      sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(v17 + 32), *(_QWORD *)(a1 + 24));
      v11 = *(_QWORD *)a2;
    }
  }
  v18 = v11 >> 16;
  if ( (v18 & 0x10) != 0 )
    sub_1FC2440(
      a1,
      a2 + 8LL * ((v18 & 0x20) != 0) + 16LL * ((v18 & 8) != 0) + 32,
      a2 + 16 * (((v18 & 8) != 0) + (unsigned __int64)((v18 & 0x10) != 0)) + 8LL * ((v18 & 0x20) != 0) + 32);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  result = sub_1F9E180((__int64)v16, (__int64 *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL), v19, v20, v21);
  *(_DWORD *)(a1 + 224) = 173;
  return result;
}
