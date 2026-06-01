__int64 __fastcall sub_1510F60(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, __int64 a5, char a6, __m128i a7)
{
  int *v10; // rbp
  int v12; // eax
  bool v13; // zf
  __int64 result; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 *v21; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 *v25; // rdi
  unsigned __int64 v27; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v28; // [rsp+8h] [rbp-D0h]
  _BYTE *v29; // [rsp+10h] [rbp-C8h] BYREF
  char v30; // [rsp+18h] [rbp-C0h]
  __int64 v31; // [rsp+20h] [rbp-B8h]
  int v32; // [rsp+28h] [rbp-B0h]
  __int16 v33; // [rsp+2Ch] [rbp-ACh]
  __int64 (__fastcall *v34)(__int64); // [rsp+30h] [rbp-A8h]
  __int64 v35; // [rsp+38h] [rbp-A0h]
  __int64 v36; // [rsp+40h] [rbp-98h]
  unsigned __int8 *v37[17]; // [rsp+50h] [rbp-88h] BYREF

  v10 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v12 = *(_DWORD *)(a1 + 40);
  v13 = *(_WORD *)(a1 + 32) == 22;
  v31 = a1;
  v32 = 1507350;
  *a2 = v12;
  v29 = (_BYTE *)(a1 + 1952);
  LOBYTE(v12) = *(_BYTE *)(a1 + 1952);
  v35 = 0;
  v30 = v12;
  v33 = 449;
  *(_BYTE *)(a1 + 1952) = 1;
  v34 = sub_146A990;
  v36 = 0;
  if ( !v13 )
    goto LABEL_2;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
  {
    if ( (unsigned __int8)sub_1568800(&v29) )
    {
LABEL_2:
      sub_1564840(v37, a1, v10, 14);
      sub_AE9DF0(v37, 22, 4u);
      sub_AEA040((__int64)v37);
      result = 1;
      goto LABEL_3;
    }
  }
  else
  {
    LODWORD(v36) = sub_146A990(a1);
  }
  if ( a6 )
  {
    while ( 1 )
    {
      v22 = sub_14C4CD0((const __m128i *)a1, a7);
      if ( v22 <= 1 )
        break;
      v19 = *(unsigned int *)(a5 + 8);
      v18 = *(unsigned int *)(a5 + 12);
      v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
      if ( v19 + 1 > v18 )
      {
        v18 = a5 + 16;
        v27 = v23;
        sub_2237220(a5, a5 + 16, v19 + 1, 8);
        v19 = *(unsigned int *)(a5 + 8);
        v20 = *(_QWORD *)a5;
        *(_QWORD *)(*(_QWORD *)a5 + 8 * v19) = v27;
        ++*(_DWORD *)(a5 + 8);
        if ( *(_WORD *)(a1 + 32) != 66 )
          goto LABEL_14;
      }
      else
      {
        v20 = *(_QWORD *)a5;
        *(_QWORD *)(*(_QWORD *)a5 + 8 * v19) = v23;
        ++*(_DWORD *)(a5 + 8);
        if ( *(_WORD *)(a1 + 32) != 66 )
        {
LABEL_14:
          result = sub_14808E0((__int64)&v29, (__int64 *)v18, v20, v19, v16, v17);
          *a3 = v36;
          *a4 = HIDWORD(v36);
          goto LABEL_3;
        }
      }
      v21 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v21, v10);
    }
  }
  else
  {
    while ( 1 )
    {
      v15 = sub_14BDAD0(a1, 0, a7);
      if ( v15 <= 1 )
        break;
      v19 = *(unsigned int *)(a5 + 8);
      v18 = *(unsigned int *)(a5 + 12);
      v24 = v15 & 0xFFFFFFFFFFFFFFFELL;
      if ( v18 < v19 + 1 )
      {
        v18 = a5 + 16;
        v28 = v24;
        sub_2237220(a5, a5 + 16, v19 + 1, 8);
        v19 = *(unsigned int *)(a5 + 8);
        v20 = *(_QWORD *)a5;
        *(_QWORD *)(*(_QWORD *)a5 + 8 * v19) = v28;
        ++*(_DWORD *)(a5 + 8);
        if ( *(_WORD *)(a1 + 32) != 66 )
          goto LABEL_14;
      }
      else
      {
        v20 = *(_QWORD *)a5;
        *(_QWORD *)(*(_QWORD *)a5 + 8 * v19) = v24;
        ++*(_DWORD *)(a5 + 8);
        if ( *(_WORD *)(a1 + 32) != 66 )
          goto LABEL_14;
      }
      v25 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v25, v10);
    }
  }
  sub_156E210(&v29);
  result = 1;
LABEL_3:
  *v29 = v30;
  return result;
}
