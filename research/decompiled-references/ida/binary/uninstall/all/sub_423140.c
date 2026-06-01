__int64 __fastcall sub_423140(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r15
  __int64 result; // rax
  int v8; // r12d
  __int64 v9; // rbp
  int v10; // r14d
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r12d
  _BYTE *v16; // rcx
  _BYTE *v17; // rcx
  int v18; // edx
  int v19; // eax
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  unsigned int v22; // eax
  _BYTE *v23; // rcx
  unsigned int v24; // eax
  _BYTE *v25; // rcx
  unsigned int v26; // eax
  _BYTE *v27; // rcx
  int v28; // edx
  __int64 v29; // rsi
  bool v30; // zf
  _BYTE *v31; // rcx
  int v32; // eax
  _BYTE *v33; // rcx
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  _BYTE *v36; // rcx
  _BYTE *v37; // rcx
  _BYTE *v38; // rcx
  _BYTE *v39; // rcx
  _BYTE *v40; // rcx
  __int64 v41; // [rsp+0h] [rbp-48h]
  int v42; // [rsp+Ch] [rbp-3Ch]

  v6 = *(_QWORD *)(a4 + 3264);
  result = 1;
  v8 = *(_DWORD *)(v6 + 28) - 1;
  if ( *(int *)(a2 + 28) > 3 )
  {
    v9 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 24;
    v42 = sub_41FD20(v9, a4);
    result = 1;
    if ( v42 >= 0 )
    {
      v10 = 2;
      v11 = v9 + 24LL * *(int *)(v9 + 20) + 24;
      if ( *(int *)(a2 + 28) > 2 )
      {
        v41 = 24LL * v8;
        do
        {
          while ( *(_DWORD *)v11 != 2 )
          {
            v12 = *(_QWORD *)(v6 + 16);
            *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v41 + v12 + 8) + 4LL * v10);
            v13 = *(_QWORD *)(v41 + v12 + 16);
            v14 = *(unsigned int *)(v11 + 20);
            *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v13 + 8LL * v10);
            sub_4399D0(a1, v11 + 24, v14, a4);
LABEL_7:
            ++v10;
            v11 += 24LL * *(int *)(v11 + 20) + 24;
            if ( *(_DWORD *)(a2 + 28) <= v10 )
              goto LABEL_20;
          }
          v15 = sub_471010(a4, *(_QWORD *)(v11 + 32), *(unsigned int *)(v11 + 40), 0);
          if ( v15 > 255 )
          {
            v36 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v36 + 5) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v36 = *(_BYTE **)(a4 + 120);
            }
            *v36 = 2;
            v37 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v37;
            *v37 = HIBYTE(v15);
            v38 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v38;
            *v38 = BYTE2(v15);
            v39 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v39;
            *v39 = BYTE1(v15);
            v40 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v40;
            *v40 = v15;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v18 = dword_65444C;
          }
          else
          {
            v16 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v16 + 2) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v16 = *(_BYTE **)(a4 + 120);
            }
            *v16 = 1;
            v17 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v17;
            *v17 = v15;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v18 = dword_65442C;
          }
          if ( !v18 )
            goto LABEL_7;
          if ( v18 == 0x80000000 )
            v18 = 1 - v15;
          if ( v18 < 0 )
          {
            v19 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v19 )
            {
              *(_DWORD *)(a4 + 44) = v19;
              *(_DWORD *)(a4 + 48) = v18 + v19;
              goto LABEL_19;
            }
          }
          else
          {
            v19 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v18 + v19;
LABEL_19:
          ++v10;
          v11 += 24LL * *(int *)(v11 + 20) + 24;
        }
        while ( *(_DWORD *)(a2 + 28) > v10 );
      }
LABEL_20:
      v20 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v20 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v20 = *(_BYTE **)(a4 + 120);
      }
      *v20 = 111;
      v21 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      v22 = (unsigned int)(*(_DWORD *)(a2 + 28) - 3) >> 24;
      *(_QWORD *)(a4 + 120) = v21;
      *v21 = v22;
      v23 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      v24 = (unsigned int)(*(_DWORD *)(a2 + 28) - 3) >> 16;
      *(_QWORD *)(a4 + 120) = v23;
      *v23 = v24;
      v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      v26 = (unsigned int)(*(_DWORD *)(a2 + 28) - 3) >> 8;
      *(_QWORD *)(a4 + 120) = v25;
      *v25 = v26;
      v27 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      LOBYTE(v26) = *(_BYTE *)(a2 + 28) - 3;
      *(_QWORD *)(a4 + 120) = v27;
      *v27 = v26;
      *(_DWORD *)(a4 + 3276) = 0;
      v28 = dword_6551EC;
      v29 = *(_QWORD *)(a4 + 120) + 1LL;
      v30 = dword_6551EC == 0;
      v31 = (_BYTE *)v29;
      *(_QWORD *)(a4 + 120) = v29;
      if ( !v30 )
      {
        if ( v28 == 0x80000000 )
          v28 = 4 - *(_DWORD *)(a2 + 28);
        if ( v28 < 0 )
        {
          v32 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v32 )
            *(_DWORD *)(a4 + 44) = v32;
        }
        else
        {
          v32 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v28 + v32;
      }
      if ( (unsigned __int64)(v29 + 4) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v31 = *(_BYTE **)(a4 + 120);
      }
      *v31 = HIBYTE(v42);
      v33 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v33;
      *v33 = BYTE2(v42);
      v34 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v34;
      *v34 = BYTE1(v42);
      v35 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v35;
      *v35 = v42;
      ++*(_QWORD *)(a4 + 120);
      return 0;
    }
  }
  return result;
}

