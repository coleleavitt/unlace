_BOOL8 __fastcall sub_5B28A0(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned int *v4; // rax
  unsigned int *v5; // rbx
  __int64 v6; // rax
  unsigned int *v8; // rax
  int v9; // eax

  v2 = (__int64)(a1 + 203);
  v3 = *(_QWORD *)(*a1 + 1424);
  v4 = sub_4EE820((__int64)(a1 + 203), a2);
  if ( v4 )
  {
    v5 = v4;
    v6 = *((_QWORD *)v4 + 1);
    if ( (v6 & 0x8000) == 0 )
    {
      if ( (v6 & 0x200) == 0 )
        return (v6 & 1) == 0;
LABEL_7:
      if ( sub_4EC900(v2, v5) )
      {
        v9 = *(_DWORD *)(v3 + 44);
        if ( v9 <= 511 )
        {
          *(_DWORD *)(v3 + 44) = v9 + 1;
          sub_5B2530(*a1, v5);
          --*(_DWORD *)(v3 + 44);
        }
      }
      v6 = *((_QWORD *)v5 + 1);
      return (v6 & 1) == 0;
    }
    v8 = sub_4EE820(v2, v5[4]);
    v5 = v8;
    if ( v8 )
    {
      v6 = *((_QWORD *)v8 + 1);
      if ( (v6 & 0x200) == 0 )
        return (v6 & 1) == 0;
      goto LABEL_7;
    }
  }
  return (get_aflags((unsigned int)a2) & 0x400000) == 0;
}

