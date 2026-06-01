/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C810
// Address: 0x000000000045C810

//----- (000000000045C810) ----------------------------------------------------
unsigned __int64 __fastcall sub_45C810(__int64 a1, __int64 a2, __off64_t a3, int a4, __int64 a5)
{
  __int64 v7; // rbx
  unsigned int v8; // eax
  bool v9; // r12
  char v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  int v17; // ebx
  char *v18; // r15
  __int64 v19; // rdx
  char *v20; // rsi
  __int64 v21; // rdi
  char *v22; // rax
  __int64 (*v23)(); // rax
  int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // rdx
  char *v27; // rdi
  int v28; // eax
  int v29; // r11d
  unsigned int v30; // eax
  __int64 v31; // rax
  int v32; // edx
  int v33; // ecx
  int v34; // edx
  unsigned int v35; // eax
  __int64 v36; // rdx
  char *v37; // rsi
  _DWORD *v38; // r15
  __int64 v39; // rax
  unsigned int v40; // r8d
  char *v41; // rax
  __int64 v42; // r12
  __int64 v43; // rbp
  int v44; // eax
  int v45; // edx
  int v46; // eax
  __int64 v47; // rdx
  _QWORD *v48; // rbx
  __int64 (*v50)(); // rax
  _QWORD *v51; // rax
  unsigned int v53; // [rsp+8h] [rbp-78h]
  int v54; // [rsp+18h] [rbp-68h]
  int v55; // [rsp+1Ch] [rbp-64h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v57; // [rsp+30h] [rbp-50h]
  unsigned __int64 v58; // [rsp+40h] [rbp-40h]

  v7 = a3;
  v8 = *(_DWORD *)(a1 + 128);
  v9 = *(_DWORD *)(a1 + 132) == v8;
  v58 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  v11 = v8 <= 0xFFF && v9;
  ptr = nullptr;
  v57 = 0;
  sub_47F740(a2, a3, 0);
  if ( v7 == -1 )
    v7 = sub_47F740(a2, 0, 1);
  v12 = sub_47F710(a2) - v7;
  v14 = a4;
  if ( ((v12 | v7) & 0x8000000000000000LL) != 0LL )
  {
    v15 = 0;
    a4 = 0;
  }
  else
  {
    if ( !a4 )
    {
      a4 = 0;
      if ( v11 )
      {
LABEL_19:
        v23 = *(__int64 (**)())(*(_QWORD *)a5 + 8LL);
        if ( v23 != sub_45B2E0 && ((unsigned int (__fastcall *)(__int64))v23)(a5) )
          goto LABEL_57;
        v24 = *(_DWORD *)(a1 + 132);
LABEL_21:
        if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) <= 3u || *(_DWORD *)(a1 + 72) == 23126 )
          goto LABEL_22;
LABEL_63:
        if ( a4 > 0 )
        {
LABEL_24:
          v53 = 0;
          v25 = 0;
          v54 = -v24;
          while ( 1 )
          {
            v36 = *(_QWORD *)(a1 + 16);
            v37 = *(char **)(a1 + 8);
            v38 = (char *)ptr + v25;
            v39 = v36 + 1;
            v40 = *(_DWORD *)((_BYTE *)ptr + v25 + 20) & v54;
            if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v36 + 1) )
            {
              v55 = *(_DWORD *)((_BYTE *)ptr + v25 + 20) & v54;
              v41 = (char *)sub_481540(a1 + 8, v37, v36 + 1, 0x20u);
              v36 = *(_QWORD *)(a1 + 16);
              v37 = v41;
              v40 = v55;
              *(_QWORD *)(a1 + 8) = v41;
              v39 = v36 + 1;
            }
            *(_QWORD *)(a1 + 16) = v39;
            v26 = 32 * v36;
            v27 = &v37[v26];
            *(_QWORD *)&v37[v26] = (unsigned int)v38[3];
            v28 = *(_DWORD *)(a1 + 128);
            if ( !v28 )
              v28 = 1;
            v29 = v38[2];
            if ( !v29 )
              v29 = v38[4];
            v30 = (v28 + v29 - 1) & -v28;
            if ( v30 > v38[4] )
              v30 = v38[4];
            *(_QWORD *)&v37[v26 + 24] = v30;
            v31 = v38[3] + v30;
            if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) > 3u )
            {
              if ( *(_DWORD *)(a1 + 128) == 4096 || (v32 = *(_DWORD *)(a1 + 132)) == 0 )
              {
                v34 = -512;
                v33 = 511;
              }
              else
              {
                v33 = v32 - 1;
                v34 = -v32;
              }
              v31 = v34 & (unsigned int)(v33 + v31);
            }
            *((_QWORD *)v27 + 1) = v31;
            *((_QWORD *)v27 + 2) = v40;
            if ( *(_DWORD *)(a1 + 72) == 23126 )
              *((_QWORD *)v27 + 2) = v40 + (__int64)(40 - *(unsigned __int16 *)(a1 + 38));
            if ( (**(unsigned int (__fastcall ***)(__int64, _DWORD *))a5)(a5, v38) )
              goto LABEL_57;
            v35 = v38[3] + v38[2];
            if ( v53 >= v35 )
              v35 = v53;
            v25 += 40;
            v53 = v35;
            if ( v25 == 40LL * a4 )
              goto LABEL_45;
          }
        }
