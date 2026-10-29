__int64 __fastcall sub_1560060(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, char a4, char a5)
{
  __int16 v10; // ax
  __int16 v11; // ax
  int v12; // eax
  __int64 *v13; // rdi
  __int64 result; // rax
  __int64 *v15; // rdi
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int16 v18; // ax
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rdi
  unsigned __int16 v23; // cx
  __int64 *v24; // rdi
  unsigned int v25; // eax
  _WORD *v26; // rdx
  unsigned __int16 v27; // cx
  __int64 *v28; // rdi
  int v29; // eax
  __int64 *v30; // rdi
  __int16 v31; // ax
  __int64 v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  int v35; // eax
  __int64 *v36; // rdi
  int v37; // eax
  __int64 *v38; // rdi
  unsigned int v39; // eax
  unsigned __int16 v40; // si
  _WORD *v41; // rdx
  __int16 v42; // ax
  unsigned __int16 v43; // ax
  __int64 *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r12
  unsigned int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // rdi
  unsigned __int64 v50; // rax
  __int16 v51; // dx
  __int128 v53; // [rsp+10h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-58h]
  __int128 v55; // [rsp+30h] [rbp-48h]

  if ( (unsigned int)sub_155D540(a1) == 3 )
    return 3;
  v10 = *(_WORD *)(a1 + 32);
  if ( v10 == 27 )
  {
    v37 = *(_DWORD *)(a1 + 16);
    v38 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = v37;
    sub_14634E0(v38, (int *)(a1 + 16));
    v10 = *(_WORD *)(a1 + 32);
  }
  if ( v10 != 5 && v10 != 140 )
  {
    if ( v10 != 416 )
      goto LABEL_7;
    v16 = *(_QWORD *)(a1 + 8);
    v17 = *(_QWORD *)(v16 + 2944);
    if ( *(unsigned int *)(v16 + 2912) > v17 )
    {
      v18 = *(_WORD *)(*(_QWORD *)(v16 + 2904) + 24 * v17 + 16);
      if ( v18 != 5 && v18 != 140 || !a3 )
      {
LABEL_8:
        if ( a2 )
          goto LABEL_9;
        return 1;
      }
      goto LABEL_27;
    }
    if ( *(_WORD *)(sub_14180A0(v16, 1u) + 16) == 5 )
    {
      v10 = *(_WORD *)(a1 + 32);
    }
    else
    {
      v49 = *(_QWORD *)(a1 + 8);
      v50 = *(_QWORD *)(v49 + 2944);
      if ( v50 < *(unsigned int *)(v49 + 2912) )
        v51 = *(_WORD *)(*(_QWORD *)(v49 + 2904) + 24 * v50 + 16);
      else
        v51 = *(_WORD *)(sub_14180A0(v49, 1u) + 16);
      v10 = *(_WORD *)(a1 + 32);
      if ( v51 != 140 )
        goto LABEL_7;
    }
  }
  if ( a3 )
  {
    if ( v10 != 416 )
    {
      if ( v10 != 5 )
      {
LABEL_20:
        if ( v10 == 140 )
        {
          if ( (unsigned int)sub_155F460(a1) != 3 )
            goto LABEL_9;
          return 3;
        }
        v15 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v15, (int *)(a1 + 16));
        if ( a4 )
          return 2;
        while ( 1 )
        {
LABEL_10:
          while ( 1 )
          {
            v11 = *(_WORD *)(a1 + 32);
            if ( v11 == 22 )
              break;
            if ( v11 != 20 )
            {
              if ( v11 != 176 )
                return 2;
              return 0;
            }
            v12 = *(_DWORD *)(a1 + 16);
            ++*(_WORD *)(a1 + 90);
            v13 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = v12;
            sub_14634E0(v13, (int *)(a1 + 16));
            if ( *(_WORD *)(a1 + 32) == 24 )
              return 1;
            LODWORD(v53) = (_DWORD)byte_420015;
            if ( !(unsigned __int8)sub_15680D0(a1, &v53, 2, 3) )
              return 3;
            if ( *(_WORD *)(a1 + 32) != 21 )
              return 1;
            v27 = *(_WORD *)(a1 + 90);
            if ( v27 )
            {
              v39 = *(_DWORD *)(a1 + 2792);
              if ( !v39 )
              {
LABEL_79:
                *(_WORD *)(a1 + 90) = v27 - 1;
                goto LABEL_54;
              }
              v40 = *(_WORD *)(a1 + 88);
              v41 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v39 - 24);
              while ( 2 )
              {
                if ( v40 == v41[7] )
                {
                  if ( *((_DWORD *)v41 + 4) != *(_DWORD *)(a1 + 90) )
                  {
LABEL_77:
                    if ( v27 <= v41[8] && *(_WORD *)(a1 + 92) <= v41[9] )
                      goto LABEL_79;
                  }
                }
                else if ( v40 <= v41[7] )
                {
                  goto LABEL_77;
                }
                --v39;
                v41 -= 12;
                *(_DWORD *)(a1 + 2792) = v39;
                if ( !v39 )
                  goto LABEL_79;
                continue;
              }
            }
LABEL_54:
            v28 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v28, (int *)(a1 + 16));
          }
          if ( a2 )
            break;
          if ( !(unsigned __int8)sub_1560FC0(a1, 0, 0) )
            return 2;
          v23 = *(_WORD *)(a1 + 88);
          if ( *(_WORD *)(a1 + 32) == 22 )
            goto LABEL_38;
          if ( v23 )
          {
            v25 = *(_DWORD *)(a1 + 2792);
            if ( !v25 )
            {
LABEL_52:
              *(_WORD *)(a1 + 88) = v23 - 1;
              goto LABEL_39;
            }
            v26 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v25 - 24);
            while ( 2 )
            {
              if ( v23 == v26[7] )
              {
                if ( *((_DWORD *)v26 + 4) != *(_DWORD *)(a1 + 90) )
                {
LABEL_50:
                  if ( *(_WORD *)(a1 + 90) <= v26[8] && *(_WORD *)(a1 + 92) <= v26[9] )
                    goto LABEL_52;
                }
              }
              else if ( v23 <= v26[7] )
              {
                goto LABEL_50;
              }
              --v25;
              v26 -= 12;
              *(_DWORD *)(a1 + 2792) = v25;
              if ( !v25 )
                goto LABEL_52;
              continue;
            }
          }
LABEL_39:
          v24 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v24, (int *)(a1 + 16));
          result = sub_155FDB0(a1, a5);
          if ( (_DWORD)result != 2 )
            return result;
        }
        v23 = *(_WORD *)(a1 + 88);
