void __fastcall sub_438E80(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // r12d
  __int64 v5; // rbx
  _QWORD *v6; // r13
  int v7; // edx
  int v8; // r12d
  bool i; // cc
  void (__fastcall *v10)(_QWORD); // rax
  __int64 v11; // rdi
  __int64 v12; // rdi

  v2 = a1 + 64;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 != v2 )
  {
    Tcl_Free(v3);
    *(_QWORD *)(a1 + 56) = v2;
  }
  if ( *(_QWORD *)a1 )
  {
    v4 = 0;
    v5 = *(_QWORD *)(a1 + 144);
    v6 = *(_QWORD **)(a1 + 208);
    while ( *(_DWORD *)(a1 + 152) > v4 )
    {
      v5 += 32;
      ++v4;
      sub_470960(*(_QWORD *)a1);
    }
    v7 = *(_DWORD *)(a1 + 216);
    v8 = 0;
    for ( i = v7 <= 0; !i; i = v7 <= v8 )
    {
      v10 = *(void (__fastcall **)(_QWORD))(*v6 + 16LL);
      if ( v10 )
      {
        v10(v6[1]);
        v7 = *(_DWORD *)(a1 + 216);
      }
      ++v8;
      v6 += 2;
    }
  }
  if ( *(_DWORD *)(a1 + 136) )
    Tcl_Free(*(_QWORD *)(a1 + 112));
  if ( *(_DWORD *)(a1 + 160) )
    Tcl_Free(*(_QWORD *)(a1 + 144));
  if ( *(_DWORD *)(a1 + 184) )
  {
    Tcl_Free(*(_QWORD *)(a1 + 168));
    if ( !*(_DWORD *)(a1 + 204) )
    {
LABEL_17:
      if ( !*(_DWORD *)(a1 + 224) )
        goto LABEL_18;
LABEL_23:
      Tcl_Free(*(_QWORD *)(a1 + 208));
      v11 = *(_QWORD *)(a1 + 3264);
      if ( !v11 )
        goto LABEL_19;
      goto LABEL_24;
    }
  }
  else if ( !*(_DWORD *)(a1 + 204) )
  {
    goto LABEL_17;
  }
  Tcl_Free(*(_QWORD *)(a1 + 192));
  if ( *(_DWORD *)(a1 + 224) )
    goto LABEL_23;
LABEL_18:
  v11 = *(_QWORD *)(a1 + 3264);
  if ( !v11 )
    goto LABEL_19;
LABEL_24:
  sub_438920(v11);
  *(_QWORD *)(a1 + 3264) = 0;
LABEL_19:
  v12 = *(_QWORD *)(a1 + 3280);
  if ( v12 )
    sub_4875D0(v12);
}

