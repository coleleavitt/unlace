void __fastcall sub_8219E0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rbx
  int v10; // r13d
  int v11; // r13d
  __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned __int64 v19; // rdi
  unsigned int v20; // eax
  _QWORD v21[9]; // [rsp+0h] [rbp-48h] BYREF

  v21[0] = a2;
  v21[1] = a3;
  if ( !a2 )
    return;
  v4 = a2;
  v5 = a2 & 3;
  if ( (a2 & 3) == 0 )
  {
    v6 = a2 & 0xFFFFFFFFFFFFFFFCLL;
    v7 = a2 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)((a2 & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7F) != 0x29 )
      goto LABEL_19;
    v8 = (unsigned __int8)(*(_WORD *)(v6 + 98) >> 4);
    if ( (_DWORD)v8 == 255 )
      v8 = (unsigned int)sub_77D6D0(v6);
    v9 = *(_QWORD *)(a1 + 32);
    if ( !v9 )
      goto LABEL_19;
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 56);
      if ( v10 == (unsigned int)sub_69F3D0((__int64)v21) )
      {
        v11 = *(_DWORD *)(v9 + 60);
        if ( v11 == (unsigned int)sub_69F3F0((__int64)v21) )
        {
          v12 = *(_QWORD *)(v9 + 24);
          if ( v12 )
          {
            if ( (unsigned int)v8 < (unsigned int)sub_77F620(v12) )
              break;
          }
        }
      }
      v9 = *(_QWORD *)(v9 + 16);
      if ( !v9 )
        goto LABEL_19;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 120LL) + 8 * v8);
    if ( v7 )
    {
LABEL_19:
      sub_A2DD70(a1, *(unsigned int *)(v7 + 24), 105);
      return;
    }
    v4 = v21[0];
    if ( !v21[0] )
      return;
    v5 = v21[0] & 3;
  }
  if ( v5 == 1 )
  {
    v19 = v4 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v19 )
    {
      v20 = sub_8124E0(v19);
      sub_A2DD70(a1, v20, 2285);
    }
    return;
  }
  if ( v5 != 3 )
    return;
  v13 = v4 >> 3;
  if ( !(_DWORD)v13 )
    return;
  v14 = *(_QWORD *)(a1 + 912);
  if ( !v14 )
    return;
  v15 = v13 - 1;
  v16 = a1 + 904;
  while ( *(_DWORD *)(v14 + 32) - 1 >= v15 )
  {
    v17 = *(_QWORD *)(v14 + 16);
    if ( !v17 )
      goto LABEL_29;
    v16 = v14;
LABEL_24:
    v14 = v17;
  }
  v17 = *(_QWORD *)(v14 + 24);
  if ( v17 )
    goto LABEL_24;
  v14 = v16;
LABEL_29:
  if ( v14 != a1 + 904 && v15 >= *(_DWORD *)(v14 + 32) - 1 )
  {
    v18 = sub_8124E0(*(_QWORD *)(v14 + 96));
    sub_A2DD70(a1, v18, 2206);
  }
}

