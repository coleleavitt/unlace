void __fastcall sub_7F2370(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ebp
  int v5; // eax

  if ( *((_BYTE *)a1 + 8) )
  {
    v2 = a1[5];
    if ( !v2 || a2 >= *(_DWORD *)(v2 - 4) || !*(_BYTE *)(v2 + a2) )
    {
      v3 = 2 * a2;
      v4 = 2 * a2;
      v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 24LL) + 3288LL) + 4 * v3);
      if ( !v5 )
      {
        sub_7F1380(a1, v3);
        return;
      }
      if ( v5 != 1 )
      {
        if ( v5 != -1 )
          return;
        v4 = v3 ^ 1;
      }
      sub_7F1380(a1, v4);
      sub_7F0DF0((__int64)a1, v4);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 112LL))(*a1, v4);
    }
  }
}

