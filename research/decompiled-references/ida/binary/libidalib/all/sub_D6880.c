void __fastcall sub_D6880(int *a1, __int64 a2)
{
  __int64 v2; // rdx
  int v4; // ecx
  __int64 v5; // r12
  int *v6; // rax
  int *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx

  v2 = *(_QWORD *)(a2 + 40);
  if ( !v2 )
    goto LABEL_21;
  v4 = dword_245174;
  v5 = *(_QWORD *)(v2 + 32LL * dword_245174 + 8);
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v9 = qword_252758;
      if ( qword_252758 )
      {
        *(_QWORD *)qword_252758 = v5;
        v9[1] = v2;
        *((_DWORD *)v9 + 4) = v4;
        if ( (unsigned int)sub_CDCF0((__int64)v9, 11) == 1 )
        {
          v5 = *(_QWORD *)qword_252758;
          goto LABEL_4;
        }
LABEL_21:
        v5 = -1;
      }
    }
  }
LABEL_4:
  if ( *((_QWORD *)a1 + 17) && rangeset_t_find_range() && **((_QWORD **)a1 + 16) != v5 && byte_252748 )
  {
    if ( (*(_BYTE *)(dbg + 32LL) & 0x10) != 0 )
    {
      v10 = qword_2521D0 + 24LL * a1[30];
      v11 = *(_QWORD **)v10;
      v12 = *(_QWORD *)v10 + 8LL * *(_QWORD *)(v10 + 8);
      if ( v11 != (_QWORD *)v12 )
      {
        while ( v5 != *v11 )
        {
          if ( (_QWORD *)v12 == ++v11 )
            return;
        }
        if ( v11 != (_QWORD *)v12 && (int)sub_D4880(a2, 4097) <= 0 )
        {
          byte_252748 = 0;
          sub_C83A0((__int64)a1, a2);
        }
      }
    }
  }
  else
  {
    v6 = *(int **)(a2 + 248);
    *(_BYTE *)(a2 + 34) = 1;
    byte_252748 = 0;
    if ( v6 )
    {
      v7 = nullptr;
      while ( 1 )
      {
        v8 = *((_QWORD *)v6 + 1);
        if ( a1 == v6 )
          break;
        v7 = v6;
        if ( !v8 )
          return;
        v6 = *((int **)v6 + 1);
      }
      if ( v7 )
        *((_QWORD *)v7 + 1) = v8;
      else
        *(_QWORD *)(a2 + 248) = v8;
      sub_CB0C0(a1);
    }
  }
}

