void __fastcall sub_1F57140(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 v5; // al
  int v6; // ecx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 *v13; // rax
  bool v14; // zf
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-20h]

  sub_1F56BA0((__int64)a1, a2);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  *(_BYTE *)(v2 + 29) = *(_BYTE *)(v2 + 29) & 0xFB | (4 * (a1[11] & 1 | ((*(_BYTE *)(v2 + 29) & 4) != 0)));
  *((_BYTE *)a1 + 88) = 0;
  v5 = *(_BYTE *)(a2 + 28) & 0x7F;
  v6 = v5;
  if ( (unsigned int)v5 - 34 <= 0x11 )
  {
    v7 = *(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
    {
      v7 = *(_QWORD *)(v7 + 32);
      if ( !v7 )
        goto LABEL_10;
    }
    else if ( !v7 )
    {
      goto LABEL_10;
    }
    sub_1F19320(a1[2], *(_QWORD *)v7, (_DWORD *)(v7 + 8));
    v5 = *(_BYTE *)(a2 + 28) & 0x7F;
    v6 = v5;
  }
  if ( (unsigned int)(v6 - 58) <= 9 )
  {
    v8 = sub_1F0CF20((_QWORD *)*a1, a1[7]);
    v12 = 0;
    v13 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
    if ( v13 )
      v12 = *v13;
    v14 = a1[9] == 0;
    *(_QWORD *)(a2 + 48) = v12;
    if ( !v14 )
      *(_QWORD *)(a2 + 120) = sub_1EDB980((_QWORD *)*a1, a1[9], v12, v9, v10, v11) & 0xFFFFFFFFFFFFFFFBLL;
    return;
  }
LABEL_10:
  if ( v5 == 20 )
  {
    v15 = sub_1F0CF20((_QWORD *)*a1, a1[7]);
    v16 = 0;
    v17 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
    if ( v17 )
      v16 = *v17;
    *(_QWORD *)(a2 + 104) = v16;
  }
  else if ( (unsigned int)(v6 - 34) > 5 )
  {
    if ( (unsigned int)(v6 - 40) > 6 )
    {
      if ( (unsigned int)(v6 - 49) <= 2 && (*(_BYTE *)(a2 + 68) & 0xC) != 0xC && (*(_BYTE *)(a2 + 68) & 0xC) != 0 )
      {
        v22 = a1[2];
        v23 = *(unsigned int *)(v22 + 24);
        *(_DWORD *)(v22 + 24) = v23 + 1;
        if ( *(_QWORD *)(*(_QWORD *)(v22 + 32) + 8 * v23) )
        {
          v25 = 0;
          v24 = *(_QWORD *)(a1[3] + 432) + 8LL * *(_QWORD *)(a1[3] + 2720) - *(unsigned int *)(a1[3] + 2736);
          if ( v24 )
            v25 = (2 * v24) | 1;
          sub_B78150(a2, v25);
        }
      }
    }
    else
    {
      sub_1F4DBC0(a1, a2);
    }
  }
  else
  {
    v18 = a1[2];
    v19 = *(unsigned int *)(v18 + 24);
    v20 = (unsigned int)(v19 + 1);
    *(_DWORD *)(v18 + 24) = v20;
    v21 = *(_QWORD *)(v18 + 32);
    if ( *(_QWORD *)(v21 + 8 * v19) )
      sub_1F3A880(a1, a2, v21, v20, v3, v4);
  }
}
