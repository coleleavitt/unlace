__int64 __fastcall sub_421AD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  unsigned int v6; // edx
  int v7; // r12d
  __int64 v9; // rbp
  int v10; // r14d
  __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r12d
  _BYTE *v17; // rcx
  __int64 v18; // rax
  int v19; // ecx
  int v20; // edx
  _BYTE *v21; // rcx
  __int64 v22; // rdx
  char v23; // al
  int v24; // eax
  _BYTE *v25; // rcx
  bool v26; // zf
  int v27; // edx
  _BYTE *v28; // rcx
  _BYTE *v29; // rcx
  _BYTE *v30; // rcx
  _BYTE *v31; // rcx
  int v32; // eax
  int v33; // edx
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  _BYTE *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // [rsp+0h] [rbp-48h]
  int v40; // [rsp+Ch] [rbp-3Ch]

  v5 = *(_QWORD *)(a4 + 3264);
  v6 = 1;
  v7 = *(_DWORD *)(v5 + 28) - 1;
  if ( (unsigned int)(*(_DWORD *)(a2 + 28) - 4) <= 0xFE )
  {
    v9 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 24;
    v40 = sub_41FD20(v9, a4);
    v6 = 1;
    if ( v40 >= 0 )
    {
      v10 = 2;
      v11 = v9 + 24LL * *(int *)(v9 + 20) + 24;
      v12 = *(_DWORD *)(a2 + 28);
      if ( v12 > 2 )
      {
        v39 = 24LL * v7;
        do
        {
          while ( *(_DWORD *)v11 != 2 )
          {
            v13 = *(_QWORD *)(v5 + 16);
            *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v39 + v13 + 8) + 4LL * v10);
            v14 = *(_QWORD *)(v39 + v13 + 16);
            v15 = *(unsigned int *)(v11 + 20);
            *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v14 + 8LL * v10);
            sub_4399D0(a1, v11 + 24, v15, a4);
LABEL_7:
            ++v10;
            v11 += 24LL * *(int *)(v11 + 20) + 24;
            v12 = *(_DWORD *)(a2 + 28);
            if ( v12 <= v10 )
              goto LABEL_20;
          }
          v16 = sub_471010(a4, *(_QWORD *)(v11 + 32), *(unsigned int *)(v11 + 40), 0);
          if ( v16 > 255 )
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
            *v35 = HIBYTE(v16);
            v36 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v36;
            *v36 = BYTE2(v16);
            v37 = *(_QWORD *)(a4 + 120);
            *(_QWORD *)(a4 + 120) = v37 + 1;
            *(_BYTE *)(v37 + 1) = BYTE1(v16);
            v38 = *(_QWORD *)(a4 + 120);
            *(_QWORD *)(a4 + 120) = v38 + 1;
            *(_BYTE *)(v38 + 1) = v16;
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
            v18 = *(_QWORD *)(a4 + 120);
            *(_QWORD *)(a4 + 120) = v18 + 1;
            *(_BYTE *)(v18 + 1) = v16;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v19 = dword_65442C;
          }
          if ( !v19 )
            goto LABEL_7;
          if ( v19 == 0x80000000 )
            v19 = 1 - v16;
          if ( v19 < 0 )
          {
            v20 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v20 )
            {
              *(_DWORD *)(a4 + 44) = v20;
              *(_DWORD *)(a4 + 48) = v19 + v20;
              goto LABEL_19;
            }
          }
          else
          {
            v20 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v19 + v20;
LABEL_19:
          ++v10;
          v11 += 24LL * *(int *)(v11 + 20) + 24;
          v12 = *(_DWORD *)(a2 + 28);
        }
        while ( v12 > v10 );
      }
LABEL_20:
      if ( v12 <= 4 )
      {
        v25 = *(_BYTE **)(a4 + 120);
      }
      else
      {
        v21 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v21 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v21 = *(_BYTE **)(a4 + 120);
        }
        *v21 = 5;
        v22 = *(_QWORD *)(a4 + 120);
        v23 = *(_BYTE *)(a2 + 28) - 3;
        *(_QWORD *)(a4 + 120) = v22 + 1;
        *(_BYTE *)(v22 + 1) = v23;
        *(_DWORD *)(a4 + 3276) = 0;
        v24 = dword_6544AC;
        v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        v26 = dword_6544AC == 0;
        *(_QWORD *)(a4 + 120) = v25;
        if ( !v26 )
        {
          if ( v24 == 0x80000000 )
            v24 = 4 - *(_DWORD *)(a2 + 28);
          if ( v24 >= 0 )
          {
            v27 = *(_DWORD *)(a4 + 48);
LABEL_28:
            *(_DWORD *)(a4 + 48) = v24 + v27;
            goto LABEL_29;
          }
          v27 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) >= v27 )
            goto LABEL_28;
          *(_DWORD *)(a4 + 44) = v27;
          *(_DWORD *)(a4 + 48) = v24 + v27;
        }
      }
LABEL_29:
      if ( (unsigned __int64)(v25 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v25 = *(_BYTE **)(a4 + 120);
      }
      *v25 = 114;
      v28 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v28;
      *v28 = HIBYTE(v40);
      v29 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v29;
      *v29 = BYTE2(v40);
      v30 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v30;
      *v30 = BYTE1(v40);
      v31 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v31;
      *v31 = v40;
      *(_DWORD *)(a4 + 3276) = 0;
      v32 = dword_65524C;
      ++*(_QWORD *)(a4 + 120);
      if ( !v32 )
        return 0;
      if ( v32 == 0x80000000 )
        v32 = 1 - v40;
      if ( v32 < 0 )
      {
        v33 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v33 )
        {
          *(_DWORD *)(a4 + 44) = v33;
          *(_DWORD *)(a4 + 48) = v33 + v32;
          return 0;
        }
      }
      else
      {
        v33 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v33 + v32;
      return 0;
    }
  }
  return v6;
}

