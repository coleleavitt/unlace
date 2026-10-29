__int64 __fastcall sub_40A6D0(__int64 a1, _BYTE *a2, _DWORD *a3)
{
  int *v5; // rax
  int *v6; // rbx
  unsigned int v7; // ebp
  int v8; // eax
  bool v9; // zf

  if ( *a2 )
  {
    v5 = (int *)sub_48DF10(a2, 0xFFFFFFFF);
    ++*v5;
    v6 = v5;
    v7 = sub_40A660(a1, (__int64)v5, (__int64)a3);
    v8 = *v6 - 1;
    v9 = *v6 == 1;
    *v6 = v8;
    if ( v8 < 0 || v9 )
      sub_47B120(v6);
    if ( v7 )
    {
      sub_48B940(a1);
      return v7;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}

