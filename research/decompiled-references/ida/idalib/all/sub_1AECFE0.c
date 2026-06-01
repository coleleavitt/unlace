__int64 __fastcall sub_1AECFE0(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // r11
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // r11
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r11
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // r11
  __int64 result; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rcx
  _QWORD *v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // rax
  _QWORD *v39; // rdx
  _QWORD *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // rcx

  v2 = a1;
  v3 = a2;
  v4 = (a2 - a1) >> 3;
  if ( (a2 - a1) >> 5 <= 0 )
  {
LABEL_10:
    if ( v4 == 2 )
      goto LABEL_53;
    if ( v4 != 3 )
    {
      if ( v4 != 1 )
        return v3;
LABEL_20:
      v21 = *(_QWORD **)(*(_QWORD *)v2 + 40LL);
      v22 = v21 + 2;
      v23 = *(unsigned int *)v21;
      v24 = (__int64)&v21[v23 + 2];
      v25 = (v23 * 8) >> 5;
      if ( v25 )
      {
        if ( *(_DWORD *)(v21[2] + 8LL) == 88 )
        {
          v28 = v21 + 2;
          goto LABEL_70;
        }
        if ( *(_DWORD *)(v21[3] + 8LL) == 88 )
        {
          v28 = v21 + 3;
          goto LABEL_70;
        }
        if ( *(_DWORD *)(v21[4] + 8LL) == 88 )
        {
          v28 = v21 + 4;
          goto LABEL_70;
        }
        v26 = v21[5];
        v27 = (__int64)&v21[4 * v25 + 2];
        v28 = v21 + 5;
        if ( *(_DWORD *)(v26 + 8) == 88 )
        {
LABEL_70:
          result = v2;
          if ( (_QWORD *)v24 == v28 )
            return v3;
          return result;
        }
        while ( 1 )
        {
          v28 = v22 + 4;
          if ( (_QWORD *)v27 == v22 + 4 )
            break;
          if ( *(_DWORD *)(v22[4] + 8LL) == 88 )
            goto LABEL_70;
          if ( *(_DWORD *)(v22[5] + 8LL) == 88 )
          {
            v28 = v22 + 5;
            goto LABEL_70;
          }
          if ( *(_DWORD *)(v22[6] + 8LL) == 88 )
          {
            v28 = v22 + 6;
            goto LABEL_70;
          }
          if ( *(_DWORD *)(v22[7] + 8LL) == 88 )
          {
            v28 = v22 + 7;
            goto LABEL_70;
          }
          v22 += 4;
        }
      }
      else
      {
        v28 = v21 + 2;
      }
      v29 = (v24 - (__int64)v28) >> 3;
      if ( v29 != 2 )
      {
        if ( v29 != 3 )
        {
          if ( v29 != 1 )
            return v3;
          goto LABEL_35;
        }
        if ( *(_DWORD *)(*v28 + 8LL) == 88 )
          goto LABEL_70;
        ++v28;
      }
      if ( *(_DWORD *)(*v28 + 8LL) == 88 )
        goto LABEL_70;
      ++v28;
LABEL_35:
      result = v3;
      if ( *(_DWORD *)(*v28 + 8LL) != 88 )
        return result;
      goto LABEL_70;
    }
    v30 = *(_QWORD **)(*(_QWORD *)v2 + 40LL);
    v31 = v30 + 2;
    v32 = *(unsigned int *)v30;
    v33 = (__int64)&v30[v32 + 2];
    v34 = (v32 * 8) >> 5;
    if ( v34 )
    {
      if ( *(_DWORD *)(v30[2] + 8LL) == 88 )
      {
        v37 = v30 + 2;
        goto LABEL_77;
      }
      if ( *(_DWORD *)(v30[3] + 8LL) == 88 )
      {
        v37 = v30 + 3;
        goto LABEL_77;
      }
      if ( *(_DWORD *)(v30[4] + 8LL) == 88 )
      {
        v37 = v30 + 4;
        goto LABEL_77;
      }
      v35 = v30[5];
      v36 = (__int64)&v30[4 * v34 + 2];
      v37 = v30 + 5;
      if ( *(_DWORD *)(v35 + 8) == 88 )
      {
LABEL_77:
        result = v2;
        if ( (_QWORD *)v33 != v37 )
          return result;
        goto LABEL_52;
      }
      while ( 1 )
      {
        v37 = v31 + 4;
        if ( (_QWORD *)v36 == v31 + 4 )
          break;
        if ( *(_DWORD *)(v31[4] + 8LL) == 88 )
          goto LABEL_77;
        if ( *(_DWORD *)(v31[5] + 8LL) == 88 )
        {
          v37 = v31 + 5;
          goto LABEL_77;
        }
        if ( *(_DWORD *)(v31[6] + 8LL) == 88 )
        {
          v37 = v31 + 6;
          goto LABEL_77;
        }
        if ( *(_DWORD *)(v31[7] + 8LL) == 88 )
        {
          v37 = v31 + 7;
          goto LABEL_77;
        }
        v31 += 4;
      }
    }
    else
    {
      v37 = v30 + 2;
    }
    v38 = (v33 - (__int64)v37) >> 3;
    if ( v38 != 2 )
    {
      if ( v38 != 3 )
      {
        if ( v38 != 1 )
          goto LABEL_52;
        goto LABEL_98;
      }
      if ( *(_DWORD *)(*v37 + 8LL) == 88 )
        goto LABEL_77;
      ++v37;
    }
    if ( *(_DWORD *)(*v37 + 8LL) == 88 )
      goto LABEL_77;
    ++v37;
LABEL_98:
    if ( *(_DWORD *)(*v37 + 8LL) == 88 )
      goto LABEL_77;
LABEL_52:
    v2 += 8;
LABEL_53:
    v39 = *(_QWORD **)(*(_QWORD *)v2 + 40LL);
    v40 = v39 + 2;
    v41 = *(unsigned int *)v39;
    v42 = (__int64)&v39[v41 + 2];
    v43 = (v41 * 8) >> 5;
    if ( v43 )
    {
      if ( *(_DWORD *)(v39[2] + 8LL) == 88 )
      {
        v19 = v39 + 2;
        goto LABEL_74;
      }
      if ( *(_DWORD *)(v39[3] + 8LL) == 88 )
      {
        v19 = v39 + 3;
        goto LABEL_74;
      }
      if ( *(_DWORD *)(v39[4] + 8LL) == 88 )
      {
        v19 = v39 + 4;
        goto LABEL_74;
      }
      v44 = v39[5];
      v45 = (__int64)&v39[4 * v43 + 2];
      v19 = v39 + 5;
      if ( *(_DWORD *)(v44 + 8) == 88 )
      {
LABEL_74:
        result = v2;
        if ( (_QWORD *)v42 != v19 )
          return result;
        goto LABEL_19;
      }
      while ( 1 )
      {
        v19 = v40 + 4;
        if ( (_QWORD *)v45 == v40 + 4 )
          break;
        if ( *(_DWORD *)(v40[4] + 8LL) == 88 )
          goto LABEL_74;
        if ( *(_DWORD *)(v40[5] + 8LL) == 88 )
        {
          v19 = v40 + 5;
          goto LABEL_74;
        }
        if ( *(_DWORD *)(v40[6] + 8LL) == 88 )
        {
          v19 = v40 + 6;
          goto LABEL_74;
        }
        if ( *(_DWORD *)(v40[7] + 8LL) == 88 )
        {
          v19 = v40 + 7;
          goto LABEL_74;
        }
        v40 += 4;
      }
    }
    else
    {
      v19 = v39 + 2;
    }
    v20 = (v42 - (__int64)v19) >> 3;
    if ( v20 != 2 )
    {
      if ( v20 != 3 )
      {
        if ( v20 != 1 )
          goto LABEL_19;
        goto LABEL_18;
      }
      if ( *(_DWORD *)(*v19 + 8LL) == 88 )
        goto LABEL_74;
      ++v19;
    }
    if ( *(_DWORD *)(*v19 + 8LL) == 88 )
      goto LABEL_74;
    ++v19;
LABEL_18:
    if ( *(_DWORD *)(*v19 + 8LL) == 88 )
      goto LABEL_74;
LABEL_19:
    v2 += 8;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v15 = sub_1AE8FD0(
            (_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 40LL) + 16LL),
            *(_QWORD *)(*(_QWORD *)v2 + 40LL) + 8LL * **(unsigned int **)(*(_QWORD *)v2 + 40LL) + 16);
    if ( v17 != v15 )
      return v16;
    v5 = sub_1AE8FD0(
           (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 40LL) + 16LL),
           *(_QWORD *)(*(_QWORD *)(v16 + 8) + 40LL) + 8LL * **(unsigned int **)(*(_QWORD *)(v16 + 8) + 40LL) + 16);
    if ( v7 != v5 )
      return v6 + 8;
    v8 = sub_1AE8FD0(
           (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 40LL) + 16LL),
           *(_QWORD *)(*(_QWORD *)(v6 + 16) + 40LL) + 8LL * **(unsigned int **)(*(_QWORD *)(v6 + 16) + 40LL) + 16);
    if ( v10 != v8 )
      return v9 + 16;
    v11 = sub_1AE8FD0(
            (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 40LL) + 16LL),
            *(_QWORD *)(*(_QWORD *)(v9 + 24) + 40LL) + 8LL * **(unsigned int **)(*(_QWORD *)(v9 + 24) + 40LL) + 16);
    if ( v14 != v11 )
      return v12 + 24;
    v2 = v12 + 32;
    if ( v13 == v2 )
    {
      v4 = (v3 - v2) >> 3;
      goto LABEL_10;
    }
  }
}
