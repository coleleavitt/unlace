__int64 __fastcall sub_22CE40(_QWORD *a1, unsigned __int64 a2, int a3, __int64 *a4, char a5)
{
  int v6; // r13d
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  int v9; // r13d
  __int64 v10; // rbx
  _DWORD *v11; // r15
  __int64 v12; // r8
  int v13; // r15d
  __int64 v14; // rdi
  int v15; // eax
  unsigned int v16; // eax
  _DWORD *v17; // r11
  _QWORD *v18; // rdi
  char v19; // al
  char v20; // dl
  unsigned int v21; // eax
  unsigned __int64 v23; // rcx
  signed int v24; // ecx
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 *v27; // rsi
  unsigned __int64 v28; // rcx
  int v29; // [rsp+8h] [rbp-98h]
  _DWORD *v30; // [rsp+8h] [rbp-98h]
  int v31; // [rsp+10h] [rbp-90h]
  unsigned int v32; // [rsp+10h] [rbp-90h]
  unsigned __int64 v34; // [rsp+18h] [rbp-88h]
  unsigned int v35; // [rsp+18h] [rbp-88h]
  __int64 v36; // [rsp+18h] [rbp-88h]
  int v37; // [rsp+28h] [rbp-78h] BYREF
  int v38; // [rsp+2Ch] [rbp-74h] BYREF
  __int64 v39; // [rsp+30h] [rbp-70h] BYREF
  int v40; // [rsp+38h] [rbp-68h] BYREF
  _QWORD *v41; // [rsp+40h] [rbp-60h]
  int *v42; // [rsp+48h] [rbp-58h]
  int *v43; // [rsp+50h] [rbp-50h]
  __int64 v44; // [rsp+58h] [rbp-48h]
  unsigned __int64 v45; // [rsp+68h] [rbp-38h]

  v6 = a3;
  v7 = a2;
  v8 = (__int64)a1;
  v45 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_223780((__int64)a1, a2, a3, 1u) )
    return 0;
  if ( !a4 || !(unsigned __int8)*a4 || v6 != get_tinfo_size(0, *a4, 0) )
    a4 = nullptr;
  if ( a1[55] )
  {
    v29 = v6;
    v9 = 0;
    v10 = 0;
    v31 = -1;
    v34 = 0;
    do
    {
      v11 = (_DWORD *)(v10 + a1[54]);
      if ( (unsigned int)(*v11 - 3) > 1 )
      {
        v12 = (unsigned int)v11[22];
        if ( (int)v12 > v9 )
        {
          if ( (unsigned int)sub_1BE930((__int64)v11, a1[187], a2, 1, v12, nullptr, nullptr) )
          {
            v9 = v11[22];
            v31 = v34;
          }
        }
      }
      ++v34;
      v10 += 104;
    }
    while ( v34 < a1[55] );
    v13 = v31;
    v8 = (__int64)a1;
    v40 = 0;
    v41 = nullptr;
    v6 = v29;
    v42 = &v40;
    v43 = &v40;
    v44 = 0;
    if ( v31 == -1 )
      goto LABEL_17;
    v14 = a1[54] + 104LL * v31;
    if ( *(_DWORD *)v14 != 1 )
    {
      if ( *(_DWORD *)v14 == 2 )
      {
        v15 = sub_1BE930(v14, *(_QWORD *)(v8 + 1496), a2, v29, *(unsigned int *)(v14 + 88), &v37, &v38);
        if ( v38 < 0 || v29 > v15 )
          goto LABEL_39;
        goto LABEL_17;
      }
      if ( !under_debugger )
        sub_37CFE0(51031);
LABEL_73:
      BUG();
    }
    if ( !v29
      || (v23 = *(_QWORD *)(v14 + 8), v36 = v23, *(_DWORD *)(v14 + 88))
      && a2 >= v23
      && *(int *)(v14 + 88) + v23 - 1 >= a2 + v29 - 1 )
    {
LABEL_17:
      v32 = -1;
      goto LABEL_18;
    }
    v24 = v29 + a2 - v23;
    v32 = v24;
    if ( v29 != v24 )
      a4 = nullptr;
    if ( !(unsigned __int8)sub_228300(v8, &v39, v13, v24, a4) )
      goto LABEL_39;
    if ( (__int64)(a2 - v36) < 0 )
    {
      if ( !under_debugger )
        sub_37CFE0(50321);
      goto LABEL_73;
    }
    v6 = a2 - v36 + v29;
    if ( (*(_BYTE *)(v8 + 2) & 4) != 0
      && v44
      && sub_1CAED0((_QWORD *)v8, v36) >= 0
      && !(unsigned __int8)sub_1E96A0((unsigned __int8 *)v8) )
    {
      if ( !under_debugger )
        sub_37CFE0(51079);
      goto LABEL_73;
    }
    v7 = v36;
  }
  else
  {
    v40 = 0;
    v13 = -1;
    v41 = nullptr;
    v42 = &v40;
    v43 = &v40;
    v44 = 0;
    v32 = -1;
  }
