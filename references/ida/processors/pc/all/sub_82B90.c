unsigned __int64 __fastcall sub_82B90(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  char v6; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v7; // [rsp+408h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 24);
  v7 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(v2 + 24);
  if ( v3 && *v3 )
  {
    do
    {
      sub_7DAF0(a2, 0, (__int64)&unk_91AB4);
      v4 = v3[1];
      ++v3;
    }
    while ( v4 );
  }
  if ( (*(_BYTE *)(get_ash() + 328) & 8) != 0 )
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 136LL))(a2, &unk_91ABB, 0xFFFF);
  v6 = (*(_DWORD *)(get_ash() + 328) & 8) == 0 ? 46 : 112;
  get_ash();
  qsnprintf();
  sub_7DAF0(a2, 0xFFFF, (__int64)&unk_91AB4, &v6);
  if ( (*(_BYTE *)(a1 + 4437) & 0x28) != 0 )
  {
    qstrncpy();
    sub_7DAF0(a2, 0xFFFF, (__int64)&unk_91AB4, &v6);
  }
  if ( (unsigned __int8)getinf_flag() )
  {
LABEL_9:
    get_ash();
    qsnprintf();
    sub_7DAF0(a2, 0xFFFF, (__int64)&unk_91AB4, &v6);
  }
  else
  {
    switch ( getinf() & 0xF )
    {
      case 2LL:
        getinf();
        goto LABEL_9;
      case 3LL:
      case 6LL:
      case 0xALL:
      case 0xELL:
        goto LABEL_9;
      default:
        break;
    }
  }
  if ( (getinf() & 1) == 0 )
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 136LL))(a2, &unk_91AD7, 0xFFFF);
  if ( (getinf() & 0xF) == 6 )
    (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)a2 + 136LL))(a2, &unk_91AE1, 0);
  return v7 - __readfsqword(0x28u);
}
