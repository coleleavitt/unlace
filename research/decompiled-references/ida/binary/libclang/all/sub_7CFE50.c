unsigned __int64 __fastcall sub_7CFE50(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // edx
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rdi
  __int64 *v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax

  if ( *(_QWORD *)(a1 + 72) > 7u && (*(_QWORD *)(a1 + 72) & 6LL) != 2 )
  {
    if ( !(_BYTE)qword_4AD2180 && __cxa_guard_acquire(&qword_4AD2180) )
    {
      LODWORD(qword_4AD21A0[0]) = 0;
      qword_4AD21A0[1] = 0;
      qword_4AD21A0[3] = 0;
      __cxa_guard_release(&qword_4AD2180);
    }
    v6 = *(_QWORD *)(a1 + 72);
    if ( v6 <= 7 )
    {
      v7 = qword_4AD21A0;
    }
    else
    {
      v7 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      v8 = *(_QWORD *)(a1 + 72) & 6LL;
      if ( v8 == 2 )
      {
        v10 = v7[9];
        v7 = nullptr;
        if ( !v10 )
          goto LABEL_15;
        v7 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v10 & 6) != 4 || !v7 )
          goto LABEL_15;
        goto LABEL_21;
      }
      if ( v8 == 4 )
LABEL_21:
        v7 = (__int64 *)v7[1];
    }
LABEL_15:
    v9 = sub_AFFD30(v7);
    v3 = *(_DWORD *)(a1 + 56);
    v4 = HIDWORD(v9);
    return (v4 << 32) | v3;
  }
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 > 7 || (_DWORD)v2 )
  {
    v3 = *(_DWORD *)(a1 + 56);
    v4 = *(unsigned int *)(a1 + 24);
    if ( !v3 )
      v3 = *(_DWORD *)(a1 + 24);
  }
  else
  {
    v4 = *(unsigned int *)(a1 + 56);
    v3 = *(_DWORD *)(a1 + 56);
  }
  return (v4 << 32) | v3;
}