LABEL_38:
        *(_WORD *)(a1 + 88) = v23 + 1;
        goto LABEL_39;
      }
      v45 = *(unsigned int *)(a1 + 2712);
      v46 = *(_QWORD *)(a1 + 24);
      if ( v45 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 2716) )
      {
        sub_2237220(a1 + 2704, a1 + 2720, v45 + 1, 8);
        v45 = *(unsigned int *)(a1 + 2712);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 2704) + 8 * v45) = v46;
      ++*(_DWORD *)(a1 + 2712);
LABEL_68:
      v10 = *(_WORD *)(a1 + 32);
      goto LABEL_20;
    }
LABEL_27:
    v19 = *(unsigned int *)(a1 + 20);
    v20 = *(_DWORD *)(a1 + 16);
    v21 = *(_QWORD *)(a1 + 24);
    v22 = *(_QWORD *)(a1 + 96);
    v53 = 0;
    *(_OWORD *)ptr = 0;
    if ( !(_DWORD)v19 )
      v19 = v20;
    v55 = 0;
    sub_169D790(v22, v21, (v19 << 32) | v20, &v53);
    if ( (_DWORD)v53 && DWORD1(v53) && !*((_QWORD *)&v53 + 1) )
    {
      if ( HIDWORD(ptr[1]) )
        free(ptr[0]);
      return 3;
    }
    v35 = *(_DWORD *)(a1 + 20);
    v36 = *(__int64 **)(a1 + 8);
    if ( !v35 )
      v35 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 40) = v35;
    sub_14634E0(v36, (int *)(a1 + 16));
    if ( HIDWORD(ptr[1]) )
      free(ptr[0]);
    goto LABEL_68;
  }
LABEL_7:
  if ( v10 != 22 )
    goto LABEL_8;
  v29 = *(_DWORD *)(a1 + 16);
  ++*(_WORD *)(a1 + 88);
  v30 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = v29;
  sub_14634E0(v30, (int *)(a1 + 16));
  if ( a2 )
  {
    if ( (v31 = *(_WORD *)(a1 + 32), v31 == 23)
      || v31 == 27
      && ((v32 = *(_QWORD *)(a1 + 8), v33 = *(_QWORD *)(v32 + 2944), v33 >= *(unsigned int *)(v32 + 2912))
        ? (v34 = sub_14180A0(v32, 1u))
        : (v34 = *(_QWORD *)(v32 + 2904) + 24 * v33),
          *(_WORD *)(v34 + 16) == 23)
      || sub_147EA80(a1, 0, 0) )
    {
      result = sub_155FDB0(a1, a5);
      if ( (_DWORD)result == 2 )
        goto LABEL_9;
      return result;
    }
  }
  v42 = *(_WORD *)(a1 + 32);
  if ( (unsigned __int16)(v42 - 320) <= 6u || v42 == 189 )
    return 0;
  result = sub_1560060(a1, a2, a3, 0, 0);
  if ( (_DWORD)result != 2 )
    return result;
  if ( *(_WORD *)(a1 + 32) != 23 )
    return 1;
  v43 = *(_WORD *)(a1 + 88);
  if ( !v43 )
    goto LABEL_87;
  while ( 1 )
  {
    v47 = *(_DWORD *)(a1 + 2792);
    if ( !v47 )
      break;
    v48 = *(_QWORD *)(a1 + 2784) + 24LL * v47 - 24;
    if ( v43 == *(_WORD *)(v48 + 14) )
    {
      if ( *(_DWORD *)(v48 + 16) == *(_DWORD *)(a1 + 90) )
        goto LABEL_92;
    }
    else if ( v43 > *(_WORD *)(v48 + 14) )
    {
      goto LABEL_92;
    }
    if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v48 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v48 + 18) )
      break;
LABEL_92:
    *(_DWORD *)(a1 + 2792) = v47 - 1;
  }
  *(_WORD *)(a1 + 88) = v43 - 1;
LABEL_87:
  v44 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v44, (int *)(a1 + 16));
LABEL_9:
  if ( !a4 )
    goto LABEL_10;
  return 2;
}
