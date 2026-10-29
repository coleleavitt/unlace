__int64 __fastcall sub_4294A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  int v6; // ecx
  __int64 result; // rax
  int v8; // ecx
  int v9; // r14d
  int v10; // r13d
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r12d
  _BYTE *v17; // rsi
  _BYTE *v18; // rsi
  int v19; // ecx
  int v20; // edx
  _BYTE *v21; // rsi
  _BYTE *v22; // rsi
  __int64 v23; // rcx
  _BYTE *v24; // rsi
  _BYTE *v25; // rsi
  int v26; // eax
  int v27; // edx
  _BYTE *v28; // rsi
  _BYTE *v29; // rsi
  _BYTE *v30; // rsi
  __int64 v31; // rdx
  _BYTE *v32; // rsi
  int v33; // ebp
  _BYTE *v34; // rsi
  _BYTE *v35; // rsi
  _BYTE *v36; // rsi
  __int64 v37; // rdx
  _BYTE *v38; // rsi
  int v39; // eax
  int v40; // edx
  _BYTE *v41; // rsi
  _BYTE *v42; // rsi
  __int64 v43; // [rsp+8h] [rbp-40h]

  v5 = *(_QWORD *)(a4 + 3264);
  v6 = *(_DWORD *)(v5 + 28);
  v43 = v5;
  result = 1;
  v8 = v6 - 1;
  if ( *(_QWORD *)(a4 + 24) )
  {
    v9 = *(_DWORD *)(a2 + 28);
    if ( v9 != 1 )
    {
      v10 = 1;
      v11 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 24;
      if ( v9 > 1 )
      {
        v12 = 24LL * v8;
        do
        {
          while ( *(_DWORD *)v11 != 2 )
          {
            v13 = *(_QWORD *)(v43 + 16);
            *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v12 + v13 + 8) + 4LL * v10);
            v14 = *(_QWORD *)(v12 + v13 + 16);
            v15 = *(unsigned int *)(v11 + 20);
            *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v14 + 8LL * v10);
            sub_4399D0(a1, v11 + 24, v15, a4);
LABEL_6:
            ++v10;
            v11 += 24LL * *(int *)(v11 + 20) + 24;
            if ( v10 >= v9 )
              goto LABEL_19;
          }
          v16 = sub_471010(a4, *(_QWORD *)(v11 + 32), *(unsigned int *)(v11 + 40), 0);
          if ( v16 > 255 )
          {
            v28 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v28 + 5) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v28 = *(_BYTE **)(a4 + 120);
            }
            *v28 = 2;
            v29 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v29;
            *v29 = HIBYTE(v16);
            v30 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v30;
            *v30 = BYTE2(v16);
            v31 = *(_QWORD *)(a4 + 120);
            *(_QWORD *)(a4 + 120) = v31 + 1;
            *(_BYTE *)(v31 + 1) = BYTE1(v16);
            v32 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v32;
            *v32 = v16;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v19 = dword_65444C;
          }
          else
          {
            v17 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v17 + 2) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v17 = *(_BYTE **)(a4 + 120);
            }
            *v17 = 1;
            v18 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v18;
            *v18 = v16;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v19 = dword_65442C;
          }
          if ( !v19 )
            goto LABEL_6;
          if ( v19 == 0x80000000 )
            v19 = 1 - v16;
          if ( v19 < 0 )
          {
            v20 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v20 )
            {
              *(_DWORD *)(a4 + 44) = v20;
              *(_DWORD *)(a4 + 48) = v19 + v20;
              goto LABEL_18;
            }
          }
          else
          {
            v20 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v19 + v20;
LABEL_18:
          ++v10;
          v11 += 24LL * *(int *)(v11 + 20) + 24;
        }
        while ( v10 < v9 );
      }
LABEL_19:
      v21 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v21 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v21 = *(_BYTE **)(a4 + 120);
      }
      *v21 = 79;
      v22 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v22;
      *v22 = (unsigned int)(v9 - 1) >> 24;
      v23 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v23 + 1;
      *(_BYTE *)(v23 + 1) = (unsigned int)(v9 - 1) >> 16;
      v24 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v24;
      *v24 = (unsigned __int16)(v9 - 1) >> 8;
      v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v25;
      *v25 = v9 - 1;
      *(_DWORD *)(a4 + 3276) = 0;
      v26 = dword_654DEC;
      ++*(_QWORD *)(a4 + 120);
      if ( !v26 )
        return 0;
      if ( v26 == 0x80000000 )
        v26 = 2 - v9;
      if ( v26 < 0 )
      {
        v27 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v27 )
        {
          *(_DWORD *)(a4 + 44) = v27;
          *(_DWORD *)(a4 + 48) = v27 + v26;
          return 0;
        }
      }
      else
      {
        v27 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v27 + v26;
      return 0;
    }
    v33 = sub_471010(a4, "", 0, 0);
    if ( v33 <= 255 )
    {
      v41 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v41 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v41 = *(_BYTE **)(a4 + 120);
      }
      *v41 = 1;
      v42 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v42;
      *v42 = v33;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v39 = dword_65442C;
    }
    else
    {
      v34 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v34 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v34 = *(_BYTE **)(a4 + 120);
      }
      *v34 = 2;
      v35 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v35;
      *v35 = HIBYTE(v33);
      v36 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v36;
      *v36 = BYTE2(v33);
      v37 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v37 + 1;
      *(_BYTE *)(v37 + 1) = BYTE1(v33);
      v38 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v38;
      *v38 = v33;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v39 = dword_65444C;
    }
    if ( !v39 )
      return 0;
    if ( v39 == 0x80000000 )
      v39 = 1 - v33;
    if ( v39 < 0 )
    {
      v40 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v40 )
      {
        *(_DWORD *)(a4 + 44) = v40;
        *(_DWORD *)(a4 + 48) = v39 + v40;
        return 0;
      }
    }
    else
    {
      v40 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v39 + v40;
    return 0;
  }
  return result;
}

