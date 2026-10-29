void __fastcall sub_EE97D0(__int64 a1, __int64 a2, double a3)
{
  int v4; // r14d
  int i; // ebx
  __int64 v6; // r12
  size_t v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  _BYTE *v12; // rax
  __int64 v13; // rax

  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v6 = *(_QWORD *)a1;
      v7 = j__strlen("  ");
      sub_9717A0(v6, "  ", v7);
    }
  }
  sub_971800(*(_QWORD *)a1, "#pragma acc atomic");
  if ( *(_BYTE *)(a2 + 48) != 4 )
  {
    v13 = sub_971800(*(_QWORD *)a1, " ");
    switch ( *(_BYTE *)(a2 + 48) )
    {
      case 0:
        sub_971800(v13, "read");
        break;
      case 1:
        sub_971800(v13, "write");
        break;
      case 2:
        sub_971800(v13, "update");
        break;
      case 3:
        sub_971800(v13, "capture");
        break;
      case 4:
        sub_971800(v13, "<none>");
        break;
    }
  }
  sub_EE1440((__int64 *)a1, a2);
  v11 = *(_QWORD *)a1;
  v12 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
  {
    sub_2257CD0(v11, 10);
  }
  else
  {
    *(_QWORD *)(v11 + 32) = v12 + 1;
    *v12 = 10;
  }
  sub_EE8730(a1, *(char **)(a2 + 40), *(unsigned __int8 *)(a1 + 24), v8, v9, v10, a3);
}

