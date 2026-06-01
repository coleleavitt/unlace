/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140015610
// Address: 0x0000000140015610

//----- (0000000140015610) ----------------------------------------------------
__int64 __fastcall sub_140015610(__int64 a1, __int64 a2, unsigned int *a3, char a4)
{
  double v4; // xmm2_8
  double v5; // xmm3_8
  unsigned int v10; // r14d
  __int64 v11; // r13
  unsigned __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  unsigned int v15; // edx
  __int64 *v16; // r8
  __int64 *v17; // rax
  __int64 *i; // rcx
  __int64 v19; // r14
  __int64 v20; // r12
  int v21; // eax
  int v22; // edx
  __int64 v24; // r9
  unsigned int v25; // ebx
  const char *v26; // r8
  __int64 *v27; // r13
  const char *v28; // rbx
  size_t v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // rcx
  int v32; // r12d
  _QWORD *v33; // rcx
  _QWORD *v34; // rdx
  unsigned int v35; // ecx
  const char *v36; // rax
  _QWORD *v37; // rax
  char *v38; // rdx
  char v39; // bl
  __int64 v40; // r12
  __int64 v41; // rbx
  _QWORD *v42; // rax
  char *v43; // rdx
  int v44; // [rsp+20h] [rbp-E0h]
  int v45; // [rsp+30h] [rbp-D0h]
  char v46; // [rsp+34h] [rbp-CCh]
  unsigned int v48; // [rsp+38h] [rbp-C8h]
  __int64 v49; // [rsp+40h] [rbp-C0h] BYREF
  void *Block; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v53; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+70h] [rbp-90h] BYREF
  void *v55; // [rsp+78h] [rbp-88h]
  __int128 v56; // [rsp+80h] [rbp-80h]
  int v57; // [rsp+90h] [rbp-70h]
  void *v58; // [rsp+98h] [rbp-68h]
  __int128 v59; // [rsp+A0h] [rbp-60h]
  _BYTE v60[364]; // [rsp+B0h] [rbp-50h] BYREF
  int v61; // [rsp+21Ch] [rbp+11Ch]

  v10 = *a3;
  v48 = *a3;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, *a3);
  v49 = v11;
  v12 = *((_QWORD *)a3 + 2);
  v53 = v12;
  sub_140063190(a2, 7);
  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(3299);
  }
  *(_QWORD *)(a2 + 8) = v12 & *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 24) = v10;
  *(_BYTE *)(a2 + 28) = a3[1] == 0;
  *(_QWORD *)(a2 + 32) = -1;
  *(_BYTE *)(a2 + 16) = 0;
  if ( *(_BYTE *)(a1 + 1193) && !v11 )
  {
    sub_140063190(a2, 2);
    v13 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
    if ( v13 != 2 && v13 != 4 )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(3296);
    }
    *(_DWORD *)(a2 + 24) = -1;
    return 1;
  }
  v46 = 1;
  v14 = -1;
  v15 = *(_DWORD *)(a2 + 4);
  v16 = *(__int64 **)(a1 + 1088);
  v17 = (__int64 *)v16[1];
  for ( i = v16; !*((_BYTE *)v17 + 25); v17 = (__int64 *)*v17 )
  {
    if ( *((_DWORD *)v17 + 8) >= v15 )
      i = v17;
    else
      v17 += 2;
  }
  if ( *((_BYTE *)i + 25) || v15 < *((_DWORD *)i + 8) )
    i = *(__int64 **)(a1 + 1088);
  v19 = 0;
  if ( i != v16 )
    v19 = (__int64)(i + 5);
  if ( v19 )
  {
    v14 = *(_QWORD *)(v19 + 56);
    *(_QWORD *)(v19 + 56) = -1;
  }
  if ( v11 )
  {
    *(_BYTE *)(a2 + 16) = (*(_DWORD *)(v11 + 4) & 2) != 0;
    if ( !a4 )
    {
      if ( (*(_BYTE *)(v11 + 4) & 1) != 0 || *(_BYTE *)(a1 + 1194) )
        v46 = 1;
      else
        v46 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, a2, v11);
    }
  }
  v20 = a2 + 40;
  *(_QWORD *)(a2 + 48) = 0;
  v21 = 0;
  v45 = 0;
  if ( v48 <= 0x406D1388 )
  {
    if ( v48 != 1080890248 )
    {
      if ( v48 == 250477286 || v48 == 250608334 )
      {
        if ( a3[6] == 5
          && *((_QWORD *)a3 + 4) == 2
          && *((_QWORD *)a3 + 5) == 3
          && (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 280LL))(
               a1,
               *((_QWORD *)a3 + 7),
               &v54,
               152,
               0) == 152 )
        {
          LOBYTE(v44) = 0;
          return sub_140015610(a1, a2, &v54, 0, v44);
        }
        goto LABEL_122;
      }
      if ( v48 != 1073741854 )
      {
        if ( v48 == 1073741855 )
        {
LABEL_31:
          if ( a4 )
          {
            if ( !v19 )
            {
              if ( byte_1400CB61C )
                __debugbreak();
              sub_14005A480(638);
            }
            v22 = 6;
            if ( v14 != *(_QWORD *)(a2 + 8) )
              v22 = 13;
            sub_140063190(a2, v22);
            goto LABEL_122;
          }
          if ( *(_DWORD *)(a1 + 904) == 2 )
          {
            sub_14000E770(a1, a2, 1u);
            goto LABEL_122;
          }
          if ( *(char *)(a1 + 920) > 0
            && sub_14001E700(a1 + 808, v53)
            && sub_140014230(a1, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 4)) == -1 )
          {
            sub_140043130(
              a1,
              (struct __crt_locale_pointers *)"%a: resuming after DbgBreakPoint(), expecting bpts: %d\n",
              v4,
              (char)--*(_BYTE *)(a1 + 920));
            *(_BYTE *)(a2 + 16) = 1;
            goto LABEL_115;
          }
          v41 = sub_140014230(a1, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 4));
          if ( v41 == -1 )
            goto LABEL_122;
          v42 = (_QWORD *)sub_14001AEF0(a2);
          *v42 = -1;
          if ( v41 == *(_QWORD *)(a2 + 8) )
            v41 = -1;
          v42[1] = v41;
LABEL_121:
          *(_BYTE *)(a2 + 16) = 1;
        }
