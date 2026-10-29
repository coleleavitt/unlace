void __fastcall sub_40AA90(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, int a6)
{
  _BYTE *v8; // rdi
  _DWORD *v9; // rdi
  bool v10; // zf
  int *v11; // rdi
  int v12; // eax
  _DWORD *v13; // rax

  *(_DWORD *)(a1 + 424) |= 0x800u;
  if ( !*(_QWORD *)(a1 + 728) )
  {
    v8 = *(_BYTE **)a1;
    v9 = *v8 ? (_DWORD *)sub_48DF10(v8, 0xFFFFFFFF) : *(_DWORD **)(a1 + 680);
    ++*v9;
    v10 = *(_QWORD *)(a1 + 744) == 0;
    *(_QWORD *)(a1 + 728) = v9;
    if ( v10 )
      sub_48BC40(a1, (unsigned int)"NONE", 0, a4, a5, a6);
  }
  if ( a3 )
  {
    v11 = *(int **)(a1 + 728);
    if ( *v11 > 1 )
    {
      v12 = *v11 - 1;
      *v11 = v12;
      if ( v12 <= 0 )
      {
        sub_47B120(v11);
        v11 = *(int **)(a1 + 728);
      }
      v13 = (_DWORD *)sub_47B2A0(v11);
      ++*v13;
      *(_QWORD *)(a1 + 728) = v13;
      sub_48EDF0(v13, a2, a3);
    }
    else
    {
      sub_48EDF0(v11, a2, a3);
    }
  }
}

