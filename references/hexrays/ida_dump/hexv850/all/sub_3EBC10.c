unsigned int *__fastcall sub_3EBC10(__int64 a1, int a2, unsigned __int8 *a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  char *v7; // rax
  __int64 v8; // rbx
  unsigned __int8 *v9; // rax
  unsigned int *v10; // rax
  unsigned int *v11; // rbx
  __int64 v13; // rsi
  __int16 v14; // dx
  __int64 v15; // rax
  unsigned int v16; // edx
  unsigned __int8 *v17; // [rsp+10h] [rbp-98h]
  unsigned __int8 *v18; // [rsp+18h] [rbp-90h]
  unsigned __int8 *v19; // [rsp+20h] [rbp-88h]
  _BYTE v20[16]; // [rsp+30h] [rbp-78h] BYREF
  char v21[16]; // [rsp+40h] [rbp-68h] BYREF
  char v22[16]; // [rsp+50h] [rbp-58h] BYREF
  char v23; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v7 = v20;
  do
  {
    *((_DWORD *)v7 + 1) = -1;
    v7 += 16;
    *((_WORD *)v7 - 8) = 0;
    *((_WORD *)v7 - 7) = 0;
    *((_QWORD *)v7 - 1) = 0;
  }
  while ( v7 != &v23 );
  v17 = a3;
  v8 = 0;
  v18 = a4;
  v19 = a5;
  do
  {
    v9 = (&v17)[v8];
    if ( v9 )
    {
      if ( *v9 == 1 )
      {
        v13 = *(_QWORD *)(a1 + 832);
        if ( **(_DWORD **)(v13 + 528) == *((_DWORD *)v9 + 2) )
        {
          sub_11BE50((__int64)&v20[16 * v8], v13, 0, *((_DWORD *)v9 + 1), *(_QWORD *)(a1 + 40), 4);
          (&v17)[v8] = &v20[16 * v8];
        }
      }
    }
    ++v8;
  }
  while ( v8 != 3 );
  v10 = (unsigned int *)sub_1D1610(a1, a2, v17, v18, a5);
  v11 = v10;
  if ( !v10 )
    goto LABEL_11;
  if ( sub_119D00(v10) && *((_BYTE *)v11 + 64) == 1 )
  {
    v15 = *(_QWORD *)(a1 + 832);
    v16 = v11[18];
    if ( v16 != **(_DWORD **)(v15 + 560) )
    {
      if ( v16 != *(_DWORD *)(v15 + 480) )
        goto LABEL_11;
      goto LABEL_17;
    }
    goto LABEL_23;
  }
  if ( *v11 - 56 > 1 )
    goto LABEL_11;
  v14 = *(_WORD *)(a1 + 48);
  if ( v14 == 45 )
  {
    if ( *(_BYTE *)(a1 + 105) != 1 || *(_WORD *)(a1 + 110) != 31 )
      goto LABEL_11;
LABEL_23:
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL) + 112LL) |= 2u;
    goto LABEL_11;
  }
  if ( *v11 == 56 && v14 == 79 )
LABEL_17:
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL) + 112LL) |= 8u;
LABEL_11:
  sub_1181E0((__int64)v22);
  sub_1181E0((__int64)v21);
  sub_1181E0((__int64)v20);
  return v11;
}
