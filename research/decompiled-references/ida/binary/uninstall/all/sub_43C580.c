__int64 __fastcall sub_43C580(__int64 a1, int a2, _DWORD *a3)
{
  _BYTE *v3; // rcx
  __int64 result; // rax
  int v5; // edx
  int v6; // eax

  v3 = *(_BYTE **)(a1 + 120);
  *a3 = a2;
  a3[1] = (_DWORD)v3 - *(_DWORD *)(a1 + 112);
  a3[2] = *(_DWORD *)(a1 + 32);
  a3[3] = *(_DWORD *)(a1 + 176);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      if ( (unsigned __int64)(v3 + 2) > *(_QWORD *)(a1 + 128) )
      {
        sub_439150(a1);
        v3 = *(_BYTE **)(a1 + 120);
      }
      *v3 = 36;
      result = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 120) = result + 1;
      *(_BYTE *)(result + 1) = 0;
      ++*(_QWORD *)(a1 + 120);
      *(_DWORD *)(a1 + 3276) = 0;
      v5 = dword_65488C;
    }
    else
    {
      if ( (unsigned __int64)(v3 + 2) > *(_QWORD *)(a1 + 128) )
      {
        sub_439150(a1);
        v3 = *(_BYTE **)(a1 + 120);
      }
      *v3 = 38;
      result = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 120) = result + 1;
      *(_BYTE *)(result + 1) = 0;
      ++*(_QWORD *)(a1 + 120);
      *(_DWORD *)(a1 + 3276) = 0;
      v5 = dword_6548CC;
    }
  }
  else
  {
    if ( (unsigned __int64)(v3 + 2) > *(_QWORD *)(a1 + 128) )
    {
      sub_439150(a1);
      v3 = *(_BYTE **)(a1 + 120);
    }
    *v3 = 34;
    result = *(_QWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 120) = result + 1;
    *(_BYTE *)(result + 1) = 0;
    ++*(_QWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 3276) = 0;
    v5 = dword_65484C;
  }
  if ( v5 )
  {
    if ( v5 == 0x80000000 )
    {
      v6 = *(_DWORD *)(a1 + 48);
      v5 = 1;
    }
    else if ( v5 < 0 )
    {
      v6 = *(_DWORD *)(a1 + 48);
      if ( *(_DWORD *)(a1 + 44) < v6 )
      {
        *(_DWORD *)(a1 + 44) = v6;
        result = (unsigned int)(v5 + v6);
        *(_DWORD *)(a1 + 48) = result;
        return result;
      }
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 48);
    }
    result = (unsigned int)(v5 + v6);
    *(_DWORD *)(a1 + 48) = result;
  }
  return result;
}