LABEL_18:
  v16 = sub_22B630(v8, v7, v6, a4, a5, nullptr);
  v35 = v16;
  if ( v16 )
  {
    if ( v16 - 1 > 1 )
    {
LABEL_39:
      v35 = 0;
      goto LABEL_27;
    }
    *(_DWORD *)v8 |= 0x8000000u;
    if ( v32 == -1 )
      goto LABEL_27;
    if ( (a5 & 1) == 0 )
      goto LABEL_27;
    v17 = (_DWORD *)(*(_QWORD *)(v8 + 432) + 104LL * v13);
    if ( *v17 != 1 )
      goto LABEL_27;
  }
  else if ( v32 == -1 || (a5 & 1) == 0 || (v17 = (_DWORD *)(*(_QWORD *)(v8 + 432) + 104LL * v13), *v17 != 1) )
  {
    v21 = *(_DWORD *)v8;
    goto LABEL_44;
  }
  v18 = *(_QWORD **)(*(_QWORD *)(v8 + 1496) + 872LL);
  if ( v18 )
  {
    v30 = v17;
    v19 = sub_203170(v18, v13, v32);
    v17 = v30;
    if ( !v19 )
      goto LABEL_39;
  }
  v20 = sub_22CCD0(v8, (__int64)&v39, (__int64)v17, v32, a4, a5);
  v21 = *(_DWORD *)v8 & 0xFFDFFFFF;
  if ( !v20 )
  {
    *(_DWORD *)v8 = v21;
    if ( v35 )
      goto LABEL_27;
LABEL_44:
    if ( (v21 & 0x10000) == 0 && (unsigned int)sub_223C20((_QWORD *)(v8 + 432), *(_QWORD *)(v8 + 1504), v7, v6) == -1 )
    {
      v25 = *(__int64 **)(v8 + 816);
      if ( v25 )
      {
        v26 = 24;
        v27 = (__int64 *)(*v25 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v27 )
        {
          while ( (*(_BYTE *)v27 & 2) == 0 )
          {
            while ( 1 )
            {
              v28 = v27[3];
              v26 = (__int64)(v27 + 3);
              if ( v7 >= v28 )
                break;
              v27 = (__int64 *)v27[1];
              if ( (*(_BYTE *)v27 & 2) != 0 )
                goto LABEL_45;
            }
            if ( v28 >= v7 )
            {
              if ( v27 == v25 )
                break;
              goto LABEL_62;
            }
            v27 = (__int64 *)v27[2];
          }
        }
        else
        {
LABEL_62:
          if ( (unsigned __int64)v6 < *(_QWORD *)(v26 + 8) )
            sub_2299A0((unsigned __int64 **)(v8 + 816), v27);
        }
      }
    }
LABEL_45:
    v35 = -1;
    goto LABEL_27;
  }
  *(_DWORD *)v8 = v21;
  v35 = 2;
LABEL_27:
  sub_221C90(v41);
  return v35;
}