LABEL_47:
        if ( !a4 || v11 )
        {
          v42 = sub_47F710(a2);
          v43 = *(unsigned int *)(a1 + 152);
          if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) > 3u )
          {
            if ( *(_DWORD *)(a1 + 128) == 4096 || (v44 = *(_DWORD *)(a1 + 132)) == 0 )
            {
              v46 = -512;
              v45 = 511;
            }
            else
            {
              v45 = v44 - 1;
              v46 = -v44;
            }
            v43 = v46 & (unsigned int)(v45 + v43);
          }
          v47 = *(_QWORD *)(a1 + 16);
          v48 = *(_QWORD **)(a1 + 8);
          if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v47 + 1) )
          {
            v51 = sub_481540(a1 + 8, *(void **)(a1 + 8), v47 + 1, 0x20u);
            *(_QWORD *)(a1 + 8) = v51;
            v47 = *(_QWORD *)(a1 + 16);
            v48 = v51;
          }
          memmove(v48 + 4, v48, 32 * v47);
          *v48 = 0;
          v48[1] = v43;
          v48[2] = 0;
          v48[3] = v42;
          ++*(_QWORD *)(a1 + 16);
        }
        goto LABEL_57;
      }
LABEL_60:
      if ( *(_DWORD *)(a1 + 72) == 23126 )
      {
        v50 = *(__int64 (**)())(*(_QWORD *)a5 + 8LL);
        if ( v50 != sub_45B2E0 )
        {
          if ( ((unsigned int (__fastcall *)(__int64))v50)(a5) )
            goto LABEL_57;
          v24 = 512;
          goto LABEL_21;
        }
      }
      else if ( (unsigned __int16)(*(_WORD *)(a1 + 164) - 10) > 3u )
      {
        v24 = 512;
        goto LABEL_63;
      }
LABEL_22:
      if ( a4 > 0 )
      {
        v24 = 1;
        goto LABEL_24;
      }
      v53 = 0;
LABEL_45:
      if ( *(_DWORD *)(a1 + 72) == 23126 )
        *(_DWORD *)(a1 + 152) = v53;
      goto LABEL_47;
    }
    if ( (unsigned __int64)a4 <= 0x666666666666666LL && v12 >= 40LL * a4 )
      goto LABEL_11;
    a4 = v12 / 0x28;
    v15 = a4;
  }
  sub_424180(
    1,
    (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
    "Number of sections",
    v14,
    v15,
    ". Do you want to continue with the new value?");
  if ( v16 != 1 )
    sub_424670(0);
  if ( a4 <= 0 )
  {
LABEL_18:
    if ( v11 )
      goto LABEL_19;
    goto LABEL_60;
  }
LABEL_11:
  v17 = 0;
  while ( 1 )
  {
    v19 = v57;
    v20 = (char *)ptr;
    v21 = v57 + 1;
    if ( *((_QWORD *)&v57 + 1) < (unsigned __int64)(v57 + 1) )
    {
      v22 = (char *)sub_481540((__int64)&ptr, ptr, v57 + 1, 0x28u);
      v19 = v57;
      ptr = v22;
      v20 = v22;
      v21 = v57 + 1;
    }
    *(_QWORD *)&v57 = v21;
    v18 = &v20[40 * v19];
    if ( sub_47F6E0(a2, v18, 40, v14, v13) != 40 )
      break;
    if ( *((_DWORD *)v18 + 3) == *((_DWORD *)v18 + 5) )
    {
      ++v17;
      v11 &= *((_DWORD *)v18 + 4) >= *((_DWORD *)v18 + 2);
      if ( v17 >= a4 )
        goto LABEL_18;
    }
    else
    {
      ++v17;
      v11 = 0;
      if ( v17 >= a4 )
        goto LABEL_18;
    }
  }
LABEL_57:
  if ( ptr )
  {
    *(_QWORD *)&v57 = 0;
    j__free(ptr);
  }
  return v58 - __readfsqword(0x28u);
}
// 45C909: variable 'v16' is possibly undefined
// 45C942: variable 'v14' is possibly undefined
// 45C942: variable 'v13' is possibly undefined
// 45B2E0: using guessed type __int64 sub_45B2E0();
