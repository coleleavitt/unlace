unsigned __int64 __fastcall sub_36DBC0(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int8 a5)
{
  __int64 v5; // r12
  unsigned int v7; // r8d
  int v8; // ebx
  int v9; // r14d
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v14; // rdx
  int v15; // r8d
  _DWORD *v16; // r12
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rdx
  _DWORD *v20; // rcx
  _DWORD *v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // r8d
  int v26; // edx
  char v27; // al
  int v28; // ecx
  unsigned int v29; // eax
  char v30; // al
  char v31; // al
  int v32; // eax
  unsigned int v33; // [rsp+0h] [rbp-60h]
  __int16 v34; // [rsp+4h] [rbp-5Ch]
  unsigned int v35; // [rsp+4h] [rbp-5Ch]
  int v36; // [rsp+4h] [rbp-5Ch]
  int v37; // [rsp+4h] [rbp-5Ch]
  int v38; // [rsp+4h] [rbp-5Ch]
  __int64 v40; // [rsp+8h] [rbp-58h]
  int v41; // [rsp+8h] [rbp-58h]
  int v42; // [rsp+8h] [rbp-58h]
  __int64 v43; // [rsp+10h] [rbp-50h] BYREF
  char v44; // [rsp+18h] [rbp-48h]
  unsigned __int64 v45; // [rsp+28h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  if ( a2 == a3 )
    return v45 - __readfsqword(0x28u);
  v5 = a2;
  v7 = *(_DWORD *)(a1 + 72);
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  if ( a4 >= 0 && (unsigned __int64)a4 < *(_QWORD *)(a1 + 440) )
  {
    v35 = *(_DWORD *)(a1 + 72);
    LODWORD(v43) = 0;
    get_tinfo_size();
    v9 = 0;
    v25 = v35;
    v26 = 2 * v8;
    if ( (v8 & 0x40000000) == 0 )
    {
      if ( v8 > 0 )
      {
        if ( v35 > 0x10 )
        {
LABEL_56:
          if ( v25 != 176 && v25 != 256 )
          {
LABEL_58:
            v27 = getinf_flag();
            v28 = v9;
            if ( v8 >= v9 )
              v28 = v8;
            if ( v27 )
              goto LABEL_68;
            goto LABEL_61;
          }
LABEL_66:
          v28 = v9;
          if ( v8 >= v9 )
            v28 = v8;
          goto LABEL_68;
        }
LABEL_84:
        v25 = getinf();
        goto LABEL_56;
      }
      if ( v35 > 0x10 )
      {
LABEL_63:
        if ( v25 == 176 || v25 == 256 )
          goto LABEL_61;
        goto LABEL_65;
      }
LABEL_90:
      v25 = getinf();
      goto LABEL_63;
    }
    if ( v35 <= 0x10 )
    {
      v32 = getinf();
      v26 = 2 * v8;
      if ( v32 == 176 || v32 == 256 )
      {
        if ( v8 > v26 )
        {
LABEL_83:
          v9 = v26;
          goto LABEL_84;
        }
LABEL_89:
        v9 = v26;
        goto LABEL_90;
      }
      v25 = v35;
    }
    else if ( v35 == 256 || v35 == 176 )
    {
      v28 = v8;
      if ( v8 <= v26 )
        v26 = v8;
      v9 = v26;
      goto LABEL_68;
    }
    v33 = v25;
    v38 = v26;
    v31 = getinf_flag();
    v28 = 0;
    if ( v8 >= 0 )
      v28 = v8;
    if ( v31 )
      goto LABEL_68;
    v26 = v38;
    if ( v8 > v38 )
    {
      v9 = v38;
      if ( v33 > 0x10 )
        goto LABEL_58;
      goto LABEL_83;
    }
    v9 = v38;
    if ( v33 > 0x10 )
    {
LABEL_65:
      if ( (unsigned __int8)getinf_flag() )
        goto LABEL_66;
LABEL_61:
      v28 = v8;
      v9 = v8;
LABEL_68:
      v29 = *(_DWORD *)(a1 + 72);
      if ( v29 <= 0x10 )
      {
        v37 = v28;
        v29 = getinf();
        v28 = v37;
      }
      if ( v29 == 176 || v29 == 256 || (v36 = v28, v30 = getinf_flag(), v28 = v36, v30) )
      {
        v8 = v28;
      }
      else
      {
        v9 = v8;
        v8 = v36;
      }
      goto LABEL_50;
    }
    goto LABEL_89;
  }
  if ( v7 <= 0x10 )
  {
    v7 = getinf();
    if ( v7 != 176 )
      goto LABEL_6;
  }
  else if ( v7 != 176 )
  {
LABEL_6:
    if ( v7 != 256 )
    {
      v9 = v8;
      if ( !(unsigned __int8)getinf_flag() )
      {
LABEL_50:
        v34 = 8 * a5;
        goto LABEL_9;
      }
    }
  }
  if ( a5 )
  {
    v34 = 8;
    v9 = v8;
  }
  else
  {
    v34 = 0;
    v9 = 1;
  }
LABEL_9:
  while ( *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL) > *(_DWORD *)(a1 + 464) )
  {
    if ( v9 < v8 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(a1 + 72);
        if ( v11 <= 0x10 )
          v11 = getinf();
        v10 = v11 == 176 || v11 == 256 || (unsigned __int8)getinf_flag() ? a3 - v8 : a3;
        v40 = -v8 & (unsigned __int64)(v5 + v8 - 1);
        if ( v10 >= v40 )
          break;
        v8 /= 2;
        if ( v8 <= v9 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      v40 = (v8 - 1 + v5) & -v8;
    }
    if ( a3 <= v40 )
    {
      if ( *(_QWORD *)(a1 + 144) != v5 || a3 <= v5 )
        return v45 - __readfsqword(0x28u);
      v40 = v5;
      v8 = round_down_power2();
    }
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL) && v40 + v8 > a3 )
    {
      v12 = *(_DWORD *)(a1 + 72);
      if ( v12 <= 0x10 )
        v12 = getinf();
      if ( v12 != 176 && v12 != 256 && !(unsigned __int8)getinf_flag() )
        break;
    }
    v14 = *(_QWORD *)(a1 + 40);
    v44 = 5;
    v43 = v40;
    v15 = sub_1F06E0((__int64 *)(a1 + 432), (__int64)&v43, v14);
    if ( v15 == -1 )
    {
      v43 = 0;
      v41 = sub_232C90(a1, v40, v8, (__int64)&v43, 0, *(_QWORD *)(a1 + 40), v34, nullptr);
      clear_tinfo_t();
      v15 = v41;
    }
    v16 = (_DWORD *)(*(_QWORD *)(a1 + 432) + 104LL * v15);
    v17 = v16[6];
    if ( (v17 & 0x100) == 0 )
    {
      v16[6] = v17 & 0xFFE7FEFF | 0x80100;
      v18 = *(_QWORD *)(a1 + 456);
      v19 = *(_QWORD *)(a1 + 464);
      v20 = (_DWORD *)(v18 + 4 * v19);
      if ( (_DWORD *)v18 != v20 )
      {
        v21 = *(_DWORD **)(a1 + 456);
        while ( v15 != *v21 )
        {
          if ( v20 == ++v21 )
            goto LABEL_45;
        }
        if ( v21 != v20 )
        {
          if ( !under_debugger )
            sub_383060(51603);
          BUG();
        }
      }
LABEL_45:
      v22 = v19 + 1;
      if ( *(_QWORD *)(a1 + 472) < v22 )
      {
        v42 = v15;
        v23 = qvector_reserve(a1 + 456, v18, v22, 4);
        v24 = *(_QWORD *)(a1 + 464);
        v15 = v42;
        *(_QWORD *)(a1 + 456) = v23;
        v20 = (_DWORD *)(v23 + 4 * v24);
      }
      *v20 = v15;
      ++*(_QWORD *)(a1 + 464);
    }
    v5 = (int)sub_1C35C0(v16, v16[22]);
  }
  return v45 - __readfsqword(0x28u);
}
