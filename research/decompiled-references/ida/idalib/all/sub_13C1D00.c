void __fastcall sub_13C1D00(__int64 *a1, _BYTE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  char v6; // r8
  __int64 *v7; // rsi
  unsigned int v8; // ecx
  __int64 v9; // rax

  if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, void *))(*(_QWORD *)a2 + 24LL))(a2, &unk_26FAE05) )
  {
    sub_225AFD0(a2);
    if ( v4 )
    {
      v5 = *a1;
      v6 = a2[115];
      v7 = *(__int64 **)(*a1 + 16);
      v8 = *(_DWORD *)(*a1 + 24);
      if ( v7 == *(__int64 **)(*a1 + 32) )
      {
        sub_13C1720(v5, v7, v8, v6);
      }
      else
      {
        if ( v8 == 63 )
        {
          *(_DWORD *)(v5 + 24) = 0;
          *(_QWORD *)(v5 + 16) = v7 + 1;
        }
        else
        {
          *(_DWORD *)(v5 + 24) = v8 + 1;
        }
        v9 = (1LL << v8) | *v7;
        if ( !v6 )
          v9 = *v7 & ~(1LL << v8);
        *v7 = v9;
      }
      a2[115] = 0;
    }
  }
}
