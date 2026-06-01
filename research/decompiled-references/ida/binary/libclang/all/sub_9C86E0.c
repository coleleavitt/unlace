_BOOL8 __fastcall sub_9C86E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  _BOOL8 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int8 **v9; // rax
  int v10; // edx
  __int64 *v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx

  v3 = *(_QWORD *)(a1 + 200);
  v4 = *(_QWORD *)(v3 + 32);
  if ( !v4 )
    goto LABEL_5;
  v5 = *(_QWORD *)(v4 + 8);
  result = ((v5 >> 2) & 1) == 0;
  if ( ((v5 >> 2) & 1) != 0 )
    goto LABEL_5;
  v7 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v7 || (*(_BYTE *)(v7 + 28) & 0x7F) != 0x24 )
    goto LABEL_5;
  v10 = *(_DWORD *)(v3 + 88);
  if ( v10 == 1 )
  {
    v11 = *(__int64 **)(v3 + 64);
  }
  else
  {
    if ( (unsigned int)(v10 - 2) <= 1 )
      JUMPOUT(0x536C67);
    v11 = *(__int64 **)(*(_QWORD *)(v3 + 64) + 32LL);
  }
  v12 = *v11;
  v13 = *v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v12 & 2) != 0 )
    v13 = 0;
  if ( *(_QWORD *)(a1 + 216) != v13 )
  {
LABEL_5:
    v8 = sub_A180F0(v3, a2);
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
    {
      v9 = (unsigned __int8 **)sub_A2E130(a1, v8, 2256, 0);
      if ( v9 )
        sub_9B5660(v9, *(_QWORD *)(v8 + 8));
    }
    else
    {
      sub_A2E130(a1, v8, 110, 0);
    }
    return 0;
  }
  return result;
}

