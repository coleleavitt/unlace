unsigned __int64 __fastcall sub_105A0(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  char *v2; // rdx
  char v3; // bl
  __int64 v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  size_t v7; // rcx
  unsigned __int64 result; // rax
  int v9; // ecx
  unsigned __int64 v10; // [rsp+8h] [rbp-60h]
  char v11; // [rsp+1Fh] [rbp-49h] BYREF
  _QWORD v12[9]; // [rsp+20h] [rbp-48h] BYREF

  v12[1] = __readfsqword(0x28u);
  v1 = a1[9];
  v2 = (char *)(&std::string::_Rep::_S_empty_rep_storage + 3);
  v12[0] = &std::string::_Rep::_S_empty_rep_storage + 3;
  if ( v1 >= a1[8] || (v3 = *(_BYTE *)(a1[7] + v1), ((v3 - 83) & 0xFD) != 0) )
  {
    v7 = std::string::_Rep::_S_empty_rep_storage;
    result = 0;
    v2 = (char *)(&std::string::_Rep::_S_empty_rep_storage + 3);
    if ( !std::string::_Rep::_S_empty_rep_storage )
      return result;
  }
  else
  {
    do
    {
      v4 = *((_QWORD *)v2 - 3);
      if ( (unsigned __int64)(v4 + 1) > *((_QWORD *)v2 - 2) || *((int *)v2 - 2) > 0 )
        std::string::reserve((std::string *)v12, v4 + 1);
      *(_BYTE *)(v12[0] + *(_QWORD *)(v12[0] - 24LL)) = v3;
      v2 = (char *)v12[0];
      if ( (_QWORD *)(v12[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        *(_DWORD *)(v12[0] - 8LL) = 0;
        *((_QWORD *)v2 - 3) = v4 + 1;
        v2[v4 + 1] = 0;
        v2 = (char *)v12[0];
      }
      v5 = a1[9];
      v6 = a1[8];
      if ( v5 >= v6 )
        break;
      a1[9] = v5 + 1;
      if ( v6 <= v5 + 1 )
        break;
      v3 = *(_BYTE *)(a1[7] + v5 + 1);
    }
    while ( ((v3 - 83) & 0xFD) == 0 );
    v7 = *((_QWORD *)v2 - 3);
    result = 0;
    if ( !v7 )
      goto LABEL_14;
  }
  result = sub_BAC0(a1, 315, v2, v7);
  v2 = (char *)v12[0];
LABEL_14:
  if ( v2 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v9 = _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 2, 0xFFFFFFFF);
    }
    else
    {
      v9 = *((_DWORD *)v2 - 2);
      *((_DWORD *)v2 - 2) = v9 - 1;
    }
    if ( v9 <= 0 )
    {
      v10 = result;
      std::string::_Rep::_M_destroy(v2 - 24, &v11);
      return v10;
    }
  }
  return result;
}
