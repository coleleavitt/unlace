__int64 __fastcall sub_D17A0(__int64 a1, __int64 *a2, unsigned int a3, signed int a4, char a5)
{
  int v9; // edx
  unsigned int v11; // r13d
  __int64 v13; // rdx
  _DWORD *v14; // rbx
  int v15; // edx
  _DWORD *v16; // rsi
  _DWORD *v17; // rcx
  _DWORD *v18; // rax
  _DWORD *v19; // rsi
  _DWORD *v20; // rcx
  _DWORD *v21; // rax
  __int64 v22; // rsi
  unsigned int v23; // eax
  __int64 v24; // rdi
  unsigned int v25; // eax
  _DWORD *v26; // rsi
  _DWORD *v27; // rcx
  _DWORD *v28; // rax
  int v29; // r14d
  unsigned int v30; // eax
  _DWORD *v31; // rdi
  _DWORD *v32; // rcx
  _DWORD *v33; // rax
  _DWORD *v34; // [rsp+0h] [rbp-48h] BYREF
  __int128 v35; // [rsp+8h] [rbp-40h]
  unsigned __int64 v36; // [rsp+18h] [rbp-30h]

  v9 = *(_DWORD *)a2;
  v36 = __readfsqword(0x28u);
  if ( (unsigned int)(v9 - 3) > 1 )
  {
    v11 = 0;
    if ( v9 != 2 )
      return v11;
    v13 = a2[1];
    if ( !*(_QWORD *)(v13 + 8) || (unsigned int)(**(_DWORD **)v13 - 3) > 1 )
      return v11;
  }
  v35 = 0;
  v34 = nullptr;
  sub_CDFE0(a1, (__int64 *)&v34, a2, a3, a5);
  v14 = v34;
  if ( !(_QWORD)v35 )
    goto LABEL_35;
  v15 = *v34;
  if ( a5 )
  {
    v16 = *(_DWORD **)(a1 + 8);
    v17 = &v16[*(_QWORD *)(a1 + 16)];
    if ( v16 == v17 )
      goto LABEL_14;
    v18 = *(_DWORD **)(a1 + 8);
    while ( v15 != *v18 )
    {
      if ( v17 == ++v18 )
        goto LABEL_14;
    }
    if ( v17 == v18 || (v11 = v18 - v16, v11 == -1) )
    {
LABEL_14:
      v19 = *(_DWORD **)(a1 + 32);
      v20 = &v19[*(_QWORD *)(a1 + 40)];
      v21 = v19;
      if ( v19 == v20 )
        goto LABEL_46;
      while ( v15 != *v21 )
      {
        if ( v20 == ++v21 )
          goto LABEL_46;
      }
      if ( v20 == v21 )
        goto LABEL_46;
      v11 = v21 - v19;
      if ( v11 == -1 )
        goto LABEL_46;
      if ( *(_DWORD *)a1 != 3 )
      {
LABEL_21:
        v22 = *(_QWORD *)(a1 + 120);
        goto LABEL_22;
      }
      goto LABEL_64;
    }
  }
  else
  {
    v26 = *(_DWORD **)(a1 + 88);
    v27 = &v26[*(_QWORD *)(a1 + 96)];
    if ( v26 == v27 )
      goto LABEL_57;
    v28 = *(_DWORD **)(a1 + 88);
    while ( v15 != *v28 )
    {
      if ( v27 == ++v28 )
        goto LABEL_57;
    }
    if ( v27 == v28 || (v11 = v28 - v26, v11 == -1) )
    {
LABEL_57:
      v31 = *(_DWORD **)(a1 + 112);
      v22 = *(_QWORD *)(a1 + 120);
      v32 = &v31[v22];
      if ( v31 == v32 )
        goto LABEL_46;
      v33 = *(_DWORD **)(a1 + 112);
      while ( v15 != *v33 )
      {
        if ( v32 == ++v33 )
          goto LABEL_46;
      }
      if ( v32 == v33 )
        goto LABEL_46;
      v11 = v33 - v31;
      if ( v11 == -1 )
        goto LABEL_46;
      if ( *(_DWORD *)a1 != 3 )
      {
LABEL_22:
        if ( v22 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 200LL))(
                 *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                 **(unsigned int **)(a1 + 112)) )
          {
            v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 80) + 112LL) + 32LL))(
                    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                    **(unsigned int **)(a1 + 112));
          }
          else
          {
            v23 = 8;
          }
          if ( *(_QWORD *)(a1 + 120) > 1u )
          {
            v24 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4LL) - **(_DWORD **)(a1 + 112));
            if ( (unsigned int)v24 < v23 )
              v23 = round_down_power2(v24);
          }
        }
        else
        {
          v23 = 8;
        }
        if ( a4 > (int)v23 )
        {
          v25 = *(_DWORD *)(a1 + 72);
          if ( v25 <= 0x10 )
            v25 = getinf(99);
          if ( v25 != 176 && v25 != 256 && (unsigned __int8)getinf_flag(67, 4) )
          {
            LOBYTE(v11) = ((v11 + 1) & 0xFFFFFFFE) == v11;
            goto LABEL_36;
          }
        }
        goto LABEL_46;
      }
      goto LABEL_64;
    }
  }
  if ( *(_DWORD *)a1 == 3 )
  {
LABEL_64:
    if ( a4 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL) )
      goto LABEL_21;
    v29 = v11;
    goto LABEL_49;
  }
  if ( a4 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL) )
    goto LABEL_46;
  v29 = -1;
LABEL_49:
  v30 = *(_DWORD *)(a1 + 72);
  if ( v30 <= 0x10 )
    v30 = getinf(99);
  if ( v30 != 176 && v30 != 256 && (unsigned __int8)getinf_flag(67, 4) && ((v11 + 1) & 0xFFFFFFFE) != v11 )
  {
LABEL_35:
    v11 = 0;
    goto LABEL_36;
  }
  if ( v29 != -1 )
  {
    v22 = *(_QWORD *)(a1 + 120);
    v11 = v29;
    goto LABEL_22;
  }
LABEL_46:
  v11 = 1;
LABEL_36:
  if ( v14 )
    qfree(v14);
  return v11;
}