LABEL_122:
        v21 = v45;
LABEL_123:
        if ( !*(_BYTE *)(a1 + 1194) && (unsigned __int8)sub_140043800(a1, a2, v21, v5) )
          return 0;
        if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
          return 1;
        if ( v11 )
        {
          if ( *(_QWORD *)(a2 + 48) <= 1u )
          {
            v43 = (char *)Str1;
            if ( *(_QWORD *)(v11 + 40) )
              v43 = *(char **)(v11 + 32);
            sub_140002FB0(a2 + 40, v43, *(_QWORD *)(a2 + 8), *((_QWORD *)a3 + 4), *((_QWORD *)a3 + 5));
          }
        }
        else
        {
          sub_140002FB0(a2 + 40, "unknown exception code %X", v48);
        }
        if ( v46 )
          return 1;
        sub_140044000(a1, a2, v11);
        if ( v19 && (*(_BYTE *)(v19 + 48) & 1) != 0 )
        {
          if ( !sub_14001C1D0(v19, 0) )
            sub_140043190(
              a1,
              (struct __crt_locale_pointers *)"%d: (clr_step) SetThreadContext failed",
              *(_DWORD *)(v19 + 32));
          if ( *(_BYTE *)(a2 + 16) )
          {
            sub_140063190(a2, 6);
            return 1;
          }
        }
LABEL_115:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL))(a1, a2);
        return 0;
      }
LABEL_100:
      v39 = v19 && (*(_BYTE *)(v19 + 48) & 1) != 0;
      v40 = sub_1400521E0((_QWORD *)a1, *(unsigned int *)(a2 + 4), v39);
      if ( v40 == -1 )
      {
        if ( v39 )
        {
          sub_140063190(a2, 6);
          *(_BYTE *)(a2 + 16) = 1;
          *(_DWORD *)(v19 + 48) &= ~1u;
        }
        goto LABEL_122;
      }
      sub_140063190(a2, 5);
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 5 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(3298);
      }
      *(_QWORD *)(a2 + 24) = v40;
      *(_QWORD *)(a2 + 32) = -1;
      goto LABEL_121;
    }
    if ( *((_QWORD *)a3 + 4) != 4096 || *((_QWORD *)a3 + 7) )
      goto LABEL_123;
    Block = nullptr;
    v51 = 0;
    v52 = 0;
    Block = sub_14005ABE0((__int64)&Block, nullptr, 0x401u, 1u);
    memset((char *)Block + v51, 0, 1025 - v51);
    v51 = 1025;
    *((_BYTE *)Block + 1024) = 0;
    v24 = v51 - 1;
    if ( !v51 )
      v24 = 0;
    if ( (*(__int64 (__fastcall **)(__int64, _QWORD, void *, __int64, _QWORD))(*(_QWORD *)a1 + 280LL))(
           a1,
           *((_QWORD *)a3 + 5),
           Block,
           v24,
           0) <= 0 )
    {
LABEL_57:
      if ( Block )
      {
        v51 = 0;
        j_free(Block);
      }
      goto LABEL_122;
    }
    v25 = a3[12];
    v26 = Str1;
    if ( v51 )
      v26 = (const char *)Block;
    sub_140002CE0((struct __crt_locale_pointers *)"Thread %d is named '%s'\n", v25, v26);
    v27 = sub_140012840((__int64 **)(a1 + 1088), v25);
    if ( !v27 )
    {
LABEL_56:
      *(_BYTE *)(a2 + 16) = 1;
      v11 = v49;
      goto LABEL_57;
    }
    if ( v51 )
    {
      v28 = (const char *)Block;
      if ( !Block )
        goto LABEL_54;
    }
    else
    {
      v28 = Str1;
    }
    v29 = strlen(v28);
    if ( v29 )
    {
      sub_140001810((__int64)(v27 + 8), v28, v29);
LABEL_55:
      *((_DWORD *)v27 + 12) |= 4u;
      goto LABEL_56;
    }
