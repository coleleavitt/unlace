__int64 __fastcall sub_209FDF0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r8
  __int64 v3; // rdx
  char v4; // cl
  __int64 v5; // rax
  bool v6; // cc
  unsigned int v7; // eax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx

  v2 = *(_BYTE *)(a2 - 16);
  v3 = a1;
  v4 = v2 & 2;
  if ( (v2 & 2) == 0 )
  {
    v11 = (_QWORD *)(a2 - 8LL * ((v2 >> 2) & 0xF));
    v12 = v11 - 2;
    *(_QWORD *)v3 = *(v11 - 1);
    *(_QWORD *)(v3 + 8) = *v11;
    *(_QWORD *)(v3 + 16) = v11[1];
    if ( *(_BYTE *)a2 == 16 )
    {
      *(_QWORD *)(v3 + 24) = a2;
    }
    else
    {
      v13 = sub_209E6C0(a2);
      *(_QWORD *)(v3 + 24) = v13;
    }
    *(_DWORD *)(v3 + 32) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(v3 + 36) = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(v3 + 40) = v12[4];
    LOWORD(v7) = (*(_WORD *)(a2 - 16) >> 6) & 0xF;
    if ( ((*(_WORD *)(a2 - 16) >> 6) & 0xFu) <= 8 )
      *(_QWORD *)(v3 + 48) = 0;
    else
      *(_QWORD *)(v3 + 48) = v12[8];
    v7 = (unsigned __int8)v7;
    *(_DWORD *)(v3 + 56) = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(v3 + 60) = *(_DWORD *)(a2 + 28);
    *(_DWORD *)(v3 + 64) = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(v3 + 68) = *(_DWORD *)(a2 + 36);
    v14 = a2 - 8LL * ((v2 >> 2) & 0xF) - 16;
    *(_QWORD *)(v3 + 72) = *(_QWORD *)(v14 + 40);
    if ( (unsigned __int8)v7 <= 9u )
    {
      *(_QWORD *)(v3 + 80) = 0;
      *(_QWORD *)(v3 + 88) = *(_QWORD *)(a2 - 8LL * ((v2 >> 2) & 0xF) + 32);
      *(_QWORD *)(v3 + 96) = *(_QWORD *)(a2 - 8LL * ((v2 >> 2) & 0xF) - 16 + 56);
      goto LABEL_25;
    }
    *(_QWORD *)(v3 + 80) = *(_QWORD *)(v14 + 72);
LABEL_20:
    v8 = (_QWORD *)(a2 - 8LL * ((v2 >> 2) & 0xF) - 16);
    *(_QWORD *)(v3 + 88) = v8[6];
    *(_QWORD *)(v3 + 96) = v8[7];
    if ( v7 != 10 )
    {
      *(_QWORD *)(v3 + 104) = v8[10];
      if ( v7 != 11 )
      {
        *(_QWORD *)(v3 + 112) = v8[11];
        if ( v7 != 12 )
          goto LABEL_12;
LABEL_23:
        v9 = 0;
        goto LABEL_13;
      }
LABEL_26:
      *(_QWORD *)(v3 + 112) = 0;
      v9 = 0;
      goto LABEL_13;
    }
LABEL_25:
    *(_QWORD *)(v3 + 104) = 0;
    goto LABEL_26;
  }
  *(_QWORD *)a1 = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 8LL);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 16LL);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 24LL);
  if ( *(_BYTE *)a2 == 16 )
  {
    *(_QWORD *)(a1 + 24) = a2;
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 20);
  }
  else
  {
    v5 = sub_209E6C0(a2);
    *(_QWORD *)(v3 + 24) = v5;
    *(_DWORD *)(v3 + 32) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(v3 + 36) = *(_DWORD *)(a2 + 20);
  }
  v6 = *(_DWORD *)(a2 - 24) <= 8u;
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 32LL);
  if ( v6 )
    *(_QWORD *)(v3 + 48) = 0;
  else
    *(_QWORD *)(v3 + 48) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 64LL);
  *(_DWORD *)(v3 + 56) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(v3 + 60) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(v3 + 64) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(v3 + 68) = *(_DWORD *)(a2 + 36);
  *(_QWORD *)(v3 + 72) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 40LL);
  v7 = *(_DWORD *)(a2 - 24);
  if ( v7 <= 9 )
  {
    *(_QWORD *)(v3 + 80) = 0;
    *(_QWORD *)(v3 + 88) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 48LL);
    *(_QWORD *)(v3 + 96) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 56LL);
    goto LABEL_25;
  }
  *(_QWORD *)(v3 + 80) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 72LL);
  if ( !v4 )
    goto LABEL_20;
  *(_QWORD *)(v3 + 88) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 48LL);
  *(_QWORD *)(v3 + 96) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 56LL);
  if ( v7 == 10 )
    goto LABEL_25;
  *(_QWORD *)(v3 + 104) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 80LL);
  if ( v7 == 11 )
    goto LABEL_26;
  *(_QWORD *)(v3 + 112) = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 88LL);
  if ( v7 == 12 )
    goto LABEL_23;
  v8 = *(_QWORD **)(a2 - 32);
LABEL_12:
  v9 = v8[12];
LABEL_13:
  *(_QWORD *)(v3 + 120) = v9;
  result = (unsigned __int8)BYTE1(*(_QWORD *)a2) >> 7;
  *(_BYTE *)(v3 + 128) = result;
  return result;
}
