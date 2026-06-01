unsigned __int64 __fastcall sub_E0E450(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  unsigned int v4; // edx
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // rax

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( !v1 )
    goto LABEL_8;
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) == 0 )
  {
    if ( v2 )
    {
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 16LL))(v2);
      v4 = v7;
      v5 = HIDWORD(v7);
      return (v5 << 32) | v4;
    }
LABEL_8:
    v5 = 0;
    v4 = 0;
    return (v5 << 32) | v4;
  }
  if ( !v2 )
    goto LABEL_8;
  v3 = sub_EC8B80(v2);
  v4 = v3;
  v5 = HIDWORD(v3);
  return (v5 << 32) | v4;
}

