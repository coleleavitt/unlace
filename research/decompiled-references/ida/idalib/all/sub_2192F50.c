__int64 __fastcall sub_2192F50(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // [rsp+8h] [rbp-90h] BYREF
  __int64 v22; // [rsp+10h] [rbp-88h] BYREF
  char v23; // [rsp+18h] [rbp-80h]
  _BYTE v24[32]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE *v25; // [rsp+40h] [rbp-58h] BYREF
  __int16 v26; // [rsp+60h] [rbp-38h]

  sub_216F820((__int64)&v22, a1 + 7, (unsigned int)a2, a4, a5, a6);
  if ( (v23 & 1) != 0 )
  {
    v18 = v22;
    v22 = 0;
    v21 = v18;
    v19 = sub_2220DB0(&v21);
    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v20 + 32LL))(v24, v20, v19);
    v26 = 260;
    v25 = v24;
    sub_2221AD0(&v25, 1);
  }
  v6 = v22;
  sub_216F910(&v22);
  v11 = *(_DWORD *)(v6 + 4);
  if ( v11 != 1073741844 )
  {
    if ( v11 == 9 )
    {
      v17 = sub_2192A80((__int64)a1, a2, v7, v8, v9, v10);
      v13 = a1[7];
      v14 = *(_QWORD *)(v17 + 8);
      if ( *(_WORD *)(v13 + 18) != 8 )
        goto LABEL_5;
    }
    else
    {
      v12 = sub_2192D10((__int64)a1, a2, v7, v8, v9, v10);
      v13 = a1[7];
      v14 = *(_QWORD *)(v12 + 8);
      if ( *(_WORD *)(v13 + 18) != 8 )
      {
LABEL_5:
        v15 = HIDWORD(v14);
        goto LABEL_6;
      }
    }
    if ( *(_BYTE *)(v13 + 4) == 2 && *(_BYTE *)(v13 + 5) == 1 )
      v14 = (v14 >> 24) & 0xFF0000 | (v14 >> 8) & 0xFF000000 | HIBYTE(v14) | (v14 << 32) | (v14 >> 40) & 0xFF00;
    goto LABEL_5;
  }
  v15 = *(unsigned int *)(*(_QWORD *)(a1[18] + 16LL * (unsigned int)a2) + 24 * HIDWORD(a2) + 8);
LABEL_6:
  if ( (_DWORD)v15 )
    return *(unsigned int *)(v6 + 40) | (v15 << 32);
  else
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
}
