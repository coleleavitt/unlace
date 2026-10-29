__int64 __fastcall sub_8E7DB0(__int64 a1)
{
  __int64 v1; // r12
  unsigned int v2; // eax
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  _QWORD *v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned int v10; // edx
  __int64 v11; // r8
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  int v18; // ebp
  _QWORD *v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // r8d
  int v23; // eax
  _QWORD *v24; // rdx

  v1 = sub_B39990(a1 + 8792);
  v2 = *(_DWORD *)(v1 + 40);
  if ( v2 == -1 )
    v2 = sub_979FE0(a1 + 8712, v1);
  v3 = *(_QWORD *)(a1 + 8728);
  v4 = *(_QWORD *)(v3 + 8LL * v2) & 0xFFFFFFFFFFFFFFF8LL;
  v5 = *(_QWORD *)(v3 + 8LL * v2) & 7LL;
  if ( (_DWORD)v5 == 1 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(v1 + 120) + 8LL);
    v21 = *(_QWORD *)(*(_QWORD *)(v1 + 112) + 8LL);
    v22 = *(_DWORD *)(*(_QWORD *)v21 + 12LL);
    v23 = (*(_DWORD *)(*(_QWORD *)v20 + 12LL) - v22) ^ (v22 << 8);
    v24 = (_QWORD *)(*(_QWORD *)v4
                   + 16LL
                   * ((((v23 ^ ((v22 - v23) << 16)) + v23 - v22)
                     ^ ((v22 - v23) << 10))
                    & (unsigned int)(*(_DWORD *)(v4 + 20) - 1)));
    if ( (*v24 & 7LL) != 1 )
    {
      result = v24[1];
      if ( *(_QWORD *)(*(_QWORD *)(result + 112) + 8LL) == v21 )
        goto LABEL_30;
      while ( 1 )
      {
        v24 = (_QWORD *)*v24;
        ++*(_DWORD *)(v4 + 32);
        if ( !v24 )
          break;
        result = v24[1];
        if ( *(_QWORD *)(*(_QWORD *)(result + 112) + 8LL) == v21 )
        {
LABEL_30:
          if ( *(_QWORD *)(*(_QWORD *)(result + 120) + 8LL) == v20 )
            return result;
        }
      }
    }
    return 0;
  }
  if ( (_DWORD)v5 == 2 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v1 + 112) + 8LL);
    v10 = *(_DWORD *)(*(_QWORD *)v9 + 12LL);
    v11 = *(_QWORD *)(*(_QWORD *)(v1 + 120) + 8LL);
    v12 = *(_DWORD *)(*(_QWORD *)v11 + 12LL);
    if ( v12 >= v10 )
    {
      v12 = *(_DWORD *)(*(_QWORD *)v9 + 12LL);
      LOWORD(v10) = *(_DWORD *)(*(_QWORD *)v11 + 12LL);
    }
    v13 = 4097 * ((unsigned __int16)v10 | (v12 << 16)) + 2127912214;
    v14 = 9
        * (((33 * (v13 ^ (v13 >> 19) ^ 0xC761C23C) + 374761393) << 9)
         ^ (33 * (v13 ^ (v13 >> 19) ^ 0xC761C23C) - 369570787))
        - 42973499;
    v15 = (_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL * ((*(_DWORD *)(v4 + 28) - 1) & (v14 ^ HIWORD(v14) ^ 0xB55A4F09)));
    if ( (*v15 & 7LL) == 1 )
      return 0;
    while ( 1 )
    {
      result = v15[1];
      v16 = *(_QWORD *)(*(_QWORD *)(result + 112) + 8LL);
      v17 = *(_QWORD *)(*(_QWORD *)(result + 120) + 8LL);
      if ( v9 == v16 && v11 == v17 )
        break;
      if ( v11 == v16 && v9 == v17 )
      {
        **(_BYTE **)v4 = 1;
        return result;
      }
      v15 = (_QWORD *)*v15;
      ++*(_DWORD *)(v4 + 40);
      if ( !v15 )
        return 0;
    }
  }
  else if ( (_DWORD)v5 )
  {
    v18 = *(_DWORD *)(v4 + 20) - 1;
    v19 = (_QWORD *)(*(_QWORD *)v4 + 16LL * ((unsigned int)sub_979080(v4, v1) & v18));
    if ( (*v19 & 7LL) == 1 )
      return 0;
    while ( !(unsigned __int8)sub_9792A0(v4, v19[1], v1) )
    {
      v19 = (_QWORD *)*v19;
      ++*(_DWORD *)(v4 + 32);
      if ( !v19 )
        return 0;
    }
    return v19[1];
  }
  else
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v1 + 112) + 8LL);
    v7 = (_QWORD *)(*(_QWORD *)v4 + 16LL
                                  * (*(_DWORD *)(*(_QWORD *)v6 + 12LL) & (unsigned int)(*(_DWORD *)(v4 + 20) - 1)));
    if ( (*v7 & 7LL) == 1 )
      return 0;
    while ( 1 )
    {
      result = v7[1];
      if ( v6 == *(_QWORD *)(*(_QWORD *)(result + 112) + 8LL) )
        break;
      v7 = (_QWORD *)*v7;
      ++*(_DWORD *)(v4 + 32);
      if ( !v7 )
        return 0;
    }
  }
  return result;
}

