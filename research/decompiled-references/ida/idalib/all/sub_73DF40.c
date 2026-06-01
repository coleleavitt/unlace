__int64 __fastcall sub_73DF40(__int64 a1, __int64 a2)
{
  int v2; // r13d
  __int64 v4; // rbp
  int v5; // eax
  unsigned int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned int v10; // r10d
  unsigned __int16 *v11; // r14
  unsigned int v12; // edx
  unsigned int v13; // r15d
  unsigned int v14; // eax
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // r15
  unsigned __int16 *v20; // rsi
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  int v23; // r11d
  __int64 v24; // rdx
  int v25; // ecx
  unsigned __int8 v26; // di
  unsigned __int8 v27; // si
  unsigned int v28; // eax
  unsigned int v29; // edx
  unsigned __int64 v30; // [rsp+8h] [rbp-50h]
  unsigned int v31; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int8 v32; // [rsp+14h] [rbp-44h]
  unsigned __int16 v33; // [rsp+16h] [rbp-42h]
  unsigned __int64 v34; // [rsp+18h] [rbp-40h]

  v2 = 1;
  v4 = *(_QWORD *)a2;
  v5 = *(_DWORD *)(a1 + 36);
  v34 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 12) != v5 )
    v2 = 2;
  v7 = *(__int16 *)(v4 + 4);
  v8 = *(_QWORD *)(a1 + 4232);
  v9 = v4;
  byte_2CCC62D = 0;
  sub_741F40(v4, &v31, v8, 0, 0, v7);
  v10 = v32;
  v11 = (unsigned __int16 *)(v4 + 6LL * (int)v31 + 6);
  if ( !v32 )
  {
    if ( v31 == v7 || *v11 < v33 )
      return v10;
    if ( v33 == *v11 )
    {
      v16 = *(unsigned int *)(v4 - 8);
      v17 = *(unsigned __int16 *)(v4 + 6LL * (int)v31 + 10);
      if ( (unsigned int)v17 >= (unsigned int)v16
        || (v18 = v4 + v17,
            v19 = *(unsigned __int16 *)(v4 + v17),
            v9 = v17 + v19 + 3,
            (unsigned int)v9 >= (unsigned int)v16)
        || (v9 = *(unsigned __int16 *)(v4 + v17 + v19 + 2), (int)v17 + (int)v9 + (int)v19 + 4 - 1 >= (unsigned int)v16) )
      {
        sub_743130(v9, v16, v33);
      }
      v20 = *(unsigned __int16 **)(a1 + 4232);
      LODWORD(v21) = *v20 - v33;
      if ( (v21 & 0x80000000) != 0LL )
      {
        v25 = -1;
        goto LABEL_29;
      }
      v21 = (unsigned int)v21;
      v22 = (__int64)v20 + v33 + 2;
      v30 = (unsigned int)v21;
      if ( v19 <= (unsigned int)v21 )
        v21 = v19;
      v23 = v21;
      if ( v21 )
      {
        v24 = 0;
        v25 = 1;
        while ( 1 )
        {
          v26 = *(_BYTE *)(v22 + v24);
          v27 = *(_BYTE *)(v18 + v24 + 2);
          if ( v26 != v27 )
            break;
          ++v25;
          ++v24;
          if ( v23 < v25 )
            goto LABEL_33;
        }
        if ( v26 < v27 )
          v25 = -v25;
        if ( v25 < 0 )
        {
LABEL_29:
          v12 = *(_DWORD *)(a1 + 4240);
          if ( (unsigned int)v33 - 1 - v25 < v12 )
            return v10;
          goto LABEL_5;
        }
      }
      else
      {
        v25 = 1;
LABEL_33:
        if ( v30 < v19 )
        {
          v25 = -v25;
          goto LABEL_29;
        }
      }
      if ( !under_debugger )
        interr(842);
    }
    else if ( !under_debugger )
    {
      interr(841);
    }
    BUG();
  }
  v12 = *(_DWORD *)(a1 + 4240);
LABEL_5:
  v13 = v31 + 1;
  while ( 1 )
  {
    if ( v11[3] < v12 || *(__int16 *)(v4 + 4) <= (int)v13 )
    {
      sub_746320(a1, a2, v31);
      v14 = *(_DWORD *)a1;
      --*(_DWORD *)(a1 + 28);
      unk_2CCC5C9 = v14 >> 1 < *(__int16 *)(a2 + 8);
      sub_73AB60(a1, a2);
      return 1;
    }
    sub_746320(a1, a2, v13);
    --*(_DWORD *)(a1 + 28);
    if ( *(__int16 *)(v4 + 4) <= v2 )
      break;
    v12 = *(_DWORD *)(a1 + 4240);
  }
  v28 = *(_DWORD *)a1;
  v29 = *(__int16 *)(a2 + 8);
  byte_2CCC62D = 1;
  unk_2CCC5C9 = v28 >> 1 < v29;
  sub_73AB60(a1, a2);
  return 1;
}
