__int64 __fastcall sub_E544F0(__int64 a1, char a2, char a3)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rsi
  _BYTE *v6; // rcx
  unsigned __int64 v7; // r9
  char v8; // al

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a2 & 1;
  v5 = a2 & 4;
  v6 = *(_BYTE **)(v3 + 32);
  v7 = *(_QWORD *)(v3 + 24);
  v8 = v4 & ((_DWORD)v5 != 0);
  if ( a3 )
  {
    if ( v8 )
    {
      if ( v7 <= (unsigned __int64)v6 )
      {
        return sub_2257CD0(v3, 84);
      }
      else
      {
        *(_QWORD *)(v3 + 32) = v6 + 1;
        *v6 = 84;
        return (__int64)(v6 + 1);
      }
    }
    else if ( v5 )
    {
      if ( v7 <= (unsigned __int64)v6 )
      {
        return sub_2257CD0(v3, 83);
      }
      else
      {
        *(_QWORD *)(v3 + 32) = v6 + 1;
        *v6 = 83;
        return (__int64)(v6 + 1);
      }
    }
    else if ( v4 )
    {
      if ( v7 <= (unsigned __int64)v6 )
      {
        return sub_2257CD0(v3, 82);
      }
      else
      {
        *(_QWORD *)(v3 + 32) = v6 + 1;
        *v6 = 82;
        return (__int64)(v6 + 1);
      }
    }
    else if ( v7 <= (unsigned __int64)v6 )
    {
      return sub_2257CD0(v3, 81);
    }
    else
    {
      *(_QWORD *)(v3 + 32) = v6 + 1;
      *v6 = 81;
      return (__int64)(v6 + 1);
    }
  }
  else if ( v8 )
  {
    if ( v7 <= (unsigned __int64)v6 )
    {
      return sub_2257CD0(v3, 68);
    }
    else
    {
      *(_QWORD *)(v3 + 32) = v6 + 1;
      *v6 = 68;
      return (__int64)(v6 + 1);
    }
  }
  else if ( v5 )
  {
    if ( v7 <= (unsigned __int64)v6 )
    {
      return sub_2257CD0(v3, 67);
    }
    else
    {
      *(_QWORD *)(v3 + 32) = v6 + 1;
      *v6 = 67;
      return (__int64)(v6 + 1);
    }
  }
  else if ( v4 )
  {
    if ( v7 <= (unsigned __int64)v6 )
    {
      return sub_2257CD0(v3, 66);
    }
    else
    {
      *(_QWORD *)(v3 + 32) = v6 + 1;
      *v6 = 66;
      return (__int64)(v6 + 1);
    }
  }
  else if ( v7 <= (unsigned __int64)v6 )
  {
    return sub_2257CD0(v3, 65);
  }
  else
  {
    *(_QWORD *)(v3 + 32) = v6 + 1;
    *v6 = 65;
    return (__int64)(v6 + 1);
  }
}

