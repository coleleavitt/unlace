__int64 __fastcall sub_8E77E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // eax
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // r13d
  _QWORD *v22; // r13
  _QWORD *v23; // rax
  unsigned int **v24; // rax
  int v25; // eax
  __int64 v26; // rbx
  unsigned int v27; // edx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  _QWORD *v32; // rdx
  __int64 v33; // rdi
  unsigned int v34; // edx
  __int64 v35; // r8
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  _QWORD *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rsi
  int v44; // r8d
  int v45; // eax
  _QWORD *v46; // rdx

  v6 = sub_15D27F0(*(_QWORD *)(a1 + 104), **(_QWORD **)(a2 + 8), **(_QWORD **)(a3 + 8));
  if ( (_BYTE)v6 )
    return 1;
  v7 = v6;
  v8 = *(_QWORD *)(a1 + 8784);
  if ( v8 )
  {
    v9 = sub_15D1F10(*(_QWORD *)(*(_QWORD *)v8 + 32LL));
    v10 = sub_15D1F10(*(_QWORD *)a2);
    v11 = *(_QWORD *)(a1 + 8784);
    if ( v9 != v10 )
    {
      v12 = *(_QWORD *)v11;
      v13 = *(_QWORD *)(a1 + 104);
      if ( *(_QWORD *)v11 )
      {
        if ( (*(_DWORD *)(v12 + 8))-- == 1 )
        {
          sub_15D7BC0(v13, v12);
          v13 = *(_QWORD *)(a1 + 104);
        }
      }
      v15 = sub_15E1B70(v13);
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      v11 = *(_QWORD *)(a1 + 8784);
      *(_DWORD *)(v11 + 40) = -1;
      *(_QWORD *)v11 = v15;
    }
  }
  else
  {
    v29 = sub_15E1B70(*(_QWORD *)(a1 + 104));
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    v30 = sub_B3A0B0(*(_QWORD *)(a1 + 104), a1 + 8656, v29);
    *(_QWORD *)(a1 + 8784) = v30;
    v11 = v30;
  }
  *(_QWORD *)(v11 + 112) = a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 8784) + 120LL) = a3;
  v16 = *(_QWORD *)(a1 + 8784);
  v17 = *(_DWORD *)(v16 + 40);
  if ( v17 == -1 )
    v17 = sub_979FE0(a1 + 8712, *(_QWORD *)(a1 + 8784));
  v18 = *(_QWORD *)(a1 + 8728);
  v19 = *(_QWORD *)(v18 + 8LL * v17) & 0xFFFFFFFFFFFFFFF8LL;
  v20 = *(_QWORD *)(v18 + 8LL * v17) & 7LL;
  if ( (_DWORD)v20 == 1 )
  {
    v42 = *(_QWORD *)(*(_QWORD *)(v16 + 120) + 8LL);
    v43 = *(_QWORD *)(*(_QWORD *)(v16 + 112) + 8LL);
    v44 = *(_DWORD *)(*(_QWORD *)v43 + 12LL);
    v45 = (*(_DWORD *)(*(_QWORD *)v42 + 12LL) - v44) ^ (v44 << 8);
    v46 = (_QWORD *)(*(_QWORD *)v19
                   + 16LL
                   * ((((v45 ^ ((v44 - v45) << 16)) + v45 - v44)
                     ^ ((v44 - v45) << 10))
                    & (unsigned int)(*(_DWORD *)(v19 + 20) - 1)));
    if ( (*v46 & 7LL) == 1 )
      return v7;
    while ( 1 )
    {
      v23 = (_QWORD *)v46[1];
      if ( *(_QWORD *)(v23[14] + 8LL) == v43 && *(_QWORD *)(v23[15] + 8LL) == v42 )
        break;
      v46 = (_QWORD *)*v46;
      ++*(_DWORD *)(v19 + 32);
      if ( !v46 )
        return v7;
    }
  }
  else if ( (_DWORD)v20 == 2 )
  {
    v33 = *(_QWORD *)(*(_QWORD *)(v16 + 112) + 8LL);
    v34 = *(_DWORD *)(*(_QWORD *)v33 + 12LL);
    v35 = *(_QWORD *)(*(_QWORD *)(v16 + 120) + 8LL);
    v36 = *(_DWORD *)(*(_QWORD *)v35 + 12LL);
    if ( v36 >= v34 )
    {
      v36 = *(_DWORD *)(*(_QWORD *)v33 + 12LL);
      LOWORD(v34) = *(_DWORD *)(*(_QWORD *)v35 + 12LL);
    }
    v37 = 4097 * ((unsigned __int16)v34 | (v36 << 16)) + 2127912214;
    v38 = 9
        * (((33 * (v37 ^ (v37 >> 19) ^ 0xC761C23C) + 374761393) << 9)
         ^ (33 * (v37 ^ (v37 >> 19) ^ 0xC761C23C) - 369570787))
        - 42973499;
    v39 = (_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL * ((*(_DWORD *)(v19 + 28) - 1) & (v38 ^ HIWORD(v38) ^ 0xB55A4F09)));
    if ( (*v39 & 7LL) == 1 )
      return v7;
    while ( 1 )
    {
      v23 = (_QWORD *)v39[1];
      v40 = *(_QWORD *)(v23[14] + 8LL);
      v41 = *(_QWORD *)(v23[15] + 8LL);
      if ( v33 == v40 && v35 == v41 )
        break;
      if ( v35 == v40 && v33 == v41 )
      {
        **(_BYTE **)v19 = 1;
        goto LABEL_20;
      }
      v39 = (_QWORD *)*v39;
      ++*(_DWORD *)(v19 + 40);
      if ( !v39 )
        return v7;
    }
  }
  else if ( (_DWORD)v20 )
  {
    v21 = *(_DWORD *)(v19 + 20) - 1;
    v22 = (_QWORD *)(*(_QWORD *)v19 + 16LL * ((unsigned int)sub_979080(v19, v16) & v21));
    if ( (*v22 & 7LL) == 1 )
      return v7;
    while ( !(unsigned __int8)sub_9792A0(v19, v22[1], v16) )
    {
      v22 = (_QWORD *)*v22;
      ++*(_DWORD *)(v19 + 32);
      if ( !v22 )
        return v7;
    }
    v23 = (_QWORD *)v22[1];
LABEL_20:
    if ( !v23 )
      return v7;
  }
  else
  {
    v31 = *(_QWORD *)(*(_QWORD *)(v16 + 112) + 8LL);
    v32 = (_QWORD *)(*(_QWORD *)v19
                   + 16LL * (*(_DWORD *)(*(_QWORD *)v31 + 12LL) & (unsigned int)(*(_DWORD *)(v19 + 20) - 1)));
    if ( (*v32 & 7LL) == 1 )
      return v7;
    while ( 1 )
    {
      v23 = (_QWORD *)v32[1];
      if ( v31 == *(_QWORD *)(v23[14] + 8LL) )
        break;
      v32 = (_QWORD *)*v32;
      ++*(_DWORD *)(v19 + 32);
      if ( !v32 )
        return v7;
    }
  }
  v24 = (unsigned int **)v23[1];
  if ( *(unsigned int ***)(a1 + 8648) == v24 )
  {
    if ( dword_1C7EC60 != dword_1C7EC64 )
      return 1;
    return v7;
  }
  v25 = *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * **v24);
  v26 = (unsigned int)(2 * v25);
  if ( dword_1C7EC64 == (_DWORD)v26 )
    return v7;
  if ( (_DWORD)v26 != dword_1C7EC60 )
  {
    v27 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
    if ( v27 > *(_DWORD *)(a1 + 184) )
      v27 = *(_DWORD *)(a1 + 184);
    if ( !v27
      || (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 56LL))(
           *(_QWORD *)(a1 + 7488),
           *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (v25 & 0x7FFFFFFF))) )
    {
      LOBYTE(v7) = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v26) == 0xFF;
    }
    return v7;
  }
  return 1;
}

