unsigned __int64 __fastcall sub_7809B0(__int64 a1)
{
  int v2; // r13d
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rdi
  __int64 (*v8)(void); // rax
  __int64 v9; // rdi
  __int64 (*v10)(void); // rax
  unsigned __int64 v11; // rbx

  v2 = sub_77F620(a1);
  v3 = *(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)v3;
  if ( *(_BYTE *)(*(_QWORD *)v3 + 16LL) != 26
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 || (v4 = sub_B0D320(v4)) == 0)
    || (*(_BYTE *)(v4 + 23) & 0x10) == 0 )
  {
    if ( !v2 )
      return 0;
    v5 = 0;
LABEL_10:
    v7 = **(_QWORD **)(a1 + 120);
    v8 = *(__int64 (**)(void))(*(_QWORD *)v7 + 16LL);
    if ( (char *)v8 == (char *)sub_77BF30 )
      v6 = sub_77BF30(v7);
    else
      v6 = v8();
    if ( !(_DWORD)v5 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(v2 - 1));
      v10 = *(__int64 (**)(void))(*(_QWORD *)v9 + 16LL);
      if ( (char *)v10 == (char *)sub_77BF30 )
        v11 = sub_77BF30(v9);
      else
        v11 = v10();
      v5 = HIDWORD(v11);
    }
    return (v5 << 32) | v6;
  }
  v5 = *(unsigned int *)(v4 + 8LL * (unsigned __int16)(*(_DWORD *)(v4 + 20) >> 6) + 48);
  if ( v2 )
    goto LABEL_10;
  if ( (_DWORD)v5 )
  {
    v6 = *(_DWORD *)(v4 + 8LL * (unsigned __int16)(*(_DWORD *)(v4 + 20) >> 6) + 48);
    return (v5 << 32) | v6;
  }
  return 0;
}

