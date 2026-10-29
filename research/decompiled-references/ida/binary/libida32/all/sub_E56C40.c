char __fastcall sub_E56C40(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 *v9; // rax
  __int64 *v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = a3;
  LOBYTE(v3) = sub_B55E40(a2);
  if ( (_BYTE)v3 )
  {
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    {
LABEL_4:
      v8 = ((*(_BYTE *)(sub_B68890(a2) + 89) >> 2) ^ 1) & 1;
LABEL_5:
      v3 = a2 & 0xFFFFFFFFFFFFFFF8LL | v8;
      *(_QWORD *)a1 = v3;
      return v3;
    }
    v9 = sub_B68690(a2, a2, v4, v5, v6, v7);
    v10 = (__int64 *)*v9;
    v11 = *v9 + 8LL * *((unsigned int *)v9 + 2);
    if ( *v9 < v11 )
    {
      v14 = *v9;
      while ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 64 )
      {
        v14 += 8LL;
        if ( v11 == v14 )
          goto LABEL_4;
      }
      if ( v11 == v14 )
        goto LABEL_4;
    }
    else
    {
      if ( v10 == (__int64 *)v11 )
        goto LABEL_4;
      if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 64 )
      {
        v12 = (__int64 *)(v11 + 8);
        while ( v10 != v12 )
        {
          v13 = *v12++;
          if ( *(_WORD *)(v13 + 36) == 64 )
            goto LABEL_18;
        }
        goto LABEL_4;
      }
    }
LABEL_18:
    v8 = 0;
    goto LABEL_5;
  }
  *(_QWORD *)a1 = a2 | *(_QWORD *)a1 & 7LL;
  return v3;
}

