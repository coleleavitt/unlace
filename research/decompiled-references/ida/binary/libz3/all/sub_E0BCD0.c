__int64 __fastcall sub_E0BCD0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rsi
  int v8; // r11d
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // edx
  _DWORD *v14; // r12
  bool v15; // zf
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // r11
  __int64 v22; // rdi
  int v23; // edx
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned int v26; // edx
  int v27; // eax
  unsigned int v28; // r13d
  _QWORD *v29; // rax
  _QWORD *v30; // rbp
  _QWORD *v31; // r12
  void *v32; // rdi
  int v33; // edx
  int v34; // edx

  v4 = *a2;
  result = *(unsigned int *)(a1 + 576);
  v6 = *(_QWORD *)(a1 + 568);
  if ( *a2 )
  {
    if ( (*a2 & 7) == 1 )
      v7 = v4 >> 3;
    else
      LODWORD(v7) = *(_DWORD *)(v4 - 8);
  }
  else
  {
    LODWORD(v7) = -1640531495;
  }
  v8 = result - 1;
  v9 = 24 * result;
  v10 = v6 + 24 * result;
  v11 = 24LL * ((unsigned int)v7 & ((_DWORD)result - 1));
  v12 = v6 + v11;
  if ( v11 == 24 * result )
  {
LABEL_41:
    if ( v6 == v12 )
      return result;
    result = v6;
    while ( 1 )
    {
      v33 = *(_DWORD *)(result + 4);
      if ( v33 == 2 )
      {
        if ( (_DWORD)v7 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v4 )
          goto LABEL_11;
      }
      else if ( !v33 )
      {
        return result;
      }
      result += 24;
      if ( v12 == result )
        return result;
    }
  }
  result = v6 + v11;
  while ( 1 )
  {
    v13 = *(_DWORD *)(result + 4);
    if ( v13 != 2 )
    {
      if ( !v13 )
        return result;
      goto LABEL_7;
    }
    if ( (_DWORD)v7 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v4 )
      break;
LABEL_7:
    result += 24;
    if ( v10 == result )
      goto LABEL_41;
  }
LABEL_11:
  v14 = *(_DWORD **)(result + 16);
  v15 = v14[2]-- == 1;
  if ( v15 )
  {
    v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 16LL);
    if ( v16 == sub_DFC000 )
    {
      sub_DFBCB0(a1);
      v17 = *((_QWORD *)v14 + 2);
      if ( v17 )
      {
        v18 = *(_QWORD *)(a1 + 296);
        v15 = (*(_DWORD *)(v17 + 8))-- == 1;
        if ( v15 )
          sub_15D7BC0(v18, v17);
      }
    }
    else
    {
      ((void (__fastcall *)(_DWORD *, __int64, __int64 (__fastcall *)(__int64, __int64), __int64))v16)(
        v14,
        a1,
        sub_DFC000,
        v10);
    }
    (**(void (__fastcall ***)(void *))v14)(v14);
    sub_186B220(v14);
    v19 = *(unsigned int *)(a1 + 576);
    v6 = *(_QWORD *)(a1 + 568);
    v4 = *a2;
    v8 = v19 - 1;
    v9 = 24 * v19;
    v10 = v6 + 24 * v19;
  }
  if ( v4 )
  {
    if ( (v4 & 7) == 1 )
      v20 = v4 >> 3;
    else
      LODWORD(v20) = *(_DWORD *)(v4 - 8);
  }
  else
  {
    LODWORD(v20) = -1640531495;
  }
  v21 = (unsigned int)v20 & v8;
  result = 24 * v21;
  v22 = v6 + 24 * v21;
  if ( 24 * v21 != v9 )
  {
    for ( result = v6 + 24 * v21; result != v10; result += 24 )
    {
      v23 = *(_DWORD *)(result + 4);
      if ( v23 == 2 )
      {
        if ( (_DWORD)v20 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v4 )
        {
LABEL_27:
          v24 = result + 24;
          v25 = *(unsigned int *)(a1 + 580);
          if ( result + 24 == v10 )
            v24 = v6;
          v26 = v25 - 1;
          if ( *(_DWORD *)(v24 + 4) )
          {
            *(_DWORD *)(result + 4) = 1;
            v27 = *(_DWORD *)(a1 + 584);
            *(_DWORD *)(a1 + 580) = v26;
            result = (unsigned int)(v27 + 1);
            if ( v26 < 0x40 )
              v26 = 64;
            *(_DWORD *)(a1 + 584) = result;
            if ( v26 < (unsigned int)result )
            {
              result = sub_186AF10(v25);
              if ( !(_BYTE)result )
              {
                v28 = *(_DWORD *)(a1 + 576);
                v29 = (_QWORD *)sub_186B270(24LL * v28);
                v30 = v29;
                v31 = &v29[3 * v28];
                if ( v28 )
                {
                  do
                  {
                    *v29 = 0;
                    v29 += 3;
                    *(v29 - 2) = 0;
                  }
                  while ( v29 != v31 );
                }
                result = sub_E105E0(
                           *(_QWORD *)(a1 + 568),
                           *(unsigned int *)(a1 + 576),
                           v30,
                           *(unsigned int *)(a1 + 576));
                v32 = *(void **)(a1 + 568);
                if ( v32 )
                  result = sub_186B220(v32);
                *(_QWORD *)(a1 + 568) = v30;
                *(_DWORD *)(a1 + 584) = 0;
              }
            }
          }
          else
          {
            *(_DWORD *)(result + 4) = 0;
            *(_DWORD *)(a1 + 580) = v26;
          }
          return result;
        }
      }
      else if ( !v23 )
      {
        return result;
      }
    }
  }
  if ( v22 != v6 )
  {
    for ( result = v6; v22 != result; result += 24 )
    {
      v34 = *(_DWORD *)(result + 4);
      if ( v34 == 2 )
      {
        if ( (_DWORD)v20 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v4 )
          goto LABEL_27;
      }
      else if ( !v34 )
      {
        return result;
      }
    }
  }
  return result;
}

