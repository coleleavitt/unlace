__int64 __fastcall sub_424B70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  _BYTE *v14; // rcx
  char v15; // al
  _BYTE *v16; // rcx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // edx
  char v21; // al
  _BYTE *v22; // rcx
  int v23; // ebx
  _BYTE *v24; // rcx
  _BYTE *v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // edx
  char v29; // al
  _BYTE *v30; // rcx
  char v31; // al
  _BYTE *v32; // rcx
  _BYTE *v33; // rcx
  unsigned int v34; // eax
  _BYTE *v35; // rcx
  char v36; // al
  _BYTE *v37; // rcx
  char v38; // al
  _BYTE *v39; // rcx
  _BYTE *v40; // rcx
  unsigned int v41; // eax
  _BYTE *v42; // rcx
  _BYTE *v43; // rcx
  _BYTE *v44; // rcx
  _BYTE *v45; // rcx
  __int64 v46; // rdx
  _BYTE *v47; // rcx
  __int64 v48; // rcx
  int v49; // [rsp+1Ch] [rbp-3Ch] BYREF
  int v50; // [rsp+20h] [rbp-38h] BYREF
  int v51; // [rsp+24h] [rbp-34h] BYREF

  v5 = *(_QWORD *)(a4 + 3264);
  v6 = *(_DWORD *)(a2 + 28);
  result = 1;
  if ( v6 != 1 )
  {
    if ( v6 == 2 )
      return sub_4244A0(a1, a2, a3, a4);
    result = 1;
    if ( v6 <= 3 )
    {
      v8 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 24;
      v9 = 24LL * (*(_DWORD *)(v5 + 28) - 1);
      sub_41F660(
        a1,
        v8,
        a4,
        1u,
        (unsigned int *)&v49,
        &v50,
        &v51,
        *(_DWORD *)(*(_QWORD *)(v9 + *(_QWORD *)(v5 + 16) + 8) + 4LL),
        *(_QWORD *)(*(_QWORD *)(v9 + *(_QWORD *)(v5 + 16) + 16) + 8LL));
      if ( v6 > 2 )
      {
        v10 = v8 + 24LL * *(int *)(v8 + 20);
        if ( *(_DWORD *)(v10 + 24) == 2 )
        {
          v23 = sub_471010(a4, *(_QWORD *)(v10 + 56), *(unsigned int *)(v10 + 64), 0);
          if ( v23 > 255 )
          {
            v43 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v43 + 5) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v43 = *(_BYTE **)(a4 + 120);
            }
            *v43 = 2;
            v44 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v44;
            *v44 = HIBYTE(v23);
            v45 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v45;
            *v45 = BYTE2(v23);
            v46 = *(_QWORD *)(a4 + 120);
            *(_QWORD *)(a4 + 120) = v46 + 1;
            *(_BYTE *)(v46 + 1) = BYTE1(v23);
            v47 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v47;
            *v47 = v23;
            v48 = *(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v27 = dword_65444C;
            v14 = (_BYTE *)(v48 + 1);
            *(_QWORD *)(a4 + 120) = v14;
          }
          else
          {
            v24 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v24 + 2) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v24 = *(_BYTE **)(a4 + 120);
            }
            *v24 = 1;
            v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v25;
            *v25 = v23;
            v26 = *(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v27 = dword_65442C;
            v14 = (_BYTE *)(v26 + 1);
            *(_QWORD *)(a4 + 120) = v14;
          }
          if ( v27 )
          {
            if ( v27 == 0x80000000 )
              v27 = 1 - v23;
            if ( v27 < 0 )
            {
              v28 = *(_DWORD *)(a4 + 48);
              if ( *(_DWORD *)(a4 + 44) < v28 )
                *(_DWORD *)(a4 + 44) = v28;
            }
            else
            {
              v28 = *(_DWORD *)(a4 + 48);
            }
            *(_DWORD *)(a4 + 48) = v27 + v28;
          }
LABEL_9:
          if ( v50 )
          {
            if ( v51 )
            {
              if ( v49 >= 0 )
              {
                if ( v49 > 255 )
                {
                  if ( (unsigned __int64)(v14 + 5) > *(_QWORD *)(a4 + 128) )
                  {
                    sub_439150(a4);
                    v14 = *(_BYTE **)(a4 + 120);
                  }
                  *v14 = 83;
                  v29 = HIBYTE(v49);
                  v30 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  *(_QWORD *)(a4 + 120) = v30;
                  *v30 = v29;
                  v31 = BYTE2(v49);
                  v32 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  *(_QWORD *)(a4 + 120) = v32;
                  *v32 = v31;
                  v33 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  v34 = (unsigned int)v49 >> 8;
                  *(_QWORD *)(a4 + 120) = v33;
                  *v33 = v34;
                  LOBYTE(v34) = v49;
                  v35 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  *(_QWORD *)(a4 + 120) = v35;
                  *v35 = v34;
                  ++*(_QWORD *)(a4 + 120);
                  *(_DWORD *)(a4 + 3276) = 0;
                  v17 = dword_654E6C;
                }
                else
                {
                  if ( (unsigned __int64)(v14 + 2) > *(_QWORD *)(a4 + 128) )
                  {
                    sub_439150(a4);
                    v14 = *(_BYTE **)(a4 + 120);
                  }
                  *v14 = 82;
                  v21 = v49;
                  v22 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  *(_QWORD *)(a4 + 120) = v22;
                  *v22 = v21;
                  ++*(_QWORD *)(a4 + 120);
                  *(_DWORD *)(a4 + 3276) = 0;
                  v17 = dword_654E4C;
                }
                goto LABEL_16;
              }
              if ( v14 == *(_BYTE **)(a4 + 128) )
              {
                sub_439150(a4);
                v14 = *(_BYTE **)(a4 + 120);
              }
              *v14 = 87;
              ++*(_QWORD *)(a4 + 120);
              *(_DWORD *)(a4 + 3276) = 0;
              v17 = dword_654EEC;
            }
            else
            {
              if ( v49 >= 0 )
              {
                if ( v49 > 255 )
                {
                  if ( (unsigned __int64)(v14 + 5) > *(_QWORD *)(a4 + 128) )
                  {
                    sub_439150(a4);
                    v14 = *(_BYTE **)(a4 + 120);
                  }
                  *v14 = 85;
                  v36 = HIBYTE(v49);
                  v37 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  *(_QWORD *)(a4 + 120) = v37;
                  *v37 = v36;
                  v38 = BYTE2(v49);
                  v39 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  *(_QWORD *)(a4 + 120) = v39;
                  *v39 = v38;
                  v40 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  v41 = (unsigned int)v49 >> 8;
                  *(_QWORD *)(a4 + 120) = v40;
                  *v40 = v41;
                  LOBYTE(v41) = v49;
                  v42 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  *(_QWORD *)(a4 + 120) = v42;
                  *v42 = v41;
                  ++*(_QWORD *)(a4 + 120);
                  *(_DWORD *)(a4 + 3276) = 0;
                  v17 = dword_654EAC;
                }
                else
                {
                  if ( (unsigned __int64)(v14 + 2) > *(_QWORD *)(a4 + 128) )
                  {
                    sub_439150(a4);
                    v14 = *(_BYTE **)(a4 + 120);
                  }
                  *v14 = 84;
                  v15 = v49;
                  v16 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
                  *(_QWORD *)(a4 + 120) = v16;
                  *v16 = v15;
                  ++*(_QWORD *)(a4 + 120);
                  *(_DWORD *)(a4 + 3276) = 0;
                  v17 = dword_654E8C;
                }
LABEL_16:
                if ( !v17 )
                  return 0;
                if ( v17 == 0x80000000 )
                  v17 = 1 - v49;
                goto LABEL_19;
              }
              if ( v14 == *(_BYTE **)(a4 + 128) )
              {
                sub_439150(a4);
                v14 = *(_BYTE **)(a4 + 120);
              }
              *v14 = 86;
              ++*(_QWORD *)(a4 + 120);
              *(_DWORD *)(a4 + 3276) = 0;
              v17 = dword_654ECC;
            }
            if ( !v17 )
              return 0;
            if ( v17 == 0x80000000 )
            {
              v17 = 1;
              goto LABEL_20;
            }
LABEL_19:
            if ( v17 < 0 )
            {
              v18 = *(_DWORD *)(a4 + 48);
              if ( *(_DWORD *)(a4 + 44) < v18 )
                *(_DWORD *)(a4 + 44) = v18;
              goto LABEL_21;
            }
LABEL_20:
            v18 = *(_DWORD *)(a4 + 48);
LABEL_21:
            *(_DWORD *)(a4 + 48) = v17 + v18;
            return 0;
          }
          if ( v14 == *(_BYTE **)(a4 + 128) )
          {
            sub_439150(a4);
            v14 = *(_BYTE **)(a4 + 120);
          }
          *v14 = 87;
          *(_DWORD *)(a4 + 3276) = 0;
          v19 = dword_654EEC;
          ++*(_QWORD *)(a4 + 120);
          if ( !v19 )
            return 0;
          if ( v19 == 0x80000000 )
          {
            v19 = 1;
          }
          else if ( v19 < 0 )
          {
            v20 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v20 )
              *(_DWORD *)(a4 + 44) = v20;
            goto LABEL_30;
          }
          v20 = *(_DWORD *)(a4 + 48);
LABEL_30:
          *(_DWORD *)(a4 + 48) = v20 + v19;
          return 0;
        }
        v11 = *(_QWORD *)(v5 + 16);
        *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v9 + v11 + 8) + 8LL);
        v12 = *(_QWORD *)(v9 + v11 + 16);
        v13 = *(unsigned int *)(v10 + 44);
        *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v12 + 16);
        sub_4399D0(a1, v10 + 48, v13, a4);
      }
      v14 = *(_BYTE **)(a4 + 120);
      goto LABEL_9;
    }
  }
  return result;
}

