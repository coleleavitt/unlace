void __fastcall sub_33D7F0(__int64 a1, _DWORD **a2)
{
  _DWORD *v2; // r12
  _DWORD *v3; // r13
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  bool v9; // zf

  v2 = *(_DWORD **)(a1 + 920);
  v3 = *a2;
  if ( !v2 )
  {
    v4 = *(_QWORD *)(a1 + 944);
    if ( v4 )
      v5 = *(_DWORD *)(v4 - 4);
    else
      v5 = 0;
    v6 = v5 - 1;
    while ( v6 != -1 )
    {
      v7 = v6--;
      v8 = *(_DWORD **)(v4 + 8 * v7);
      if ( v8 )
      {
        ++v8[4];
        if ( v3 )
        {
          v9 = v3[4]-- == 1;
          if ( v9 )
          {
            (**(void (__fastcall ***)(_DWORD *))v3)(v3);
            sub_186B220(v3);
          }
        }
        *a2 = v8;
        return;
      }
    }
    if ( v3 )
    {
      v9 = v3[4]-- == 1;
      if ( v9 )
        goto LABEL_12;
    }
    goto LABEL_9;
  }
  ++v2[4];
  if ( !v3 || (v9 = v3[4] == 1, --v3[4], !v9) )
  {
LABEL_9:
    *a2 = v2;
    return;
  }
LABEL_12:
  (**(void (__fastcall ***)(_DWORD *))v3)(v3);
  sub_186B220(v3);
  *a2 = v2;
}