LABEL_54:
    v27[9] = 0;
    goto LABEL_55;
  }
  if ( v48 == -2147483645 )
    goto LABEL_31;
  if ( v48 == -2147483644 )
    goto LABEL_100;
  if ( v48 != -1073741819 )
    goto LABEL_123;
  v30 = *(_QWORD *)(a1 + 24) & *((_QWORD *)a3 + 5);
  *(_QWORD *)(a2 + 32) = v30;
  sub_140043920((_QWORD *)a1, &v49, v30, 1);
  v31 = v49;
  if ( v49 == *(_QWORD *)(a1 + 472) )
  {
    v30 = *(_QWORD *)(a2 + 8);
    v31 = *sub_140043920((_QWORD *)a1, &v53, v30, 1);
    v49 = v31;
    if ( v31 == *(_QWORD *)(a1 + 472) )
    {
LABEL_90:
      if ( v11 && (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
      {
        v35 = a3[8];
        if ( v35 == 8 )
        {
          v36 = "executed";
        }
        else
        {
          v36 = "read";
          if ( v35 == 1 )
            v36 = "written";
        }
        v38 = (char *)Str1;
        if ( *(_QWORD *)(v11 + 40) )
          v38 = *(char **)(v11 + 32);
        sub_140002FB0(v20, v38, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 32), v36);
      }
      goto LABEL_122;
    }
  }
  v32 = 1;
  v45 = 1;
  if ( sub_14001EB20(v31, v30, a3[8], *(_QWORD *)(a1 + 24) & *((_QWORD *)a3 + 2), *(_DWORD *)(a1 + 800)) )
  {
    v37 = (_QWORD *)sub_14001AEF0(a2);
    *v37 = v30;
    v37[1] = -1;
    *(_BYTE *)(a2 + 16) = 1;
    goto LABEL_122;
  }
  if ( v19 )
  {
    if ( (*(_BYTE *)(v19 + 48) & 1) != 0 )
      v32 = 3;
    v45 = v32;
  }
  v55 = nullptr;
  v56 = 0;
  v58 = nullptr;
  v59 = 0;
  sub_140009FA0((__int64)v60);
  v54 = *(_QWORD *)(v49 + 40);
  v57 = *(_DWORD *)(v49 + 76);
  v61 = *(_DWORD *)(v49 + 56);
  v33 = *(_QWORD **)(a1 + 328);
  v34 = &v33[*(_QWORD *)(a1 + 336)];
  if ( v33 != v34 )
  {
    while ( *(_QWORD *)(v49 + 40) != *v33 )
    {
      if ( ++v33 == v34 )
        goto LABEL_73;
    }
    goto LABEL_85;
  }
LABEL_73:
  if ( !sub_140043D20((void **)a1, &v54, a2, v32) )
  {
LABEL_85:
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      j_free(v58);
      v58 = nullptr;
      *((_QWORD *)&v59 + 1) = 0;
    }
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      j_free(v55);
    }
    v20 = a2 + 40;
    goto LABEL_90;
  }
  if ( (v32 & 2) != 0 )
  {
    sub_140063190(a2, 6);
    *(_BYTE *)(a2 + 16) = 1;
    *(_DWORD *)(v19 + 48) &= ~1u;
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      j_free(v58);
      v58 = nullptr;
      *((_QWORD *)&v59 + 1) = 0;
    }
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      j_free(v55);
    }
    return 1;
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    j_free(v58);
    v58 = nullptr;
    *((_QWORD *)&v59 + 1) = 0;
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    j_free(v55);
  }
  return 0;
}
// 140015878: variable 'v44' is possibly undefined
// 140015D5B: variable 'v4' is possibly undefined
// 140015DCB: variable 'v5' is possibly undefined
// 1400CB61C: using guessed type char byte_1400CB61C;
