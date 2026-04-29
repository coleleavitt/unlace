unsigned __int64 __fastcall sub_36E100(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int8 a5)
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
  _DWORD *v18; // rsi
  __int64 v19; // rdx
  _DWORD *v20; // rcx
  _DWORD *v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // r8d
  int v29; // edx
  char v30; // al
  int v31; // ecx
  unsigned int v32; // eax
  char v33; // al
  char v34; // al
  int v35; // eax
  unsigned int v36; // [rsp+0h] [rbp-60h]
  __int16 v37; // [rsp+4h] [rbp-5Ch]
  unsigned int v38; // [rsp+4h] [rbp-5Ch]
  int v39; // [rsp+4h] [rbp-5Ch]
  int v40; // [rsp+4h] [rbp-5Ch]
  int v41; // [rsp+4h] [rbp-5Ch]
  __int64 v43; // [rsp+8h] [rbp-58h]
  int v44; // [rsp+8h] [rbp-58h]
  int v45; // [rsp+8h] [rbp-58h]
  __int64 v46; // [rsp+10h] [rbp-50h] BYREF
  char v47; // [rsp+18h] [rbp-48h]
  unsigned __int64 v48; // [rsp+28h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  if ( a2 == a3 )
    return v48 - __readfsqword(0x28u);
  v5 = a2;
  v7 = *(_DWORD *)(a1 + 72);
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  if ( a4 >= 0 && (unsigned __int64)a4 < *(_QWORD *)(a1 + 440) )
  {
    v38 = *(_DWORD *)(a1 + 72);
    v25 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 104LL * a4 + 80);
    LODWORD(v46) = 0;
    get_tinfo_size(&v46, v25, 0);
    v9 = v46;
    v28 = v38;
    if ( ((unsigned int)v46 & ((_DWORD)v46 - 1)) != 0 )
      sub_36A320((__int64)&v46, v25, v26, v27, v38);
    v29 = 2 * v8;
    if ( (int)v46 <= 2 * v8 )
    {
      if ( v8 > (int)v46 )
      {
        if ( v38 > 0x10 )
        {
LABEL_57:
          if ( v28 != 176 && v28 != 256 )
          {
LABEL_59:
            v30 = getinf_flag(67, 2);
            v31 = v9;
            if ( v8 >= v9 )
              v31 = v8;
            if ( v30 )
              goto LABEL_69;
            goto LABEL_62;
          }
LABEL_67:
          v31 = v9;
          if ( v8 >= v9 )
            v31 = v8;
          goto LABEL_69;
        }
LABEL_85:
        v28 = getinf(99);
        goto LABEL_57;
      }
      if ( v38 > 0x10 )
      {
LABEL_64:
        if ( v28 == 176 || v28 == 256 )
          goto LABEL_62;
        goto LABEL_66;
      }
LABEL_91:
      v28 = getinf(99);
      goto LABEL_64;
    }
    if ( v38 <= 0x10 )
    {
      v35 = getinf(99);
      v29 = 2 * v8;
      if ( v35 == 176 || v35 == 256 )
      {
        if ( v8 > v29 )
        {
LABEL_84:
          v9 = v29;
          goto LABEL_85;
        }
LABEL_90:
        v9 = v29;
        goto LABEL_91;
      }
      v28 = v38;
    }
    else if ( v38 == 256 || v38 == 176 )
    {
      v31 = v8;
      if ( v8 <= v29 )
        v29 = v8;
      v9 = v29;
      goto LABEL_69;
    }
    v36 = v28;
    v41 = v29;
    v34 = getinf_flag(67, 512);
    v31 = v9;
    if ( v8 >= v9 )
      v31 = v8;
    if ( v34 )
      goto LABEL_69;
    v29 = v41;
    if ( v8 > v41 )
    {
      v9 = v41;
      if ( v36 > 0x10 )
        goto LABEL_59;
      goto LABEL_84;
    }
    v9 = v41;
    if ( v36 > 0x10 )
    {
LABEL_66:
      if ( (unsigned __int8)getinf_flag(67, 4) )
        goto LABEL_67;
LABEL_62:
      v31 = v8;
      v9 = v8;
LABEL_69:
      v32 = *(_DWORD *)(a1 + 72);
      if ( v32 <= 0x10 )
      {
        v40 = v31;
        v32 = getinf(99);
        v31 = v40;
      }
      if ( v32 == 176 || v32 == 256 || (v39 = v31, v33 = getinf_flag(67, 2), v31 = v39, v33) )
      {
        v8 = v31;
      }
      else
      {
        v9 = v8;
        v8 = v39;
      }
      goto LABEL_50;
    }
    goto LABEL_90;
  }
  if ( v7 <= 0x10 )
  {
    v7 = getinf(99);
    if ( v7 != 176 )
      goto LABEL_6;
  }
  else if ( v7 != 176 )
  {
LABEL_6:
    if ( v7 != 256 )
    {
      v9 = v8;
      if ( !(unsigned __int8)getinf_flag(67, 2) )
      {
LABEL_50:
        v37 = 8 * a5;
        goto LABEL_9;
      }
    }
  }
  if ( a5 )
  {
    v37 = 8;
    v9 = v8;
  }
  else
  {
    v37 = 0;
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
          v11 = getinf(99);
        v10 = v11 == 176 || v11 == 256 || (unsigned __int8)getinf_flag(67, 2) ? a3 - v8 : a3;
        v43 = -v8 & (unsigned __int64)(v5 + v8 - 1);
        if ( v10 >= v43 )
          break;
        v8 /= 2;
        if ( v8 <= v9 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      v43 = (v8 - 1 + v5) & -v8;
    }
    if ( a3 <= v43 )
    {
      if ( *(_QWORD *)(a1 + 144) != v5 || a3 <= v5 )
        return v48 - __readfsqword(0x28u);
      v43 = v5;
      v8 = round_down_power2((unsigned int)(a3 - v5));
    }
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL) && v43 + v8 > a3 )
    {
      v12 = *(_DWORD *)(a1 + 72);
      if ( v12 <= 0x10 )
        v12 = getinf(99);
      if ( v12 != 176 && v12 != 256 && !(unsigned __int8)getinf_flag(67, 2) )
        break;
    }
    v14 = *(_QWORD *)(a1 + 40);
    v47 = 5;
    v46 = v43;
    v15 = sub_1F0AA0((__int64 *)(a1 + 432), (__int64)&v46, v14);
    if ( v15 == -1 )
    {
      v46 = 0;
      v44 = sub_233050(a1, v43, v8, (__int64)&v46, 0, *(_QWORD *)(a1 + 40), v37, nullptr);
      clear_tinfo_t(&v46);
      v15 = v44;
    }
    v16 = (_DWORD *)(*(_QWORD *)(a1 + 432) + 104LL * v15);
    v17 = v16[6];
    if ( (v17 & 0x100) == 0 )
    {
      v16[6] = v17 & 0xFFE7FEFF | 0x80100;
      v18 = *(_DWORD **)(a1 + 456);
      v19 = *(_QWORD *)(a1 + 464);
      v20 = &v18[v19];
      if ( v18 != v20 )
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
            sub_3835A0(51603);
          BUG();
        }
      }
LABEL_45:
      v22 = v19 + 1;
      if ( *(_QWORD *)(a1 + 472) < v22 )
      {
        v45 = v15;
        v23 = qvector_reserve(a1 + 456, v18, v22, 4);
        v24 = *(_QWORD *)(a1 + 464);
        v15 = v45;
        *(_QWORD *)(a1 + 456) = v23;
        v20 = (_DWORD *)(v23 + 4 * v24);
      }
      *v20 = v15;
      ++*(_QWORD *)(a1 + 464);
    }
    v5 = (int)sub_1C3000(v16, v16[22]);
  }
  return v48 - __readfsqword(0x28u);
}
