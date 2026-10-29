__int64 __fastcall sub_614360(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v3; // r12d
  __int64 v4; // r8
  signed __int64 v5; // rax
  int v6; // eax
  _BYTE *v7; // rdx
  unsigned __int64 v8; // rsi
  int v9; // ebp
  __int64 result; // rax
  char v11; // cl
  _BYTE *v12; // rax
  char v13; // cl
  char v14; // cl
  char v15; // cl
  char v16; // cl
  char v17; // dl
  __int16 v18; // ax
  _BYTE *v19; // rsi
  char v20; // al
  _BYTE *v21; // [rsp+0h] [rbp-448h] BYREF
  _BYTE *v22; // [rsp+8h] [rbp-440h]
  __int64 v23; // [rsp+10h] [rbp-438h]
  _BYTE v24[1032]; // [rsp+20h] [rbp-428h] BYREF
  unsigned __int64 v25; // [rsp+428h] [rbp-20h]

  v3 = a3;
  v25 = __readfsqword(0x28u);
  dto_init(a1, a3);
  v21 = (_BYTE *)a2;
  if ( a2 )
    LODWORD(v22) = *(_DWORD *)(a2 + 1332);
  else
    LODWORD(v22) = -1;
  v23 = a2 + 552;
  v5 = sub_613F40(
         (__int64)&v21,
         (__int64)&qword_2B0AD60[8 * (unsigned __int64)(unsigned int)(75 - v3)],
         v24,
         0x400u,
         v4);
  v21 = v24;
  v22 = &v24[v5];
  v6 = unpack_dd(&v21);
  v7 = v21;
  v8 = (unsigned __int64)v22;
  v9 = v6;
  result = 0;
  if ( v21 >= v22 )
    return result;
  v11 = *v21;
  v12 = ++v21;
  *(_BYTE *)(a1 + 4) = v11 != 0;
  if ( (unsigned __int64)(v7 + 1) >= v8 )
  {
    *(_WORD *)(a1 + 5) = 0;
    goto LABEL_11;
  }
  v13 = v7[1];
  v12 = v7 + 2;
  v21 = v7 + 2;
  *(_BYTE *)(a1 + 5) = v13;
  if ( (unsigned __int64)(v7 + 2) >= v8 )
  {
    *(_BYTE *)(a1 + 6) = 0;
    goto LABEL_11;
  }
  v14 = v7[2];
  v12 = v7 + 3;
  v21 = v7 + 3;
  *(_BYTE *)(a1 + 6) = v14 != 0;
  if ( (unsigned __int64)(v7 + 3) >= v8 )
  {
LABEL_11:
    *(_BYTE *)(a1 + 7) = 0;
    goto LABEL_12;
  }
  v15 = v7[3];
  v12 = v7 + 4;
  v21 = v7 + 4;
  *(_BYTE *)(a1 + 7) = v15;
  if ( (unsigned __int64)(v7 + 4) < v8 )
  {
    v16 = v7[4];
    v12 = v7 + 5;
    v21 = v7 + 5;
    *(_BYTE *)(a1 + 8) = v16;
    if ( (unsigned __int64)(v7 + 5) >= v8 )
    {
      v17 = 0;
    }
    else
    {
      v12 = v7 + 6;
      v17 = v7[5];
    }
    goto LABEL_13;
  }
LABEL_12:
  *(_BYTE *)(a1 + 8) = 0;
  v17 = 0;
LABEL_13:
  *(_BYTE *)(a1 + 9) = v17;
  v21 = v12;
  v18 = unpack_dw(&v21, v8);
  v19 = v22;
  *(_WORD *)(a1 + 10) = v18;
  *(_WORD *)(a1 + 12) = unpack_dw(&v21, v19);
  if ( (unsigned __int64)v9 > 0xE )
  {
    v20 = 0;
    if ( v21 < v22 )
      v20 = *v21;
    *(_BYTE *)(a1 + 14) = v20;
  }
  return 1;
}

